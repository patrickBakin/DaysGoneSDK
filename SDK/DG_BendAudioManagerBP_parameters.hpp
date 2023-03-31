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

// Function BendAudioManagerBP.BendAudioManagerBP_C.UserConstructionScript
struct ABendAudioManagerBP_C_UserConstructionScript_Params
{
};

// Function BendAudioManagerBP.BendAudioManagerBP_C.OnConversationEnded
struct ABendAudioManagerBP_C_OnConversationEnded_Params
{
	bool*                                              ShouldUnduckAudio;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendAudioManagerBP.BendAudioManagerBP_C.OnConversationPaused
struct ABendAudioManagerBP_C_OnConversationPaused_Params
{
	bool*                                              ShouldUnduckAudio;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendAudioManagerBP.BendAudioManagerBP_C.OnConversationStarted
struct ABendAudioManagerBP_C_OnConversationStarted_Params
{
	bool*                                              ShouldDuckAudio;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendAudioManagerBP.BendAudioManagerBP_C.OnConversationUnpaused
struct ABendAudioManagerBP_C_OnConversationUnpaused_Params
{
	bool*                                              ShouldDuckAudio;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendAudioManagerBP.BendAudioManagerBP_C.OnTimeDilationChanged
struct ABendAudioManagerBP_C_OnTimeDilationChanged_Params
{
	float*                                             NewTimeDilation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendAudioManagerBP.BendAudioManagerBP_C.ExecuteUbergraph_BendAudioManagerBP
struct ABendAudioManagerBP_C_ExecuteUbergraph_BendAudioManagerBP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
