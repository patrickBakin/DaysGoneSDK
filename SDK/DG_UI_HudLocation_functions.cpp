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

// Function UI_HudLocation.UI_HudLocation_C.CreateProgressItem
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudLocation_C::CreateProgressItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudLocation.UI_HudLocation_C.CreateProgressItem");

	UUI_HudLocation_C_CreateProgressItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudLocation.UI_HudLocation_C.SetDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_HudLocation>  LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   locationName                   (Parm)
// float                          PercentComplete                (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentTrust                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentTrustMax                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETrustTier>        TrustTier                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentCredits                 (Parm, ZeroConstructor, IsPlainOldData)
// class UBendEncampmentData*     EncampmentData                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudLocation_C::SetDetails(TEnumAsByte<Enum_HudLocation> LocationType, const struct FText& locationName, float PercentComplete, int CurrentTrust, int CurrentTrustMax, TEnumAsByte<ETrustTier> TrustTier, int CurrentCredits, class UBendEncampmentData* EncampmentData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudLocation.UI_HudLocation_C.SetDetails");

	UUI_HudLocation_C_SetDetails_Params params;
	params.LocationType = LocationType;
	params.locationName = locationName;
	params.PercentComplete = PercentComplete;
	params.CurrentTrust = CurrentTrust;
	params.CurrentTrustMax = CurrentTrustMax;
	params.TrustTier = TrustTier;
	params.CurrentCredits = CurrentCredits;
	params.EncampmentData = EncampmentData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudLocation.UI_HudLocation_C.TweenVisible
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudLocation_C::TweenVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudLocation.UI_HudLocation_C.TweenVisible");

	UUI_HudLocation_C_TweenVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudLocation.UI_HudLocation_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudLocation_C::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudLocation.UI_HudLocation_C.SetVisible");

	UUI_HudLocation_C_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
