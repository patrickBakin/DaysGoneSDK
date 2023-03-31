#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.SetIconColorBasedOnPercent
struct UUI_HUDMotorcycleWidget_C_SetIconColorBasedOnPercent_Params
{
	bool                                               Fuel;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.SetAmmoCounts
struct UUI_HUDMotorcycleWidget_C_SetAmmoCounts_Params
{
};

// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.SetVisible
struct UUI_HUDMotorcycleWidget_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.CheckBikeRange
struct UUI_HUDMotorcycleWidget_C_CheckBikeRange_Params
{
	bool                                               InRange;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.UpdateBikeBoost
struct UUI_HUDMotorcycleWidget_C_UpdateBikeBoost_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.UpdateBikeFuel
struct UUI_HUDMotorcycleWidget_C_UpdateBikeFuel_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.Init
struct UUI_HUDMotorcycleWidget_C_Init_Params
{
};

// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.UpdateBikeDamage
struct UUI_HUDMotorcycleWidget_C_UpdateBikeDamage_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.Construct
struct UUI_HUDMotorcycleWidget_C_Construct_Params
{
};

// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.OnPlayerReloadFinished
struct UUI_HUDMotorcycleWidget_C_OnPlayerReloadFinished_Params
{
};

// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.OnWeaponFired
struct UUI_HUDMotorcycleWidget_C_OnWeaponFired_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.OnMissionComplete_MM_Event_1
struct UUI_HUDMotorcycleWidget_C_OnMissionComplete_MM_Event_1_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.OnPlayerRespawned_Event_1
struct UUI_HUDMotorcycleWidget_C_OnPlayerRespawned_Event_1_Params
{
	class ABendPlayerController*                       PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.OnHideWeaponUIToggle
struct UUI_HUDMotorcycleWidget_C_OnHideWeaponUIToggle_Params
{
	bool                                               HideWpnUI;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HUDMotorcycleWidget.UI_HUDMotorcycleWidget_C.ExecuteUbergraph_UI_HUDMotorcycleWidget
struct UUI_HUDMotorcycleWidget_C_ExecuteUbergraph_UI_HUDMotorcycleWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
