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

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.StartPosition
struct AGrappleButtonPressEventCircleTiming_C_StartPosition_Params
{
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.UpdatePosition
struct AGrappleButtonPressEventCircleTiming_C_UpdatePosition_Params
{
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.SetupNewGrappleButtonPressEvent
struct AGrappleButtonPressEventCircleTiming_C_SetupNewGrappleButtonPressEvent_Params
{
	TEnumAsByte<EControllerInputButton>                Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SuccessPressRate;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinGrappleTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Can_Fail_Grapple;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Screen_Location;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Follow_Actor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             Follow_Component;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Follow_Socket_In_Actor;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Start_On_Play;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GrappleTiers;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Debug;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EControllerInputButton>                PrevButton;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.GetCompletionPercent
struct AGrappleButtonPressEventCircleTiming_C_GetCompletionPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.UpdateCompletion
struct AGrappleButtonPressEventCircleTiming_C_UpdateCompletion_Params
{
	float                                              Delta_Seconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.CheckForSuccess
struct AGrappleButtonPressEventCircleTiming_C_CheckForSuccess_Params
{
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.HandleInput
struct AGrappleButtonPressEventCircleTiming_C_HandleInput_Params
{
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.StopAnimation
struct AGrappleButtonPressEventCircleTiming_C_StopAnimation_Params
{
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.ChangeButtonAlpha
struct AGrappleButtonPressEventCircleTiming_C_ChangeButtonAlpha_Params
{
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.ChangeButtonColor
struct AGrappleButtonPressEventCircleTiming_C_ChangeButtonColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.DestroySelf
struct AGrappleButtonPressEventCircleTiming_C_DestroySelf_Params
{
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.CreateUMG_Widget
struct AGrappleButtonPressEventCircleTiming_C_CreateUMG_Widget_Params
{
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.UserConstructionScript
struct AGrappleButtonPressEventCircleTiming_C_UserConstructionScript_Params
{
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.ReceiveBeginPlay
struct AGrappleButtonPressEventCircleTiming_C_ReceiveBeginPlay_Params
{
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.ReceiveTick
struct AGrappleButtonPressEventCircleTiming_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.NotifyButtonEventActivated
struct AGrappleButtonPressEventCircleTiming_C_NotifyButtonEventActivated_Params
{
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.NotifyButtonEventDeactivated
struct AGrappleButtonPressEventCircleTiming_C_NotifyButtonEventDeactivated_Params
{
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.SetButtonEventFail
struct AGrappleButtonPressEventCircleTiming_C_SetButtonEventFail_Params
{
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.SetButtonEventSuccessful
struct AGrappleButtonPressEventCircleTiming_C_SetButtonEventSuccessful_Params
{
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.PlayerDied
struct AGrappleButtonPressEventCircleTiming_C_PlayerDied_Params
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

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.StartButtonEvent
struct AGrappleButtonPressEventCircleTiming_C_StartButtonEvent_Params
{
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.TimeScaleInputEvent
struct AGrappleButtonPressEventCircleTiming_C_TimeScaleInputEvent_Params
{
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.NotifyButtonEventReleased
struct AGrappleButtonPressEventCircleTiming_C_NotifyButtonEventReleased_Params
{
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.NotifyButtonEvent
struct AGrappleButtonPressEventCircleTiming_C_NotifyButtonEvent_Params
{
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.OnComplete_Event_1
struct AGrappleButtonPressEventCircleTiming_C_OnComplete_Event_1_Params
{
	TEnumAsByte<EUI_GrappleSuccessType>                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrappleButtonPressEventCircleTiming.GrappleButtonPressEventCircleTiming_C.ExecuteUbergraph_GrappleButtonPressEventCircleTiming
struct AGrappleButtonPressEventCircleTiming_C_ExecuteUbergraph_GrappleButtonPressEventCircleTiming_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
