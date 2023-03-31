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

// Class GameplayDebugger.GameplayDebuggingComponent
// 0x0260 (0x0830 - 0x05D0)
class UGameplayDebuggingComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05D0(0x0008) MISSED OFFSET
	struct FString                                     DebugComponentClassName;                                  // 0x05D8(0x0010) (ZeroConstructor, Config, GlobalConfig)
	int                                                ShowExtendedInformatiomCounter;                           // 0x05E8(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05EC(0x0004) MISSED OFFSET
	TArray<int>                                        ReplicateViewDataCounters;                                // 0x05F0(0x0010) (Net, ZeroConstructor)
	struct FString                                     ControllerName;                                           // 0x0600(0x0010) (Net, ZeroConstructor)
	struct FString                                     pawnName;                                                 // 0x0610(0x0010) (Net, ZeroConstructor)
	struct FString                                     PawnClass;                                                // 0x0620(0x0010) (Net, ZeroConstructor)
	struct FString                                     DebugIcon;                                                // 0x0630(0x0010) (Net, ZeroConstructor)
	struct FString                                     MovementBaseInfo;                                         // 0x0640(0x0010) (Net, ZeroConstructor)
	struct FString                                     MovementModeInfo;                                         // 0x0650(0x0010) (Net, ZeroConstructor)
	struct FString                                     PathFollowingInfo;                                        // 0x0660(0x0010) (Net, ZeroConstructor)
	struct FString                                     CurrentAITask;                                            // 0x0670(0x0010) (Net, ZeroConstructor)
	struct FString                                     CurrentAIState;                                           // 0x0680(0x0010) (Net, ZeroConstructor)
	struct FString                                     CurrentAIAssets;                                          // 0x0690(0x0010) (Net, ZeroConstructor)
	struct FString                                     GameplayTasksState;                                       // 0x06A0(0x0010) (Net, ZeroConstructor)
	struct FString                                     NavDataInfo;                                              // 0x06B0(0x0010) (Net, ZeroConstructor)
	struct FString                                     AbilityInfo;                                              // 0x06C0(0x0010) (Net, ZeroConstructor)
	struct FString                                     MontageInfo;                                              // 0x06D0(0x0010) (Net, ZeroConstructor)
	struct FString                                     BrainComponentName;                                       // 0x06E0(0x0010) (Net, ZeroConstructor)
	struct FString                                     BrainComponentString;                                     // 0x06F0(0x0010) (Net, ZeroConstructor)
	TArray<unsigned char>                              BlackboardRepData;                                        // 0x0700(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0710(0x0010) MISSED OFFSET
	TArray<struct FVector>                             PathPoints;                                               // 0x0720(0x0010) (Net, ZeroConstructor)
	TArray<unsigned char>                              PathCorridorData;                                         // 0x0730(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0740(0x0010) MISSED OFFSET
	TArray<unsigned char>                              NavmeshRepData;                                           // 0x0750(0x0010) (Net, ZeroConstructor)
	TArray<unsigned char>                              EQSRepData;                                               // 0x0760(0x0010) (Net, ZeroConstructor)
	int                                                NextPathPointIndex;                                       // 0x0770(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsUsingPathFollowing : 1;                                // 0x0774(0x0001) (Net)
	unsigned char                                      bIsUsingCharacter : 1;                                    // 0x0774(0x0001) (Net)
	unsigned char                                      bIsUsingBehaviorTree : 1;                                 // 0x0774(0x0001) (Net)
	unsigned char                                      bIsUsingAbilities : 1;                                    // 0x0774(0x0001) (Net)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0775(0x0003) MISSED OFFSET
	struct FString                                     PerceptionLegend;                                         // 0x0778(0x0010) (Net, ZeroConstructor)
	float                                              DistanceFromPlayer;                                       // 0x0788(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFromSensor;                                       // 0x078C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SensingComponentLocation;                                 // 0x0790(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x079C(0x0004) MISSED OFFSET
	TArray<struct FGameplayDebuggerShapeElement>       PerceptionShapeElements;                                  // 0x07A0(0x0010) (Net, ZeroConstructor)
	class AActor*                                      TargetActor;                                              // 0x07B0(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x20];                                      // 0x07B8(0x0020) MISSED OFFSET
	unsigned char                                      ActivationCounter;                                        // 0x07D8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x57];                                      // 0x07D9(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggingComponent");
		return ptr;
	}


	void ServerReplicateData(uint32_t InMessage, uint32_t DataView);
	void ServerDiscardNavmeshData();
	void ServerCollectNavmeshData(const struct FVector_NetQuantize10& TargetLocation);
	void OnRep_UpdateNavmesh();
	void OnRep_UpdateEQS();
	void OnRep_UpdateBlackboard();
	void OnRep_PathCorridorData();
	void OnRep_ActivationCounter();
	void OnCycleDetailsView();
	void ClientEnableTargetSelection(bool bEnable);
};


// Class GameplayDebugger.GameplayDebuggingHUDComponent
// 0x00F0 (0x0438 - 0x0348)
class AGameplayDebuggingHUDComponent : public AActor
{
public:
	float                                              MenuStartX;                                               // 0x0348(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MenuStartY;                                               // 0x034C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DebugInfoStartX;                                          // 0x0350(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DebugInfoStartY;                                          // 0x0354(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class UCanvas*                                     Canvas;                                                   // 0x0358(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class APlayerController*                           PlayerOwner;                                              // 0x0360(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0368(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggingHUDComponent");
		return ptr;
	}

};


// Class GameplayDebugger.GameplayDebuggerSettings
// 0x00D8 (0x0100 - 0x0028)
class UGameplayDebuggerSettings : public UObject
{
public:
	struct FGDTCustomViewNames                         CustomViewNames;                                          // 0x0028(0x0050) (Edit, Config)
	bool                                               OverHead;                                                 // 0x0078(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               Basic;                                                    // 0x0079(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               BehaviorTree;                                             // 0x007A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EQS;                                                      // 0x007B(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               EnableEQSOnHUD;                                           // 0x007C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	int                                                ActiveEQSIndex;                                           // 0x0080(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               Perception;                                               // 0x0084(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               GameView1;                                                // 0x0085(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               GameView2;                                                // 0x0086(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               GameView3;                                                // 0x0087(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               GameView4;                                                // 0x0088(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               GameView5;                                                // 0x0089(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x76];                                      // 0x008A(0x0076) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggerSettings");
		return ptr;
	}

};


// Class GameplayDebugger.GameplayDebuggingControllerComponent
// 0x0248 (0x0318 - 0x00D0)
class UGameplayDebuggingControllerComponent : public UActorComponent
{
public:
	class AGameplayDebuggingHUDComponent*              OnDebugAIHUD;                                             // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      DebugAITargetActor;                                       // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UInputComponent*                             AIDebugViewInputComponent;                                // 0x00E0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UInputComponent*                             DebugCameraInputComponent;                                // 0x00E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00F0(0x0028) MISSED OFFSET
	struct FInputChord                                 ActivationKey;                                            // 0x0118(0x0020) (Config)
	struct FInputChord                                 CategoryZeroBind;                                         // 0x0138(0x0020) (Config)
	struct FInputChord                                 CategoryOneBind;                                          // 0x0158(0x0020) (Config)
	struct FInputChord                                 CategoryTwoBind;                                          // 0x0178(0x0020) (Config)
	struct FInputChord                                 CategoryThreeBind;                                        // 0x0198(0x0020) (Config)
	struct FInputChord                                 CategoryFourBind;                                         // 0x01B8(0x0020) (Config)
	struct FInputChord                                 CategoryFiveBind;                                         // 0x01D8(0x0020) (Config)
	struct FInputChord                                 CategorySixBind;                                          // 0x01F8(0x0020) (Config)
	struct FInputChord                                 CategorySevenBind;                                        // 0x0218(0x0020) (Config)
	struct FInputChord                                 CategoryEightBind;                                        // 0x0238(0x0020) (Config)
	struct FInputChord                                 CategoryNineBind;                                         // 0x0258(0x0020) (Config)
	struct FInputChord                                 CycleDetailsViewBind;                                     // 0x0278(0x0020) (Config)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0298(0x0020) MISSED OFFSET
	struct FInputChord                                 DebugCameraBind;                                          // 0x02B8(0x0020) (Config)
	struct FInputChord                                 OnScreenDebugMessagesBind;                                // 0x02D8(0x0020) (Config)
	struct FInputChord                                 GameHUDBind;                                              // 0x02F8(0x0020) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggingControllerComponent");
		return ptr;
	}

};


// Class GameplayDebugger.GaneplayDebuggerProxyHUD
// 0x0030 (0x04B0 - 0x0480)
class AGaneplayDebuggerProxyHUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0480(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayDebugger.GaneplayDebuggerProxyHUD");
		return ptr;
	}

};


// Class GameplayDebugger.GameplayDebuggingReplicator
// 0x0198 (0x04E0 - 0x0348)
class AGameplayDebuggingReplicator : public AActor
{
public:
	struct FString                                     DebugComponentClassName;                                  // 0x0348(0x0010) (ZeroConstructor, Config)
	struct FString                                     DebugComponentHUDClassName;                               // 0x0358(0x0010) (ZeroConstructor, Config)
	struct FString                                     DebugComponentControllerClassName;                        // 0x0368(0x0010) (ZeroConstructor, Config)
	int                                                MaxEQSQueries;                                            // 0x0378(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	class UGameplayDebuggingComponent*                 DebugComponent;                                           // 0x0380(0x0008) (ExportObject, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class APlayerController*                           LocalPlayerOwner;                                         // 0x0388(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      LastSelectedActorToDebug;                                 // 0x0390(0x0008) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsGlobalInWorld;                                         // 0x0398(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAutoActivate;                                            // 0x0399(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               OverHead;                                                 // 0x039A(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               Basic;                                                    // 0x039B(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               BehaviorTree;                                             // 0x039C(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               EQS;                                                      // 0x039D(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               EnableEQSOnHUD;                                           // 0x039E(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x039F(0x0001) MISSED OFFSET
	int                                                ActiveEQSIndex;                                           // 0x03A0(0x0004) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               Perception;                                               // 0x03A4(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               GameView1;                                                // 0x03A5(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               GameView2;                                                // 0x03A6(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               GameView3;                                                // 0x03A7(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               GameView4;                                                // 0x03A8(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               GameView5;                                                // 0x03A9(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x03AA(0x0006) MISSED OFFSET
	class UTexture2D*                                  DefaultTexture_Red;                                       // 0x03B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  DefaultTexture_Green;                                     // 0x03B8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x120];                                     // 0x03C0(0x0120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayDebugger.GameplayDebuggingReplicator");
		return ptr;
	}


	void ServerSetActorToDebug(class AActor* InActor);
	void ServerReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView);
	void OnRep_AutoActivate();
	void ClientReplicateMessage(class AActor* Actor, uint32_t InMessage, uint32_t DataView);
	void ClientEnableTargetSelection(bool bEnable, class APlayerController* Context);
	void ClientAutoActivate();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
