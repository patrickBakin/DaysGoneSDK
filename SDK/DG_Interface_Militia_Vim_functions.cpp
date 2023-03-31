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

// Function Interface_Militia_Vim.Interface_Militia_Vim_C.IEnableSaggyMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Militia_Vim_C::IEnableSaggyMesh(bool enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Militia_Vim.Interface_Militia_Vim_C.IEnableSaggyMesh");

	UInterface_Militia_Vim_C_IEnableSaggyMesh_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Militia_Vim.Interface_Militia_Vim_C.IGetCurrentFootState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFootStateEnum>    CurrentFootState               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Militia_Vim_C::IGetCurrentFootState(TEnumAsByte<EFootStateEnum>* CurrentFootState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Militia_Vim.Interface_Militia_Vim_C.IGetCurrentFootState");

	UInterface_Militia_Vim_C_IGetCurrentFootState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentFootState != nullptr)
		*CurrentFootState = params.CurrentFootState;
}


// Function Interface_Militia_Vim.Interface_Militia_Vim_C.IEnableMoveToIdle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Militia_Vim_C::IEnableMoveToIdle(bool enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Militia_Vim.Interface_Militia_Vim_C.IEnableMoveToIdle");

	UInterface_Militia_Vim_C_IEnableMoveToIdle_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Militia_Vim.Interface_Militia_Vim_C.IEnableFootLocking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Militia_Vim_C::IEnableFootLocking(bool enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Militia_Vim.Interface_Militia_Vim_C.IEnableFootLocking");

	UInterface_Militia_Vim_C_IEnableFootLocking_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Militia_Vim.Interface_Militia_Vim_C.IEnableMoveToIdleAnchor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Militia_Vim_C::IEnableMoveToIdleAnchor(bool enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Militia_Vim.Interface_Militia_Vim_C.IEnableMoveToIdleAnchor");

	UInterface_Militia_Vim_C_IEnableMoveToIdleAnchor_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Militia_Vim.Interface_Militia_Vim_C.IEnableTurnToIdleInMovement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Militia_Vim_C::IEnableTurnToIdleInMovement(bool enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Militia_Vim.Interface_Militia_Vim_C.IEnableTurnToIdleInMovement");

	UInterface_Militia_Vim_C_IEnableTurnToIdleInMovement_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Militia_Vim.Interface_Militia_Vim_C.ISetIKPosAndCurve
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EXPEC_EnumIK>      IKType                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 targetPos                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CurveName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              TargetTransform                (Parm, IsPlainOldData)

void UInterface_Militia_Vim_C::ISetIKPosAndCurve(TEnumAsByte<EXPEC_EnumIK> IKType, const struct FVector& targetPos, const struct FName& CurveName, const struct FTransform& TargetTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Militia_Vim.Interface_Militia_Vim_C.ISetIKPosAndCurve");

	UInterface_Militia_Vim_C_ISetIKPosAndCurve_Params params;
	params.IKType = IKType;
	params.targetPos = targetPos;
	params.CurveName = CurveName;
	params.TargetTransform = TargetTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Militia_Vim.Interface_Militia_Vim_C.ISetCharacterType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHumanBaseCharacterTypeEnum> CharacterType                  (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Militia_Vim_C::ISetCharacterType(TEnumAsByte<EHumanBaseCharacterTypeEnum> CharacterType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Militia_Vim.Interface_Militia_Vim_C.ISetCharacterType");

	UInterface_Militia_Vim_C_ISetCharacterType_Params params;
	params.CharacterType = CharacterType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Militia_Vim.Interface_Militia_Vim_C.ISetCanTurnInMovement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Militia_Vim_C::ISetCanTurnInMovement(bool enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Militia_Vim.Interface_Militia_Vim_C.ISetCanTurnInMovement");

	UInterface_Militia_Vim_C_ISetCanTurnInMovement_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Militia_Vim.Interface_Militia_Vim_C.ISetLookAimTarget_OnlyTurnHead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxYaw                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxPitch                       (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Militia_Vim_C::ISetLookAimTarget_OnlyTurnHead(const struct FVector& Target, float MaxYaw, float MaxPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Militia_Vim.Interface_Militia_Vim_C.ISetLookAimTarget_OnlyTurnHead");

	UInterface_Militia_Vim_C_ISetLookAimTarget_OnlyTurnHead_Params params;
	params.Target = Target;
	params.MaxYaw = MaxYaw;
	params.MaxPitch = MaxPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Militia_Vim.Interface_Militia_Vim_C.IIsTurnInPlaceFinished
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Finished                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Militia_Vim_C::IIsTurnInPlaceFinished(bool* Finished)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Militia_Vim.Interface_Militia_Vim_C.IIsTurnInPlaceFinished");

	UInterface_Militia_Vim_C_IIsTurnInPlaceFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Finished != nullptr)
		*Finished = params.Finished;
}


// Function Interface_Militia_Vim.Interface_Militia_Vim_C.ISetLookAimTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Max_Yaw                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Max_Pitch                      (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_Militia_Vim_C::ISetLookAimTarget(const struct FVector& Target, float Max_Yaw, float Max_Pitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Militia_Vim.Interface_Militia_Vim_C.ISetLookAimTarget");

	UInterface_Militia_Vim_C_ISetLookAimTarget_Params params;
	params.Target = Target;
	params.Max_Yaw = Max_Yaw;
	params.Max_Pitch = Max_Pitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_Militia_Vim.Interface_Militia_Vim_C.IResetLookAimTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UInterface_Militia_Vim_C::IResetLookAimTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Militia_Vim.Interface_Militia_Vim_C.IResetLookAimTarget");

	UInterface_Militia_Vim_C_IResetLookAimTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
