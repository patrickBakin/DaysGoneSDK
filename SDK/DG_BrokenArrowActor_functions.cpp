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

// Function BrokenArrowActor.BrokenArrowActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABrokenArrowActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrokenArrowActor.BrokenArrowActor_C.UserConstructionScript");

	ABrokenArrowActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrokenArrowActor.BrokenArrowActor_C.MoveBrokenArrow
// (BlueprintCallable, BlueprintEvent)

void ABrokenArrowActor_C::MoveBrokenArrow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrokenArrowActor.BrokenArrowActor_C.MoveBrokenArrow");

	ABrokenArrowActor_C_MoveBrokenArrow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrokenArrowActor.BrokenArrowActor_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABrokenArrowActor_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrokenArrowActor.BrokenArrowActor_C.ReceivePreSaveGameLoaded");

	ABrokenArrowActor_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrokenArrowActor.BrokenArrowActor_C.ExecuteUbergraph_BrokenArrowActor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABrokenArrowActor_C::ExecuteUbergraph_BrokenArrowActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrokenArrowActor.BrokenArrowActor_C.ExecuteUbergraph_BrokenArrowActor");

	ABrokenArrowActor_C_ExecuteUbergraph_BrokenArrowActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
