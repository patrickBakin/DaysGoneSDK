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

// Function NFSCooler_Actor.NFSCooler_Actor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANFSCooler_Actor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NFSCooler_Actor.NFSCooler_Actor_C.UserConstructionScript");

	ANFSCooler_Actor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NFSCooler_Actor.NFSCooler_Actor_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ANFSCooler_Actor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NFSCooler_Actor.NFSCooler_Actor_C.ReceiveBeginPlay");

	ANFSCooler_Actor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NFSCooler_Actor.NFSCooler_Actor_C.ExecuteUbergraph_NFSCooler_Actor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ANFSCooler_Actor_C::ExecuteUbergraph_NFSCooler_Actor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NFSCooler_Actor.NFSCooler_Actor_C.ExecuteUbergraph_NFSCooler_Actor");

	ANFSCooler_Actor_C_ExecuteUbergraph_NFSCooler_Actor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
