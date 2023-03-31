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

// Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.GetReticleTightness
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReticleTightness               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Pistol_C::GetReticleTightness(float* ReticleTightness)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.GetReticleTightness");

	UUI_Reticle_Pistol_C_GetReticleTightness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReticleTightness != nullptr)
		*ReticleTightness = params.ReticleTightness;
}


// Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.DisplayChargedIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Pistol_C::DisplayChargedIndicator(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.DisplayChargedIndicator");

	UUI_Reticle_Pistol_C_DisplayChargedIndicator_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Pistol_C::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.SetVisible");

	UUI_Reticle_Pistol_C_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.TweenOuterScale
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Reticle_Pistol_C::TweenOuterScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.TweenOuterScale");

	UUI_Reticle_Pistol_C_TweenOuterScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Pistol_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.Tick");

	UUI_Reticle_Pistol_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Reticle_Pistol_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.Construct");

	UUI_Reticle_Pistol_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.ExecuteUbergraph_UI_Reticle_Pistol
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Pistol_C::ExecuteUbergraph_UI_Reticle_Pistol(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.ExecuteUbergraph_UI_Reticle_Pistol");

	UUI_Reticle_Pistol_C_ExecuteUbergraph_UI_Reticle_Pistol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.FireComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Reticle_Pistol_C::FireComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Pistol.UI_Reticle_Pistol_C.FireComplete__DelegateSignature");

	UUI_Reticle_Pistol_C_FireComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
