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

// Function BP_LGT_CinSlave.BP_LGT_CinSlave_C.CopyLightValues
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendSpotLightComponent* sourceLight                    (Parm, ZeroConstructor, IsPlainOldData)
// class UBendSpotLightComponent* destLight                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_LGT_CinSlave_C::CopyLightValues(class UBendSpotLightComponent* sourceLight, class UBendSpotLightComponent** destLight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinSlave.BP_LGT_CinSlave_C.CopyLightValues");

	ABP_LGT_CinSlave_C_CopyLightValues_Params params;
	params.sourceLight = sourceLight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (destLight != nullptr)
		*destLight = params.destLight;
}


// Function BP_LGT_CinSlave.BP_LGT_CinSlave_C.Check For Copy From Master
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LGT_CinSlave_C::Check_For_Copy_From_Master()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinSlave.BP_LGT_CinSlave_C.Check For Copy From Master");

	ABP_LGT_CinSlave_C_Check_For_Copy_From_Master_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LGT_CinSlave.BP_LGT_CinSlave_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LGT_CinSlave_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinSlave.BP_LGT_CinSlave_C.UserConstructionScript");

	ABP_LGT_CinSlave_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LGT_CinSlave.BP_LGT_CinSlave_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_LGT_CinSlave_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinSlave.BP_LGT_CinSlave_C.ReceiveBeginPlay");

	ABP_LGT_CinSlave_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LGT_CinSlave.BP_LGT_CinSlave_C.EditorTicker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delta_Seconds                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                CameraLocation                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LGT_CinSlave_C::EditorTicker(float* Delta_Seconds, struct FVector* CameraLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinSlave.BP_LGT_CinSlave_C.EditorTicker");

	ABP_LGT_CinSlave_C_EditorTicker_Params params;
	params.Delta_Seconds = Delta_Seconds;
	params.CameraLocation = CameraLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LGT_CinSlave.BP_LGT_CinSlave_C.LinkedCameraStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class ACameraActor**           DisabledCamera                 (Parm, ZeroConstructor, IsPlainOldData)
// class ACameraActor**           EnabledCamera                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LGT_CinSlave_C::LinkedCameraStateChanged(class ACameraActor** DisabledCamera, class ACameraActor** EnabledCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinSlave.BP_LGT_CinSlave_C.LinkedCameraStateChanged");

	ABP_LGT_CinSlave_C_LinkedCameraStateChanged_Params params;
	params.DisabledCamera = DisabledCamera;
	params.EnabledCamera = EnabledCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LGT_CinSlave.BP_LGT_CinSlave_C.ExecuteUbergraph_BP_LGT_CinSlave
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LGT_CinSlave_C::ExecuteUbergraph_BP_LGT_CinSlave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LGT_CinSlave.BP_LGT_CinSlave_C.ExecuteUbergraph_BP_LGT_CinSlave");

	ABP_LGT_CinSlave_C_ExecuteUbergraph_BP_LGT_CinSlave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
