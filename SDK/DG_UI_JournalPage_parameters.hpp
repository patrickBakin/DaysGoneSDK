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

// Function UI_JournalPage.UI_JournalPage_C.CircleSelectionInputGiven
struct UUI_JournalPage_C_CircleSelectionInputGiven_Params
{
};

// Function UI_JournalPage.UI_JournalPage_C.Construct
struct UUI_JournalPage_C_Construct_Params
{
};

// Function UI_JournalPage.UI_JournalPage_C.CrossSelectionInputGiven
struct UUI_JournalPage_C_CrossSelectionInputGiven_Params
{
};

// Function UI_JournalPage.UI_JournalPage_C.R1orL1SelectionInputGiven
struct UUI_JournalPage_C_R1orL1SelectionInputGiven_Params
{
	bool*                                              R2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_JournalPage.UI_JournalPage_C.ExecuteUbergraph_UI_JournalPage
struct UUI_JournalPage_C_ExecuteUbergraph_UI_JournalPage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
