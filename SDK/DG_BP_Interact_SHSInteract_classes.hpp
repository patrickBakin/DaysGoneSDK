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

// BlueprintGeneratedClass BP_Interact_SHSInteract.BP_Interact_SHSInteract_C
// 0x0020 (0x0890 - 0x0870)
class ABP_Interact_SHSInteract_C : public ABendInteractWithPerformAction
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0870(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendSphereComponent*                        LeftRangeCheck;                                           // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Lisa_VOAvailable;                                         // 0x0880(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               LisaVODone;                                               // 0x0881(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               LostLakeVOAvailable;                                      // 0x0882(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               LostLakeVODone;                                           // 0x0883(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               Skizzo_VOAvailable;                                       // 0x0884(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               SkizzoVODone;                                             // 0x0885(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               PlayedFinalCin;                                           // 0x0886(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0887(0x0001) MISSED OFFSET
	class ABendJobCinematicPreLoader*                  PreLoader;                                                // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Interact_SHSInteract.BP_Interact_SHSInteract_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnMissionComplete(TEnumAsByte<EMissionIDs> MissionID);
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void BndEvt__LeftRangeCheck_K2Node_ComponentBoundEvent_633_EndOverlapSig__DelegateSignature();
	void BndEvt__LeftRangeCheck_K2Node_ComponentBoundEvent_25_BeginOverlapSig__DelegateSignature();
	void RetryChecks();
	void InitInteract();
	void ExecuteUbergraph_BP_Interact_SHSInteract(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
