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

// Function bp_BendSky.bp_BendSky_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Abp_BendSky_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_BendSky.bp_BendSky_C.UserConstructionScript");

	Abp_BendSky_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_BendSky.bp_BendSky_C.Enable Painted Sky
// (BlueprintCallable, BlueprintEvent)

void Abp_BendSky_C::Enable_Painted_Sky()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_BendSky.bp_BendSky_C.Enable Painted Sky");

	Abp_BendSky_C_Enable_Painted_Sky_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_BendSky.bp_BendSky_C.Disable Painted Sky
// (BlueprintCallable, BlueprintEvent)

void Abp_BendSky_C::Disable_Painted_Sky()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_BendSky.bp_BendSky_C.Disable Painted Sky");

	Abp_BendSky_C_Disable_Painted_Sky_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_BendSky.bp_BendSky_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Abp_BendSky_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_BendSky.bp_BendSky_C.ReceiveBeginPlay");

	Abp_BendSky_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_BendSky.bp_BendSky_C.ExecuteUbergraph_bp_BendSky
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Abp_BendSky_C::ExecuteUbergraph_bp_BendSky(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_BendSky.bp_BendSky_C.ExecuteUbergraph_bp_BendSky");

	Abp_BendSky_C_ExecuteUbergraph_bp_BendSky_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
