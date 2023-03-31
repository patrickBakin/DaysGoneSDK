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

// Function ORWorld.ORWorld_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AORWorld_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorld.ORWorld_C.ReceiveBeginPlay");

	AORWorld_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorld.ORWorld_C.ExecuteUbergraph_ORWorld
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AORWorld_C::ExecuteUbergraph_ORWorld(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorld.ORWorld_C.ExecuteUbergraph_ORWorld");

	AORWorld_C_ExecuteUbergraph_ORWorld_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
