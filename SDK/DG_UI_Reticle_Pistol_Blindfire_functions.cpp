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

// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.HideHit
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Reticle_Pistol_Blindfire_C::HideHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.HideHit");

	UUI_Reticle_Pistol_Blindfire_C_HideHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.SetHit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KillShot                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HitArmor                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Pistol_Blindfire_C::SetHit(bool KillShot, bool HitArmor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.SetHit");

	UUI_Reticle_Pistol_Blindfire_C_SetHit_Params params;
	params.KillShot = KillShot;
	params.HitArmor = HitArmor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Pistol_Blindfire_C::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.SetVisible");

	UUI_Reticle_Pistol_Blindfire_C_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Reticle_Pistol_Blindfire_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.Construct");

	UUI_Reticle_Pistol_Blindfire_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.SetAccuracy
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         AccuracyScale                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Pistol_Blindfire_C::SetAccuracy(float* AccuracyScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.SetAccuracy");

	UUI_Reticle_Pistol_Blindfire_C_SetAccuracy_Params params;
	params.AccuracyScale = AccuracyScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.OnPlayerShotSomeone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromForceKill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Pistol_Blindfire_C::OnPlayerShotSomeone(class ABendPawn* Pawn, float Damage, bool FromForceKill)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.OnPlayerShotSomeone");

	UUI_Reticle_Pistol_Blindfire_C_OnPlayerShotSomeone_Params params;
	params.Pawn = Pawn;
	params.Damage = Damage;
	params.FromForceKill = FromForceKill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.OnBulletDamageFromPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendCrowdMemberHandle  CrowdMemberHandle              (Parm)
// bool                           bWasHeadShot                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Pistol_Blindfire_C::OnBulletDamageFromPlayer(const struct FBendCrowdMemberHandle& CrowdMemberHandle, bool bWasHeadShot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.OnBulletDamageFromPlayer");

	UUI_Reticle_Pistol_Blindfire_C_OnBulletDamageFromPlayer_Params params;
	params.CrowdMemberHandle = CrowdMemberHandle;
	params.bWasHeadShot = bWasHeadShot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.OnPlayerShotDamageableObject
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Pistol_Blindfire_C::OnPlayerShotDamageableObject(class AActor* Actor, float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.OnPlayerShotDamageableObject");

	UUI_Reticle_Pistol_Blindfire_C_OnPlayerShotDamageableObject_Params params;
	params.Actor = Actor;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.OnEnemyKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               VictimPawn                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            XPValue                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasCriticalHit                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Pistol_Blindfire_C::OnEnemyKilled(class ABendPawn* VictimPawn, class UDamageType* DamageType, int XPValue, class AActor* DamageCauser, bool WasCriticalHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.OnEnemyKilled");

	UUI_Reticle_Pistol_Blindfire_C_OnEnemyKilled_Params params;
	params.VictimPawn = VictimPawn;
	params.DamageType = DamageType;
	params.XPValue = XPValue;
	params.DamageCauser = DamageCauser;
	params.WasCriticalHit = WasCriticalHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.OnCrowdMemberKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  VictimMesh                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            XPValue                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasCriticalHit                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Pistol_Blindfire_C::OnCrowdMemberKilled(class USkeletalMeshComponent* VictimMesh, class UDamageType* DamageType, int XPValue, class AActor* DamageCauser, bool WasCriticalHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.OnCrowdMemberKilled");

	UUI_Reticle_Pistol_Blindfire_C_OnCrowdMemberKilled_Params params;
	params.VictimMesh = VictimMesh;
	params.DamageType = DamageType;
	params.XPValue = XPValue;
	params.DamageCauser = DamageCauser;
	params.WasCriticalHit = WasCriticalHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Pistol_Blindfire_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.Tick");

	UUI_Reticle_Pistol_Blindfire_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.ExecuteUbergraph_UI_Reticle_Pistol_Blindfire
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reticle_Pistol_Blindfire_C::ExecuteUbergraph_UI_Reticle_Pistol_Blindfire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.ExecuteUbergraph_UI_Reticle_Pistol_Blindfire");

	UUI_Reticle_Pistol_Blindfire_C_ExecuteUbergraph_UI_Reticle_Pistol_Blindfire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.FireComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Reticle_Pistol_Blindfire_C::FireComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_Pistol_Blindfire.UI_Reticle_Pistol_Blindfire_C.FireComplete__DelegateSignature");

	UUI_Reticle_Pistol_Blindfire_C_FireComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
