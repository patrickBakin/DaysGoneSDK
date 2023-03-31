// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BendAudioManagerBP.BendAudioManagerBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendAudioManagerBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendAudioManagerBP.BendAudioManagerBP_C.UserConstructionScript");

	ABendAudioManagerBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendAudioManagerBP.BendAudioManagerBP_C.OnConversationEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          ShouldUnduckAudio              (Parm, ZeroConstructor, IsPlainOldData)

void ABendAudioManagerBP_C::OnConversationEnded(bool* ShouldUnduckAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendAudioManagerBP.BendAudioManagerBP_C.OnConversationEnded");

	ABendAudioManagerBP_C_OnConversationEnded_Params params;
	params.ShouldUnduckAudio = ShouldUnduckAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendAudioManagerBP.BendAudioManagerBP_C.OnConversationPaused
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          ShouldUnduckAudio              (Parm, ZeroConstructor, IsPlainOldData)

void ABendAudioManagerBP_C::OnConversationPaused(bool* ShouldUnduckAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendAudioManagerBP.BendAudioManagerBP_C.OnConversationPaused");

	ABendAudioManagerBP_C_OnConversationPaused_Params params;
	params.ShouldUnduckAudio = ShouldUnduckAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendAudioManagerBP.BendAudioManagerBP_C.OnConversationStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          ShouldDuckAudio                (Parm, ZeroConstructor, IsPlainOldData)

void ABendAudioManagerBP_C::OnConversationStarted(bool* ShouldDuckAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendAudioManagerBP.BendAudioManagerBP_C.OnConversationStarted");

	ABendAudioManagerBP_C_OnConversationStarted_Params params;
	params.ShouldDuckAudio = ShouldDuckAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendAudioManagerBP.BendAudioManagerBP_C.OnConversationUnpaused
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          ShouldDuckAudio                (Parm, ZeroConstructor, IsPlainOldData)

void ABendAudioManagerBP_C::OnConversationUnpaused(bool* ShouldDuckAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendAudioManagerBP.BendAudioManagerBP_C.OnConversationUnpaused");

	ABendAudioManagerBP_C_OnConversationUnpaused_Params params;
	params.ShouldDuckAudio = ShouldDuckAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendAudioManagerBP.BendAudioManagerBP_C.OnTimeDilationChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         NewTimeDilation                (Parm, ZeroConstructor, IsPlainOldData)

void ABendAudioManagerBP_C::OnTimeDilationChanged(float* NewTimeDilation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendAudioManagerBP.BendAudioManagerBP_C.OnTimeDilationChanged");

	ABendAudioManagerBP_C_OnTimeDilationChanged_Params params;
	params.NewTimeDilation = NewTimeDilation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendAudioManagerBP.BendAudioManagerBP_C.ExecuteUbergraph_BendAudioManagerBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABendAudioManagerBP_C::ExecuteUbergraph_BendAudioManagerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendAudioManagerBP.BendAudioManagerBP_C.ExecuteUbergraph_BendAudioManagerBP");

	ABendAudioManagerBP_C_ExecuteUbergraph_BendAudioManagerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
