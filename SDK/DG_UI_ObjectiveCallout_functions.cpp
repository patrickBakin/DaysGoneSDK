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

// Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.SetDistanceTextVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ObjectiveCallout_C::SetDistanceTextVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.SetDistanceTextVisibility");

	UUI_ObjectiveCallout_C_SetDistanceTextVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             SlateColor                     (Parm)
// class UTextBlock*              Text                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ObjectiveCallout_C::SetTextColor(const struct FSlateColor& SlateColor, class UTextBlock* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.SetTextColor");

	UUI_ObjectiveCallout_C_SetTextColor_Params params;
	params.SlateColor = SlateColor;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.UpdateScreenPosition
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_ObjectiveCallout_C::UpdateScreenPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.UpdateScreenPosition");

	UUI_ObjectiveCallout_C_UpdateScreenPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              TransformToFollow              (Parm, IsPlainOldData)
// bool                           IsHudWidget                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveCategories> ObjectiveCategory              (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> ObjectiveType                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ObjectiveCallout_C::Init(const struct FTransform& TransformToFollow, bool IsHudWidget, TEnumAsByte<EObjectiveCategories> ObjectiveCategory, TEnumAsByte<EObjectiveVisualType> ObjectiveType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.Init");

	UUI_ObjectiveCallout_C_Init_Params params;
	params.TransformToFollow = TransformToFollow;
	params.IsHudWidget = IsHudWidget;
	params.ObjectiveCategory = ObjectiveCategory;
	params.ObjectiveType = ObjectiveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ObjectiveCallout_C::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.SetVisible");

	UUI_ObjectiveCallout_C_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_ObjectiveCallout_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.Construct");

	UUI_ObjectiveCallout_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.StoreIconsInBlueprint
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_ObjectiveCallout_C::StoreIconsInBlueprint()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.StoreIconsInBlueprint");

	UUI_ObjectiveCallout_C_StoreIconsInBlueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.SetIconVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ObjectiveCallout_C::SetIconVisibility(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.SetIconVisibility");

	UUI_ObjectiveCallout_C_SetIconVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.ExecuteUbergraph_UI_ObjectiveCallout
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_ObjectiveCallout_C::ExecuteUbergraph_UI_ObjectiveCallout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.ExecuteUbergraph_UI_ObjectiveCallout");

	UUI_ObjectiveCallout_C_ExecuteUbergraph_UI_ObjectiveCallout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
