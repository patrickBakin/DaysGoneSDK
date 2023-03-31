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

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.SetPositionOfWidget
struct AGrappleButtonPressEventHold_C_SetPositionOfWidget_Params
{
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.SetupNewGrappleButtonPressEvent
struct AGrappleButtonPressEventHold_C_SetupNewGrappleButtonPressEvent_Params
{
	TEnumAsByte<EControllerInputButton>                Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinGrappleTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Can_Fail_Grapple;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Follow_Actor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Follow_Socket_In_Actor;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Start_On_Play;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EControllerInputButton>                PrevButton;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.GetCompletionPercent
struct AGrappleButtonPressEventHold_C_GetCompletionPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.UpdateCompletion
struct AGrappleButtonPressEventHold_C_UpdateCompletion_Params
{
	float                                              Delta_Seconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.CheckForSuccess
struct AGrappleButtonPressEventHold_C_CheckForSuccess_Params
{
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.HandleInput
struct AGrappleButtonPressEventHold_C_HandleInput_Params
{
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.StopAnimation
struct AGrappleButtonPressEventHold_C_StopAnimation_Params
{
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ChangeButtonAlpha
struct AGrappleButtonPressEventHold_C_ChangeButtonAlpha_Params
{
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ChangeButtonColor
struct AGrappleButtonPressEventHold_C_ChangeButtonColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.DestroySelf
struct AGrappleButtonPressEventHold_C_DestroySelf_Params
{
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.CreateUMG_Widget
struct AGrappleButtonPressEventHold_C_CreateUMG_Widget_Params
{
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.UserConstructionScript
struct AGrappleButtonPressEventHold_C_UserConstructionScript_Params
{
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ButtonFadeTimeline__FinishedFunc
struct AGrappleButtonPressEventHold_C_ButtonFadeTimeline__FinishedFunc_Params
{
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ButtonFadeTimeline__UpdateFunc
struct AGrappleButtonPressEventHold_C_ButtonFadeTimeline__UpdateFunc_Params
{
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ReceiveBeginPlay
struct AGrappleButtonPressEventHold_C_ReceiveBeginPlay_Params
{
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ReceiveTick
struct AGrappleButtonPressEventHold_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.NotifyButtonEventActivated
struct AGrappleButtonPressEventHold_C_NotifyButtonEventActivated_Params
{
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.NotifyButtonEventDeactivated
struct AGrappleButtonPressEventHold_C_NotifyButtonEventDeactivated_Params
{
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.NotifyButtonEvent
struct AGrappleButtonPressEventHold_C_NotifyButtonEvent_Params
{
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ButtonFade
struct AGrappleButtonPressEventHold_C_ButtonFade_Params
{
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.SetButtonEventFail
struct AGrappleButtonPressEventHold_C_SetButtonEventFail_Params
{
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.SetButtonEventSuccessful
struct AGrappleButtonPressEventHold_C_SetButtonEventSuccessful_Params
{
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.PlayerDied
struct AGrappleButtonPressEventHold_C_PlayerDied_Params
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

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.StartButtonEvent
struct AGrappleButtonPressEventHold_C_StartButtonEvent_Params
{
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.NotifyButtonEventReleased
struct AGrappleButtonPressEventHold_C_NotifyButtonEventReleased_Params
{
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.DebugDraw
struct AGrappleButtonPressEventHold_C_DebugDraw_Params
{
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.OnSuccess_Event_1
struct AGrappleButtonPressEventHold_C_OnSuccess_Event_1_Params
{
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ReceiveEndPlay
struct AGrappleButtonPressEventHold_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleButtonPressEventHold.GrappleButtonPressEventHold_C.ExecuteUbergraph_GrappleButtonPressEventHold
struct AGrappleButtonPressEventHold_C_ExecuteUbergraph_GrappleButtonPressEventHold_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
