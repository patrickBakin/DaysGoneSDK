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

// BlueprintGeneratedClass PlayerRespawnLoc_Encampment.PlayerRespawnLoc_Encampment_C
// 0x0019 (0x0379 - 0x0360)
class APlayerRespawnLoc_Encampment_C : public APlayerRespawnLoc_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendSphereComponent*                        BendSphere;                                               // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendEncampmentData*                         EncampmentDataAsset;                                      // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Discovered;                                               // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerRespawnLoc_Encampment.PlayerRespawnLoc_Encampment_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnEnteredEncampment_Event(class UBendEncampmentData* Encampment);
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void BndEvt__BendSphere_K2Node_ComponentBoundEvent_179_BeginOverlapSig__DelegateSignature();
	void ExecuteUbergraph_PlayerRespawnLoc_Encampment(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
