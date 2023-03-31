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

// Function UI_Storylines_Menu.UI_Storylines_Menu_C.UpdateSubMenuLocations
struct UUI_Storylines_Menu_C_UpdateSubMenuLocations_Params
{
};

// Function UI_Storylines_Menu.UI_Storylines_Menu_C.DisplaySubmenus
struct UUI_Storylines_Menu_C_DisplaySubmenus_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Storylines_Menu.UI_Storylines_Menu_C.GoToPageByType
struct UUI_Storylines_Menu_C_GoToPageByType_Params
{
	TEnumAsByte<ENUM_Menu_Type>*                       MenuType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Storylines_Menu.UI_Storylines_Menu_C.Construct
struct UUI_Storylines_Menu_C_Construct_Params
{
};

// Function UI_Storylines_Menu.UI_Storylines_Menu_C.Tick
struct UUI_Storylines_Menu_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Storylines_Menu.UI_Storylines_Menu_C.DisplayAlternateNavigation
struct UUI_Storylines_Menu_C_DisplayAlternateNavigation_Params
{
	bool*                                              State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Storylines_Menu.UI_Storylines_Menu_C.SetNavigationState
struct UUI_Storylines_Menu_C_SetNavigationState_Params
{
	TEnumAsByte<EMenuTypes>*                           Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Storylines_Menu.UI_Storylines_Menu_C.InitStaticImages
struct UUI_Storylines_Menu_C_InitStaticImages_Params
{
};

// Function UI_Storylines_Menu.UI_Storylines_Menu_C.FlushStaticImages
struct UUI_Storylines_Menu_C_FlushStaticImages_Params
{
};

// Function UI_Storylines_Menu.UI_Storylines_Menu_C.BndEvt__MainPage_K2Node_ComponentBoundEvent_2344_OnGoToNextPage__DelegateSignature
struct UUI_Storylines_Menu_C_BndEvt__MainPage_K2Node_ComponentBoundEvent_2344_OnGoToNextPage__DelegateSignature_Params
{
};

// Function UI_Storylines_Menu.UI_Storylines_Menu_C.BndEvt__MainPage_K2Node_ComponentBoundEvent_2346_OnGoToPrevPage__DelegateSignature
struct UUI_Storylines_Menu_C_BndEvt__MainPage_K2Node_ComponentBoundEvent_2346_OnGoToPrevPage__DelegateSignature_Params
{
};

// Function UI_Storylines_Menu.UI_Storylines_Menu_C.BndEvt__MainPage_K2Node_ComponentBoundEvent_2349_OnRequestClose__DelegateSignature
struct UUI_Storylines_Menu_C_BndEvt__MainPage_K2Node_ComponentBoundEvent_2349_OnRequestClose__DelegateSignature_Params
{
};

// Function UI_Storylines_Menu.UI_Storylines_Menu_C.BndEvt__MainPage_K2Node_ComponentBoundEvent_2868_OnMenuClicked__DelegateSignature
struct UUI_Storylines_Menu_C_BndEvt__MainPage_K2Node_ComponentBoundEvent_2868_OnMenuClicked__DelegateSignature_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Storylines_Menu.UI_Storylines_Menu_C.BndEvt__Storylines_Active_K2Node_ComponentBoundEvent_2927_OnMenuClicked__DelegateSignature
struct UUI_Storylines_Menu_C_BndEvt__Storylines_Active_K2Node_ComponentBoundEvent_2927_OnMenuClicked__DelegateSignature_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Storylines_Menu.UI_Storylines_Menu_C.BndEvt__Storylines_Complete_K2Node_ComponentBoundEvent_2933_OnMenuClicked__DelegateSignature
struct UUI_Storylines_Menu_C_BndEvt__Storylines_Complete_K2Node_ComponentBoundEvent_2933_OnMenuClicked__DelegateSignature_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Storylines_Menu.UI_Storylines_Menu_C.ExecuteUbergraph_UI_Storylines_Menu
struct UUI_Storylines_Menu_C_ExecuteUbergraph_UI_Storylines_Menu_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Storylines_Menu.UI_Storylines_Menu_C.OnMenuClicked__DelegateSignature
struct UUI_Storylines_Menu_C_OnMenuClicked__DelegateSignature_Params
{
	TEnumAsByte<EMenuTypes>                            Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Storylines_Menu.UI_Storylines_Menu_C.OnGoToPrevPage__DelegateSignature
struct UUI_Storylines_Menu_C_OnGoToPrevPage__DelegateSignature_Params
{
};

// Function UI_Storylines_Menu.UI_Storylines_Menu_C.OnGoToNextPage__DelegateSignature
struct UUI_Storylines_Menu_C_OnGoToNextPage__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
