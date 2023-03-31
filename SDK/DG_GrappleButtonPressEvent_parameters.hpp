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

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.StartPosition
struct AGrappleButtonPressEvent_C_StartPosition_Params
{
};

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.OffsetBasedOnButton
struct AGrappleButtonPressEvent_C_OffsetBasedOnButton_Params
{
	struct FVector2D                                   InPosition;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   OutPosition;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.SetupNewGrappleButtonPressEvent
struct AGrappleButtonPressEvent_C_SetupNewGrappleButtonPressEvent_Params
{
	TEnumAsByte<EControllerInputButton>                Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SuccessPressRate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxGrappleTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Can_Fail_Grapple;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Screen_Location;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Follow_Actor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             Follow_Component;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Follow_Socket_In_Actor;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Start_On_Play;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GrappleTiers;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Debug;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.GetCompletionPercent
struct AGrappleButtonPressEvent_C_GetCompletionPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.CheckForSuccess
struct AGrappleButtonPressEvent_C_CheckForSuccess_Params
{
};

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.HandleInput
struct AGrappleButtonPressEvent_C_HandleInput_Params
{
};

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.DestroySelf
struct AGrappleButtonPressEvent_C_DestroySelf_Params
{
};

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.UserConstructionScript
struct AGrappleButtonPressEvent_C_UserConstructionScript_Params
{
};

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.ReceiveBeginPlay
struct AGrappleButtonPressEvent_C_ReceiveBeginPlay_Params
{
};

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.NotifyButtonEventActivated
struct AGrappleButtonPressEvent_C_NotifyButtonEventActivated_Params
{
};

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.NotifyButtonEventDeactivated
struct AGrappleButtonPressEvent_C_NotifyButtonEventDeactivated_Params
{
};

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.NotifyButtonEvent
struct AGrappleButtonPressEvent_C_NotifyButtonEvent_Params
{
};

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.ButtonFade
struct AGrappleButtonPressEvent_C_ButtonFade_Params
{
};

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.SetButtonEventFail
struct AGrappleButtonPressEvent_C_SetButtonEventFail_Params
{
};

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.SetButtonEventSuccessful
struct AGrappleButtonPressEvent_C_SetButtonEventSuccessful_Params
{
};

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.PlayerDied
struct AGrappleButtonPressEvent_C_PlayerDied_Params
{
	float                                              ActualDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Killer;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.StartButtonEvent
struct AGrappleButtonPressEvent_C_StartButtonEvent_Params
{
};

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.TimeScaleInputEvent
struct AGrappleButtonPressEvent_C_TimeScaleInputEvent_Params
{
};

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.OnSuccess_Event_1
struct AGrappleButtonPressEvent_C_OnSuccess_Event_1_Params
{
};

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.OnCompletionPercentChanged
struct AGrappleButtonPressEvent_C_OnCompletionPercentChanged_Params
{
};

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.ReceiveEndPlay
struct AGrappleButtonPressEvent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleButtonPressEvent.GrappleButtonPressEvent_C.ExecuteUbergraph_GrappleButtonPressEvent
struct AGrappleButtonPressEvent_C_ExecuteUbergraph_GrappleButtonPressEvent_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
