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

// Function BikeStatePackage.BikeStatePackage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABikeStatePackage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeStatePackage.BikeStatePackage_C.UserConstructionScript");

	ABikeStatePackage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeStatePackage.BikeStatePackage_C.WaitForNextImpact
// (BlueprintCallable, BlueprintEvent)

void ABikeStatePackage_C::WaitForNextImpact()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeStatePackage.BikeStatePackage_C.WaitForNextImpact");

	ABikeStatePackage_C_WaitForNextImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeStatePackage.BikeStatePackage_C.BikeImpactCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 BikeVelocity                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          HitIntensity                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  CollidedActor                  (Parm, ZeroConstructor, IsPlainOldData)

void ABikeStatePackage_C::BikeImpactCall(const struct FVector& BikeVelocity, float HitIntensity, class AActor* CollidedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeStatePackage.BikeStatePackage_C.BikeImpactCall");

	ABikeStatePackage_C_BikeImpactCall_Params params;
	params.BikeVelocity = BikeVelocity;
	params.HitIntensity = HitIntensity;
	params.CollidedActor = CollidedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeStatePackage.BikeStatePackage_C.OutOfGasCall
// (BlueprintCallable, BlueprintEvent)

void ABikeStatePackage_C::OutOfGasCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeStatePackage.BikeStatePackage_C.OutOfGasCall");

	ABikeStatePackage_C_OutOfGasCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeStatePackage.BikeStatePackage_C.BikeDamagedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBendVehicleDamageType> DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          damageTaken                    (Parm, ZeroConstructor, IsPlainOldData)

void ABikeStatePackage_C::BikeDamagedCall(TEnumAsByte<EBendVehicleDamageType> DamageType, float damageTaken)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeStatePackage.BikeStatePackage_C.BikeDamagedCall");

	ABikeStatePackage_C_BikeDamagedCall_Params params;
	params.DamageType = DamageType;
	params.damageTaken = damageTaken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeStatePackage.BikeStatePackage_C.RepairBike
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Scrap                          (Parm, ZeroConstructor, IsPlainOldData)

void ABikeStatePackage_C::RepairBike(int Scrap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeStatePackage.BikeStatePackage_C.RepairBike");

	ABikeStatePackage_C_RepairBike_Params params;
	params.Scrap = Scrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeStatePackage.BikeStatePackage_C.FullyDamaged
// (BlueprintCallable, BlueprintEvent)

void ABikeStatePackage_C::FullyDamaged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeStatePackage.BikeStatePackage_C.FullyDamaged");

	ABikeStatePackage_C_FullyDamaged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeStatePackage.BikeStatePackage_C.WheelieStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  PrevState                      (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABikeStatePackage_C::WheelieStateChange(unsigned char PrevState, unsigned char NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeStatePackage.BikeStatePackage_C.WheelieStateChange");

	ABikeStatePackage_C_WheelieStateChange_Params params;
	params.PrevState = PrevState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeStatePackage.BikeStatePackage_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABikeStatePackage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeStatePackage.BikeStatePackage_C.ReceiveBeginPlay");

	ABikeStatePackage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeStatePackage.BikeStatePackage_C.RecheckPlayerPawn
// (BlueprintCallable, BlueprintEvent)

void ABikeStatePackage_C::RecheckPlayerPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeStatePackage.BikeStatePackage_C.RecheckPlayerPawn");

	ABikeStatePackage_C_RecheckPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeStatePackage.BikeStatePackage_C.RecheckBike
// (BlueprintCallable, BlueprintEvent)

void ABikeStatePackage_C::RecheckBike()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeStatePackage.BikeStatePackage_C.RecheckBike");

	ABikeStatePackage_C_RecheckBike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeStatePackage.BikeStatePackage_C.PlayerEnteredBike
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class AVehiclePawn*            VehiclePawn                    (Parm, ZeroConstructor, IsPlainOldData)

void ABikeStatePackage_C::PlayerEnteredBike(class ABendAIController* Controller, class ABendPawn* Pawn, class AVehiclePawn* VehiclePawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeStatePackage.BikeStatePackage_C.PlayerEnteredBike");

	ABikeStatePackage_C_PlayerEnteredBike_Params params;
	params.Controller = Controller;
	params.Pawn = Pawn;
	params.VehiclePawn = VehiclePawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeStatePackage.BikeStatePackage_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABikeStatePackage_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeStatePackage.BikeStatePackage_C.ReceivePostSaveGameLoaded");

	ABikeStatePackage_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeStatePackage.BikeStatePackage_C.BikeImpact
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 BikeVelocity                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          HitIntensity                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  CollidedActor                  (Parm, ZeroConstructor, IsPlainOldData)

void ABikeStatePackage_C::BikeImpact(const struct FVector& BikeVelocity, float HitIntensity, class AActor* CollidedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeStatePackage.BikeStatePackage_C.BikeImpact");

	ABikeStatePackage_C_BikeImpact_Params params;
	params.BikeVelocity = BikeVelocity;
	params.HitIntensity = HitIntensity;
	params.CollidedActor = CollidedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeStatePackage.BikeStatePackage_C.OutOfGas
// (BlueprintCallable, BlueprintEvent)

void ABikeStatePackage_C::OutOfGas()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeStatePackage.BikeStatePackage_C.OutOfGas");

	ABikeStatePackage_C_OutOfGas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeStatePackage.BikeStatePackage_C.BikeDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBendVehicleDamageType> DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          damageTaken                    (Parm, ZeroConstructor, IsPlainOldData)

void ABikeStatePackage_C::BikeDamaged(TEnumAsByte<EBendVehicleDamageType> DamageType, float damageTaken)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeStatePackage.BikeStatePackage_C.BikeDamaged");

	ABikeStatePackage_C_BikeDamaged_Params params;
	params.DamageType = DamageType;
	params.damageTaken = damageTaken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeStatePackage.BikeStatePackage_C.BikeRepaired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABillsBike_C*            BikeRef                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Sabotaged                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ScrapCount                     (Parm, ZeroConstructor, IsPlainOldData)

void ABikeStatePackage_C::BikeRepaired(class ABillsBike_C* BikeRef, bool Sabotaged, int ScrapCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeStatePackage.BikeStatePackage_C.BikeRepaired");

	ABikeStatePackage_C_BikeRepaired_Params params;
	params.BikeRef = BikeRef;
	params.Sabotaged = Sabotaged;
	params.ScrapCount = ScrapCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeStatePackage.BikeStatePackage_C.PlayerRespawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPlayerController*   PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void ABikeStatePackage_C::PlayerRespawned(class ABendPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeStatePackage.BikeStatePackage_C.PlayerRespawned");

	ABikeStatePackage_C_PlayerRespawned_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeStatePackage.BikeStatePackage_C.BikeFullyDamaged
// (BlueprintCallable, BlueprintEvent)

void ABikeStatePackage_C::BikeFullyDamaged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeStatePackage.BikeStatePackage_C.BikeFullyDamaged");

	ABikeStatePackage_C_BikeFullyDamaged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeStatePackage.BikeStatePackage_C.OnWheelieStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  PreviousState                  (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  CurrentState                   (Parm, ZeroConstructor, IsPlainOldData)

void ABikeStatePackage_C::OnWheelieStateChanged(unsigned char PreviousState, unsigned char CurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeStatePackage.BikeStatePackage_C.OnWheelieStateChanged");

	ABikeStatePackage_C_OnWheelieStateChanged_Params params;
	params.PreviousState = PreviousState;
	params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BikeStatePackage.BikeStatePackage_C.ExecuteUbergraph_BikeStatePackage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABikeStatePackage_C::ExecuteUbergraph_BikeStatePackage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BikeStatePackage.BikeStatePackage_C.ExecuteUbergraph_BikeStatePackage");

	ABikeStatePackage_C_ExecuteUbergraph_BikeStatePackage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
