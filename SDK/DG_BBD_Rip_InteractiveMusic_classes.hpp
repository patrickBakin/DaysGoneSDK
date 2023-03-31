#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BBD_Rip_InteractiveMusic.BBD_Rip_InteractiveMusic_C
// 0x000B (0x00C1 - 0x00B6)
class UBBD_Rip_InteractiveMusic_C : public UBase_InteractiveMusic_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x00B6(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CanPlayIneractiveMusic;                                   // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BBD_Rip_InteractiveMusic.BBD_Rip_InteractiveMusic_C");
		return ptr;
	}


	void TickMusic();
	void Damaged_Player();
	void BulletBy_Player();
	void OnBulletPassedByNearPlayer();
	void OnPlayerDamaged(class UClass** TypeOfDamage, float* AmountOfDamage, float* CurrentHealth);
	void OnTick(float* DeltaTime, int* TickNumber);
	void SetLow1State();
	void SetHighState();
	void ExecuteUbergraph_BBD_Rip_InteractiveMusic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
