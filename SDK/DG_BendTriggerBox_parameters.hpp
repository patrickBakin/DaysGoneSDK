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

// Function BendTriggerBox.BendTriggerBox_C.UserConstructionScript
struct ABendTriggerBox_C_UserConstructionScript_Params
{
};

// Function BendTriggerBox.BendTriggerBox_C.OnOverlapWithReturnSelf__DelegateSignature
struct ABendTriggerBox_C_OnOverlapWithReturnSelf__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TriggerBox;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
