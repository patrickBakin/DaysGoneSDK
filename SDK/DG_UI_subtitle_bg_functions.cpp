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

// Function UI_subtitle_bg.UI_subtitle_bg_C.SetIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_subtitle_bg_C::SetIcon(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_subtitle_bg.UI_subtitle_bg_C.SetIcon");

	UUI_subtitle_bg_C_SetIcon_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_subtitle_bg.UI_subtitle_bg_C.SetJustification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETextJustify>      InJustification                (Parm, ZeroConstructor, IsPlainOldData)

void UUI_subtitle_bg_C::SetJustification(TEnumAsByte<ETextJustify> InJustification)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_subtitle_bg.UI_subtitle_bg_C.SetJustification");

	UUI_subtitle_bg_C_SetJustification_Params params;
	params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_subtitle_bg.UI_subtitle_bg_C.SetFont
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo          InFontInfo                     (Parm)

void UUI_subtitle_bg_C::SetFont(const struct FSlateFontInfo& InFontInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_subtitle_bg.UI_subtitle_bg_C.SetFont");

	UUI_subtitle_bg_C_SetFont_Params params;
	params.InFontInfo = InFontInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_subtitle_bg.UI_subtitle_bg_C.SetTextColorWithTween
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_subtitle_bg_C::SetTextColorWithTween(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_subtitle_bg.UI_subtitle_bg_C.SetTextColorWithTween");

	UUI_subtitle_bg_C_SetTextColorWithTween_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_subtitle_bg.UI_subtitle_bg_C.SetBorderColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_subtitle_bg_C::SetBorderColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_subtitle_bg.UI_subtitle_bg_C.SetBorderColor");

	UUI_subtitle_bg_C_SetBorderColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_subtitle_bg.UI_subtitle_bg_C.SetTranslationWithTween
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Translation                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_subtitle_bg_C::SetTranslationWithTween(const struct FVector2D& Translation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_subtitle_bg.UI_subtitle_bg_C.SetTranslationWithTween");

	UUI_subtitle_bg_C_SetTranslationWithTween_Params params;
	params.Translation = Translation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_subtitle_bg.UI_subtitle_bg_C.SetBorderColorWithTween
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_subtitle_bg_C::SetBorderColorWithTween(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_subtitle_bg.UI_subtitle_bg_C.SetBorderColorWithTween");

	UUI_subtitle_bg_C_SetBorderColorWithTween_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_subtitle_bg.UI_subtitle_bg_C.TweenBorderColor
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_subtitle_bg_C::TweenBorderColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_subtitle_bg.UI_subtitle_bg_C.TweenBorderColor");

	UUI_subtitle_bg_C_TweenBorderColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_subtitle_bg.UI_subtitle_bg_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_subtitle_bg_C::SetTextColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_subtitle_bg.UI_subtitle_bg_C.SetTextColor");

	UUI_subtitle_bg_C_SetTextColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_subtitle_bg.UI_subtitle_bg_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_subtitle_bg_C::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_subtitle_bg.UI_subtitle_bg_C.SetVisible");

	UUI_subtitle_bg_C_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_subtitle_bg.UI_subtitle_bg_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_subtitle_bg_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_subtitle_bg.UI_subtitle_bg_C.Init");

	UUI_subtitle_bg_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_subtitle_bg.UI_subtitle_bg_C.SetIconWithSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Width                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_subtitle_bg_C::SetIconWithSize(class UTexture2D* Texture, float Width, float Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_subtitle_bg.UI_subtitle_bg_C.SetIconWithSize");

	UUI_subtitle_bg_C_SetIconWithSize_Params params;
	params.Texture = Texture;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_subtitle_bg.UI_subtitle_bg_C.SetBorderOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Opacity                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_subtitle_bg_C::SetBorderOpacity(float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_subtitle_bg.UI_subtitle_bg_C.SetBorderOpacity");

	UUI_subtitle_bg_C_SetBorderOpacity_Params params;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_subtitle_bg.UI_subtitle_bg_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm)

void UUI_subtitle_bg_C::SetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_subtitle_bg.UI_subtitle_bg_C.SetText");

	UUI_subtitle_bg_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_subtitle_bg.UI_subtitle_bg_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_subtitle_bg_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_subtitle_bg.UI_subtitle_bg_C.Construct");

	UUI_subtitle_bg_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_subtitle_bg.UI_subtitle_bg_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_subtitle_bg_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_subtitle_bg.UI_subtitle_bg_C.Tick");

	UUI_subtitle_bg_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_subtitle_bg.UI_subtitle_bg_C.ExecuteUbergraph_UI_subtitle_bg
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_subtitle_bg_C::ExecuteUbergraph_UI_subtitle_bg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_subtitle_bg.UI_subtitle_bg_C.ExecuteUbergraph_UI_subtitle_bg");

	UUI_subtitle_bg_C_ExecuteUbergraph_UI_subtitle_bg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
