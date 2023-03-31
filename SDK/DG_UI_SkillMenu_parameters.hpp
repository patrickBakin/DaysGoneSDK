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

// Function UI_SkillMenu.UI_SkillMenu_C.UpdateSubMenuLocations
struct UUI_SkillMenu_C_UpdateSubMenuLocations_Params
{
};

// Function UI_SkillMenu.UI_SkillMenu_C.DisplaySubmenus
struct UUI_SkillMenu_C_DisplaySubmenus_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillMenu.UI_SkillMenu_C.Initialize
struct UUI_SkillMenu_C_Initialize_Params
{
};

// Function UI_SkillMenu.UI_SkillMenu_C.GoToPageByType
struct UUI_SkillMenu_C_GoToPageByType_Params
{
	TEnumAsByte<ENUM_Menu_Type>*                       MenuType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillMenu.UI_SkillMenu_C.Construct
struct UUI_SkillMenu_C_Construct_Params
{
};

// Function UI_SkillMenu.UI_SkillMenu_C.Tick
struct UUI_SkillMenu_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillMenu.UI_SkillMenu_C.DisplayAlternateNavigation
struct UUI_SkillMenu_C_DisplayAlternateNavigation_Params
{
	bool*                                              State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillMenu.UI_SkillMenu_C.SetNavigationState
struct UUI_SkillMenu_C_SetNavigationState_Params
{
	TEnumAsByte<EMenuTypes>*                           Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillMenu.UI_SkillMenu_C.FlushStaticImages
struct UUI_SkillMenu_C_FlushStaticImages_Params
{
};

// Function UI_SkillMenu.UI_SkillMenu_C.InitStaticImages
struct UUI_SkillMenu_C_InitStaticImages_Params
{
};

// Function UI_SkillMenu.UI_SkillMenu_C.BndEvt__Main_page_K2Node_ComponentBoundEvent_797_OnMenuClicked__DelegateSignature
struct UUI_SkillMenu_C_BndEvt__Main_page_K2Node_ComponentBoundEvent_797_OnMenuClicked__DelegateSignature_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillMenu.UI_SkillMenu_C.BndEvt__Main_page_K2Node_ComponentBoundEvent_2106_OnGoToNextPage__DelegateSignature
struct UUI_SkillMenu_C_BndEvt__Main_page_K2Node_ComponentBoundEvent_2106_OnGoToNextPage__DelegateSignature_Params
{
};

// Function UI_SkillMenu.UI_SkillMenu_C.BndEvt__Main_page_K2Node_ComponentBoundEvent_2109_OnGoToPrevPage__DelegateSignature
struct UUI_SkillMenu_C_BndEvt__Main_page_K2Node_ComponentBoundEvent_2109_OnGoToPrevPage__DelegateSignature_Params
{
};

// Function UI_SkillMenu.UI_SkillMenu_C.ExecuteUbergraph_UI_SkillMenu
struct UUI_SkillMenu_C_ExecuteUbergraph_UI_SkillMenu_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillMenu.UI_SkillMenu_C.OnGoToPrevPage__DelegateSignature
struct UUI_SkillMenu_C_OnGoToPrevPage__DelegateSignature_Params
{
};

// Function UI_SkillMenu.UI_SkillMenu_C.OnGoToNextPage__DelegateSignature
struct UUI_SkillMenu_C_OnGoToNextPage__DelegateSignature_Params
{
};

// Function UI_SkillMenu.UI_SkillMenu_C.OnMenuClicked__DelegateSignature
struct UUI_SkillMenu_C_OnMenuClicked__DelegateSignature_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
