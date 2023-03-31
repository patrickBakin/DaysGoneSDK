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

// Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.AreAllCompleted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBendMissionData*> Missions                       (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UJobClassInfo*>   Jobs                           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           AllCompleted                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ControlOutOfBounds_C::AreAllCompleted(TArray<class UBendMissionData*>* Missions, TArray<class UJobClassInfo*>* Jobs, bool* AllCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.AreAllCompleted");

	ABP_ControlOutOfBounds_C_AreAllCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Missions != nullptr)
		*Missions = params.Missions;
	if (Jobs != nullptr)
		*Jobs = params.Jobs;
	if (AllCompleted != nullptr)
		*AllCompleted = params.AllCompleted;
}


// Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ControlOutOfBounds_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.UserConstructionScript");

	ABP_ControlOutOfBounds_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.OnActorBeginOverlap_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ControlOutOfBounds_C::OnActorBeginOverlap_Event_1(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.OnActorBeginOverlap_Event_1");

	ABP_ControlOutOfBounds_C_OnActorBeginOverlap_Event_1_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.OnFadedToBlack_MM_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void ABP_ControlOutOfBounds_C::OnFadedToBlack_MM_Event_1(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.OnFadedToBlack_MM_Event_1");

	ABP_ControlOutOfBounds_C_OnFadedToBlack_MM_Event_1_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_ControlOutOfBounds_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.ReceiveBeginPlay");

	ABP_ControlOutOfBounds_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.BndEvt__BendBoundaryFailure_K2Node_ComponentBoundEvent_269_OnFailStart__DelegateSignature
// (BlueprintEvent)

void ABP_ControlOutOfBounds_C::BndEvt__BendBoundaryFailure_K2Node_ComponentBoundEvent_269_OnFailStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.BndEvt__BendBoundaryFailure_K2Node_ComponentBoundEvent_269_OnFailStart__DelegateSignature");

	ABP_ControlOutOfBounds_C_BndEvt__BendBoundaryFailure_K2Node_ComponentBoundEvent_269_OnFailStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.BndEvt__BendBoundaryFailure_K2Node_ComponentBoundEvent_271_OnFailEnd__DelegateSignature
// (BlueprintEvent)

void ABP_ControlOutOfBounds_C::BndEvt__BendBoundaryFailure_K2Node_ComponentBoundEvent_271_OnFailEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.BndEvt__BendBoundaryFailure_K2Node_ComponentBoundEvent_271_OnFailEnd__DelegateSignature");

	ABP_ControlOutOfBounds_C_BndEvt__BendBoundaryFailure_K2Node_ComponentBoundEvent_271_OnFailEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.OnActorBeginOverlap_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ControlOutOfBounds_C::OnActorBeginOverlap_Event_2(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.OnActorBeginOverlap_Event_2");

	ABP_ControlOutOfBounds_C_OnActorBeginOverlap_Event_2_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.OnActorEndOverlap_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ControlOutOfBounds_C::OnActorEndOverlap_Event_1(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.OnActorEndOverlap_Event_1");

	ABP_ControlOutOfBounds_C_OnActorEndOverlap_Event_1_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.ExecuteUbergraph_BP_ControlOutOfBounds
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ControlOutOfBounds_C::ExecuteUbergraph_BP_ControlOutOfBounds(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ControlOutOfBounds.BP_ControlOutOfBounds_C.ExecuteUbergraph_BP_ControlOutOfBounds");

	ABP_ControlOutOfBounds_C_ExecuteUbergraph_BP_ControlOutOfBounds_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
