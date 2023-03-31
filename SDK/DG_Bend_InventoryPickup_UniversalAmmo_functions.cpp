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

// Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.IsAllowedAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventoryWeaponID> WeaponID                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AmmoAllowed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABend_InventoryPickup_UniversalAmmo_C::IsAllowedAmmo(TEnumAsByte<EInventoryWeaponID> WeaponID, bool* AmmoAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.IsAllowedAmmo");

	ABend_InventoryPickup_UniversalAmmo_C_IsAllowedAmmo_Params params;
	params.WeaponID = WeaponID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoAllowed != nullptr)
		*AmmoAllowed = params.AmmoAllowed;
}


// Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.PlayPickupAmmoSound
// (Public, BlueprintCallable, BlueprintEvent)

void ABend_InventoryPickup_UniversalAmmo_C::PlayPickupAmmoSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.PlayPickupAmmoSound");

	ABend_InventoryPickup_UniversalAmmo_C_PlayPickupAmmoSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.IsInventoryFull
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABend_InventoryPickup_UniversalAmmo_C::IsInventoryFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.IsInventoryFull");

	ABend_InventoryPickup_UniversalAmmo_C_IsInventoryFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_InventoryPickup_UniversalAmmo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.UserConstructionScript");

	ABend_InventoryPickup_UniversalAmmo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.OnPerformActionMid
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          FromAnim                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          AlreadyDidPickup               (Parm, ZeroConstructor, IsPlainOldData)

void ABend_InventoryPickup_UniversalAmmo_C::OnPerformActionMid(bool* FromAnim, bool* AlreadyDidPickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.OnPerformActionMid");

	ABend_InventoryPickup_UniversalAmmo_C_OnPerformActionMid_Params params;
	params.FromAnim = FromAnim;
	params.AlreadyDidPickup = AlreadyDidPickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.DisplayHudNotificationInternal
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             NotifyTexture                  (Parm, ZeroConstructor, IsPlainOldData)

void ABend_InventoryPickup_UniversalAmmo_C::DisplayHudNotificationInternal(class UTexture2D** NotifyTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.DisplayHudNotificationInternal");

	ABend_InventoryPickup_UniversalAmmo_C_DisplayHudNotificationInternal_Params params;
	params.NotifyTexture = NotifyTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABend_InventoryPickup_UniversalAmmo_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.ReceivePostSaveGameLoaded");

	ABend_InventoryPickup_UniversalAmmo_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.ExecuteUbergraph_Bend_InventoryPickup_UniversalAmmo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_InventoryPickup_UniversalAmmo_C::ExecuteUbergraph_Bend_InventoryPickup_UniversalAmmo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_InventoryPickup_UniversalAmmo.Bend_InventoryPickup_UniversalAmmo_C.ExecuteUbergraph_Bend_InventoryPickup_UniversalAmmo");

	ABend_InventoryPickup_UniversalAmmo_C_ExecuteUbergraph_Bend_InventoryPickup_UniversalAmmo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
