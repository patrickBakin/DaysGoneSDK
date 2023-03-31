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

// Function POI_GoreBody.POI_GoreBody_C.UserConstructionScript
struct APOI_GoreBody_C_UserConstructionScript_Params
{
};

// Function POI_GoreBody.POI_GoreBody_C.ReceivePreSaveGameLoaded
struct APOI_GoreBody_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function POI_GoreBody.POI_GoreBody_C.ExecuteUbergraph_POI_GoreBody
struct APOI_GoreBody_C_ExecuteUbergraph_POI_GoreBody_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
