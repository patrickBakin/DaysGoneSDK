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

// Function UI_MerchantCallout.UI_MerchantCallout_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MerchantCallout_C::SetIcon(class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MerchantCallout.UI_MerchantCallout_C.SetIcon");

	UUI_MerchantCallout_C_SetIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MerchantCallout.UI_MerchantCallout_C.SetDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)
// class UTexture2D*              Icon                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   NotifyText                     (Parm)

void UUI_MerchantCallout_C::SetDetails(const struct FText& Title, class UTexture2D* Icon, const struct FText& NotifyText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MerchantCallout.UI_MerchantCallout_C.SetDetails");

	UUI_MerchantCallout_C_SetDetails_Params params;
	params.Title = Title;
	params.Icon = Icon;
	params.NotifyText = NotifyText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MerchantCallout.UI_MerchantCallout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MerchantCallout_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MerchantCallout.UI_MerchantCallout_C.Construct");

	UUI_MerchantCallout_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MerchantCallout.UI_MerchantCallout_C.SetVisibilityOverride
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateVisibility>* VisibilityType                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MerchantCallout_C::SetVisibilityOverride(TEnumAsByte<ESlateVisibility>* VisibilityType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MerchantCallout.UI_MerchantCallout_C.SetVisibilityOverride");

	UUI_MerchantCallout_C_SetVisibilityOverride_Params params;
	params.VisibilityType = VisibilityType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MerchantCallout.UI_MerchantCallout_C.SetNewItemsAvailable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MerchantCallout_C::SetNewItemsAvailable(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MerchantCallout.UI_MerchantCallout_C.SetNewItemsAvailable");

	UUI_MerchantCallout_C_SetNewItemsAvailable_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MerchantCallout.UI_MerchantCallout_C.ExecuteUbergraph_UI_MerchantCallout
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MerchantCallout_C::ExecuteUbergraph_UI_MerchantCallout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MerchantCallout.UI_MerchantCallout_C.ExecuteUbergraph_UI_MerchantCallout");

	UUI_MerchantCallout_C_ExecuteUbergraph_UI_MerchantCallout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
