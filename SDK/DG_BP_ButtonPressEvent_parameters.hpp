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

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.MakeActionPressEvent
struct ABP_ButtonPressEvent_C_MakeActionPressEvent_Params
{
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SuccessfulInputsNeeded;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HoldTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LengthOfEventInSeconds;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FailOnTimeExpire;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DecayRatePerSecond;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      FollowActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             FollowComponent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FollowSocketInActor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StartOnPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Debug;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ConsumeInputs;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerOnButtonReleased;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_Combat_Prompts>                   CombatPrompt;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SocketOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseSocketOverride;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DisableCheckForSuccess;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.AutoCompleteButtonEvent
struct ABP_ButtonPressEvent_C_AutoCompleteButtonEvent_Params
{
	bool                                               AutoComplete;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.EaseInOut
struct ABP_ButtonPressEvent_C_EaseInOut_Params
{
	struct FVector2D                                   NewIn_;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PrevIn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.StartPosition
struct ABP_ButtonPressEvent_C_StartPosition_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.CountHoldTime
struct ABP_ButtonPressEvent_C_CountHoldTime_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.HandleButtonPress
struct ABP_ButtonPressEvent_C_HandleButtonPress_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.HandleButtonRelease
struct ABP_ButtonPressEvent_C_HandleButtonRelease_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.IsButtonEventComplete
struct ABP_ButtonPressEvent_C_IsButtonEventComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.SafeGuardCheckDefaultActor
struct ABP_ButtonPressEvent_C_SafeGuardCheckDefaultActor_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.StopAnimation
struct ABP_ButtonPressEvent_C_StopAnimation_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.CreateUMG_Widget
struct ABP_ButtonPressEvent_C_CreateUMG_Widget_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.SetPositionOfWidget
struct ABP_ButtonPressEvent_C_SetPositionOfWidget_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ChangeButtonColor
struct ABP_ButtonPressEvent_C_ChangeButtonColor_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.DestroySelf
struct ABP_ButtonPressEvent_C_DestroySelf_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.CheckForSuccess
struct ABP_ButtonPressEvent_C_CheckForSuccess_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.SetUpNewButtonPressEvent
struct ABP_ButtonPressEvent_C_SetUpNewButtonPressEvent_Params
{
	TEnumAsByte<EControllerInputButton>                Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                SuccessfulInputsNeeded;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HoldTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LengthOfEventInSeconds;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FailOnTimeExpire;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DecayRatePerSecond;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenLocation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      FollowActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             FollowComponent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FollowSocketInActor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StartOnPlay;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Debug;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ConsumeInputs;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm)
	bool                                               TriggerOnButtonReleased;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_Combat_Prompts>                   CombatPrompt;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SocketOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseSocketOverride;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DisableCheckForSuccess;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.UserConstructionScript
struct ABP_ButtonPressEvent_C_UserConstructionScript_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ButtonFadeTimeline__FinishedFunc
struct ABP_ButtonPressEvent_C_ButtonFadeTimeline__FinishedFunc_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ButtonFadeTimeline__UpdateFunc
struct ABP_ButtonPressEvent_C_ButtonFadeTimeline__UpdateFunc_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ReceiveBeginPlay
struct ABP_ButtonPressEvent_C_ReceiveBeginPlay_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ButtonFade
struct ABP_ButtonPressEvent_C_ButtonFade_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.SetDebug
struct ABP_ButtonPressEvent_C_SetDebug_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.PlayerDied
struct ABP_ButtonPressEvent_C_PlayerDied_Params
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

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.StopTimeline
struct ABP_ButtonPressEvent_C_StopTimeline_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.Multi-NewtHandling
struct ABP_ButtonPressEvent_C_Multi_NewtHandling_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.OnNewGrappler_Event_1
struct ABP_ButtonPressEvent_C_OnNewGrappler_Event_1_Params
{
	class ABendPawn*                                   NewGrappler;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GrapplerCount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.StartButtonEvent
struct ABP_ButtonPressEvent_C_StartButtonEvent_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.SetButtonEventSuccessful
struct ABP_ButtonPressEvent_C_SetButtonEventSuccessful_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.SetButtonEventFail
struct ABP_ButtonPressEvent_C_SetButtonEventFail_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.NotifyButtonEvent
struct ABP_ButtonPressEvent_C_NotifyButtonEvent_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.NotifyButtonEventReleased
struct ABP_ButtonPressEvent_C_NotifyButtonEventReleased_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ReceiveEndPlay
struct ABP_ButtonPressEvent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.OnDebuggingActive
struct ABP_ButtonPressEvent_C_OnDebuggingActive_Params
{
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ReceiveTick
struct ABP_ButtonPressEvent_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ButtonPressEvent.BP_ButtonPressEvent_C.ExecuteUbergraph_BP_ButtonPressEvent
struct ABP_ButtonPressEvent_C_ExecuteUbergraph_BP_ButtonPressEvent_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
