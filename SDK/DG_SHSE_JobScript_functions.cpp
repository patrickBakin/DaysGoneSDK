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

// Function SHSE_JobScript.SHSE_JobScript_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASHSE_JobScript_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SHSE_JobScript.SHSE_JobScript_C.UserConstructionScript");

	ASHSE_JobScript_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SHSE_JobScript.SHSE_JobScript_C.I_InitializeJobScript
// (Public, BlueprintCallable, BlueprintEvent)

void ASHSE_JobScript_C::I_InitializeJobScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SHSE_JobScript.SHSE_JobScript_C.I_InitializeJobScript");

	ASHSE_JobScript_C_I_InitializeJobScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SHSE_JobScript.SHSE_JobScript_C.PlayTheCin
// (BlueprintCallable, BlueprintEvent)

void ASHSE_JobScript_C::PlayTheCin()
{
	static auto fn = UObject::FindObject<UFunction>("Function SHSE_JobScript.SHSE_JobScript_C.PlayTheCin");

	ASHSE_JobScript_C_PlayTheCin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SHSE_JobScript.SHSE_JobScript_C.OnFadingFinished_MM_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void ASHSE_JobScript_C::OnFadingFinished_MM_Event_1(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function SHSE_JobScript.SHSE_JobScript_C.OnFadingFinished_MM_Event_1");

	ASHSE_JobScript_C_OnFadingFinished_MM_Event_1_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SHSE_JobScript.SHSE_JobScript_C.ExecuteUbergraph_SHSE_JobScript
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASHSE_JobScript_C::ExecuteUbergraph_SHSE_JobScript(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SHSE_JobScript.SHSE_JobScript_C.ExecuteUbergraph_SHSE_JobScript");

	ASHSE_JobScript_C_ExecuteUbergraph_SHSE_JobScript_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
