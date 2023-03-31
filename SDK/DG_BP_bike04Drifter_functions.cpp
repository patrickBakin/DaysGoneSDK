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

// Function BP_bike04Drifter.BP_bike04Drifter_C.WhatBikeIsThis
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAB_bike_size>     VehBIkeType                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_bike04Drifter_C::WhatBikeIsThis(TEnumAsByte<EAB_bike_size>* VehBIkeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.WhatBikeIsThis");

	ABP_bike04Drifter_C_WhatBikeIsThis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VehBIkeType != nullptr)
		*VehBIkeType = params.VehBIkeType;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.I_GetGasInfo
// (BlueprintCallable, BlueprintEvent)

void ABP_bike04Drifter_C::I_GetGasInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.I_GetGasInfo");

	ABP_bike04Drifter_C_I_GetGasInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_bike04Drifter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.UserConstructionScript");

	ABP_bike04Drifter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.DSTankLight__FinishedFunc
// (BlueprintEvent)

void ABP_bike04Drifter_C::DSTankLight__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.DSTankLight__FinishedFunc");

	ABP_bike04Drifter_C_DSTankLight__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.DSTankLight__UpdateFunc
// (BlueprintEvent)

void ABP_bike04Drifter_C::DSTankLight__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.DSTankLight__UpdateFunc");

	ABP_bike04Drifter_C_DSTankLight__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_bike04Drifter_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.ReceiveEndPlay");

	ABP_bike04Drifter_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.I_RefuelingFinished
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_bike04Drifter_C::I_RefuelingFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.I_RefuelingFinished");

	ABP_bike04Drifter_C_I_RefuelingFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.OnReceivedDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBendVehicleDamageType>* DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         damageTaken                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_bike04Drifter_C::OnReceivedDamage(TEnumAsByte<EBendVehicleDamageType>* DamageType, float* damageTaken)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.OnReceivedDamage");

	ABP_bike04Drifter_C_OnReceivedDamage_Params params;
	params.DamageType = DamageType;
	params.damageTaken = damageTaken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.OnDriverFinishedEnteringVehicle
// (Event, Public, BlueprintEvent)

void ABP_bike04Drifter_C::OnDriverFinishedEnteringVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.OnDriverFinishedEnteringVehicle");

	ABP_bike04Drifter_C_OnDriverFinishedEnteringVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.OnDriverFinishedExitingVehicle
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBendVehicleExitReason>* InExitReason                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABP_bike04Drifter_C::OnDriverFinishedExitingVehicle(TEnumAsByte<EBendVehicleExitReason>* InExitReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.OnDriverFinishedExitingVehicle");

	ABP_bike04Drifter_C_OnDriverFinishedExitingVehicle_Params params;
	params.InExitReason = InExitReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_bike04Drifter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.ReceiveBeginPlay");

	ABP_bike04Drifter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.OnFuelReached0Percent
// (BlueprintCallable, BlueprintEvent)

void ABP_bike04Drifter_C::OnFuelReached0Percent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.OnFuelReached0Percent");

	ABP_bike04Drifter_C_OnFuelReached0Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.CheckIfAtZeroHealth
// (BlueprintCallable, BlueprintEvent)

void ABP_bike04Drifter_C::CheckIfAtZeroHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.CheckIfAtZeroHealth");

	ABP_bike04Drifter_C_CheckIfAtZeroHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.OnFuelReached50Percent_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_bike04Drifter_C::OnFuelReached50Percent_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.OnFuelReached50Percent_Event_1");

	ABP_bike04Drifter_C_OnFuelReached50Percent_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.BndEvt__PlayerRefuel_LeftSide_K2Node_ComponentBoundEvent_846_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_bike04Drifter_C::BndEvt__PlayerRefuel_LeftSide_K2Node_ComponentBoundEvent_846_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.BndEvt__PlayerRefuel_LeftSide_K2Node_ComponentBoundEvent_846_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_bike04Drifter_C_BndEvt__PlayerRefuel_LeftSide_K2Node_ComponentBoundEvent_846_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.BndEvt__PlayerRefuel_RightSide_K2Node_ComponentBoundEvent_856_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_bike04Drifter_C::BndEvt__PlayerRefuel_RightSide_K2Node_ComponentBoundEvent_856_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.BndEvt__PlayerRefuel_RightSide_K2Node_ComponentBoundEvent_856_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_bike04Drifter_C_BndEvt__PlayerRefuel_RightSide_K2Node_ComponentBoundEvent_856_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.BndEvt__PlayerRefuel_LeftSide_K2Node_ComponentBoundEvent_866_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_bike04Drifter_C::BndEvt__PlayerRefuel_LeftSide_K2Node_ComponentBoundEvent_866_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.BndEvt__PlayerRefuel_LeftSide_K2Node_ComponentBoundEvent_866_ComponentEndOverlapSignature__DelegateSignature");

	ABP_bike04Drifter_C_BndEvt__PlayerRefuel_LeftSide_K2Node_ComponentBoundEvent_866_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.BndEvt__PlayerRefuel_RightSide_K2Node_ComponentBoundEvent_876_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_bike04Drifter_C::BndEvt__PlayerRefuel_RightSide_K2Node_ComponentBoundEvent_876_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.BndEvt__PlayerRefuel_RightSide_K2Node_ComponentBoundEvent_876_ComponentEndOverlapSignature__DelegateSignature");

	ABP_bike04Drifter_C_BndEvt__PlayerRefuel_RightSide_K2Node_ComponentBoundEvent_876_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.I_InteractRangeUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InRange                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_bike04Drifter_C::I_InteractRangeUpdate(bool InRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.I_InteractRangeUpdate");

	ABP_bike04Drifter_C_I_InteractRangeUpdate_Params params;
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.LeftEnc
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendEncampmentData*     Encampment                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_bike04Drifter_C::LeftEnc(class UBendEncampmentData* Encampment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.LeftEnc");

	ABP_bike04Drifter_C_LeftEnc_Params params;
	params.Encampment = Encampment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_bike04Drifter_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.ReceivePostSaveGameLoaded");

	ABP_bike04Drifter_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.EnableBikeDetection
// (BlueprintCallable, BlueprintEvent)

void ABP_bike04Drifter_C::EnableBikeDetection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.EnableBikeDetection");

	ABP_bike04Drifter_C_EnableBikeDetection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.DisableBikeDetection
// (BlueprintCallable, BlueprintEvent)

void ABP_bike04Drifter_C::DisableBikeDetection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.DisableBikeDetection");

	ABP_bike04Drifter_C_DisableBikeDetection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.I_SetGasCanHasControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          HasControl                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_bike04Drifter_C::I_SetGasCanHasControl(bool* HasControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.I_SetGasCanHasControl");

	ABP_bike04Drifter_C_I_SetGasCanHasControl_Params params;
	params.HasControl = HasControl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.OnTutorialClosed_2
// (BlueprintCallable, BlueprintEvent)

void ABP_bike04Drifter_C::OnTutorialClosed_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.OnTutorialClosed_2");

	ABP_bike04Drifter_C_OnTutorialClosed_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.OnTutorialClosed_4
// (BlueprintCallable, BlueprintEvent)

void ABP_bike04Drifter_C::OnTutorialClosed_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.OnTutorialClosed_4");

	ABP_bike04Drifter_C_OnTutorialClosed_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.OnTutorialClosed_5
// (BlueprintCallable, BlueprintEvent)

void ABP_bike04Drifter_C::OnTutorialClosed_5()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.OnTutorialClosed_5");

	ABP_bike04Drifter_C_OnTutorialClosed_5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.OnTutorialClosed_6
// (BlueprintCallable, BlueprintEvent)

void ABP_bike04Drifter_C::OnTutorialClosed_6()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.OnTutorialClosed_6");

	ABP_bike04Drifter_C_OnTutorialClosed_6_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.DistanceTutorial
// (BlueprintCallable, BlueprintEvent)

void ABP_bike04Drifter_C::DistanceTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.DistanceTutorial");

	ABP_bike04Drifter_C_DistanceTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.DSTankOn
// (BlueprintCallable, BlueprintEvent)

void ABP_bike04Drifter_C::DSTankOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.DSTankOn");

	ABP_bike04Drifter_C_DSTankOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.DSTankOff
// (BlueprintCallable, BlueprintEvent)

void ABP_bike04Drifter_C::DSTankOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.DSTankOff");

	ABP_bike04Drifter_C_DSTankOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.OnStartEngine
// (Event, Public, BlueprintEvent)

void ABP_bike04Drifter_C::OnStartEngine()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.OnStartEngine");

	ABP_bike04Drifter_C_OnStartEngine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.OnStopEngine
// (Event, Public, BlueprintEvent)

void ABP_bike04Drifter_C::OnStopEngine()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.OnStopEngine");

	ABP_bike04Drifter_C_OnStopEngine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.DSTankSetState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StateOn                        (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Material1                      (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Material2                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParameterName1                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParameterName2                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_bike04Drifter_C::DSTankSetState(bool StateOn, class UMaterialInstanceDynamic* Material1, class UMaterialInstanceDynamic* Material2, const struct FName& ParameterName1, const struct FName& ParameterName2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.DSTankSetState");

	ABP_bike04Drifter_C_DSTankSetState_Params params;
	params.StateOn = StateOn;
	params.Material1 = Material1;
	params.Material2 = Material2;
	params.ParameterName1 = ParameterName1;
	params.ParameterName2 = ParameterName2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_557_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_bike04Drifter_C::BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_557_ComponentBeginOverlapSignature__DelegateSignature(class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex, bool* bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_557_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_bike04Drifter_C_BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_557_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_565_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_bike04Drifter_C::BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_565_ComponentEndOverlapSignature__DelegateSignature(class AActor** OtherActor, class UPrimitiveComponent** OtherComp, int* OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_565_ComponentEndOverlapSignature__DelegateSignature");

	ABP_bike04Drifter_C_BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_565_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.I_DeathStrandingForceUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           forcereset                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_bike04Drifter_C::I_DeathStrandingForceUpdate(bool forcereset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.I_DeathStrandingForceUpdate");

	ABP_bike04Drifter_C_I_DeathStrandingForceUpdate_Params params;
	params.forcereset = forcereset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.BabyTankOn
// (BlueprintCallable, BlueprintEvent)

void ABP_bike04Drifter_C::BabyTankOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.BabyTankOn");

	ABP_bike04Drifter_C_BabyTankOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.BabyTankOff
// (BlueprintCallable, BlueprintEvent)

void ABP_bike04Drifter_C::BabyTankOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.BabyTankOff");

	ABP_bike04Drifter_C_BabyTankOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.ExecuteUbergraph_BP_bike04Drifter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_bike04Drifter_C::ExecuteUbergraph_BP_bike04Drifter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.ExecuteUbergraph_BP_bike04Drifter");

	ABP_bike04Drifter_C_ExecuteUbergraph_BP_bike04Drifter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.TelemetryEvent_BS_Damaged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBendVehicleDamageType> DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          damageTaken                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_bike04Drifter_C::TelemetryEvent_BS_Damaged__DelegateSignature(TEnumAsByte<EBendVehicleDamageType> DamageType, float damageTaken)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.TelemetryEvent_BS_Damaged__DelegateSignature");

	ABP_bike04Drifter_C_TelemetryEvent_BS_Damaged__DelegateSignature_Params params;
	params.DamageType = DamageType;
	params.damageTaken = damageTaken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter.BP_bike04Drifter_C.TelemetryEvent_BS_Refueled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_bike04Drifter_C::TelemetryEvent_BS_Refueled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter.BP_bike04Drifter_C.TelemetryEvent_BS_Refueled__DelegateSignature");

	ABP_bike04Drifter_C_TelemetryEvent_BS_Refueled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
