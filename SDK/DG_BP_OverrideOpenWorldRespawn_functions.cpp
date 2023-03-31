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

// Function BP_OverrideOpenWorldRespawn.BP_OverrideOpenWorldRespawn_C.SavePlayerAndVehicleLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RespawnID                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_OverrideOpenWorldRespawn_C::SavePlayerAndVehicleLocation(int* RespawnID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverrideOpenWorldRespawn.BP_OverrideOpenWorldRespawn_C.SavePlayerAndVehicleLocation");

	ABP_OverrideOpenWorldRespawn_C_SavePlayerAndVehicleLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RespawnID != nullptr)
		*RespawnID = params.RespawnID;
}


// Function BP_OverrideOpenWorldRespawn.BP_OverrideOpenWorldRespawn_C.SetSphereRadius
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_OverrideOpenWorldRespawn_C::SetSphereRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverrideOpenWorldRespawn.BP_OverrideOpenWorldRespawn_C.SetSphereRadius");

	ABP_OverrideOpenWorldRespawn_C_SetSphereRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverrideOpenWorldRespawn.BP_OverrideOpenWorldRespawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OverrideOpenWorldRespawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverrideOpenWorldRespawn.BP_OverrideOpenWorldRespawn_C.UserConstructionScript");

	ABP_OverrideOpenWorldRespawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverrideOpenWorldRespawn.BP_OverrideOpenWorldRespawn_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_495_BeginOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABP_OverrideOpenWorldRespawn_C::BndEvt__BendSphere_K2Node_ComponentBoundEvent_495_BeginOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverrideOpenWorldRespawn.BP_OverrideOpenWorldRespawn_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_495_BeginOverlapSig__DelegateSignature");

	ABP_OverrideOpenWorldRespawn_C_BndEvt__BendSphere_K2Node_ComponentBoundEvent_495_BeginOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverrideOpenWorldRespawn.BP_OverrideOpenWorldRespawn_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_16_EndOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABP_OverrideOpenWorldRespawn_C::BndEvt__BendSphere_K2Node_ComponentBoundEvent_16_EndOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverrideOpenWorldRespawn.BP_OverrideOpenWorldRespawn_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_16_EndOverlapSig__DelegateSignature");

	ABP_OverrideOpenWorldRespawn_C_BndEvt__BendSphere_K2Node_ComponentBoundEvent_16_EndOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverrideOpenWorldRespawn.BP_OverrideOpenWorldRespawn_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OverrideOpenWorldRespawn_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverrideOpenWorldRespawn.BP_OverrideOpenWorldRespawn_C.ReceiveEndPlay");

	ABP_OverrideOpenWorldRespawn_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverrideOpenWorldRespawn.BP_OverrideOpenWorldRespawn_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_OverrideOpenWorldRespawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverrideOpenWorldRespawn.BP_OverrideOpenWorldRespawn_C.ReceiveBeginPlay");

	ABP_OverrideOpenWorldRespawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OverrideOpenWorldRespawn.BP_OverrideOpenWorldRespawn_C.ExecuteUbergraph_BP_OverrideOpenWorldRespawn
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OverrideOpenWorldRespawn_C::ExecuteUbergraph_BP_OverrideOpenWorldRespawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OverrideOpenWorldRespawn.BP_OverrideOpenWorldRespawn_C.ExecuteUbergraph_BP_OverrideOpenWorldRespawn");

	ABP_OverrideOpenWorldRespawn_C_ExecuteUbergraph_BP_OverrideOpenWorldRespawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
