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

// Function Pause_Controls.Pause_Controls_C.DLCCanOpenOptionsMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bLocked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APause_Controls_C::DLCCanOpenOptionsMenu(bool* bLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pause_Controls.Pause_Controls_C.DLCCanOpenOptionsMenu");

	APause_Controls_C_DLCCanOpenOptionsMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLocked != nullptr)
		*bLocked = params.bLocked;
}


// Function Pause_Controls.Pause_Controls_C.ForceCloseWeaponWheel
// (Public, BlueprintCallable, BlueprintEvent)

void APause_Controls_C::ForceCloseWeaponWheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pause_Controls.Pause_Controls_C.ForceCloseWeaponWheel");

	APause_Controls_C_ForceCloseWeaponWheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pause_Controls.Pause_Controls_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APause_Controls_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pause_Controls.Pause_Controls_C.UserConstructionScript");

	APause_Controls_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pause_Controls.Pause_Controls_C.InpActEvt_TogglePauseMenu_options_UniqueObjectNameForCooking_222
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void APause_Controls_C::InpActEvt_TogglePauseMenu_options_UniqueObjectNameForCooking_222(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pause_Controls.Pause_Controls_C.InpActEvt_TogglePauseMenu_options_UniqueObjectNameForCooking_222");

	APause_Controls_C_InpActEvt_TogglePauseMenu_options_UniqueObjectNameForCooking_222_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pause_Controls.Pause_Controls_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void APause_Controls_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pause_Controls.Pause_Controls_C.ReceiveBeginPlay");

	APause_Controls_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pause_Controls.Pause_Controls_C.ReceiveActorOnInputEnabled
// (Event, Public, BlueprintEvent)

void APause_Controls_C::ReceiveActorOnInputEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pause_Controls.Pause_Controls_C.ReceiveActorOnInputEnabled");

	APause_Controls_C_ReceiveActorOnInputEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pause_Controls.Pause_Controls_C.ReceiveActorOnInputDisabled
// (Event, Public, BlueprintEvent)

void APause_Controls_C::ReceiveActorOnInputDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pause_Controls.Pause_Controls_C.ReceiveActorOnInputDisabled");

	APause_Controls_C_ReceiveActorOnInputDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pause_Controls.Pause_Controls_C.ExecuteUbergraph_Pause_Controls
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APause_Controls_C::ExecuteUbergraph_Pause_Controls(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pause_Controls.Pause_Controls_C.ExecuteUbergraph_Pause_Controls");

	APause_Controls_C_ExecuteUbergraph_Pause_Controls_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
