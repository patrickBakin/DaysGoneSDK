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

// BlueprintGeneratedClass AWI_MusicManager.AWI_MusicManager_C
// 0x0013 (0x0088 - 0x0075)
class UAWI_MusicManager_C : public UBendMusicManagerBP_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0078(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       AWI_Cinselect;                                            // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AWI_MusicManager.AWI_MusicManager_C");
		return ptr;
	}


	void PlayInteractiveMusic(bool* Bool);
	void MusicEventUpdate(struct FName* Event_Name, bool* Bool);
	void OnSetAsCurrentMusicManager(struct FName* MusicEventName);
	void OnPlayerDied(TEnumAsByte<EAIFactionType>* KilledByFaction, TEnumAsByte<ETypeOfBaseDamage>* BaseDamageType, TEnumAsByte<ETypeOfDamage>* DamageType, float* AmountOfDamage);
	void ExecuteUbergraph_AWI_MusicManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
