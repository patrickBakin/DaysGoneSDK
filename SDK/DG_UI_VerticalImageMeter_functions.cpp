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

// Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.SetDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_VerticalImageMeter_C::SetDetails(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.SetDetails");

	UUI_VerticalImageMeter_C_SetDetails_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.SetBGColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_VerticalImageMeter_C::SetBGColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.SetBGColor");

	UUI_VerticalImageMeter_C_SetBGColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.SetTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_VerticalImageMeter_C::SetTexture(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.SetTexture");

	UUI_VerticalImageMeter_C_SetTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.SetColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Current                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Max                            (Parm, ZeroConstructor, IsPlainOldData)

void UUI_VerticalImageMeter_C::SetColors(const struct FLinearColor& Current, const struct FLinearColor& Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.SetColors");

	UUI_VerticalImageMeter_C_SetColors_Params params;
	params.Current = Current;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Current                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_VerticalImageMeter_C::SetPercent(float Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.SetPercent");

	UUI_VerticalImageMeter_C_SetPercent_Params params;
	params.Current = Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_VerticalImageMeter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.Construct");

	UUI_VerticalImageMeter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_VerticalImageMeter_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.Tick");

	UUI_VerticalImageMeter_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.ExecuteUbergraph_UI_VerticalImageMeter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_VerticalImageMeter_C::ExecuteUbergraph_UI_VerticalImageMeter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.ExecuteUbergraph_UI_VerticalImageMeter");

	UUI_VerticalImageMeter_C_ExecuteUbergraph_UI_VerticalImageMeter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.StoppedAnimating__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_VerticalImageMeter_C::StoppedAnimating__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_VerticalImageMeter.UI_VerticalImageMeter_C.StoppedAnimating__DelegateSignature");

	UUI_VerticalImageMeter_C_StoppedAnimating__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
