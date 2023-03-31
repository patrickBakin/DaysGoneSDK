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

// Function Interface_GroundMovement.Interface_GroundMovement_C.UseTurretRequestTempHack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseTurret                      (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_GroundMovement_C::UseTurretRequestTempHack(bool UseTurret)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_GroundMovement.Interface_GroundMovement_C.UseTurretRequestTempHack");

	UInterface_GroundMovement_C_UseTurretRequestTempHack_Params params;
	params.UseTurret = UseTurret;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_GroundMovement.Interface_GroundMovement_C.GetDesiredGroundIdleState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_DesiredGroundIdleState> DesiredGroundIdleState         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_GroundMovement_C::GetDesiredGroundIdleState(TEnumAsByte<Enum_DesiredGroundIdleState>* DesiredGroundIdleState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_GroundMovement.Interface_GroundMovement_C.GetDesiredGroundIdleState");

	UInterface_GroundMovement_C_GetDesiredGroundIdleState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredGroundIdleState != nullptr)
		*DesiredGroundIdleState = params.DesiredGroundIdleState;
}


// Function Interface_GroundMovement.Interface_GroundMovement_C.SetDesiredGroundIdleState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_DesiredGroundIdleState> DesiredGroundIldeState         (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_GroundMovement_C::SetDesiredGroundIdleState(TEnumAsByte<Enum_DesiredGroundIdleState> DesiredGroundIldeState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_GroundMovement.Interface_GroundMovement_C.SetDesiredGroundIdleState");

	UInterface_GroundMovement_C_SetDesiredGroundIdleState_Params params;
	params.DesiredGroundIldeState = DesiredGroundIldeState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
