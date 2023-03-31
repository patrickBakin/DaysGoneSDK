// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AmbientEventStatePackage.AmbientEventStatePackage_C.TelemetryMgrCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAmbientEventStatePackage_C::TelemetryMgrCheck(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientEventStatePackage.AmbientEventStatePackage_C.TelemetryMgrCheck");

	AAmbientEventStatePackage_C_TelemetryMgrCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function AmbientEventStatePackage.AmbientEventStatePackage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAmbientEventStatePackage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientEventStatePackage.AmbientEventStatePackage_C.UserConstructionScript");

	AAmbientEventStatePackage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventEngagedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// TEnumAsByte<EAmbientEventClass> EventClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PlayerLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AmbientEventLocation           (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientEventStatePackage_C::AmbientEventEngagedCall(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventEngagedCall");

	AAmbientEventStatePackage_C_AmbientEventEngagedCall_Params params;
	params.EventName = EventName;
	params.EventClass = EventClass;
	params.PlayerLocation = PlayerLocation;
	params.AmbientEventLocation = AmbientEventLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventConcludedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// TEnumAsByte<EAmbientEventClass> EventClass                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAmbientEventCompletionStatus> EventResult                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PlayerLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AmbientEventLocation           (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientEventStatePackage_C::AmbientEventConcludedCall(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, TEnumAsByte<EAmbientEventCompletionStatus> EventResult, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventConcludedCall");

	AAmbientEventStatePackage_C_AmbientEventConcludedCall_Params params;
	params.EventName = EventName;
	params.EventClass = EventClass;
	params.EventResult = EventResult;
	params.PlayerLocation = PlayerLocation;
	params.AmbientEventLocation = AmbientEventLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientManagerBlockedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAmbientEventManagerBlockMsg> BlockedReason                  (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientEventStatePackage_C::AmbientManagerBlockedCall(TEnumAsByte<EAmbientEventManagerBlockMsg> BlockedReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientManagerBlockedCall");

	AAmbientEventStatePackage_C_AmbientManagerBlockedCall_Params params;
	params.BlockedReason = BlockedReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventLoadedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// TEnumAsByte<EAmbientEventClass> EventClass                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeToLoad                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PlayerLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AmbientEventLocation           (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientEventStatePackage_C::AmbientEventLoadedCall(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, float TimeToLoad, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventLoadedCall");

	AAmbientEventStatePackage_C_AmbientEventLoadedCall_Params params;
	params.EventName = EventName;
	params.EventClass = EventClass;
	params.TimeToLoad = TimeToLoad;
	params.PlayerLocation = PlayerLocation;
	params.AmbientEventLocation = AmbientEventLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventUnloadedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// TEnumAsByte<EAmbientEventClass> EventClass                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeInPlay                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PlayerLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AmbientEventLocation           (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientEventStatePackage_C::AmbientEventUnloadedCall(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, float TimeInPlay, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventUnloadedCall");

	AAmbientEventStatePackage_C_AmbientEventUnloadedCall_Params params;
	params.EventName = EventName;
	params.EventClass = EventClass;
	params.TimeInPlay = TimeInPlay;
	params.PlayerLocation = PlayerLocation;
	params.AmbientEventLocation = AmbientEventLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventChosenCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// TEnumAsByte<EAmbientEventClass> EventClass                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AlwaysLoaded                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PlayerLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AmbientEventLocation           (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientEventStatePackage_C::AmbientEventChosenCall(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, bool AlwaysLoaded, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventChosenCall");

	AAmbientEventStatePackage_C_AmbientEventChosenCall_Params params;
	params.EventName = EventName;
	params.EventClass = EventClass;
	params.AlwaysLoaded = AlwaysLoaded;
	params.PlayerLocation = PlayerLocation;
	params.AmbientEventLocation = AmbientEventLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientEventStatePackage.AmbientEventStatePackage_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AAmbientEventStatePackage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientEventStatePackage.AmbientEventStatePackage_C.ReceiveBeginPlay");

	AAmbientEventStatePackage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientEventStatePackage.AmbientEventStatePackage_C.PlayerRespawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPlayerController*   PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientEventStatePackage_C::PlayerRespawned(class ABendPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientEventStatePackage.AmbientEventStatePackage_C.PlayerRespawned");

	AAmbientEventStatePackage_C_PlayerRespawned_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientEventStatePackage.AmbientEventStatePackage_C.RecheckAEM
// (BlueprintCallable, BlueprintEvent)

void AAmbientEventStatePackage_C::RecheckAEM()
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientEventStatePackage.AmbientEventStatePackage_C.RecheckAEM");

	AAmbientEventStatePackage_C_RecheckAEM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventEngaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// TEnumAsByte<EAmbientEventClass> EventClass                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PlayerLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AmbientEventLocation           (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientEventStatePackage_C::AmbientEventEngaged(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventEngaged");

	AAmbientEventStatePackage_C_AmbientEventEngaged_Params params;
	params.EventName = EventName;
	params.EventClass = EventClass;
	params.PlayerLocation = PlayerLocation;
	params.AmbientEventLocation = AmbientEventLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventConcluded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// TEnumAsByte<EAmbientEventClass> EventClass                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAmbientEventCompletionStatus> EventResult                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PlayerLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AmbientEventLocation           (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientEventStatePackage_C::AmbientEventConcluded(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, TEnumAsByte<EAmbientEventCompletionStatus> EventResult, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventConcluded");

	AAmbientEventStatePackage_C_AmbientEventConcluded_Params params;
	params.EventName = EventName;
	params.EventClass = EventClass;
	params.EventResult = EventResult;
	params.PlayerLocation = PlayerLocation;
	params.AmbientEventLocation = AmbientEventLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientManagerBlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAmbientEventManagerBlockMsg> BlockReason                    (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientEventStatePackage_C::AmbientManagerBlocked(TEnumAsByte<EAmbientEventManagerBlockMsg> BlockReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientManagerBlocked");

	AAmbientEventStatePackage_C_AmbientManagerBlocked_Params params;
	params.BlockReason = BlockReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// TEnumAsByte<EAmbientEventClass> EventClass                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeToLoad                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PlayerLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AmbientEventLocation           (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientEventStatePackage_C::AmbientEventLoaded(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, float TimeToLoad, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventLoaded");

	AAmbientEventStatePackage_C_AmbientEventLoaded_Params params;
	params.EventName = EventName;
	params.EventClass = EventClass;
	params.TimeToLoad = TimeToLoad;
	params.PlayerLocation = PlayerLocation;
	params.AmbientEventLocation = AmbientEventLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventUnloaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// TEnumAsByte<EAmbientEventClass> EventClass                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeInPlay                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PlayerLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AmbientEventLocation           (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientEventStatePackage_C::AmbientEventUnloaded(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, float TimeInPlay, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventUnloaded");

	AAmbientEventStatePackage_C_AmbientEventUnloaded_Params params;
	params.EventName = EventName;
	params.EventClass = EventClass;
	params.TimeInPlay = TimeInPlay;
	params.PlayerLocation = PlayerLocation;
	params.AmbientEventLocation = AmbientEventLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventChosen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// TEnumAsByte<EAmbientEventClass> EventClass                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AlwaysLoaded                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PlayerLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AmbientEventLocation           (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientEventStatePackage_C::AmbientEventChosen(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, bool AlwaysLoaded, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientEventStatePackage.AmbientEventStatePackage_C.AmbientEventChosen");

	AAmbientEventStatePackage_C_AmbientEventChosen_Params params;
	params.EventName = EventName;
	params.EventClass = EventClass;
	params.AlwaysLoaded = AlwaysLoaded;
	params.PlayerLocation = PlayerLocation;
	params.AmbientEventLocation = AmbientEventLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AmbientEventStatePackage.AmbientEventStatePackage_C.ExecuteUbergraph_AmbientEventStatePackage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAmbientEventStatePackage_C::ExecuteUbergraph_AmbientEventStatePackage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AmbientEventStatePackage.AmbientEventStatePackage_C.ExecuteUbergraph_AmbientEventStatePackage");

	AAmbientEventStatePackage_C_ExecuteUbergraph_AmbientEventStatePackage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
