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

// Function BP_WigwamSign.BP_WigwamSign_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WigwamSign_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WigwamSign.BP_WigwamSign_C.UserConstructionScript");

	ABP_WigwamSign_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WigwamSign.BP_WigwamSign_C.Flicker__FinishedFunc
// (BlueprintEvent)

void ABP_WigwamSign_C::Flicker__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WigwamSign.BP_WigwamSign_C.Flicker__FinishedFunc");

	ABP_WigwamSign_C_Flicker__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WigwamSign.BP_WigwamSign_C.Flicker__UpdateFunc
// (BlueprintEvent)

void ABP_WigwamSign_C::Flicker__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WigwamSign.BP_WigwamSign_C.Flicker__UpdateFunc");

	ABP_WigwamSign_C_Flicker__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WigwamSign.BP_WigwamSign_C.Arrows & Smoke__FinishedFunc
// (BlueprintEvent)

void ABP_WigwamSign_C::Arrows___Smoke__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WigwamSign.BP_WigwamSign_C.Arrows & Smoke__FinishedFunc");

	ABP_WigwamSign_C_Arrows___Smoke__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WigwamSign.BP_WigwamSign_C.Arrows & Smoke__UpdateFunc
// (BlueprintEvent)

void ABP_WigwamSign_C::Arrows___Smoke__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WigwamSign.BP_WigwamSign_C.Arrows & Smoke__UpdateFunc");

	ABP_WigwamSign_C_Arrows___Smoke__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WigwamSign.BP_WigwamSign_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_WigwamSign_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WigwamSign.BP_WigwamSign_C.ReceiveBeginPlay");

	ABP_WigwamSign_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WigwamSign.BP_WigwamSign_C.ExecuteUbergraph_BP_WigwamSign
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_WigwamSign_C::ExecuteUbergraph_BP_WigwamSign(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WigwamSign.BP_WigwamSign_C.ExecuteUbergraph_BP_WigwamSign");

	ABP_WigwamSign_C_ExecuteUbergraph_BP_WigwamSign_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
