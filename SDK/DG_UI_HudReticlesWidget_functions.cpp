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

// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.TurnOffTickInAFrame
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudReticlesWidget_C::TurnOffTickInAFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.TurnOffTickInAFrame");

	UUI_HudReticlesWidget_C_TurnOffTickInAFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.Should XP Be Shown?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Show_XP_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudReticlesWidget_C::Should_XP_Be_Shown_(bool* Show_XP_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.Should XP Be Shown?");

	UUI_HudReticlesWidget_C_Should_XP_Be_Shown__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Show_XP_ != nullptr)
		*Show_XP_ = params.Show_XP_;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.DisplaySlowMotionCharged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudReticlesWidget_C::DisplaySlowMotionCharged(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.DisplaySlowMotionCharged");

	UUI_HudReticlesWidget_C_DisplaySlowMotionCharged_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.UpdateSlowMotionMeter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudReticlesWidget_C::UpdateSlowMotionMeter(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.UpdateSlowMotionMeter");

	UUI_HudReticlesWidget_C_UpdateSlowMotionMeter_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.DisplaySlowMotionMeter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudReticlesWidget_C::DisplaySlowMotionMeter(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.DisplaySlowMotionMeter");

	UUI_HudReticlesWidget_C_DisplaySlowMotionMeter_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.HeadshotXPBonusAward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCombatHitCounter_C*     Widget_Reference               (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   BonusText                      (Parm)
// int                            XPValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudReticlesWidget_C::HeadshotXPBonusAward(class UCombatHitCounter_C* Widget_Reference, const struct FText& BonusText, int XPValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.HeadshotXPBonusAward");

	UUI_HudReticlesWidget_C_HeadshotXPBonusAward_Params params;
	params.Widget_Reference = Widget_Reference;
	params.BonusText = BonusText;
	params.XPValue = XPValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.NewXPAward
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               EnemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            XPValue                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Horde                          (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  EnemyMesh                      (Parm, ZeroConstructor, IsPlainOldData)
// class UCombatHitCounter_C*     Widget_Reference               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudReticlesWidget_C::NewXPAward(class ABendPawn* EnemyTarget, int XPValue, bool Horde, class USkeletalMeshComponent* EnemyMesh, class UCombatHitCounter_C** Widget_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.NewXPAward");

	UUI_HudReticlesWidget_C_NewXPAward_Params params;
	params.EnemyTarget = EnemyTarget;
	params.XPValue = XPValue;
	params.Horde = Horde;
	params.EnemyMesh = EnemyMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget_Reference != nullptr)
		*Widget_Reference = params.Widget_Reference;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.NewXPBonusAward
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               EnemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   BonusText                      (Parm)
// int                            XPValue_                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isHorde                        (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  EnemyMesh                      (Parm, ZeroConstructor, IsPlainOldData)
// class UCombatHitCounter_C*     Widget_Reference               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudReticlesWidget_C::NewXPBonusAward(class ABendPawn* EnemyTarget, const struct FText& BonusText, int XPValue_, bool isHorde, class USkeletalMeshComponent* EnemyMesh, class UCombatHitCounter_C** Widget_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.NewXPBonusAward");

	UUI_HudReticlesWidget_C_NewXPBonusAward_Params params;
	params.EnemyTarget = EnemyTarget;
	params.BonusText = BonusText;
	params.XPValue_ = XPValue_;
	params.isHorde = isHorde;
	params.EnemyMesh = EnemyMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget_Reference != nullptr)
		*Widget_Reference = params.Widget_Reference;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.NewHitCounter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               EnemyTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// class UCombatHitCounter_C*     Widget_Reference               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HudReticlesWidget_C::NewHitCounter(class ABendPawn* EnemyTarget, class UCombatHitCounter_C** Widget_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.NewHitCounter");

	UUI_HudReticlesWidget_C_NewHitCounter_Params params;
	params.EnemyTarget = EnemyTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget_Reference != nullptr)
		*Widget_Reference = params.Widget_Reference;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.SetInvisible
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudReticlesWidget_C::SetInvisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.SetInvisible");

	UUI_HudReticlesWidget_C_SetInvisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.HideHit
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudReticlesWidget_C::HideHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.HideHit");

	UUI_HudReticlesWidget_C_HideHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.SetHit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KillShot                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HitArmor                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudReticlesWidget_C::SetHit(bool KillShot, bool HitArmor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.SetHit");

	UUI_HudReticlesWidget_C_SetHit_Params params;
	params.KillShot = KillShot;
	params.HitArmor = HitArmor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.CheckTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudReticlesWidget_C::CheckTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.CheckTarget");

	UUI_HudReticlesWidget_C_CheckTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudReticlesWidget_C::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.SetVisible");

	UUI_HudReticlesWidget_C_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.SetScope
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHudWeaponWidgetSlot> WeaponType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Scoping                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudReticlesWidget_C::SetScope(TEnumAsByte<EHudWeaponWidgetSlot> WeaponType, bool Scoping)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.SetScope");

	UUI_HudReticlesWidget_C_SetScope_Params params;
	params.WeaponType = WeaponType;
	params.Scoping = Scoping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.SetFiring
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudReticlesWidget_C::SetFiring()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.SetFiring");

	UUI_HudReticlesWidget_C_SetFiring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudReticlesWidget_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.Init");

	UUI_HudReticlesWidget_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.ShowReticle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsAiming                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EHudWeaponWidgetSlot> WeaponType                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudReticlesWidget_C::ShowReticle(bool IsAiming, TEnumAsByte<EHudWeaponWidgetSlot> WeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.ShowReticle");

	UUI_HudReticlesWidget_C_ShowReticle_Params params;
	params.IsAiming = IsAiming;
	params.WeaponType = WeaponType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HudReticlesWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.Construct");

	UUI_HudReticlesWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudReticlesWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.Tick");

	UUI_HudReticlesWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.FireComplete_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_HudReticlesWidget_C::FireComplete_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.FireComplete_Event");

	UUI_HudReticlesWidget_C_FireComplete_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.SlowMotionActivated
// (BlueprintCallable, BlueprintEvent)

void UUI_HudReticlesWidget_C::SlowMotionActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.SlowMotionActivated");

	UUI_HudReticlesWidget_C_SlowMotionActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.SlowMotionFull
// (BlueprintCallable, BlueprintEvent)

void UUI_HudReticlesWidget_C::SlowMotionFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.SlowMotionFull");

	UUI_HudReticlesWidget_C_SlowMotionFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.EnemyKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               VictimPawn                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            XPValue                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasCriticalHit                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudReticlesWidget_C::EnemyKilled(class ABendPawn* VictimPawn, class UDamageType* DamageType, int XPValue, class AActor* DamageCauser, bool WasCriticalHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.EnemyKilled");

	UUI_HudReticlesWidget_C_EnemyKilled_Params params;
	params.VictimPawn = VictimPawn;
	params.DamageType = DamageType;
	params.XPValue = XPValue;
	params.DamageCauser = DamageCauser;
	params.WasCriticalHit = WasCriticalHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.HordeKilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  VictimMesh                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            XPValue                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasCriticalHit                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudReticlesWidget_C::HordeKilled(class USkeletalMeshComponent* VictimMesh, class UDamageType* DamageType, int XPValue, class AActor* DamageCauser, bool WasCriticalHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.HordeKilled");

	UUI_HudReticlesWidget_C_HordeKilled_Params params;
	params.VictimMesh = VictimMesh;
	params.DamageType = DamageType;
	params.XPValue = XPValue;
	params.DamageCauser = DamageCauser;
	params.WasCriticalHit = WasCriticalHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.OnPlayerShotSomeone_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromForceKill                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudReticlesWidget_C::OnPlayerShotSomeone_Event_1(class ABendPawn* Pawn, float Damage, bool FromForceKill)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.OnPlayerShotSomeone_Event_1");

	UUI_HudReticlesWidget_C_OnPlayerShotSomeone_Event_1_Params params;
	params.Pawn = Pawn;
	params.Damage = Damage;
	params.FromForceKill = FromForceKill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.OnBulletDamageFromPlayer_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendCrowdMemberHandle  CrowdMemberHandle              (Parm)
// bool                           bWasHeadShot                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudReticlesWidget_C::OnBulletDamageFromPlayer_Event_1(const struct FBendCrowdMemberHandle& CrowdMemberHandle, bool bWasHeadShot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.OnBulletDamageFromPlayer_Event_1");

	UUI_HudReticlesWidget_C_OnBulletDamageFromPlayer_Event_1_Params params;
	params.CrowdMemberHandle = CrowdMemberHandle;
	params.bWasHeadShot = bWasHeadShot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.OnPlayerShotDamageableObject_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudReticlesWidget_C::OnPlayerShotDamageableObject_Event_1(class AActor* Actor, float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.OnPlayerShotDamageableObject_Event_1");

	UUI_HudReticlesWidget_C_OnPlayerShotDamageableObject_Event_1_Params params;
	params.Actor = Actor;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.OnSlowMotionDeactivated
// (BlueprintCallable, BlueprintEvent)

void UUI_HudReticlesWidget_C::OnSlowMotionDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.OnSlowMotionDeactivated");

	UUI_HudReticlesWidget_C_OnSlowMotionDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.HordeDamageFromPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendCrowdMemberHandle  CrowdMemberHandle              (Parm)
// bool                           bWasHeadShot                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudReticlesWidget_C::HordeDamageFromPlayer(const struct FBendCrowdMemberHandle& CrowdMemberHandle, bool bWasHeadShot)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.HordeDamageFromPlayer");

	UUI_HudReticlesWidget_C_HordeDamageFromPlayer_Params params;
	params.CrowdMemberHandle = CrowdMemberHandle;
	params.bWasHeadShot = bWasHeadShot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.ExecuteUbergraph_UI_HudReticlesWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudReticlesWidget_C::ExecuteUbergraph_UI_HudReticlesWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.ExecuteUbergraph_UI_HudReticlesWidget");

	UUI_HudReticlesWidget_C_ExecuteUbergraph_UI_HudReticlesWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.FireComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_HudReticlesWidget_C::FireComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.FireComplete__DelegateSignature");

	UUI_HudReticlesWidget_C_FireComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.OnTargetNull__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_HudReticlesWidget_C::OnTargetNull__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.OnTargetNull__DelegateSignature");

	UUI_HudReticlesWidget_C_OnTargetNull__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.OnTargetAcquired__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudReticlesWidget_C::OnTargetAcquired__DelegateSignature(class ABendPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudReticlesWidget.UI_HudReticlesWidget_C.OnTargetAcquired__DelegateSignature");

	UUI_HudReticlesWidget_C_OnTargetAcquired__DelegateSignature_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
