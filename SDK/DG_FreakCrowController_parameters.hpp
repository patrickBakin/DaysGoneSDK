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

// Function FreakCrowController.FreakCrowController_C.UserConstructionScript
struct AFreakCrowController_C_UserConstructionScript_Params
{
};

// Function FreakCrowController.FreakCrowController_C.OnNestBurningStarted
struct AFreakCrowController_C_OnNestBurningStarted_Params
{
};

// Function FreakCrowController.FreakCrowController_C.SetCrierNest
struct AFreakCrowController_C_SetCrierNest_Params
{
	class ACrierNest_C*                                CrierNest;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function FreakCrowController.FreakCrowController_C.ExecuteUbergraph_FreakCrowController
struct AFreakCrowController_C_ExecuteUbergraph_FreakCrowController_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
