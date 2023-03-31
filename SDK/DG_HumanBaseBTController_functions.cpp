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

// Function HumanBaseBTController.HumanBaseBTController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHumanBaseBTController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBaseBTController.HumanBaseBTController_C.UserConstructionScript");

	AHumanBaseBTController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBaseBTController.HumanBaseBTController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AHumanBaseBTController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBaseBTController.HumanBaseBTController_C.ReceiveBeginPlay");

	AHumanBaseBTController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBaseBTController.HumanBaseBTController_C.CombatHuntStartedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 PlayerPos                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLastKnownPos             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NPCPosition                    (Parm, ZeroConstructor, IsPlainOldData)

void AHumanBaseBTController_C::CombatHuntStartedEvent(const struct FVector& PlayerPos, const struct FVector& TargetLastKnownPos, const struct FVector& NPCPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBaseBTController.HumanBaseBTController_C.CombatHuntStartedEvent");

	AHumanBaseBTController_C_CombatHuntStartedEvent_Params params;
	params.PlayerPos = PlayerPos;
	params.TargetLastKnownPos = TargetLastKnownPos;
	params.NPCPosition = NPCPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBaseBTController.HumanBaseBTController_C.KillCombatHuntBinding
// (BlueprintCallable, BlueprintEvent)

void AHumanBaseBTController_C::KillCombatHuntBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBaseBTController.HumanBaseBTController_C.KillCombatHuntBinding");

	AHumanBaseBTController_C_KillCombatHuntBinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBaseBTController.HumanBaseBTController_C.OnDied_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ActualDamage                   (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     FHitComponent                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Momentum                       (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AHumanBaseBTController_C::OnDied_Event_1(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBaseBTController.HumanBaseBTController_C.OnDied_Event_1");

	AHumanBaseBTController_C_OnDied_Event_1_Params params;
	params.ActualDamage = ActualDamage;
	params.Killer = Killer;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBaseBTController.HumanBaseBTController_C.AwarePlayerEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAIAwareState>     PreviousAwareness              (Parm, ZeroConstructor, IsPlainOldData)

void AHumanBaseBTController_C::AwarePlayerEvent(class ABendAIController* Controller, TEnumAsByte<EAIAwareState> PreviousAwareness)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBaseBTController.HumanBaseBTController_C.AwarePlayerEvent");

	AHumanBaseBTController_C_AwarePlayerEvent_Params params;
	params.Controller = Controller;
	params.PreviousAwareness = PreviousAwareness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBaseBTController.HumanBaseBTController_C.ExecuteUbergraph_HumanBaseBTController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AHumanBaseBTController_C::ExecuteUbergraph_HumanBaseBTController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBaseBTController.HumanBaseBTController_C.ExecuteUbergraph_HumanBaseBTController");

	AHumanBaseBTController_C_ExecuteUbergraph_HumanBaseBTController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanBaseBTController.HumanBaseBTController_C.AwareOfPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AHumanBaseBTController_C::AwareOfPlayer__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanBaseBTController.HumanBaseBTController_C.AwareOfPlayer__DelegateSignature");

	AHumanBaseBTController_C_AwareOfPlayer__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
