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

// BlueprintGeneratedClass BP_AmbientEventMarker.BP_AmbientEventMarker_C
// 0x00CC (0x055C - 0x0490)
class ABP_AmbientEventMarker_C : public ABendAmbientEventMarker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0490(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        Ping_MinimapMarker_Callout;                               // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_AmbientEventManager_C*                   AmbientEventManager;                                      // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugStareTime;                                           // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugCollisionActive;                                     // 0x04AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x04AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LoadingMyUMap;                                            // 0x04AE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x04AF(0x0001) MISSED OFFSET
	int                                                NumberOfTimesRun;                                         // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                NumberOfTimesTried;                                       // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MiniMapCallout;                                           // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04B9(0x0007) MISSED OFFSET
	class UBendNestingZone*                            Nest_Zone_;                                               // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVocalConversationData>              DefinedVoConversationData;                                // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundCue*>                           VOLines;                                                  // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_PingMiniMapMarker_C*                     Minimap_AudioCallout;                                     // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USoundClass*                                 Ambient_Pop_Sound_Class;                                  // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InCombat;                                                 // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04F9(0x0003) MISSED OFFSET
	struct FTimerHandle                                TickThePing;                                              // 0x04FC(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PingCount;                                                // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AuidioCallNumber;                                         // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVocalConversationData>              ArrayOfConversationData;                                  // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FAmbushCampsAndConditions                   AmbushCampsAndConditions;                                 // 0x0518(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              CurrentMin;                                               // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ConditionIndex;                                           // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoFillAmbushConditions;                                 // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0541(0x0007) MISSED OFFSET
	struct FName                                       NoCollisionProfile;                                       // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PawnBulletCollisionProfile;                               // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                DistanceCheckTimer;                                       // 0x0558(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AmbientEventMarker.BP_AmbientEventMarker_C");
		return ptr;
	}


	void DefineCalloutInfo();
	void DisplayDebug();
	void SetDisplayTextColor();
	void SetEventName();
	void TextFaceCamera();
	void DoIStartInDebugMode();
	void DisplayError(const struct FString& Error);
	void FindAmbientEventManager();
	void DisableCollisionForSeconds(float Seconds);
	void SetCollision(bool Active);
	void SetDebugTimeBeingSelected(float TimeSelected, bool ScaleUp);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void EventDisableCollisionTemporarily(float Seconds);
	void OnRemoveFromWorld();
	void Debug_Tick_From_Master();
	void OnUMapLoad();
	void OnUMapLoaded();
	void OnEventUnloaded();
	void OnEventLoaded(bool* PreviouslyLoaded);
	void OnEventComplete();
	void CheckIfDeaconCanSpeak();
	void StartPing();
	void CustomEvent_1(class ABendPawn* PawnSpeaking, const struct FName& SoundName, int ConversationID, TEnumAsByte<EDonePlayVocalReason> SuccessOrFail);
	void StopPing();
	void CheckDistance();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_AmbientEventMarker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
