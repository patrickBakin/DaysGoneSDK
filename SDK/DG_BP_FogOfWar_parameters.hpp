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

// Function BP_FogOfWar.BP_FogOfWar_C.SetVisibility
struct ABP_FogOfWar_C_SetVisibility_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FogOfWar.BP_FogOfWar_C.UserConstructionScript
struct ABP_FogOfWar_C_UserConstructionScript_Params
{
};

// Function BP_FogOfWar.BP_FogOfWar_C.ReceiveBeginPlay
struct ABP_FogOfWar_C_ReceiveBeginPlay_Params
{
};

// Function BP_FogOfWar.BP_FogOfWar_C.OnMissionBegin_MM_Event_1
struct ABP_FogOfWar_C_OnMissionBegin_MM_Event_1_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FogOfWar.BP_FogOfWar_C.ExecuteUbergraph_BP_FogOfWar
struct ABP_FogOfWar_C_ExecuteUbergraph_BP_FogOfWar_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
