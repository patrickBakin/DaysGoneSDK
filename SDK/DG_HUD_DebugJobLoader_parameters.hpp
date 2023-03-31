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

// Function HUD_DebugJobLoader.HUD_DebugJobLoader_C.Construct
struct UHUD_DebugJobLoader_C_Construct_Params
{
};

// Function HUD_DebugJobLoader.HUD_DebugJobLoader_C.CirclePressed
struct UHUD_DebugJobLoader_C_CirclePressed_Params
{
};

// Function HUD_DebugJobLoader.HUD_DebugJobLoader_C.XPressed
struct UHUD_DebugJobLoader_C_XPressed_Params
{
};

// Function HUD_DebugJobLoader.HUD_DebugJobLoader_C.Tick
struct UHUD_DebugJobLoader_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD_DebugJobLoader.HUD_DebugJobLoader_C.ExecuteUbergraph_HUD_DebugJobLoader
struct UHUD_DebugJobLoader_C_ExecuteUbergraph_HUD_DebugJobLoader_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
