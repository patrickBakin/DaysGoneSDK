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

// Function Bend_Wpn_Remington700.Bend_Wpn_Remington700_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_Wpn_Remington700_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Remington700.Bend_Wpn_Remington700_C.UserConstructionScript");

	ABend_Wpn_Remington700_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Remington700.Bend_Wpn_Remington700_C.OnClipLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           MaterialIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void ABend_Wpn_Remington700_C::OnClipLoaded(int* MaterialIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Remington700.Bend_Wpn_Remington700_C.OnClipLoaded");

	ABend_Wpn_Remington700_C_OnClipLoaded_Params params;
	params.MaterialIndex = MaterialIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Remington700.Bend_Wpn_Remington700_C.OnOutOfAmmo
// (Event, Public, BlueprintEvent)

void ABend_Wpn_Remington700_C::OnOutOfAmmo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Remington700.Bend_Wpn_Remington700_C.OnOutOfAmmo");

	ABend_Wpn_Remington700_C_OnOutOfAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Remington700.Bend_Wpn_Remington700_C.OnFireOnEmpty
// (Event, Public, BlueprintEvent)

void ABend_Wpn_Remington700_C::OnFireOnEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Remington700.Bend_Wpn_Remington700_C.OnFireOnEmpty");

	ABend_Wpn_Remington700_C_OnFireOnEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Remington700.Bend_Wpn_Remington700_C.OnReloadStarted
// (Event, Public, BlueprintEvent)

void ABend_Wpn_Remington700_C::OnReloadStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Remington700.Bend_Wpn_Remington700_C.OnReloadStarted");

	ABend_Wpn_Remington700_C_OnReloadStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Remington700.Bend_Wpn_Remington700_C.OnFired
// (Event, Public, BlueprintEvent)

void ABend_Wpn_Remington700_C::OnFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Remington700.Bend_Wpn_Remington700_C.OnFired");

	ABend_Wpn_Remington700_C_OnFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Remington700.Bend_Wpn_Remington700_C.OnClipRemoved
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           MaterialIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void ABend_Wpn_Remington700_C::OnClipRemoved(int* MaterialIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Remington700.Bend_Wpn_Remington700_C.OnClipRemoved");

	ABend_Wpn_Remington700_C_OnClipRemoved_Params params;
	params.MaterialIndex = MaterialIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_Wpn_Remington700.Bend_Wpn_Remington700_C.ExecuteUbergraph_Bend_Wpn_Remington700
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_Wpn_Remington700_C::ExecuteUbergraph_Bend_Wpn_Remington700(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Remington700.Bend_Wpn_Remington700_C.ExecuteUbergraph_Bend_Wpn_Remington700");

	ABend_Wpn_Remington700_C_ExecuteUbergraph_Bend_Wpn_Remington700_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
