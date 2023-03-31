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

// Function UI_HudHitEffects2.UI_HudHitEffects2_C.NewDirectionalHitIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          angle                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudHitEffects2_C::NewDirectionalHitIndicator(float angle, float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudHitEffects2.UI_HudHitEffects2_C.NewDirectionalHitIndicator");

	UUI_HudHitEffects2_C_NewDirectionalHitIndicator_Params params;
	params.angle = angle;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudHitEffects2.UI_HudHitEffects2_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudHitEffects2_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudHitEffects2.UI_HudHitEffects2_C.Init");

	UUI_HudHitEffects2_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudHitEffects2.UI_HudHitEffects2_C.ShowHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudHitEffects2_C::ShowHit(float angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudHitEffects2.UI_HudHitEffects2_C.ShowHit");

	UUI_HudHitEffects2_C_ShowHit_Params params;
	params.angle = angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudHitEffects2.UI_HudHitEffects2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HudHitEffects2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudHitEffects2.UI_HudHitEffects2_C.Construct");

	UUI_HudHitEffects2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudHitEffects2.UI_HudHitEffects2_C.OnTakeDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               PawnDamaged                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CriticalHit                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           KillingBlow                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudHitEffects2_C::OnTakeDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, class ABendPawn* PawnDamaged, bool CriticalHit, bool KillingBlow)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudHitEffects2.UI_HudHitEffects2_C.OnTakeDamage");

	UUI_HudHitEffects2_C_OnTakeDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.PawnDamaged = PawnDamaged;
	params.CriticalHit = CriticalHit;
	params.KillingBlow = KillingBlow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudHitEffects2.UI_HudHitEffects2_C.BindPlayerEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPlayerPawn*         Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudHitEffects2_C::BindPlayerEvents(class ABendPlayerPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudHitEffects2.UI_HudHitEffects2_C.BindPlayerEvents");

	UUI_HudHitEffects2_C_BindPlayerEvents_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudHitEffects2.UI_HudHitEffects2_C.ExecuteUbergraph_UI_HudHitEffects2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudHitEffects2_C::ExecuteUbergraph_UI_HudHitEffects2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudHitEffects2.UI_HudHitEffects2_C.ExecuteUbergraph_UI_HudHitEffects2");

	UUI_HudHitEffects2_C_ExecuteUbergraph_UI_HudHitEffects2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
