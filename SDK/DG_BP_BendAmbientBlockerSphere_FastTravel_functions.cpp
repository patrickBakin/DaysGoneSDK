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

// Function BP_BendAmbientBlockerSphere_FastTravel.BP_BendAmbientBlockerSphere_FastTravel_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BendAmbientBlockerSphere_FastTravel_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendAmbientBlockerSphere_FastTravel.BP_BendAmbientBlockerSphere_FastTravel_C.UserConstructionScript");

	ABP_BendAmbientBlockerSphere_FastTravel_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendAmbientBlockerSphere_FastTravel.BP_BendAmbientBlockerSphere_FastTravel_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_739_EndOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABP_BendAmbientBlockerSphere_FastTravel_C::BndEvt__BendSphere_K2Node_ComponentBoundEvent_739_EndOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendAmbientBlockerSphere_FastTravel.BP_BendAmbientBlockerSphere_FastTravel_C.BndEvt__BendSphere_K2Node_ComponentBoundEvent_739_EndOverlapSig__DelegateSignature");

	ABP_BendAmbientBlockerSphere_FastTravel_C_BndEvt__BendSphere_K2Node_ComponentBoundEvent_739_EndOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BendAmbientBlockerSphere_FastTravel.BP_BendAmbientBlockerSphere_FastTravel_C.ExecuteUbergraph_BP_BendAmbientBlockerSphere_FastTravel
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_BendAmbientBlockerSphere_FastTravel_C::ExecuteUbergraph_BP_BendAmbientBlockerSphere_FastTravel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BendAmbientBlockerSphere_FastTravel.BP_BendAmbientBlockerSphere_FastTravel_C.ExecuteUbergraph_BP_BendAmbientBlockerSphere_FastTravel");

	ABP_BendAmbientBlockerSphere_FastTravel_C_ExecuteUbergraph_BP_BendAmbientBlockerSphere_FastTravel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
