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

// Function UI_HUDBannerNotificationWidget.UI_HUDBannerNotificationWidget_C.SetDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)
// TEnumAsByte<Enum_BannerType>   BannerType                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUI_HudNotificationType> NotificationType               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDBannerNotificationWidget_C::SetDetails(const struct FText& Title, const struct FText& SubTitle, TEnumAsByte<Enum_BannerType> BannerType, float Value, TEnumAsByte<EUI_HudNotificationType> NotificationType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDBannerNotificationWidget.UI_HUDBannerNotificationWidget_C.SetDetails");

	UUI_HUDBannerNotificationWidget_C_SetDetails_Params params;
	params.Title = Title;
	params.SubTitle = SubTitle;
	params.BannerType = BannerType;
	params.Value = Value;
	params.NotificationType = NotificationType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDBannerNotificationWidget.UI_HUDBannerNotificationWidget_C.DisplayFastTravelAward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)

void UUI_HUDBannerNotificationWidget_C::DisplayFastTravelAward(const struct FText& Title, const struct FText& SubTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDBannerNotificationWidget.UI_HUDBannerNotificationWidget_C.DisplayFastTravelAward");

	UUI_HUDBannerNotificationWidget_C_DisplayFastTravelAward_Params params;
	params.Title = Title;
	params.SubTitle = SubTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDBannerNotificationWidget.UI_HUDBannerNotificationWidget_C.DisplayTrustAward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)

void UUI_HUDBannerNotificationWidget_C::DisplayTrustAward(const struct FText& Title, const struct FText& SubTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDBannerNotificationWidget.UI_HUDBannerNotificationWidget_C.DisplayTrustAward");

	UUI_HUDBannerNotificationWidget_C_DisplayTrustAward_Params params;
	params.Title = Title;
	params.SubTitle = SubTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDBannerNotificationWidget.UI_HUDBannerNotificationWidget_C.DisplaySkillPointAward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)

void UUI_HUDBannerNotificationWidget_C::DisplaySkillPointAward(const struct FText& Title, const struct FText& SubTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDBannerNotificationWidget.UI_HUDBannerNotificationWidget_C.DisplaySkillPointAward");

	UUI_HUDBannerNotificationWidget_C_DisplaySkillPointAward_Params params;
	params.Title = Title;
	params.SubTitle = SubTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDBannerNotificationWidget.UI_HUDBannerNotificationWidget_C.DisplayAttributeAward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_BannerType>   Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDBannerNotificationWidget_C::DisplayAttributeAward(TEnumAsByte<Enum_BannerType> Type, const struct FText& Title, const struct FText& SubTitle, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDBannerNotificationWidget.UI_HUDBannerNotificationWidget_C.DisplayAttributeAward");

	UUI_HUDBannerNotificationWidget_C_DisplayAttributeAward_Params params;
	params.Type = Type;
	params.Title = Title;
	params.SubTitle = SubTitle;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDBannerNotificationWidget.UI_HUDBannerNotificationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HUDBannerNotificationWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDBannerNotificationWidget.UI_HUDBannerNotificationWidget_C.Construct");

	UUI_HUDBannerNotificationWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDBannerNotificationWidget.UI_HUDBannerNotificationWidget_C.ExecuteUbergraph_UI_HUDBannerNotificationWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDBannerNotificationWidget_C::ExecuteUbergraph_UI_HUDBannerNotificationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDBannerNotificationWidget.UI_HUDBannerNotificationWidget_C.ExecuteUbergraph_UI_HUDBannerNotificationWidget");

	UUI_HUDBannerNotificationWidget_C_ExecuteUbergraph_UI_HUDBannerNotificationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
