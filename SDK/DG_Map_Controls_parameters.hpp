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

// Function Map_Controls.Map_Controls_C.IsInPhotoMode
struct AMap_Controls_C_IsInPhotoMode_Params
{
	bool                                               Photo_Mode_Active;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Map_Controls.Map_Controls_C.ForceCloseWeaponWheel
struct AMap_Controls_C_ForceCloseWeaponWheel_Params
{
};

// Function Map_Controls.Map_Controls_C.UserConstructionScript
struct AMap_Controls_C_UserConstructionScript_Params
{
};

// Function Map_Controls.Map_Controls_C.InpTchEvt_UniqueObjectNameForCooking_1069601
struct AMap_Controls_C_InpTchEvt_UniqueObjectNameForCooking_1069601_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Map_Controls.Map_Controls_C.InpTchEvt_UniqueObjectNameForCooking_1069600
struct AMap_Controls_C_InpTchEvt_UniqueObjectNameForCooking_1069600_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Map_Controls.Map_Controls_C.InpTchEvt_UniqueObjectNameForCooking_1069599
struct AMap_Controls_C_InpTchEvt_UniqueObjectNameForCooking_1069599_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Map_Controls.Map_Controls_C.InpActEvt_TogglePauseMenu_Map_UniqueObjectNameForCooking_220
struct AMap_Controls_C_InpActEvt_TogglePauseMenu_Map_UniqueObjectNameForCooking_220_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function Map_Controls.Map_Controls_C.InpActEvt_TogglePauseMenu_Map_UniqueObjectNameForCooking_219
struct AMap_Controls_C_InpActEvt_TogglePauseMenu_Map_UniqueObjectNameForCooking_219_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function Map_Controls.Map_Controls_C.InpActEvt_TogglePauseMenu_Skills_UniqueObjectNameForCooking_218
struct AMap_Controls_C_InpActEvt_TogglePauseMenu_Skills_UniqueObjectNameForCooking_218_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function Map_Controls.Map_Controls_C.InpActEvt_TogglePauseMenu_Inventory_UniqueObjectNameForCooking_217
struct AMap_Controls_C_InpActEvt_TogglePauseMenu_Inventory_UniqueObjectNameForCooking_217_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function Map_Controls.Map_Controls_C.InpActEvt_TogglePauseMenu_Storylines_UniqueObjectNameForCooking_216
struct AMap_Controls_C_InpActEvt_TogglePauseMenu_Storylines_UniqueObjectNameForCooking_216_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function Map_Controls.Map_Controls_C.InpActEvt_TogglePauseMenu_MapPC_UniqueObjectNameForCooking_215
struct AMap_Controls_C_InpActEvt_TogglePauseMenu_MapPC_UniqueObjectNameForCooking_215_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function Map_Controls.Map_Controls_C.InpActEvt_DLC_QuickMenu_UniqueObjectNameForCooking_214
struct AMap_Controls_C_InpActEvt_DLC_QuickMenu_UniqueObjectNameForCooking_214_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function Map_Controls.Map_Controls_C.InpActEvt_DLC_QuickMenu_UniqueObjectNameForCooking_213
struct AMap_Controls_C_InpActEvt_DLC_QuickMenu_UniqueObjectNameForCooking_213_Params
{
	struct FKey                                        Key;                                                      // (Parm)
};

// Function Map_Controls.Map_Controls_C.ReceiveBeginPlay
struct AMap_Controls_C_ReceiveBeginPlay_Params
{
};

// Function Map_Controls.Map_Controls_C.ReceiveActorOnInputEnabled
struct AMap_Controls_C_ReceiveActorOnInputEnabled_Params
{
};

// Function Map_Controls.Map_Controls_C.ReceiveActorOnInputDisabled
struct AMap_Controls_C_ReceiveActorOnInputDisabled_Params
{
};

// Function Map_Controls.Map_Controls_C.InputFlickUp
struct AMap_Controls_C_InputFlickUp_Params
{
};

// Function Map_Controls.Map_Controls_C.InputFlickLeft
struct AMap_Controls_C_InputFlickLeft_Params
{
};

// Function Map_Controls.Map_Controls_C.InputFlickRight
struct AMap_Controls_C_InputFlickRight_Params
{
};

// Function Map_Controls.Map_Controls_C.InputFlickDown
struct AMap_Controls_C_InputFlickDown_Params
{
};

// Function Map_Controls.Map_Controls_C.Toggle DLC Dashboard
struct AMap_Controls_C_Toggle_DLC_Dashboard_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Map_Controls.Map_Controls_C.ExecuteUbergraph_Map_Controls
struct AMap_Controls_C_ExecuteUbergraph_Map_Controls_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
