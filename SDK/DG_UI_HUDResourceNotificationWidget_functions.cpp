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

// Function UI_HUDResourceNotificationWidget.UI_HUDResourceNotificationWidget_C.SetDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Amount                         (Parm)
// TEnumAsByte<Enum_NotifyProgressType> ProgressType                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TypeText                       (Parm)
// struct FText                   NameText                       (Parm)
// TEnumAsByte<ETextJustify>      Justification                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDResourceNotificationWidget_C::SetDetails(const struct FText& Amount, TEnumAsByte<Enum_NotifyProgressType> ProgressType, const struct FText& TypeText, const struct FText& NameText, TEnumAsByte<ETextJustify> Justification, class UTexture2D* Icon, bool Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDResourceNotificationWidget.UI_HUDResourceNotificationWidget_C.SetDetails");

	UUI_HUDResourceNotificationWidget_C_SetDetails_Params params;
	params.Amount = Amount;
	params.ProgressType = ProgressType;
	params.TypeText = TypeText;
	params.NameText = NameText;
	params.Justification = Justification;
	params.Icon = Icon;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDResourceNotificationWidget.UI_HUDResourceNotificationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HUDResourceNotificationWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDResourceNotificationWidget.UI_HUDResourceNotificationWidget_C.Construct");

	UUI_HUDResourceNotificationWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDResourceNotificationWidget.UI_HUDResourceNotificationWidget_C.ExecuteUbergraph_UI_HUDResourceNotificationWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDResourceNotificationWidget_C::ExecuteUbergraph_UI_HUDResourceNotificationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDResourceNotificationWidget.UI_HUDResourceNotificationWidget_C.ExecuteUbergraph_UI_HUDResourceNotificationWidget");

	UUI_HUDResourceNotificationWidget_C_ExecuteUbergraph_UI_HUDResourceNotificationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
