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

// Function BendLib_GameplayFunctions.BendLib_GameplayFunctions_C.RepairBike
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Max                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Health                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameplayFunctions_C::STATIC_RepairBike(bool Max, float Health, int Cost, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameplayFunctions.BendLib_GameplayFunctions_C.RepairBike");

	UBendLib_GameplayFunctions_C_RepairBike_Params params;
	params.Max = Max;
	params.Health = Health;
	params.Cost = Cost;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_GameplayFunctions.BendLib_GameplayFunctions_C.RefuelBike
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Max                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          FuelRemainingGallons           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameplayFunctions_C::STATIC_RefuelBike(bool Max, float FuelRemainingGallons, int Cost, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameplayFunctions.BendLib_GameplayFunctions_C.RefuelBike");

	UBendLib_GameplayFunctions_C_RefuelBike_Params params;
	params.Max = Max;
	params.FuelRemainingGallons = FuelRemainingGallons;
	params.Cost = Cost;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_GameplayFunctions.BendLib_GameplayFunctions_C.PointCameraAtAndFollow
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToFollow                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          TransitionTime                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeToFollow                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AllowInput                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameplayFunctions_C::STATIC_PointCameraAtAndFollow(class AActor* ActorToFollow, float TransitionTime, float TimeToFollow, bool AllowInput, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameplayFunctions.BendLib_GameplayFunctions_C.PointCameraAtAndFollow");

	UBendLib_GameplayFunctions_C_PointCameraAtAndFollow_Params params;
	params.ActorToFollow = ActorToFollow;
	params.TransitionTime = TransitionTime;
	params.TimeToFollow = TimeToFollow;
	params.AllowInput = AllowInput;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_GameplayFunctions.BendLib_GameplayFunctions_C.PointCameraAt
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LocationToPointAt              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           interruptable                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AllowInput                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameplayFunctions_C::STATIC_PointCameraAt(const struct FVector& LocationToPointAt, float Time, bool interruptable, bool AllowInput, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameplayFunctions.BendLib_GameplayFunctions_C.PointCameraAt");

	UBendLib_GameplayFunctions_C_PointCameraAt_Params params;
	params.LocationToPointAt = LocationToPointAt;
	params.Time = Time;
	params.interruptable = interruptable;
	params.AllowInput = AllowInput;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_GameplayFunctions.BendLib_GameplayFunctions_C.IsWeaponEquippedInHands
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EInventoryWeaponID> WeaponID                       (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Equipped_                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class ABendWeapon*             Weapon                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameplayFunctions_C::STATIC_IsWeaponEquippedInHands(TEnumAsByte<EInventoryWeaponID> WeaponID, class ABendPawn* Pawn, class UObject* __WorldContext, bool* Equipped_, class ABendWeapon** Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameplayFunctions.BendLib_GameplayFunctions_C.IsWeaponEquippedInHands");

	UBendLib_GameplayFunctions_C_IsWeaponEquippedInHands_Params params;
	params.WeaponID = WeaponID;
	params.Pawn = Pawn;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Equipped_ != nullptr)
		*Equipped_ = params.Equipped_;
	if (Weapon != nullptr)
		*Weapon = params.Weapon;
}


// Function BendLib_GameplayFunctions.BendLib_GameplayFunctions_C.SetHUDWeaponsVisibility
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EScriptVisibility> Visibility                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_GameplayFunctions_C::STATIC_SetHUDWeaponsVisibility(TEnumAsByte<EScriptVisibility> Visibility, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_GameplayFunctions.BendLib_GameplayFunctions_C.SetHUDWeaponsVisibility");

	UBendLib_GameplayFunctions_C_SetHUDWeaponsVisibility_Params params;
	params.Visibility = Visibility;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
