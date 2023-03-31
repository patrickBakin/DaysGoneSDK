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

// Function SHSE_JobScript.SHSE_JobScript_C.UserConstructionScript
struct ASHSE_JobScript_C_UserConstructionScript_Params
{
};

// Function SHSE_JobScript.SHSE_JobScript_C.I_InitializeJobScript
struct ASHSE_JobScript_C_I_InitializeJobScript_Params
{
};

// Function SHSE_JobScript.SHSE_JobScript_C.PlayTheCin
struct ASHSE_JobScript_C_PlayTheCin_Params
{
};

// Function SHSE_JobScript.SHSE_JobScript_C.OnFadingFinished_MM_Event_1
struct ASHSE_JobScript_C_OnFadingFinished_MM_Event_1_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function SHSE_JobScript.SHSE_JobScript_C.ExecuteUbergraph_SHSE_JobScript
struct ASHSE_JobScript_C_ExecuteUbergraph_SHSE_JobScript_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
