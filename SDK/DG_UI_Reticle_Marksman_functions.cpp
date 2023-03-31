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

// Function UI_Reticle_Marksman.UI_Reticle_Marksman_C.FattenLinesForBike
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Reticle_Marksman_C::FattenLinesForBike()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Marksman.UI_Reticle_Marksman_C.FattenLinesForBike");

	UUI_Reticle_Marksman_C_FattenLinesForBike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Marksman.UI_Reticle_Marksman_C.TweenOuterScaleWhenOnBike
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentAccuracy                (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Marksman_C::TweenOuterScaleWhenOnBike(float CurrentAccuracy)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Marksman.UI_Reticle_Marksman_C.TweenOuterScaleWhenOnBike");

	UUI_Reticle_Marksman_C_TweenOuterScaleWhenOnBike_Params params;
	params.CurrentAccuracy = CurrentAccuracy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Marksman.UI_Reticle_Marksman_C.GetReticleTightness
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReticleTightness               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Marksman_C::GetReticleTightness(float* ReticleTightness)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Marksman.UI_Reticle_Marksman_C.GetReticleTightness");

	UUI_Reticle_Marksman_C_GetReticleTightness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReticleTightness != nullptr)
		*ReticleTightness = params.ReticleTightness;
}


// Function UI_Reticle_Marksman.UI_Reticle_Marksman_C.DisplaySlowMotionIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Marksman_C::DisplaySlowMotionIndicator(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Marksman.UI_Reticle_Marksman_C.DisplaySlowMotionIndicator");

	UUI_Reticle_Marksman_C_DisplaySlowMotionIndicator_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Marksman.UI_Reticle_Marksman_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Marksman_C::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Marksman.UI_Reticle_Marksman_C.SetVisible");

	UUI_Reticle_Marksman_C_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Marksman.UI_Reticle_Marksman_C.TweenOuterScale
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Reticle_Marksman_C::TweenOuterScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Marksman.UI_Reticle_Marksman_C.TweenOuterScale");

	UUI_Reticle_Marksman_C_TweenOuterScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Marksman.UI_Reticle_Marksman_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Marksman_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Marksman.UI_Reticle_Marksman_C.Tick");

	UUI_Reticle_Marksman_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Marksman.UI_Reticle_Marksman_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Reticle_Marksman_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Marksman.UI_Reticle_Marksman_C.Construct");

	UUI_Reticle_Marksman_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Marksman.UI_Reticle_Marksman_C.ExecuteUbergraph_UI_Reticle_Marksman
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Marksman_C::ExecuteUbergraph_UI_Reticle_Marksman(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Marksman.UI_Reticle_Marksman_C.ExecuteUbergraph_UI_Reticle_Marksman");

	UUI_Reticle_Marksman_C_ExecuteUbergraph_UI_Reticle_Marksman_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Marksman.UI_Reticle_Marksman_C.FireComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Reticle_Marksman_C::FireComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Marksman.UI_Reticle_Marksman_C.FireComplete__DelegateSignature");

	UUI_Reticle_Marksman_C_FireComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
