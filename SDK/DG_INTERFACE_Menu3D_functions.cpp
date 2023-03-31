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

// Function INTERFACE_Menu3D.INTERFACE_Menu3D_C.GetStorylinesMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Storylines_Menu_C*   StorylinesMenu                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UINTERFACE_Menu3D_C::GetStorylinesMenu(class UUI_Storylines_Menu_C** StorylinesMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function INTERFACE_Menu3D.INTERFACE_Menu3D_C.GetStorylinesMenu");

	UINTERFACE_Menu3D_C_GetStorylinesMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StorylinesMenu != nullptr)
		*StorylinesMenu = params.StorylinesMenu;
}


// Function INTERFACE_Menu3D.INTERFACE_Menu3D_C.DisplayMenu_For3D
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        MenuTypes                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NoAnimation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UINTERFACE_Menu3D_C::DisplayMenu_For3D(TEnumAsByte<EMenuTypes> MenuTypes, bool NoAnimation, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function INTERFACE_Menu3D.INTERFACE_Menu3D_C.DisplayMenu_For3D");

	UINTERFACE_Menu3D_C_DisplayMenu_For3D_Params params;
	params.MenuTypes = MenuTypes;
	params.NoAnimation = NoAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found != nullptr)
		*Found = params.Found;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
