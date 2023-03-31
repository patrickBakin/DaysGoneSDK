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

// Function UI_SkillPage_Tutorial.UI_SkillPage_Tutorial_C.SetCategory
struct UUI_SkillPage_Tutorial_C_SetCategory_Params
{
	TEnumAsByte<ESkillClass>                           SkillClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillPage_Tutorial.UI_SkillPage_Tutorial_C.SetDescription
struct UUI_SkillPage_Tutorial_C_SetDescription_Params
{
	struct FText                                       Desc;                                                     // (Parm)
};

// Function UI_SkillPage_Tutorial.UI_SkillPage_Tutorial_C.Construct
struct UUI_SkillPage_Tutorial_C_Construct_Params
{
};

// Function UI_SkillPage_Tutorial.UI_SkillPage_Tutorial_C.ButtonHoldComplete
struct UUI_SkillPage_Tutorial_C_ButtonHoldComplete_Params
{
	class UUI_GridItem_Base_C**                        GridItemSelected;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillPage_Tutorial.UI_SkillPage_Tutorial_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_1469_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_SkillPage_Tutorial_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_1469_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_SkillPage_Tutorial.UI_SkillPage_Tutorial_C.CrossSelectionInputGiven
struct UUI_SkillPage_Tutorial_C_CrossSelectionInputGiven_Params
{
};

// Function UI_SkillPage_Tutorial.UI_SkillPage_Tutorial_C.ExecuteUbergraph_UI_SkillPage_Tutorial
struct UUI_SkillPage_Tutorial_C_ExecuteUbergraph_UI_SkillPage_Tutorial_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
