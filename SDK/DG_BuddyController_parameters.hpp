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

// Function BuddyController.BuddyController_C.UserConstructionScript
struct ABuddyController_C_UserConstructionScript_Params
{
};

// Function BuddyController.BuddyController_C.ReceiveBeginPlay
struct ABuddyController_C_ReceiveBeginPlay_Params
{
};

// Function BuddyController.BuddyController_C.BroadcastingEventAwareOfPlayer
struct ABuddyController_C_BroadcastingEventAwareOfPlayer_Params
{
};

// Function BuddyController.BuddyController_C.ExecuteUbergraph_BuddyController
struct ABuddyController_C_ExecuteUbergraph_BuddyController_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuddyController.BuddyController_C.CloseToArrival__DelegateSignature
struct ABuddyController_C_CloseToArrival__DelegateSignature_Params
{
};

// Function BuddyController.BuddyController_C.ContinueMove__DelegateSignature
struct ABuddyController_C_ContinueMove__DelegateSignature_Params
{
	struct FVector                                     Next_Point;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Slow_Approach;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Approach_Radius;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Acceptable_Radius;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Warning_Distance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuddyController.BuddyController_C.ThrowMolotov__DelegateSignature
struct ABuddyController_C_ThrowMolotov__DelegateSignature_Params
{
};

// Function BuddyController.BuddyController_C.BuddyInRange__DelegateSignature
struct ABuddyController_C_BuddyInRange__DelegateSignature_Params
{
};

// Function BuddyController.BuddyController_C.DestinationReached__DelegateSignature
struct ABuddyController_C_DestinationReached__DelegateSignature_Params
{
	TEnumAsByte<EPathFollowingResult>                  Path_Result;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuddyController.BuddyController_C.targetPawn__DelegateSignature
struct ABuddyController_C_targetPawn__DelegateSignature_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuddyController.BuddyController_C.BeginMove__DelegateSignature
struct ABuddyController_C_BeginMove__DelegateSignature_Params
{
	struct FVector                                     Move_Pos;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Slow_Approach;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Approach_Radius;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Acceptable_Radius;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Warning_Distance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BuddyController.BuddyController_C.AwareOfPlayer__DelegateSignature
struct ABuddyController_C_AwareOfPlayer__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
