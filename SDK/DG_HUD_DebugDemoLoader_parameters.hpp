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

// Function HUD_DebugDemoLoader.HUD_DebugDemoLoader_C.CallCheatDelegate
struct UHUD_DebugDemoLoader_C_CallCheatDelegate_Params
{
	struct FString                                     Mission_Name;                                             // (Parm, ZeroConstructor)
	bool                                               Teleport;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Completed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsMission;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_DebugDemoLoader.HUD_DebugDemoLoader_C.Tick
struct UHUD_DebugDemoLoader_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_DebugDemoLoader.HUD_DebugDemoLoader_C.Construct
struct UHUD_DebugDemoLoader_C_Construct_Params
{
};

// Function HUD_DebugDemoLoader.HUD_DebugDemoLoader_C.CirclePressed
struct UHUD_DebugDemoLoader_C_CirclePressed_Params
{
};

// Function HUD_DebugDemoLoader.HUD_DebugDemoLoader_C.XPressed
struct UHUD_DebugDemoLoader_C_XPressed_Params
{
};

// Function HUD_DebugDemoLoader.HUD_DebugDemoLoader_C.SetUpDefaults
struct UHUD_DebugDemoLoader_C_SetUpDefaults_Params
{
};

// Function HUD_DebugDemoLoader.HUD_DebugDemoLoader_C.ExecuteUbergraph_HUD_DebugDemoLoader
struct UHUD_DebugDemoLoader_C_ExecuteUbergraph_HUD_DebugDemoLoader_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
