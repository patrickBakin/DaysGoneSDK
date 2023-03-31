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

// Function InteractCinVisController.InteractCinVisController_C.UserConstructionScript
struct AInteractCinVisController_C_UserConstructionScript_Params
{
};

// Function InteractCinVisController.InteractCinVisController_C.ReceiveBeginPlay
struct AInteractCinVisController_C_ReceiveBeginPlay_Params
{
};

// Function InteractCinVisController.InteractCinVisController_C.CinematicEnd
struct AInteractCinVisController_C_CinematicEnd_Params
{
	struct FName                                       CinematicLevel;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function InteractCinVisController.InteractCinVisController_C.CinematicStart
struct AInteractCinVisController_C_CinematicStart_Params
{
	struct FName                                       CinematicLevel;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function InteractCinVisController.InteractCinVisController_C.ExecuteUbergraph_InteractCinVisController
struct AInteractCinVisController_C_ExecuteUbergraph_InteractCinVisController_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
