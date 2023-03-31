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

// Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.GetDamageMultiplierFromSkills
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageMultiplier               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeapon_Micro_Stats_C::GetDamageMultiplierFromSkills(const struct FName& Key, float* DamageMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.GetDamageMultiplierFromSkills");

	UWeapon_Micro_Stats_C_GetDamageMultiplierFromSkills_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageMultiplier != nullptr)
		*DamageMultiplier = params.DamageMultiplier;
}


// Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.SetDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryWeaponItem*    NewWeapon                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ABendWeapon*             CurrentWeapon                  (Parm, ZeroConstructor, IsPlainOldData)

void UWeapon_Micro_Stats_C::SetDetails(class UInventoryWeaponItem* NewWeapon, class ABendWeapon* CurrentWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.SetDetails");

	UWeapon_Micro_Stats_C_SetDetails_Params params;
	params.NewWeapon = NewWeapon;
	params.CurrentWeapon = CurrentWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.StatsComparison
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CurrentWeaponKey               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewWeaponKey                   (Parm, ZeroConstructor, IsPlainOldData)

void UWeapon_Micro_Stats_C::StatsComparison(const struct FName& CurrentWeaponKey, const struct FName& NewWeaponKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.StatsComparison");

	UWeapon_Micro_Stats_C_StatsComparison_Params params;
	params.CurrentWeaponKey = CurrentWeaponKey;
	params.NewWeaponKey = NewWeaponKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.SetStatInfo_Number
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Total                          (Parm, ZeroConstructor, IsPlainOldData)

void UWeapon_Micro_Stats_C::SetStatInfo_Number(const struct FText& Text, float Value, float Total)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.SetStatInfo_Number");

	UWeapon_Micro_Stats_C_SetStatInfo_Number_Params params;
	params.Text = Text;
	params.Value = Value;
	params.Total = Total;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.SetStatInfo_Bar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWeapon_Stat_Progress_C* Stat                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              StatText                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// class UHorizontalBox*          Row                            (Parm, ZeroConstructor, IsPlainOldData)

void UWeapon_Micro_Stats_C::SetStatInfo_Bar(class UWeapon_Stat_Progress_C* Stat, class UTextBlock* StatText, const struct FText& Text, float Value, class UHorizontalBox* Row)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.SetStatInfo_Bar");

	UWeapon_Micro_Stats_C_SetStatInfo_Bar_Params params;
	params.Stat = Stat;
	params.StatText = StatText;
	params.Text = Text;
	params.Value = Value;
	params.Row = Row;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.SetStatsForBikePart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItemMotorcyclePart* BikePart                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UWeapon_Micro_Stats_C::SetStatsForBikePart(class UInventoryItemMotorcyclePart* BikePart)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.SetStatsForBikePart");

	UWeapon_Micro_Stats_C_SetStatsForBikePart_Params params;
	params.BikePart = BikePart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.SetStatsForInventoryItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          InventoryItem                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FInventoryItemStats     InventoryStorageWeapon         (Parm)

void UWeapon_Micro_Stats_C::SetStatsForInventoryItem(class UInventoryItem* InventoryItem, const struct FInventoryItemStats& InventoryStorageWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.SetStatsForInventoryItem");

	UWeapon_Micro_Stats_C_SetStatsForInventoryItem_Params params;
	params.InventoryItem = InventoryItem;
	params.InventoryStorageWeapon = InventoryStorageWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.SetNames&DisplayStatBars
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsMelee                        (Parm, ZeroConstructor, IsPlainOldData)

void UWeapon_Micro_Stats_C::SetNames_DisplayStatBars(bool IsMelee)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.SetNames&DisplayStatBars");

	UWeapon_Micro_Stats_C_SetNames_DisplayStatBars_Params params;
	params.IsMelee = IsMelee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.GetWeaponRange
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon_Projectile*  WeaponProjectile               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Range                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeapon_Micro_Stats_C::GetWeaponRange(class ABendWeapon_Projectile* WeaponProjectile, float* Range)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.GetWeaponRange");

	UWeapon_Micro_Stats_C_GetWeaponRange_Params params;
	params.WeaponProjectile = WeaponProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Range != nullptr)
		*Range = params.Range;
}


// Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.SetStatsFromWeaponRef
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EWeaponType>       WeaponType                     (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryAmmoID>  AmmoID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldCompare                  (Parm, ZeroConstructor, IsPlainOldData)

void UWeapon_Micro_Stats_C::SetStatsFromWeaponRef(class ABendWeapon* Weapon, TEnumAsByte<EWeaponType> WeaponType, TEnumAsByte<EInventoryAmmoID> AmmoID, bool ShouldCompare)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.SetStatsFromWeaponRef");

	UWeapon_Micro_Stats_C_SetStatsFromWeaponRef_Params params;
	params.Weapon = Weapon;
	params.WeaponType = WeaponType;
	params.AmmoID = AmmoID;
	params.ShouldCompare = ShouldCompare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.SetStatsForPickup
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendInventoryPickup*    InventoryPickup                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWeapon                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Better                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeapon_Micro_Stats_C::SetStatsForPickup(class ABendInventoryPickup* InventoryPickup, bool* IsWeapon, bool* Better)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.SetStatsForPickup");

	UWeapon_Micro_Stats_C_SetStatsForPickup_Params params;
	params.InventoryPickup = InventoryPickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsWeapon != nullptr)
		*IsWeapon = params.IsWeapon;
	if (Better != nullptr)
		*Better = params.Better;
}


// Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.SetShowNew
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowNew                        (Parm, ZeroConstructor, IsPlainOldData)

void UWeapon_Micro_Stats_C::SetShowNew(bool ShowNew)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.SetShowNew");

	UWeapon_Micro_Stats_C_SetShowNew_Params params;
	params.ShowNew = ShowNew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.SetStatsForInventoryStorageWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryStorageWeapon InventoryStorageWeapon         (Parm)

void UWeapon_Micro_Stats_C::SetStatsForInventoryStorageWeapon(const struct FInventoryStorageWeapon& InventoryStorageWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.SetStatsForInventoryStorageWeapon");

	UWeapon_Micro_Stats_C_SetStatsForInventoryStorageWeapon_Params params;
	params.InventoryStorageWeapon = InventoryStorageWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.SetStatsForItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendInventoryPickup*    InventoryPickup                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWeapon                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWeapon_Micro_Stats_C::SetStatsForItem(class ABendInventoryPickup* InventoryPickup, bool* IsWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.SetStatsForItem");

	UWeapon_Micro_Stats_C_SetStatsForItem_Params params;
	params.InventoryPickup = InventoryPickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsWeapon != nullptr)
		*IsWeapon = params.IsWeapon;
}


// Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.OnLoaded_2FF3695C4827C2905F80519BF0277802
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (Parm, ZeroConstructor, IsPlainOldData)

void UWeapon_Micro_Stats_C::OnLoaded_2FF3695C4827C2905F80519BF0277802(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.OnLoaded_2FF3695C4827C2905F80519BF0277802");

	UWeapon_Micro_Stats_C_OnLoaded_2FF3695C4827C2905F80519BF0277802_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.OnLoaded_83BDA23A45884BCAC95E038F0E16F320
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (Parm, ZeroConstructor, IsPlainOldData)

void UWeapon_Micro_Stats_C::OnLoaded_83BDA23A45884BCAC95E038F0E16F320(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.OnLoaded_83BDA23A45884BCAC95E038F0E16F320");

	UWeapon_Micro_Stats_C_OnLoaded_83BDA23A45884BCAC95E038F0E16F320_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeapon_Micro_Stats_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.Construct");

	UWeapon_Micro_Stats_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.UpdateStatsForISW_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryStorageWeapon InventoryStorageWeapon         (Parm)

void UWeapon_Micro_Stats_C::UpdateStatsForISW_Event(const struct FInventoryStorageWeapon& InventoryStorageWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.UpdateStatsForISW_Event");

	UWeapon_Micro_Stats_C_UpdateStatsForISW_Event_Params params;
	params.InventoryStorageWeapon = InventoryStorageWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.Async Load Weapon Icon A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    Texture_Asset_ID               (Parm)
// class UImage*                  Image                          (Parm, ZeroConstructor, IsPlainOldData)

void UWeapon_Micro_Stats_C::Async_Load_Weapon_Icon_A(TAssetPtr<class UTexture2D> Texture_Asset_ID, class UImage* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.Async Load Weapon Icon A");

	UWeapon_Micro_Stats_C_Async_Load_Weapon_Icon_A_Params params;
	params.Texture_Asset_ID = Texture_Asset_ID;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.Async Load Weapon Icon B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    Texture_Asset_ID               (Parm)
// class UImage*                  Image                          (Parm, ZeroConstructor, IsPlainOldData)

void UWeapon_Micro_Stats_C::Async_Load_Weapon_Icon_B(TAssetPtr<class UTexture2D> Texture_Asset_ID, class UImage* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.Async Load Weapon Icon B");

	UWeapon_Micro_Stats_C_Async_Load_Weapon_Icon_B_Params params;
	params.Texture_Asset_ID = Texture_Asset_ID;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.ExecuteUbergraph_Weapon_Micro_Stats
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeapon_Micro_Stats_C::ExecuteUbergraph_Weapon_Micro_Stats(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.ExecuteUbergraph_Weapon_Micro_Stats");

	UWeapon_Micro_Stats_C_ExecuteUbergraph_Weapon_Micro_Stats_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.UpdateStatsForISW__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryStorageWeapon InventoryStorageWeapon         (Parm)

void UWeapon_Micro_Stats_C::UpdateStatsForISW__DelegateSignature(const struct FInventoryStorageWeapon& InventoryStorageWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Micro_Stats.Weapon_Micro_Stats_C.UpdateStatsForISW__DelegateSignature");

	UWeapon_Micro_Stats_C_UpdateStatsForISW__DelegateSignature_Params params;
	params.InventoryStorageWeapon = InventoryStorageWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
