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

// Function UI_SkillPage_SkillAcquired.UI_SkillPage_SkillAcquired_C.SetTutorialData
struct UUI_SkillPage_SkillAcquired_C_SetTutorialData_Params
{
	struct FText                                       Title;                                                    // (Parm)
};

// Function UI_SkillPage_SkillAcquired.UI_SkillPage_SkillAcquired_C.Construct
struct UUI_SkillPage_SkillAcquired_C_Construct_Params
{
};

// Function UI_SkillPage_SkillAcquired.UI_SkillPage_SkillAcquired_C.ButtonHoldComplete
struct UUI_SkillPage_SkillAcquired_C_ButtonHoldComplete_Params
{
	class UUI_GridItem_Base_C**                        GridItemSelected;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillPage_SkillAcquired.UI_SkillPage_SkillAcquired_C.CrossSelectionInputGiven
struct UUI_SkillPage_SkillAcquired_C_CrossSelectionInputGiven_Params
{
};

// Function UI_SkillPage_SkillAcquired.UI_SkillPage_SkillAcquired_C.MenuSelected
struct UUI_SkillPage_SkillAcquired_C_MenuSelected_Params
{
	bool*                                              Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_SkillPage_SkillAcquired.UI_SkillPage_SkillAcquired_C.OnAnimationFinished_Event_1
struct UUI_SkillPage_SkillAcquired_C_OnAnimationFinished_Event_1_Params
{
};

// Function UI_SkillPage_SkillAcquired.UI_SkillPage_SkillAcquired_C.ExecuteUbergraph_UI_SkillPage_SkillAcquired
struct UUI_SkillPage_SkillAcquired_C_ExecuteUbergraph_UI_SkillPage_SkillAcquired_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
