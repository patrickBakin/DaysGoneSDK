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

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ToggleNEROCheckpointFastTravel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_AmbushCamp_NERO_MiniMapLocationActor_C*> NEROCheckpointMiniMapLocations (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           NewActive                      (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::ToggleNEROCheckpointFastTravel(bool NewActive, TArray<class ABP_AmbushCamp_NERO_MiniMapLocationActor_C*>* NEROCheckpointMiniMapLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ToggleNEROCheckpointFastTravel");

	AORWorldGlobal_DesignGlobal_C_ToggleNEROCheckpointFastTravel_Params params;
	params.NewActive = NewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NEROCheckpointMiniMapLocations != nullptr)
		*NEROCheckpointMiniMapLocations = params.NEROCheckpointMiniMapLocations;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ToggleAmbushCampFastTravel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_AmbushCamp_MiniMapFastTravelLocation_C*> AmbushCampMiniMapLocations     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           NewActive                      (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::ToggleAmbushCampFastTravel(bool NewActive, TArray<class ABP_AmbushCamp_MiniMapFastTravelLocation_C*>* AmbushCampMiniMapLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ToggleAmbushCampFastTravel");

	AORWorldGlobal_DesignGlobal_C_ToggleAmbushCampFastTravel_Params params;
	params.NewActive = NewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmbushCampMiniMapLocations != nullptr)
		*AmbushCampMiniMapLocations = params.AmbushCampMiniMapLocations;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ToggleEncampmentFastTravel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABendEncampmentActor*> BendEncampmentActors           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           NewActive                      (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::ToggleEncampmentFastTravel(bool NewActive, TArray<class ABendEncampmentActor*>* BendEncampmentActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ToggleEncampmentFastTravel");

	AORWorldGlobal_DesignGlobal_C_ToggleEncampmentFastTravel_Params params;
	params.NewActive = NewActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BendEncampmentActors != nullptr)
		*BendEncampmentActors = params.BendEncampmentActors;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.UnSlowBikeOnExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappingActor               (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::UnSlowBikeOnExit(class AActor* OverlappingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.UnSlowBikeOnExit");

	AORWorldGlobal_DesignGlobal_C_UnSlowBikeOnExit_Params params;
	params.OverlappingActor = OverlappingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.SlowBikeOnEnter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappingActor               (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::SlowBikeOnEnter(class AActor* OverlappingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.SlowBikeOnEnter");

	AORWorldGlobal_DesignGlobal_C_SlowBikeOnEnter_Params params;
	params.OverlappingActor = OverlappingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_CopelandsCamp_K2Node_ActorBoundEvent_1335_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::BndEvt__BendEncampmentActor_CopelandsCamp_K2Node_ActorBoundEvent_1335_ActorBeginOverlapSignature__DelegateSignature(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_CopelandsCamp_K2Node_ActorBoundEvent_1335_ActorBeginOverlapSignature__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_CopelandsCamp_K2Node_ActorBoundEvent_1335_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_CopelandsCamp_K2Node_ActorBoundEvent_1340_ActorEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::BndEvt__BendEncampmentActor_CopelandsCamp_K2Node_ActorBoundEvent_1340_ActorEndOverlapSignature__DelegateSignature(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_CopelandsCamp_K2Node_ActorBoundEvent_1340_ActorEndOverlapSignature__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_CopelandsCamp_K2Node_ActorBoundEvent_1340_ActorEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_SalomeHotsprings_5_K2Node_ActorBoundEvent_1347_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::BndEvt__BendEncampmentActor_SalomeHotsprings_5_K2Node_ActorBoundEvent_1347_ActorBeginOverlapSignature__DelegateSignature(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_SalomeHotsprings_5_K2Node_ActorBoundEvent_1347_ActorBeginOverlapSignature__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_SalomeHotsprings_5_K2Node_ActorBoundEvent_1347_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_IronMikes_K2Node_ActorBoundEvent_1351_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::BndEvt__BendEncampmentActor_IronMikes_K2Node_ActorBoundEvent_1351_ActorBeginOverlapSignature__DelegateSignature(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_IronMikes_K2Node_ActorBoundEvent_1351_ActorBeginOverlapSignature__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_IronMikes_K2Node_ActorBoundEvent_1351_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_SalomeHotsprings_5_K2Node_ActorBoundEvent_1356_ActorEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::BndEvt__BendEncampmentActor_SalomeHotsprings_5_K2Node_ActorBoundEvent_1356_ActorEndOverlapSignature__DelegateSignature(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_SalomeHotsprings_5_K2Node_ActorBoundEvent_1356_ActorEndOverlapSignature__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_SalomeHotsprings_5_K2Node_ActorBoundEvent_1356_ActorEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_IronMikes_K2Node_ActorBoundEvent_1362_ActorEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::BndEvt__BendEncampmentActor_IronMikes_K2Node_ActorBoundEvent_1362_ActorEndOverlapSignature__DelegateSignature(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_IronMikes_K2Node_ActorBoundEvent_1362_ActorEndOverlapSignature__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_IronMikes_K2Node_ActorBoundEvent_1362_ActorEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BoozerSafehouseVolume_K2Node_ActorBoundEvent_30_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::BndEvt__BoozerSafehouseVolume_K2Node_ActorBoundEvent_30_ActorBeginOverlapSignature__DelegateSignature(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BoozerSafehouseVolume_K2Node_ActorBoundEvent_30_ActorBeginOverlapSignature__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__BoozerSafehouseVolume_K2Node_ActorBoundEvent_30_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BoozerSafehouseVolume_K2Node_ActorBoundEvent_38_ActorEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::BndEvt__BoozerSafehouseVolume_K2Node_ActorBoundEvent_38_ActorEndOverlapSignature__DelegateSignature(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BoozerSafehouseVolume_K2Node_ActorBoundEvent_38_ActorEndOverlapSignature__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__BoozerSafehouseVolume_K2Node_ActorBoundEvent_38_ActorEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.PlayerRespawnBikeCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPlayerController*   PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::PlayerRespawnBikeCheck(class ABendPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.PlayerRespawnBikeCheck");

	AORWorldGlobal_DesignGlobal_C_PlayerRespawnBikeCheck_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BikeValidCheck
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BikeValidCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BikeValidCheck");

	AORWorldGlobal_DesignGlobal_C_BikeValidCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BikeValidCheck2
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BikeValidCheck2()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BikeValidCheck2");

	AORWorldGlobal_DesignGlobal_C_BikeValidCheck2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_EarthBinds
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::RFO_EarthBinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_EarthBinds");

	AORWorldGlobal_DesignGlobal_C_RFO_EarthBinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_EarthUnbinds
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::RFO_EarthUnbinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_EarthUnbinds");

	AORWorldGlobal_DesignGlobal_C_RFO_EarthUnbinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ReceiveBeginPlay");

	AORWorldGlobal_DesignGlobal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.OnBikePartPurchased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItemMotorcyclePart* Part                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::OnBikePartPurchased(class UInventoryItemMotorcyclePart* Part, int Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.OnBikePartPurchased");

	AORWorldGlobal_DesignGlobal_C_OnBikePartPurchased_Params params;
	params.Part = Part;
	params.Cost = Cost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_Gun_Control_Binds
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::RFO_Gun_Control_Binds()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_Gun_Control_Binds");

	AORWorldGlobal_DesignGlobal_C_RFO_Gun_Control_Binds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RecheckGM1
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::RecheckGM1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RecheckGM1");

	AORWorldGlobal_DesignGlobal_C_RecheckGM1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.GameEvent
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendGameEventBase      Event                          (ConstParm, Parm, OutParm, ReferenceParm)

void AORWorldGlobal_DesignGlobal_C::GameEvent(const struct FBendGameEventBase& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.GameEvent");

	AORWorldGlobal_DesignGlobal_C_GameEvent_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_Gun_Control_Unbinds
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::RFO_Gun_Control_Unbinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_Gun_Control_Unbinds");

	AORWorldGlobal_DesignGlobal_C_RFO_Gun_Control_Unbinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RecheckGM2
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::RecheckGM2()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RecheckGM2");

	AORWorldGlobal_DesignGlobal_C_RecheckGM2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_Commercialism_Binds
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::RFO_Commercialism_Binds()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_Commercialism_Binds");

	AORWorldGlobal_DesignGlobal_C_RFO_Commercialism_Binds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RecheckGM3
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::RecheckGM3()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RecheckGM3");

	AORWorldGlobal_DesignGlobal_C_RecheckGM3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_Commercialism_Unbinds
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::RFO_Commercialism_Unbinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_Commercialism_Unbinds");

	AORWorldGlobal_DesignGlobal_C_RFO_Commercialism_Unbinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RecheckGM4
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::RecheckGM4()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RecheckGM4");

	AORWorldGlobal_DesignGlobal_C_RecheckGM4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_Bunkers_Property_Binds
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::RFO_Bunkers_Property_Binds()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_Bunkers_Property_Binds");

	AORWorldGlobal_DesignGlobal_C_RFO_Bunkers_Property_Binds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BunkerDiscovered
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BunkerDiscovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BunkerDiscovered");

	AORWorldGlobal_DesignGlobal_C_BunkerDiscovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.AmbushCleared
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::AmbushCleared()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.AmbushCleared");

	AORWorldGlobal_DesignGlobal_C_AmbushCleared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_Bunkers_Unbind
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::RFO_Bunkers_Unbind()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_Bunkers_Unbind");

	AORWorldGlobal_DesignGlobal_C_RFO_Bunkers_Unbind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_Property_Unbind
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::RFO_Property_Unbind()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_Property_Unbind");

	AORWorldGlobal_DesignGlobal_C_RFO_Property_Unbind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.FuelEmpty
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::FuelEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.FuelEmpty");

	AORWorldGlobal_DesignGlobal_C_FuelEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.OnMissionComplete_TCA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::OnMissionComplete_TCA(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.OnMissionComplete_TCA");

	AORWorldGlobal_DesignGlobal_C_OnMissionComplete_TCA_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.OnMissionComplete_LRH
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::OnMissionComplete_LRH(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.OnMissionComplete_LRH");

	AORWorldGlobal_DesignGlobal_C_OnMissionComplete_LRH_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.OnMissionComplete_AWI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::OnMissionComplete_AWI(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.OnMissionComplete_AWI");

	AORWorldGlobal_DesignGlobal_C_OnMissionComplete_AWI_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.CheckFastTravel
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::CheckFastTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.CheckFastTravel");

	AORWorldGlobal_DesignGlobal_C_CheckFastTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_DiamondLake_K2Node_ActorBoundEvent_315_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::BndEvt__BendEncampmentActor_DiamondLake_K2Node_ActorBoundEvent_315_ActorBeginOverlapSignature__DelegateSignature(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_DiamondLake_K2Node_ActorBoundEvent_315_ActorBeginOverlapSignature__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_DiamondLake_K2Node_ActorBoundEvent_315_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_WizardIsland_K2Node_ActorBoundEvent_325_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::BndEvt__BendEncampmentActor_WizardIsland_K2Node_ActorBoundEvent_325_ActorBeginOverlapSignature__DelegateSignature(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_WizardIsland_K2Node_ActorBoundEvent_325_ActorBeginOverlapSignature__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_WizardIsland_K2Node_ActorBoundEvent_325_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_IronMikeFarm_K2Node_ActorBoundEvent_336_ActorBeginOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::BndEvt__BendEncampmentActor_IronMikeFarm_K2Node_ActorBoundEvent_336_ActorBeginOverlapSignature__DelegateSignature(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_IronMikeFarm_K2Node_ActorBoundEvent_336_ActorBeginOverlapSignature__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_IronMikeFarm_K2Node_ActorBoundEvent_336_ActorBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_IronMikeFarm_K2Node_ActorBoundEvent_392_ActorEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::BndEvt__BendEncampmentActor_IronMikeFarm_K2Node_ActorBoundEvent_392_ActorEndOverlapSignature__DelegateSignature(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_IronMikeFarm_K2Node_ActorBoundEvent_392_ActorEndOverlapSignature__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_IronMikeFarm_K2Node_ActorBoundEvent_392_ActorEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_DiamondLake_K2Node_ActorBoundEvent_405_ActorEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::BndEvt__BendEncampmentActor_DiamondLake_K2Node_ActorBoundEvent_405_ActorEndOverlapSignature__DelegateSignature(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_DiamondLake_K2Node_ActorBoundEvent_405_ActorEndOverlapSignature__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_DiamondLake_K2Node_ActorBoundEvent_405_ActorEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_WizardIsland_K2Node_ActorBoundEvent_419_ActorEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::BndEvt__BendEncampmentActor_WizardIsland_K2Node_ActorBoundEvent_419_ActorEndOverlapSignature__DelegateSignature(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_WizardIsland_K2Node_ActorBoundEvent_419_ActorEndOverlapSignature__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_WizardIsland_K2Node_ActorBoundEvent_419_ActorEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ReceivePostSaveGameLoaded");

	AORWorldGlobal_DesignGlobal_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ReceivePreSaveGameLoaded");

	AORWorldGlobal_DesignGlobal_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.TrustBinds
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::TrustBinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.TrustBinds");

	AORWorldGlobal_DesignGlobal_C_TrustBinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.TrustTierChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendEncampmentData*     Encampment                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETrustTier>        PreviousTier                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETrustTier>        NewTier                        (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::TrustTierChanged(class UBendEncampmentData* Encampment, TEnumAsByte<ETrustTier> PreviousTier, TEnumAsByte<ETrustTier> NewTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.TrustTierChanged");

	AORWorldGlobal_DesignGlobal_C_TrustTierChanged_Params params;
	params.Encampment = Encampment;
	params.PreviousTier = PreviousTier;
	params.NewTier = NewTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.CopelandEntered
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::CopelandEntered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.CopelandEntered");

	AORWorldGlobal_DesignGlobal_C_CopelandEntered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.CopelandExited
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::CopelandExited()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.CopelandExited");

	AORWorldGlobal_DesignGlobal_C_CopelandExited_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.DesignGlobal_LevelLoaded
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::DesignGlobal_LevelLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.DesignGlobal_LevelLoaded");

	AORWorldGlobal_DesignGlobal_C_DesignGlobal_LevelLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.AWI2_EnableWIStreamingOverrides
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::AWI2_EnableWIStreamingOverrides()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.AWI2_EnableWIStreamingOverrides");

	AORWorldGlobal_DesignGlobal_C_AWI2_EnableWIStreamingOverrides_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.AWI2_DisableWIStreamingOverrides
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::AWI2_DisableWIStreamingOverrides()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.AWI2_DisableWIStreamingOverrides");

	AORWorldGlobal_DesignGlobal_C_AWI2_DisableWIStreamingOverrides_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ToggleFastTravelLocations
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NorthernActive                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SouthernActive                 (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::ToggleFastTravelLocations(bool NorthernActive, bool SouthernActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ToggleFastTravelLocations");

	AORWorldGlobal_DesignGlobal_C_ToggleFastTravelLocations_Params params;
	params.NorthernActive = NorthernActive;
	params.SouthernActive = SouthernActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.MeleeCamFollow
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::MeleeCamFollow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.MeleeCamFollow");

	AORWorldGlobal_DesignGlobal_C_MeleeCamFollow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.OnMissionComplete_TCA_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::OnMissionComplete_TCA_Copy(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.OnMissionComplete_TCA_Copy");

	AORWorldGlobal_DesignGlobal_C_OnMissionComplete_TCA_Copy_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.OnMissionComplete_TCA_Copy_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::OnMissionComplete_TCA_Copy_Copy(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.OnMissionComplete_TCA_Copy_Copy");

	AORWorldGlobal_DesignGlobal_C_OnMissionComplete_TCA_Copy_Copy_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.OnMissionComplete_TCA_Copy_Copy_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::OnMissionComplete_TCA_Copy_Copy_Copy(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.OnMissionComplete_TCA_Copy_Copy_Copy");

	AORWorldGlobal_DesignGlobal_C_OnMissionComplete_TCA_Copy_Copy_Copy_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BikeChaseSetFail
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BikeChaseSetFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BikeChaseSetFail");

	AORWorldGlobal_DesignGlobal_C_BikeChaseSetFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BikeChaseDidItFail
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BikeChaseDidItFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BikeChaseDidItFail");

	AORWorldGlobal_DesignGlobal_C_BikeChaseDidItFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendSpherePlayerDetector_IronMikes_EastEntrance_K2Node_ActorBoundEvent_370_PlayerBeginOverlap__DelegateSignature
// (BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BndEvt__BendSpherePlayerDetector_IronMikes_EastEntrance_K2Node_ActorBoundEvent_370_PlayerBeginOverlap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendSpherePlayerDetector_IronMikes_EastEntrance_K2Node_ActorBoundEvent_370_PlayerBeginOverlap__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__BendSpherePlayerDetector_IronMikes_EastEntrance_K2Node_ActorBoundEvent_370_PlayerBeginOverlap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendSpherePlayerDetector_IronMikes_NorthEntrance_K2Node_ActorBoundEvent_386_PlayerBeginOverlap__DelegateSignature
// (BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BndEvt__BendSpherePlayerDetector_IronMikes_NorthEntrance_K2Node_ActorBoundEvent_386_PlayerBeginOverlap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendSpherePlayerDetector_IronMikes_NorthEntrance_K2Node_ActorBoundEvent_386_PlayerBeginOverlap__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__BendSpherePlayerDetector_IronMikes_NorthEntrance_K2Node_ActorBoundEvent_386_PlayerBeginOverlap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendSpherePlayerDetector_IronMikes_WestEntrance_K2Node_ActorBoundEvent_403_PlayerBeginOverlap__DelegateSignature
// (BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BndEvt__BendSpherePlayerDetector_IronMikes_WestEntrance_K2Node_ActorBoundEvent_403_PlayerBeginOverlap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendSpherePlayerDetector_IronMikes_WestEntrance_K2Node_ActorBoundEvent_403_PlayerBeginOverlap__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__BendSpherePlayerDetector_IronMikes_WestEntrance_K2Node_ActorBoundEvent_403_PlayerBeginOverlap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendSpherePlayerDetector_IronMikes_WestEntrance_K2Node_ActorBoundEvent_455_PlayerEndOverlap__DelegateSignature
// (BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BndEvt__BendSpherePlayerDetector_IronMikes_WestEntrance_K2Node_ActorBoundEvent_455_PlayerEndOverlap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendSpherePlayerDetector_IronMikes_WestEntrance_K2Node_ActorBoundEvent_455_PlayerEndOverlap__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__BendSpherePlayerDetector_IronMikes_WestEntrance_K2Node_ActorBoundEvent_455_PlayerEndOverlap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendSpherePlayerDetector_IronMikes_NorthEntrance_K2Node_ActorBoundEvent_474_PlayerEndOverlap__DelegateSignature
// (BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BndEvt__BendSpherePlayerDetector_IronMikes_NorthEntrance_K2Node_ActorBoundEvent_474_PlayerEndOverlap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendSpherePlayerDetector_IronMikes_NorthEntrance_K2Node_ActorBoundEvent_474_PlayerEndOverlap__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__BendSpherePlayerDetector_IronMikes_NorthEntrance_K2Node_ActorBoundEvent_474_PlayerEndOverlap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendSpherePlayerDetector_IronMikes_EastEntrance_K2Node_ActorBoundEvent_494_PlayerEndOverlap__DelegateSignature
// (BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BndEvt__BendSpherePlayerDetector_IronMikes_EastEntrance_K2Node_ActorBoundEvent_494_PlayerEndOverlap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendSpherePlayerDetector_IronMikes_EastEntrance_K2Node_ActorBoundEvent_494_PlayerEndOverlap__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__BendSpherePlayerDetector_IronMikes_EastEntrance_K2Node_ActorBoundEvent_494_PlayerEndOverlap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_WI_K2Node_ActorBoundEvent_140_PlayerBeginOverlap__DelegateSignature
// (BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BndEvt__SouthernRegionSpawnControl_WI_K2Node_ActorBoundEvent_140_PlayerBeginOverlap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_WI_K2Node_ActorBoundEvent_140_PlayerBeginOverlap__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_WI_K2Node_ActorBoundEvent_140_PlayerBeginOverlap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_WI_K2Node_ActorBoundEvent_162_PlayerEndOverlap__DelegateSignature
// (BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BndEvt__SouthernRegionSpawnControl_WI_K2Node_ActorBoundEvent_162_PlayerEndOverlap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_WI_K2Node_ActorBoundEvent_162_PlayerEndOverlap__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_WI_K2Node_ActorBoundEvent_162_PlayerEndOverlap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_WI2_K2Node_ActorBoundEvent_317_PlayerBeginOverlap__DelegateSignature
// (BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BndEvt__SouthernRegionSpawnControl_WI2_K2Node_ActorBoundEvent_317_PlayerBeginOverlap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_WI2_K2Node_ActorBoundEvent_317_PlayerBeginOverlap__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_WI2_K2Node_ActorBoundEvent_317_PlayerBeginOverlap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_WI2_K2Node_ActorBoundEvent_341_PlayerEndOverlap__DelegateSignature
// (BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BndEvt__SouthernRegionSpawnControl_WI2_K2Node_ActorBoundEvent_341_PlayerEndOverlap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_WI2_K2Node_ActorBoundEvent_341_PlayerEndOverlap__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_WI2_K2Node_ActorBoundEvent_341_PlayerEndOverlap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_DL2_K2Node_ActorBoundEvent_516_PlayerBeginOverlap__DelegateSignature
// (BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BndEvt__SouthernRegionSpawnControl_DL2_K2Node_ActorBoundEvent_516_PlayerBeginOverlap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_DL2_K2Node_ActorBoundEvent_516_PlayerBeginOverlap__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_DL2_K2Node_ActorBoundEvent_516_PlayerBeginOverlap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_DL2_K2Node_ActorBoundEvent_542_PlayerEndOverlap__DelegateSignature
// (BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BndEvt__SouthernRegionSpawnControl_DL2_K2Node_ActorBoundEvent_542_PlayerEndOverlap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_DL2_K2Node_ActorBoundEvent_542_PlayerEndOverlap__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_DL2_K2Node_ActorBoundEvent_542_PlayerEndOverlap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_CL_AZ_01_K2Node_ActorBoundEvent_725_PlayerBeginOverlap__DelegateSignature
// (BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BndEvt__SouthernRegionSpawnControl_CL_AZ_01_K2Node_ActorBoundEvent_725_PlayerBeginOverlap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_CL_AZ_01_K2Node_ActorBoundEvent_725_PlayerBeginOverlap__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_CL_AZ_01_K2Node_ActorBoundEvent_725_PlayerBeginOverlap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_CL_AZ_01_K2Node_ActorBoundEvent_753_PlayerEndOverlap__DelegateSignature
// (BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BndEvt__SouthernRegionSpawnControl_CL_AZ_01_K2Node_ActorBoundEvent_753_PlayerEndOverlap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_CL_AZ_01_K2Node_ActorBoundEvent_753_PlayerEndOverlap__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_CL_AZ_01_K2Node_ActorBoundEvent_753_PlayerEndOverlap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_CL_AZ_3_K2Node_ActorBoundEvent_782_PlayerBeginOverlap__DelegateSignature
// (BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BndEvt__SouthernRegionSpawnControl_CL_AZ_3_K2Node_ActorBoundEvent_782_PlayerBeginOverlap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_CL_AZ_3_K2Node_ActorBoundEvent_782_PlayerBeginOverlap__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_CL_AZ_3_K2Node_ActorBoundEvent_782_PlayerBeginOverlap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_CL_AZ_3_K2Node_ActorBoundEvent_812_PlayerEndOverlap__DelegateSignature
// (BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BndEvt__SouthernRegionSpawnControl_CL_AZ_3_K2Node_ActorBoundEvent_812_PlayerEndOverlap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_CL_AZ_3_K2Node_ActorBoundEvent_812_PlayerEndOverlap__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_CL_AZ_3_K2Node_ActorBoundEvent_812_PlayerEndOverlap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_HW_AZ_02_K2Node_ActorBoundEvent_843_PlayerBeginOverlap__DelegateSignature
// (BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BndEvt__SouthernRegionSpawnControl_HW_AZ_02_K2Node_ActorBoundEvent_843_PlayerBeginOverlap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_HW_AZ_02_K2Node_ActorBoundEvent_843_PlayerBeginOverlap__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_HW_AZ_02_K2Node_ActorBoundEvent_843_PlayerBeginOverlap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_HW_AZ_02_K2Node_ActorBoundEvent_875_PlayerEndOverlap__DelegateSignature
// (BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::BndEvt__SouthernRegionSpawnControl_HW_AZ_02_K2Node_ActorBoundEvent_875_PlayerEndOverlap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_HW_AZ_02_K2Node_ActorBoundEvent_875_PlayerEndOverlap__DelegateSignature");

	AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_HW_AZ_02_K2Node_ActorBoundEvent_875_PlayerEndOverlap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.UpdateSpawnControl
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::UpdateSpawnControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.UpdateSpawnControl");

	AORWorldGlobal_DesignGlobal_C_UpdateSpawnControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.TurnOffSpawnControl
// (BlueprintCallable, BlueprintEvent)

void AORWorldGlobal_DesignGlobal_C::TurnOffSpawnControl()
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.TurnOffSpawnControl");

	AORWorldGlobal_DesignGlobal_C_TurnOffSpawnControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ExecuteUbergraph_ORWorldGlobal_DesignGlobal
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AORWorldGlobal_DesignGlobal_C::ExecuteUbergraph_ORWorldGlobal_DesignGlobal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ExecuteUbergraph_ORWorldGlobal_DesignGlobal");

	AORWorldGlobal_DesignGlobal_C_ExecuteUbergraph_ORWorldGlobal_DesignGlobal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
