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

// Function UI_HUDObjectiveUnlocked.UI_HUDObjectiveUnlocked_C.SetDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)
// struct FLinearColor            AccentColor                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDObjectiveUnlocked_C::SetDetails(const struct FText& Title, const struct FLinearColor& AccentColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDObjectiveUnlocked.UI_HUDObjectiveUnlocked_C.SetDetails");

	UUI_HUDObjectiveUnlocked_C_SetDetails_Params params;
	params.Title = Title;
	params.AccentColor = AccentColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDObjectiveUnlocked.UI_HUDObjectiveUnlocked_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HUDObjectiveUnlocked_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDObjectiveUnlocked.UI_HUDObjectiveUnlocked_C.Construct");

	UUI_HUDObjectiveUnlocked_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDObjectiveUnlocked.UI_HUDObjectiveUnlocked_C.ExecuteUbergraph_UI_HUDObjectiveUnlocked
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDObjectiveUnlocked_C::ExecuteUbergraph_UI_HUDObjectiveUnlocked(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDObjectiveUnlocked.UI_HUDObjectiveUnlocked_C.ExecuteUbergraph_UI_HUDObjectiveUnlocked");

	UUI_HUDObjectiveUnlocked_C_ExecuteUbergraph_UI_HUDObjectiveUnlocked_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
