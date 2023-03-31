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

// Function env_globals.env_globals_C.UserConstructionScript
struct Aenv_globals_C_UserConstructionScript_Params
{
};

// Function env_globals.env_globals_C.CinStart
struct Aenv_globals_C_CinStart_Params
{
	struct FName                                       CinematicLevel;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function env_globals.env_globals_C.ReceiveBeginPlay
struct Aenv_globals_C_ReceiveBeginPlay_Params
{
};

// Function env_globals.env_globals_C.CinEnd
struct Aenv_globals_C_CinEnd_Params
{
	struct FName                                       CinematicLevel;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function env_globals.env_globals_C.ExecuteUbergraph_env_globals
struct Aenv_globals_C_ExecuteUbergraph_env_globals_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
