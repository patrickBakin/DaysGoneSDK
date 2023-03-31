#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Interface_Militia_Vim.Interface_Militia_Vim_C.IEnableSaggyMesh
struct UInterface_Militia_Vim_C_IEnableSaggyMesh_Params
{
	bool                                               enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Militia_Vim.Interface_Militia_Vim_C.IGetCurrentFootState
struct UInterface_Militia_Vim_C_IGetCurrentFootState_Params
{
	TEnumAsByte<EFootStateEnum>                        CurrentFootState;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Militia_Vim.Interface_Militia_Vim_C.IEnableMoveToIdle
struct UInterface_Militia_Vim_C_IEnableMoveToIdle_Params
{
	bool                                               enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Militia_Vim.Interface_Militia_Vim_C.IEnableFootLocking
struct UInterface_Militia_Vim_C_IEnableFootLocking_Params
{
	bool                                               enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Militia_Vim.Interface_Militia_Vim_C.IEnableMoveToIdleAnchor
struct UInterface_Militia_Vim_C_IEnableMoveToIdleAnchor_Params
{
	bool                                               enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Militia_Vim.Interface_Militia_Vim_C.IEnableTurnToIdleInMovement
struct UInterface_Militia_Vim_C_IEnableTurnToIdleInMovement_Params
{
	bool                                               enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Militia_Vim.Interface_Militia_Vim_C.ISetIKPosAndCurve
struct UInterface_Militia_Vim_C_ISetIKPosAndCurve_Params
{
	TEnumAsByte<EXPEC_EnumIK>                          IKType;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     targetPos;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CurveName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  TargetTransform;                                          // (Parm, IsPlainOldData)
};

// Function Interface_Militia_Vim.Interface_Militia_Vim_C.ISetCharacterType
struct UInterface_Militia_Vim_C_ISetCharacterType_Params
{
	TEnumAsByte<EHumanBaseCharacterTypeEnum>           CharacterType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Militia_Vim.Interface_Militia_Vim_C.ISetCanTurnInMovement
struct UInterface_Militia_Vim_C_ISetCanTurnInMovement_Params
{
	bool                                               enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Militia_Vim.Interface_Militia_Vim_C.ISetLookAimTarget_OnlyTurnHead
struct UInterface_Militia_Vim_C_ISetLookAimTarget_OnlyTurnHead_Params
{
	struct FVector                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxYaw;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxPitch;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Militia_Vim.Interface_Militia_Vim_C.IIsTurnInPlaceFinished
struct UInterface_Militia_Vim_C_IIsTurnInPlaceFinished_Params
{
	bool                                               Finished;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Militia_Vim.Interface_Militia_Vim_C.ISetLookAimTarget
struct UInterface_Militia_Vim_C_ISetLookAimTarget_Params
{
	struct FVector                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max_Yaw;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max_Pitch;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Interface_Militia_Vim.Interface_Militia_Vim_C.IResetLookAimTarget
struct UInterface_Militia_Vim_C_IResetLookAimTarget_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
