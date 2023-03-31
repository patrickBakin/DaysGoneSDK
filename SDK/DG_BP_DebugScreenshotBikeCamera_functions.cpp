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

// Function BP_DebugScreenshotBikeCamera.BP_DebugScreenshotBikeCamera_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DebugScreenshotBikeCamera_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugScreenshotBikeCamera.BP_DebugScreenshotBikeCamera_C.UserConstructionScript");

	ABP_DebugScreenshotBikeCamera_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugScreenshotBikeCamera.BP_DebugScreenshotBikeCamera_C.InpActEvt_PageUp_UniqueObjectNameForCooking_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_DebugScreenshotBikeCamera_C::InpActEvt_PageUp_UniqueObjectNameForCooking_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugScreenshotBikeCamera.BP_DebugScreenshotBikeCamera_C.InpActEvt_PageUp_UniqueObjectNameForCooking_2");

	ABP_DebugScreenshotBikeCamera_C_InpActEvt_PageUp_UniqueObjectNameForCooking_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugScreenshotBikeCamera.BP_DebugScreenshotBikeCamera_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_DebugScreenshotBikeCamera_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugScreenshotBikeCamera.BP_DebugScreenshotBikeCamera_C.ReceiveBeginPlay");

	ABP_DebugScreenshotBikeCamera_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugScreenshotBikeCamera.BP_DebugScreenshotBikeCamera_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugScreenshotBikeCamera_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugScreenshotBikeCamera.BP_DebugScreenshotBikeCamera_C.ReceiveEndPlay");

	ABP_DebugScreenshotBikeCamera_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugScreenshotBikeCamera.BP_DebugScreenshotBikeCamera_C.ExecuteUbergraph_BP_DebugScreenshotBikeCamera
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_DebugScreenshotBikeCamera_C::ExecuteUbergraph_BP_DebugScreenshotBikeCamera(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugScreenshotBikeCamera.BP_DebugScreenshotBikeCamera_C.ExecuteUbergraph_BP_DebugScreenshotBikeCamera");

	ABP_DebugScreenshotBikeCamera_C_ExecuteUbergraph_BP_DebugScreenshotBikeCamera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
