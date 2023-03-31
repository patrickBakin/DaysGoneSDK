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

// Function BendPlayerCamCover.BendPlayerCamCover_C.OnUpdate
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UBendPlayerCamCover_C::OnUpdate(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendPlayerCamCover.BendPlayerCamCover_C.OnUpdate");

	UBendPlayerCamCover_C_OnUpdate_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendPlayerCamCover.BendPlayerCamCover_C.ExecuteUbergraph_BendPlayerCamCover
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBendPlayerCamCover_C::ExecuteUbergraph_BendPlayerCamCover(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendPlayerCamCover.BendPlayerCamCover_C.ExecuteUbergraph_BendPlayerCamCover");

	UBendPlayerCamCover_C_ExecuteUbergraph_BendPlayerCamCover_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
