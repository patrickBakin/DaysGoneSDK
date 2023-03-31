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

// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.SetIconColorBasedOnPercent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Fuel                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDMotorcycleWidget_C::SetIconColorBasedOnPercent(bool Fuel, float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.SetIconColorBasedOnPercent");

	UUI_HUDMotorcycleWidget_C_SetIconColorBasedOnPercent_Params params;
	params.Fuel = Fuel;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.SetAmmoCounts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HUDMotorcycleWidget_C::SetAmmoCounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.SetAmmoCounts");

	UUI_HUDMotorcycleWidget_C_SetAmmoCounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDMotorcycleWidget_C::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.SetVisible");

	UUI_HUDMotorcycleWidget_C_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.CheckBikeRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRange                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HUDMotorcycleWidget_C::CheckBikeRange(bool* InRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.CheckBikeRange");

	UUI_HUDMotorcycleWidget_C_CheckBikeRange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InRange != nullptr)
		*InRange = params.InRange;
}


// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.UpdateBikeBoost
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDMotorcycleWidget_C::UpdateBikeBoost(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.UpdateBikeBoost");

	UUI_HUDMotorcycleWidget_C_UpdateBikeBoost_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.UpdateBikeFuel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDMotorcycleWidget_C::UpdateBikeFuel(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.UpdateBikeFuel");

	UUI_HUDMotorcycleWidget_C_UpdateBikeFuel_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HUDMotorcycleWidget_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.Init");

	UUI_HUDMotorcycleWidget_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.UpdateBikeDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDMotorcycleWidget_C::UpdateBikeDamage(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.UpdateBikeDamage");

	UUI_HUDMotorcycleWidget_C_UpdateBikeDamage_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HUDMotorcycleWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.Construct");

	UUI_HUDMotorcycleWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.OnPlayerReloadFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_HUDMotorcycleWidget_C::OnPlayerReloadFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.OnPlayerReloadFinished");

	UUI_HUDMotorcycleWidget_C_OnPlayerReloadFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.OnWeaponFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDMotorcycleWidget_C::OnWeaponFired(class ABendWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.OnWeaponFired");

	UUI_HUDMotorcycleWidget_C_OnWeaponFired_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.OnMissionComplete_MM_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDMotorcycleWidget_C::OnMissionComplete_MM_Event_1(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.OnMissionComplete_MM_Event_1");

	UUI_HUDMotorcycleWidget_C_OnMissionComplete_MM_Event_1_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.OnPlayerRespawned_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPlayerController*   PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDMotorcycleWidget_C::OnPlayerRespawned_Event_1(class ABendPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.OnPlayerRespawned_Event_1");

	UUI_HUDMotorcycleWidget_C_OnPlayerRespawned_Event_1_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.OnHideWeaponUIToggle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HideWpnUI                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDMotorcycleWidget_C::OnHideWeaponUIToggle(bool HideWpnUI)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.OnHideWeaponUIToggle");

	UUI_HUDMotorcycleWidget_C_OnHideWeaponUIToggle_Params params;
	params.HideWpnUI = HideWpnUI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.ExecuteUbergraph_UI_HUDMotorcycleWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUDMotorcycleWidget_C::ExecuteUbergraph_UI_HUDMotorcycleWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.ExecuteUbergraph_UI_HUDMotorcycleWidget");

	UUI_HUDMotorcycleWidget_C_ExecuteUbergraph_UI_HUDMotorcycleWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
