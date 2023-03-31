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

// Function DebugCamModifier.DebugCamModifier_C.BlueprintModifyPostProcess
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          PostProcessBlendWeight         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FPostProcessSettings    PostProcessSettings            (Parm, OutParm)

void UDebugCamModifier_C::BlueprintModifyPostProcess(float* DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugCamModifier.DebugCamModifier_C.BlueprintModifyPostProcess");

	UDebugCamModifier_C_BlueprintModifyPostProcess_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PostProcessBlendWeight != nullptr)
		*PostProcessBlendWeight = params.PostProcessBlendWeight;
	if (PostProcessSettings != nullptr)
		*PostProcessSettings = params.PostProcessSettings;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
