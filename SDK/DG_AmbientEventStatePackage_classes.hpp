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

// BlueprintGeneratedClass AmbientEventStatePackage.AmbientEventStatePackage_C
// 0x0020 (0x03D0 - 0x03B0)
class AAmbientEventStatePackage_C : public ABP_TelemetryPackageBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FString                                     Events;                                                   // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_TelemetryManager_C*                      Manager;                                                  // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AmbientEventStatePackage.AmbientEventStatePackage_C");
		return ptr;
	}


	void TelemetryMgrCheck(bool* Enabled);
	void UserConstructionScript();
	void AmbientEventEngagedCall(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation);
	void AmbientEventConcludedCall(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, TEnumAsByte<EAmbientEventCompletionStatus> EventResult, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation);
	void AmbientManagerBlockedCall(TEnumAsByte<EAmbientEventManagerBlockMsg> BlockedReason);
	void AmbientEventLoadedCall(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, float TimeToLoad, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation);
	void AmbientEventUnloadedCall(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, float TimeInPlay, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation);
	void AmbientEventChosenCall(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, bool AlwaysLoaded, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation);
	void ReceiveBeginPlay();
	void PlayerRespawned(class ABendPlayerController* PlayerController);
	void RecheckAEM();
	void AmbientEventEngaged(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation);
	void AmbientEventConcluded(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, TEnumAsByte<EAmbientEventCompletionStatus> EventResult, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation);
	void AmbientManagerBlocked(TEnumAsByte<EAmbientEventManagerBlockMsg> BlockReason);
	void AmbientEventLoaded(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, float TimeToLoad, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation);
	void AmbientEventUnloaded(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, float TimeInPlay, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation);
	void AmbientEventChosen(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, bool AlwaysLoaded, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation);
	void ExecuteUbergraph_AmbientEventStatePackage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
