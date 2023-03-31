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

// Function UI_TweenBorder.UI_TweenBorder_C.SetAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TweenBorder_C::SetAngle(float Duration, float angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.SetAngle");

	UUI_TweenBorder_C_SetAngle_Params params;
	params.Duration = Duration;
	params.angle = angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.PauseTweenOpacity
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TweenBorder_C::PauseTweenOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.PauseTweenOpacity");

	UUI_TweenBorder_C_PauseTweenOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.SetAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Alignment                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TweenBorder_C::SetAlignment(float Duration, const struct FVector2D& Alignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.SetAlignment");

	UUI_TweenBorder_C_SetAlignment_Params params;
	params.Duration = Duration;
	params.Alignment = Alignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.TweenAlignment
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TweenBorder_C::TweenAlignment()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.TweenAlignment");

	UUI_TweenBorder_C_TweenAlignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.SetScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TweenBorder_C::SetScale(float Duration, const struct FVector2D& Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.SetScale");

	UUI_TweenBorder_C_SetScale_Params params;
	params.Duration = Duration;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.SetTranslation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Translation                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TweenBorder_C::SetTranslation(float Duration, const struct FVector2D& Translation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.SetTranslation");

	UUI_TweenBorder_C_SetTranslation_Params params;
	params.Duration = Duration;
	params.Translation = Translation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.SetOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Opacity                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TweenBorder_C::SetOpacity(float Duration, float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.SetOpacity");

	UUI_TweenBorder_C_SetOpacity_Params params;
	params.Duration = Duration;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.SetColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TweenBorder_C::SetColor(float Duration, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.SetColor");

	UUI_TweenBorder_C_SetColor_Params params;
	params.Duration = Duration;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.TweenVectorParameter
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TweenBorder_C::TweenVectorParameter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.TweenVectorParameter");

	UUI_TweenBorder_C_TweenVectorParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.TweenScalarParameter
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TweenBorder_C::TweenScalarParameter()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.TweenScalarParameter");

	UUI_TweenBorder_C_TweenScalarParameter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.TweenPivot
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TweenBorder_C::TweenPivot()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.TweenPivot");

	UUI_TweenBorder_C_TweenPivot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.TweenAngle
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TweenBorder_C::TweenAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.TweenAngle");

	UUI_TweenBorder_C_TweenAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.TweenScale
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TweenBorder_C::TweenScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.TweenScale");

	UUI_TweenBorder_C_TweenScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.TweenTranslation
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TweenBorder_C::TweenTranslation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.TweenTranslation");

	UUI_TweenBorder_C_TweenTranslation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.TweenOpacity
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TweenBorder_C::TweenOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.TweenOpacity");

	UUI_TweenBorder_C_TweenOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.TweenColor
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TweenBorder_C::TweenColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.TweenColor");

	UUI_TweenBorder_C_TweenColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_TweenBorder_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.Construct");

	UUI_TweenBorder_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.ExecuteUbergraph_UI_TweenBorder
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TweenBorder_C::ExecuteUbergraph_UI_TweenBorder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.ExecuteUbergraph_UI_TweenBorder");

	UUI_TweenBorder_C_ExecuteUbergraph_UI_TweenBorder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.OnVectorParamEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_TweenBorder_C::OnVectorParamEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.OnVectorParamEnd__DelegateSignature");

	UUI_TweenBorder_C_OnVectorParamEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.OnScalarParamEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_TweenBorder_C::OnScalarParamEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.OnScalarParamEnd__DelegateSignature");

	UUI_TweenBorder_C_OnScalarParamEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.OnPivotEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_TweenBorder_C::OnPivotEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.OnPivotEnd__DelegateSignature");

	UUI_TweenBorder_C_OnPivotEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.OnAngleEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_TweenBorder_C::OnAngleEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.OnAngleEnd__DelegateSignature");

	UUI_TweenBorder_C_OnAngleEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.OnScaleEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_TweenBorder_C::OnScaleEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.OnScaleEnd__DelegateSignature");

	UUI_TweenBorder_C_OnScaleEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.OnTranslationEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_TweenBorder_C::OnTranslationEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.OnTranslationEnd__DelegateSignature");

	UUI_TweenBorder_C_OnTranslationEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TweenBorder.UI_TweenBorder_C.OnColorEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_TweenBorder_C::OnColorEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TweenBorder.UI_TweenBorder_C.OnColorEnd__DelegateSignature");

	UUI_TweenBorder_C_OnColorEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
