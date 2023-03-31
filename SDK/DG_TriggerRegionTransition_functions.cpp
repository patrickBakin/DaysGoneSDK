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

// Function TriggerRegionTransition.TriggerRegionTransition_C.GetRegionNamesFromId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ERegions>          Region                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Normal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   Proxy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATriggerRegionTransition_C::GetRegionNamesFromId(TEnumAsByte<ERegions> Region, struct FName* Normal, struct FName* Proxy)
{
	static auto fn = UObject::FindObject<UFunction>("Function TriggerRegionTransition.TriggerRegionTransition_C.GetRegionNamesFromId");

	ATriggerRegionTransition_C_GetRegionNamesFromId_Params params;
	params.Region = Region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Normal != nullptr)
		*Normal = params.Normal;
	if (Proxy != nullptr)
		*Proxy = params.Proxy;
}


// Function TriggerRegionTransition.TriggerRegionTransition_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATriggerRegionTransition_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TriggerRegionTransition.TriggerRegionTransition_C.UserConstructionScript");

	ATriggerRegionTransition_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TriggerRegionTransition.TriggerRegionTransition_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ATriggerRegionTransition_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TriggerRegionTransition.TriggerRegionTransition_C.ReceiveActorBeginOverlap");

	ATriggerRegionTransition_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TriggerRegionTransition.TriggerRegionTransition_C.ExecuteUbergraph_TriggerRegionTransition
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATriggerRegionTransition_C::ExecuteUbergraph_TriggerRegionTransition(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TriggerRegionTransition.TriggerRegionTransition_C.ExecuteUbergraph_TriggerRegionTransition");

	ATriggerRegionTransition_C_ExecuteUbergraph_TriggerRegionTransition_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
