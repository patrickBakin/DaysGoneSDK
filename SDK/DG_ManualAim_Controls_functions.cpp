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

// Function ManualAim_Controls.ManualAim_Controls_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AManualAim_Controls_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManualAim_Controls.ManualAim_Controls_C.UserConstructionScript");

	AManualAim_Controls_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManualAim_Controls.ManualAim_Controls_C.InpActEvt_ManualAim_ShoulderSwap_UniqueObjectNameForCooking_204
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void AManualAim_Controls_C::InpActEvt_ManualAim_ShoulderSwap_UniqueObjectNameForCooking_204(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManualAim_Controls.ManualAim_Controls_C.InpActEvt_ManualAim_ShoulderSwap_UniqueObjectNameForCooking_204");

	AManualAim_Controls_C_InpActEvt_ManualAim_ShoulderSwap_UniqueObjectNameForCooking_204_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManualAim_Controls.ManualAim_Controls_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AManualAim_Controls_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManualAim_Controls.ManualAim_Controls_C.ReceiveBeginPlay");

	AManualAim_Controls_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManualAim_Controls.ManualAim_Controls_C.ReceiveActorOnInputEnabled
// (Event, Public, BlueprintEvent)

void AManualAim_Controls_C::ReceiveActorOnInputEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManualAim_Controls.ManualAim_Controls_C.ReceiveActorOnInputEnabled");

	AManualAim_Controls_C_ReceiveActorOnInputEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManualAim_Controls.ManualAim_Controls_C.ReceiveActorOnInputDisabled
// (Event, Public, BlueprintEvent)

void AManualAim_Controls_C::ReceiveActorOnInputDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function ManualAim_Controls.ManualAim_Controls_C.ReceiveActorOnInputDisabled");

	AManualAim_Controls_C_ReceiveActorOnInputDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ManualAim_Controls.ManualAim_Controls_C.ExecuteUbergraph_ManualAim_Controls
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AManualAim_Controls_C::ExecuteUbergraph_ManualAim_Controls(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ManualAim_Controls.ManualAim_Controls_C.ExecuteUbergraph_ManualAim_Controls");

	AManualAim_Controls_C_ExecuteUbergraph_ManualAim_Controls_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
