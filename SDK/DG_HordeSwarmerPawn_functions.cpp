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

// Function HordeSwarmerPawn.HordeSwarmerPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHordeSwarmerPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSwarmerPawn.HordeSwarmerPawn_C.UserConstructionScript");

	AHordeSwarmerPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeSwarmerPawn.HordeSwarmerPawn_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AHordeSwarmerPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSwarmerPawn.HordeSwarmerPawn_C.ReceiveBeginPlay");

	AHordeSwarmerPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeSwarmerPawn.HordeSwarmerPawn_C.ExecuteUbergraph_HordeSwarmerPawn
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AHordeSwarmerPawn_C::ExecuteUbergraph_HordeSwarmerPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeSwarmerPawn.HordeSwarmerPawn_C.ExecuteUbergraph_HordeSwarmerPawn");

	AHordeSwarmerPawn_C_ExecuteUbergraph_HordeSwarmerPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
