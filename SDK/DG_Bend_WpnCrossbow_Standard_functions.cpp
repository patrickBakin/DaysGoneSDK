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

// Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.DoIHaveIncendiaryBolts
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HaveIncendiaryBolts            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABend_WpnCrossbow_Standard_C::DoIHaveIncendiaryBolts(bool* HaveIncendiaryBolts)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.DoIHaveIncendiaryBolts");

	ABend_WpnCrossbow_Standard_C_DoIHaveIncendiaryBolts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HaveIncendiaryBolts != nullptr)
		*HaveIncendiaryBolts = params.HaveIncendiaryBolts;
}


// Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_WpnCrossbow_Standard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.UserConstructionScript");

	ABend_WpnCrossbow_Standard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.OnFired
// (Event, Public, BlueprintEvent)

void ABend_WpnCrossbow_Standard_C::OnFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.OnFired");

	ABend_WpnCrossbow_Standard_C_OnFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.OnDrawStarted
// (Event, Public, BlueprintEvent)

void ABend_WpnCrossbow_Standard_C::OnDrawStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.OnDrawStarted");

	ABend_WpnCrossbow_Standard_C_OnDrawStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.OnClipLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           MaterialIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnCrossbow_Standard_C::OnClipLoaded(int* MaterialIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.OnClipLoaded");

	ABend_WpnCrossbow_Standard_C_OnClipLoaded_Params params;
	params.MaterialIndex = MaterialIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.OnHolsterStarted
// (Event, Public, BlueprintEvent)

void ABend_WpnCrossbow_Standard_C::OnHolsterStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.OnHolsterStarted");

	ABend_WpnCrossbow_Standard_C_OnHolsterStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.OnReloadStarted
// (Event, Public, BlueprintEvent)

void ABend_WpnCrossbow_Standard_C::OnReloadStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.OnReloadStarted");

	ABend_WpnCrossbow_Standard_C_OnReloadStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.OnReloadFinished
// (Event, Public, BlueprintEvent)

void ABend_WpnCrossbow_Standard_C::OnReloadFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.OnReloadFinished");

	ABend_WpnCrossbow_Standard_C_OnReloadFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.ExecuteUbergraph_Bend_WpnCrossbow_Standard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnCrossbow_Standard_C::ExecuteUbergraph_Bend_WpnCrossbow_Standard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnCrossbow_Standard.Bend_WpnCrossbow_Standard_C.ExecuteUbergraph_Bend_WpnCrossbow_Standard");

	ABend_WpnCrossbow_Standard_C_ExecuteUbergraph_Bend_WpnCrossbow_Standard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
