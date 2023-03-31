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

// Function MissionScript_Interface.MissionScript_Interface_C.I_GetCurrentCheckpointCount
struct UMissionScript_Interface_C_I_GetCurrentCheckpointCount_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                MaxCount;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionScript_Interface.MissionScript_Interface_C.I_SetDoOnceVariables
struct UMissionScript_Interface_C_I_SetDoOnceVariables_Params
{
	int                                                HighestIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       init_d;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<bool>                                       Closed;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MissionScript_Interface.MissionScript_Interface_C.I_GetDoonceVariable
struct UMissionScript_Interface_C_I_GetDoonceVariable_Params
{
	TArray<bool>                                       init_d;                                                   // (Parm, OutParm, ZeroConstructor)
	TArray<bool>                                       Closed;                                                   // (Parm, OutParm, ZeroConstructor)
	int                                                highest_index_used;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
