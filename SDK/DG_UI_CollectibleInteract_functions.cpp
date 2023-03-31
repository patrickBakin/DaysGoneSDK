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

// Function UI_CollectibleInteract.UI_CollectibleInteract_C.ActiveCollectibleKey
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Key                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_CollectibleInteract_C::ActiveCollectibleKey(int* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CollectibleInteract.UI_CollectibleInteract_C.ActiveCollectibleKey");

	UUI_CollectibleInteract_C_ActiveCollectibleKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
}


// Function UI_CollectibleInteract.UI_CollectibleInteract_C.SetState_Inspect
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CollectibleInteract_C::SetState_Inspect()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CollectibleInteract.UI_CollectibleInteract_C.SetState_Inspect");

	UUI_CollectibleInteract_C_SetState_Inspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CollectibleInteract.UI_CollectibleInteract_C.SetState_Interact
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_CollectibleInteract_C::SetState_Interact()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CollectibleInteract.UI_CollectibleInteract_C.SetState_Interact");

	UUI_CollectibleInteract_C_SetState_Interact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CollectibleInteract.UI_CollectibleInteract_C.SetDetailImageActive
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CollectibleInteract_C::SetDetailImageActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CollectibleInteract.UI_CollectibleInteract_C.SetDetailImageActive");

	UUI_CollectibleInteract_C_SetDetailImageActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CollectibleInteract.UI_CollectibleInteract_C.Init
// (Private, BlueprintCallable, BlueprintEvent)

void UUI_CollectibleInteract_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CollectibleInteract.UI_CollectibleInteract_C.Init");

	UUI_CollectibleInteract_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CollectibleInteract.UI_CollectibleInteract_C.SetState_Active
// (Private, BlueprintCallable, BlueprintEvent)

void UUI_CollectibleInteract_C::SetState_Active()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CollectibleInteract.UI_CollectibleInteract_C.SetState_Active");

	UUI_CollectibleInteract_C_SetState_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CollectibleInteract.UI_CollectibleInteract_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_CollectibleInteract_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CollectibleInteract.UI_CollectibleInteract_C.Construct");

	UUI_CollectibleInteract_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_CollectibleInteract.UI_CollectibleInteract_C.ExecuteUbergraph_UI_CollectibleInteract
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_CollectibleInteract_C::ExecuteUbergraph_UI_CollectibleInteract(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CollectibleInteract.UI_CollectibleInteract_C.ExecuteUbergraph_UI_CollectibleInteract");

	UUI_CollectibleInteract_C_ExecuteUbergraph_UI_CollectibleInteract_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
