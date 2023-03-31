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

// Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.SetDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SkipButtonArtwork_C::SetDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.SetDefault");

	UUI_SkipButtonArtwork_C_SetDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.HideAll
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SkipButtonArtwork_C::HideAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.HideAll");

	UUI_SkipButtonArtwork_C_HideAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.UpdateProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkipButtonArtwork_C::UpdateProgress(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.UpdateProgress");

	UUI_SkipButtonArtwork_C_UpdateProgress_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.DisplayOptionalSkip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkipButtonArtwork_C::DisplayOptionalSkip(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.DisplayOptionalSkip");

	UUI_SkipButtonArtwork_C_DisplayOptionalSkip_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.DisplayStandardSkip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkipButtonArtwork_C::DisplayStandardSkip(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.DisplayStandardSkip");

	UUI_SkipButtonArtwork_C_DisplayStandardSkip_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.DisplayCannotSkip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkipButtonArtwork_C::DisplayCannotSkip(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.DisplayCannotSkip");

	UUI_SkipButtonArtwork_C_DisplayCannotSkip_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SkipButtonArtwork_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.Construct");

	UUI_SkipButtonArtwork_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.ExecuteUbergraph_UI_SkipButtonArtwork
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkipButtonArtwork_C::ExecuteUbergraph_UI_SkipButtonArtwork(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkipButtonArtwork.UI_SkipButtonArtwork_C.ExecuteUbergraph_UI_SkipButtonArtwork");

	UUI_SkipButtonArtwork_C_ExecuteUbergraph_UI_SkipButtonArtwork_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
