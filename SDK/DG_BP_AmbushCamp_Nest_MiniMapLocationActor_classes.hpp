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

// BlueprintGeneratedClass BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C
// 0x0074 (0x03BC - 0x0348)
class ABP_AmbushCamp_Nest_MiniMapLocationActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendSphereComponent*                        OuterBendSphere;                                          // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendSphereComponent*                        BendSphere;                                               // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMiniMapLocationComponent*                   MiniMapLocation;                                          // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Discovered;                                               // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	class UBendNestingZone*                            InfestationData;                                          // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendBunkerData*                             BunkerData;                                               // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     NestID;                                                   // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     LastTestedItemName;                                       // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               AutoChangeDisplayName;                                    // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayVO;                                                   // 0x03A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DiscoveredOuter;                                          // 0x03AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               Crier;                                                    // 0x03AB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	struct FName                                       InfestationTutorialKey;                                   // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VOSuppressionMaxPercent;                                  // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbushCamp_Nest_MiniMapLocationActor.BP_AmbushCamp_Nest_MiniMapLocationActor_C");
		return ptr;
	}


	void BikeSpeedCheck(bool* ShouldSuppressVO);
	void UpdateBendSpheres();
	void CheckNestStatus(bool* Destroyed);
	void HasCollectible(bool* HasCollectible);
	void MapIconState(bool Visible);
	void UserConstructionScript();
	void FirstNestVOComplete(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail);
	void FirstNest(bool Condition);
	void LastNestVOComplete_Copy(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail);
	void LastNest(bool Condition);
	void NearNestVOComplete(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail);
	void Near(bool Condition);
	void SpottedNestVOComplete(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail);
	void Spotted(bool Condition);
	void ReceiveBeginPlay();
	void OnMapTaken_Event();
	void BndEvt__BendSphere_K2Node_ComponentBoundEvent_1447_BeginOverlapSig__DelegateSignature();
	void OnNestDestroyed_Event_1(const struct FString& DestroyedNestID, class ABendNest* DestroyedNest);
	void BndEvt__OuterBendSphere_K2Node_ComponentBoundEvent_1566_BeginOverlapSig__DelegateSignature();
	void OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint);
	void OnJobResetCalled_Event_1(TEnumAsByte<EJobResetTypes> JobResetType);
	void ExecuteUbergraph_BP_AmbushCamp_Nest_MiniMapLocationActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
