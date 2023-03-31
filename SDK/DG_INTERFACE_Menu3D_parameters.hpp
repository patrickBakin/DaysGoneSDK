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

// Function INTERFACE_Menu3D.INTERFACE_Menu3D_C.GetStorylinesMenu
struct UINTERFACE_Menu3D_C_GetStorylinesMenu_Params
{
	class UUI_Storylines_Menu_C*                       StorylinesMenu;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function INTERFACE_Menu3D.INTERFACE_Menu3D_C.DisplayMenu_For3D
struct UINTERFACE_Menu3D_C_DisplayMenu_For3D_Params
{
	TEnumAsByte<EMenuTypes>                            MenuTypes;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NoAnimation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
