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

// Function UI_HUDAmmoNotification.UI_HUDAmmoNotification_C.SetDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Amount                         (Parm)
// struct FText                   TypeText                       (Parm)
// struct FText                   NameText                       (Parm)
// TEnumAsByte<ETextJustify>      Justification                  (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Type                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_NotifyProgressType> ProgressType                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDAmmoNotification_C::SetDetails(const struct FText& Amount, const struct FText& TypeText, const struct FText& NameText, TEnumAsByte<ETextJustify> Justification, class UTexture2D* Icon, bool Type, TEnumAsByte<Enum_NotifyProgressType> ProgressType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDAmmoNotification.UI_HUDAmmoNotification_C.SetDetails");

	UUI_HUDAmmoNotification_C_SetDetails_Params params;
	params.Amount = Amount;
	params.TypeText = TypeText;
	params.NameText = NameText;
	params.Justification = Justification;
	params.Icon = Icon;
	params.Type = Type;
	params.ProgressType = ProgressType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDAmmoNotification.UI_HUDAmmoNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HUDAmmoNotification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDAmmoNotification.UI_HUDAmmoNotification_C.Construct");

	UUI_HUDAmmoNotification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDAmmoNotification.UI_HUDAmmoNotification_C.ExecuteUbergraph_UI_HUDAmmoNotification
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDAmmoNotification_C::ExecuteUbergraph_UI_HUDAmmoNotification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDAmmoNotification.UI_HUDAmmoNotification_C.ExecuteUbergraph_UI_HUDAmmoNotification");

	UUI_HUDAmmoNotification_C_ExecuteUbergraph_UI_HUDAmmoNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
