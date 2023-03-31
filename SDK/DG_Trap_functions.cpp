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

// Function Trap.Trap_C.ShowTutorial
// (Public, BlueprintCallable, BlueprintEvent)

void ATrap_C::ShowTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.ShowTutorial");

	ATrap_C_ShowTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATrap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.UserConstructionScript");

	ATrap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ATrap_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.ReceiveBeginPlay");

	ATrap_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.OnTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABendPawn**              TriggeringPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void ATrap_C::OnTrigger(class ABendPawn** TriggeringPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.OnTrigger");

	ATrap_C_OnTrigger_Params params;
	params.TriggeringPawn = TriggeringPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.Trap_OnInventoryPickup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendInventoryPickup*    InventoryPickup                (Parm, ZeroConstructor, IsPlainOldData)

void ATrap_C::Trap_OnInventoryPickup(class ABendInventoryPickup* InventoryPickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.Trap_OnInventoryPickup");

	ATrap_C_Trap_OnInventoryPickup_Params params;
	params.InventoryPickup = InventoryPickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.Trap_ExactMomentOfPickup
// (BlueprintCallable, BlueprintEvent)

void ATrap_C::Trap_ExactMomentOfPickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.Trap_ExactMomentOfPickup");

	ATrap_C_Trap_ExactMomentOfPickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.TrapExplode
// (BlueprintCallable, BlueprintEvent)

void ATrap_C::TrapExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.TrapExplode");

	ATrap_C_TrapExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ATrap_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.ReceiveAnyDamage");

	ATrap_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.PlayArmedBeep
// (BlueprintCallable, BlueprintEvent)

void ATrap_C::PlayArmedBeep()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.PlayArmedBeep");

	ATrap_C_PlayArmedBeep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.HandleAttachedToDestructibleExploded
// (BlueprintCallable, BlueprintEvent)

void ATrap_C::HandleAttachedToDestructibleExploded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.HandleAttachedToDestructibleExploded");

	ATrap_C_HandleAttachedToDestructibleExploded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.SetupAttachedToDestructibleExploded
// (BlueprintCallable, BlueprintEvent)

void ATrap_C::SetupAttachedToDestructibleExploded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.SetupAttachedToDestructibleExploded");

	ATrap_C_SetupAttachedToDestructibleExploded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ATrap_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.ReceivePreSaveGameLoaded");

	ATrap_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.TriggerWeaponPlayer
// (BlueprintCallable, BlueprintEvent)

void ATrap_C::TriggerWeaponPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.TriggerWeaponPlayer");

	ATrap_C_TriggerWeaponPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.TriggerWeaponAIPawn
// (BlueprintCallable, BlueprintEvent)

void ATrap_C::TriggerWeaponAIPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.TriggerWeaponAIPawn");

	ATrap_C_TriggerWeaponAIPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.SetupTutorial
// (BlueprintCallable, BlueprintEvent)

void ATrap_C::SetupTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.SetupTutorial");

	ATrap_C_SetupTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.AllowTutorial
// (BlueprintCallable, BlueprintEvent)

void ATrap_C::AllowTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.AllowTutorial");

	ATrap_C_AllowTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.HideTutorial
// (BlueprintCallable, BlueprintEvent)

void ATrap_C::HideTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.HideTutorial");

	ATrap_C_HideTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_431_BeginOverlapSig__DelegateSignature
// (BlueprintEvent)

void ATrap_C::BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_431_BeginOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_431_BeginOverlapSig__DelegateSignature");

	ATrap_C_BndEvt__TutorialTrigger_K2Node_ComponentBoundEvent_431_BeginOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.OnFireDelayed
// (BlueprintCallable, BlueprintEvent)

void ATrap_C::OnFireDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.OnFireDelayed");

	ATrap_C_OnFireDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.WillLureToThrownNoise
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          WillHear                       (Parm, ZeroConstructor, IsPlainOldData)

void ATrap_C::WillLureToThrownNoise(bool* WillHear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.WillLureToThrownNoise");

	ATrap_C_WillLureToThrownNoise_Params params;
	params.WillHear = WillHear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.StopVibration
// (BlueprintCallable, BlueprintEvent)

void ATrap_C::StopVibration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.StopVibration");

	ATrap_C_StopVibration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ATrap_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.ReceiveEndPlay");

	ATrap_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.ExecuteUbergraph_Trap
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATrap_C::ExecuteUbergraph_Trap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.ExecuteUbergraph_Trap");

	ATrap_C_ExecuteUbergraph_Trap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.TrapExploded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ATrap_C::TrapExploded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.TrapExploded__DelegateSignature");

	ATrap_C_TrapExploded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap.Trap_C.TrapPickedUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendTrap*               Trap                           (Parm, ZeroConstructor, IsPlainOldData)

void ATrap_C::TrapPickedUp__DelegateSignature(class ABendTrap* Trap)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trap.Trap_C.TrapPickedUp__DelegateSignature");

	ATrap_C_TrapPickedUp__DelegateSignature_Params params;
	params.Trap = Trap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
