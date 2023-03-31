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

// BlueprintGeneratedClass WADN_FreakerEnemies_InteractiveMusic.WADN_FreakerEnemies_InteractiveMusic_C
// 0x001A (0x00D0 - 0x00B6)
class UWADN_FreakerEnemies_InteractiveMusic_C : public UBase_InteractiveMusic_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x00B6(0x0002) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CanPlayIneractiveMusic;                                   // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	class UBendMusicManagerBP_C*                       MusicManagerRef;                                          // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WADN_FreakerEnemies_InteractiveMusic.WADN_FreakerEnemies_InteractiveMusic_C");
		return ptr;
	}


	void TickMusic();
	void Damaged_Player();
	void BulletBy_Player();
	void OnBulletPassedByNearPlayer();
	void OnPlayerDamaged(class UClass** TypeOfDamage, float* AmountOfDamage, float* CurrentHealth);
	void OnTick(float* DeltaTime, int* TickNumber);
	void SetMediumState();
	void SetHighState();
	void SetLow1State();
	void SetIdleState();
	void SetLow2State();
	void ExecuteUbergraph_WADN_FreakerEnemies_InteractiveMusic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
