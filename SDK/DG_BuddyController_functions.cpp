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

// Function BuddyController.BuddyController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABuddyController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyController.BuddyController_C.UserConstructionScript");

	ABuddyController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuddyController.BuddyController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABuddyController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyController.BuddyController_C.ReceiveBeginPlay");

	ABuddyController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuddyController.BuddyController_C.BroadcastingEventAwareOfPlayer
// (BlueprintCallable, BlueprintEvent)

void ABuddyController_C::BroadcastingEventAwareOfPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyController.BuddyController_C.BroadcastingEventAwareOfPlayer");

	ABuddyController_C_BroadcastingEventAwareOfPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuddyController.BuddyController_C.ExecuteUbergraph_BuddyController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuddyController_C::ExecuteUbergraph_BuddyController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyController.BuddyController_C.ExecuteUbergraph_BuddyController");

	ABuddyController_C_ExecuteUbergraph_BuddyController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuddyController.BuddyController_C.CloseToArrival__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABuddyController_C::CloseToArrival__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyController.BuddyController_C.CloseToArrival__DelegateSignature");

	ABuddyController_C_CloseToArrival__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuddyController.BuddyController_C.ContinueMove__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Next_Point                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Slow_Approach                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Approach_Radius                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Acceptable_Radius              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Warning_Distance               (Parm, ZeroConstructor, IsPlainOldData)

void ABuddyController_C::ContinueMove__DelegateSignature(const struct FVector& Next_Point, bool Slow_Approach, float Approach_Radius, float Acceptable_Radius, float Warning_Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyController.BuddyController_C.ContinueMove__DelegateSignature");

	ABuddyController_C_ContinueMove__DelegateSignature_Params params;
	params.Next_Point = Next_Point;
	params.Slow_Approach = Slow_Approach;
	params.Approach_Radius = Approach_Radius;
	params.Acceptable_Radius = Acceptable_Radius;
	params.Warning_Distance = Warning_Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuddyController.BuddyController_C.ThrowMolotov__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABuddyController_C::ThrowMolotov__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyController.BuddyController_C.ThrowMolotov__DelegateSignature");

	ABuddyController_C_ThrowMolotov__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuddyController.BuddyController_C.BuddyInRange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABuddyController_C::BuddyInRange__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyController.BuddyController_C.BuddyInRange__DelegateSignature");

	ABuddyController_C_BuddyInRange__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuddyController.BuddyController_C.DestinationReached__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> Path_Result                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuddyController_C::DestinationReached__DelegateSignature(TEnumAsByte<EPathFollowingResult> Path_Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyController.BuddyController_C.DestinationReached__DelegateSignature");

	ABuddyController_C_DestinationReached__DelegateSignature_Params params;
	params.Path_Result = Path_Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuddyController.BuddyController_C.targetPawn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuddyController_C::targetPawn__DelegateSignature(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyController.BuddyController_C.targetPawn__DelegateSignature");

	ABuddyController_C_targetPawn__DelegateSignature_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuddyController.BuddyController_C.BeginMove__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Move_Pos                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Slow_Approach                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Approach_Radius                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Acceptable_Radius              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Warning_Distance               (Parm, ZeroConstructor, IsPlainOldData)

void ABuddyController_C::BeginMove__DelegateSignature(const struct FVector& Move_Pos, bool Slow_Approach, float Approach_Radius, float Acceptable_Radius, float Warning_Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyController.BuddyController_C.BeginMove__DelegateSignature");

	ABuddyController_C_BeginMove__DelegateSignature_Params params;
	params.Move_Pos = Move_Pos;
	params.Slow_Approach = Slow_Approach;
	params.Approach_Radius = Approach_Radius;
	params.Acceptable_Radius = Acceptable_Radius;
	params.Warning_Distance = Warning_Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuddyController.BuddyController_C.AwareOfPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABuddyController_C::AwareOfPlayer__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuddyController.BuddyController_C.AwareOfPlayer__DelegateSignature");

	ABuddyController_C_AwareOfPlayer__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
