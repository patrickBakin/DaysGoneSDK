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

// Function HordeLoader.HordeLoader_C.CheckHordeCompletion
struct AHordeLoader_C_CheckHordeCompletion_Params
{
	bool                                               IsComplete;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HordeLoader.HordeLoader_C.UserConstructionScript
struct AHordeLoader_C_UserConstructionScript_Params
{
};

// Function HordeLoader.HordeLoader_C.ReceiveBeginPlay
struct AHordeLoader_C_ReceiveBeginPlay_Params
{
};

// Function HordeLoader.HordeLoader_C.MarkForReload
struct AHordeLoader_C_MarkForReload_Params
{
};

// Function HordeLoader.HordeLoader_C.CustomEvent_1
struct AHordeLoader_C_CustomEvent_1_Params
{
	class ULevel*                                      Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HordeLoader.HordeLoader_C.ReloadLevel
struct AHordeLoader_C_ReloadLevel_Params
{
	class ULevel*                                      Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HordeLoader.HordeLoader_C.MissionOver
struct AHordeLoader_C_MissionOver_Params
{
	class UBendMissionData*                            LastMissionData;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HordeLoader.HordeLoader_C.ReceivePostSaveGameLoaded
struct AHordeLoader_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HordeLoader.HordeLoader_C.ExecuteUbergraph_HordeLoader
struct AHordeLoader_C_ExecuteUbergraph_HordeLoader_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
