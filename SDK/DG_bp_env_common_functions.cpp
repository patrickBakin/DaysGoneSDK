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

// Function bp_env_common.bp_env_common_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_env_common_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_env_common.bp_env_common_C.UserConstructionScript");

	Abp_env_common_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_env_common.bp_env_common_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void Abp_env_common_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_env_common.bp_env_common_C.ReceiveTick");

	Abp_env_common_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_env_common.bp_env_common_C.ExecuteUbergraph_bp_env_common
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Abp_env_common_C::ExecuteUbergraph_bp_env_common(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_env_common.bp_env_common_C.ExecuteUbergraph_bp_env_common");

	Abp_env_common_C_ExecuteUbergraph_bp_env_common_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
