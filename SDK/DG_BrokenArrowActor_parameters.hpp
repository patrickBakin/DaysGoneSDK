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

// Function BrokenArrowActor.BrokenArrowActor_C.UserConstructionScript
struct ABrokenArrowActor_C_UserConstructionScript_Params
{
};

// Function BrokenArrowActor.BrokenArrowActor_C.MoveBrokenArrow
struct ABrokenArrowActor_C_MoveBrokenArrow_Params
{
};

// Function BrokenArrowActor.BrokenArrowActor_C.ReceivePreSaveGameLoaded
struct ABrokenArrowActor_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrokenArrowActor.BrokenArrowActor_C.ExecuteUbergraph_BrokenArrowActor
struct ABrokenArrowActor_C_ExecuteUbergraph_BrokenArrowActor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
