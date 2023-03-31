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

// Function UI_GunLocker.UI_GunLocker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GunLocker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GunLocker.UI_GunLocker_C.Construct");

	UUI_GunLocker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GunLocker.UI_GunLocker_C.SetVisibilityOverride
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateVisibility>* VisibilityType                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GunLocker_C::SetVisibilityOverride(TEnumAsByte<ESlateVisibility>* VisibilityType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GunLocker.UI_GunLocker_C.SetVisibilityOverride");

	UUI_GunLocker_C_SetVisibilityOverride_Params params;
	params.VisibilityType = VisibilityType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GunLocker.UI_GunLocker_C.DisplayNewItemsNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShouldDisplay                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GunLocker_C::DisplayNewItemsNotification(bool bShouldDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GunLocker.UI_GunLocker_C.DisplayNewItemsNotification");

	UUI_GunLocker_C_DisplayNewItemsNotification_Params params;
	params.bShouldDisplay = bShouldDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GunLocker.UI_GunLocker_C.ExecuteUbergraph_UI_GunLocker
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GunLocker_C::ExecuteUbergraph_UI_GunLocker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GunLocker.UI_GunLocker_C.ExecuteUbergraph_UI_GunLocker");

	UUI_GunLocker_C_ExecuteUbergraph_UI_GunLocker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
