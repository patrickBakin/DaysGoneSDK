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

// Function OpenWorldCorpses.OpenWorldCorpses_C.ToggleCorpseVisibility
struct AOpenWorldCorpses_C_ToggleCorpseVisibility_Params
{
	bool                                               NewHidden;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OpenWorldCorpses.OpenWorldCorpses_C.AddNewCorpseFlys
struct AOpenWorldCorpses_C_AddNewCorpseFlys_Params
{
};

// Function OpenWorldCorpses.OpenWorldCorpses_C.AddNewInternalMaggot
struct AOpenWorldCorpses_C_AddNewInternalMaggot_Params
{
};

// Function OpenWorldCorpses.OpenWorldCorpses_C.AddNewLimMaggot
struct AOpenWorldCorpses_C_AddNewLimMaggot_Params
{
};

// Function OpenWorldCorpses.OpenWorldCorpses_C.UserConstructionScript
struct AOpenWorldCorpses_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
