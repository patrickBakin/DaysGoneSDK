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

// Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Interact_SHSInteract_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.UserConstructionScript");

	ABP_Interact_SHSInteract_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.OnMissionComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Interact_SHSInteract_C::OnMissionComplete(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.OnMissionComplete");

	ABP_Interact_SHSInteract_C_OnMissionComplete_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Interact_SHSInteract_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.ReceivePostSaveGameLoaded");

	ABP_Interact_SHSInteract_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.BndEvt__LeftRangeCheck_K2Node_ComponentBoundEvent_633_EndOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABP_Interact_SHSInteract_C::BndEvt__LeftRangeCheck_K2Node_ComponentBoundEvent_633_EndOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.BndEvt__LeftRangeCheck_K2Node_ComponentBoundEvent_633_EndOverlapSig__DelegateSignature");

	ABP_Interact_SHSInteract_C_BndEvt__LeftRangeCheck_K2Node_ComponentBoundEvent_633_EndOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.BndEvt__LeftRangeCheck_K2Node_ComponentBoundEvent_25_BeginOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABP_Interact_SHSInteract_C::BndEvt__LeftRangeCheck_K2Node_ComponentBoundEvent_25_BeginOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.BndEvt__LeftRangeCheck_K2Node_ComponentBoundEvent_25_BeginOverlapSig__DelegateSignature");

	ABP_Interact_SHSInteract_C_BndEvt__LeftRangeCheck_K2Node_ComponentBoundEvent_25_BeginOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.RetryChecks
// (BlueprintCallable, BlueprintEvent)

void ABP_Interact_SHSInteract_C::RetryChecks()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.RetryChecks");

	ABP_Interact_SHSInteract_C_RetryChecks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.InitInteract
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Interact_SHSInteract_C::InitInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.InitInteract");

	ABP_Interact_SHSInteract_C_InitInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.ExecuteUbergraph_BP_Interact_SHSInteract
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Interact_SHSInteract_C::ExecuteUbergraph_BP_Interact_SHSInteract(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Interact_SHSInteract.BP_Interact_SHSInteract_C.ExecuteUbergraph_BP_Interact_SHSInteract");

	ABP_Interact_SHSInteract_C_ExecuteUbergraph_BP_Interact_SHSInteract_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
