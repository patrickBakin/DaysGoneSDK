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

// Function PlayerStatePackage.PlayerStatePackage_C.GetPawnClosestToLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          DistanceToClosestPawn          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::GetPawnClosestToLocation(const struct FVector& Location, float* DistanceToClosestPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.GetPawnClosestToLocation");

	APlayerStatePackage_C_GetPawnClosestToLocation_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DistanceToClosestPawn != nullptr)
		*DistanceToClosestPawn = params.DistanceToClosestPawn;
}


// Function PlayerStatePackage.PlayerStatePackage_C.CheckWhichAttribute
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Attribute                      (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::CheckWhichAttribute(class UObject* Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.CheckWhichAttribute");

	APlayerStatePackage_C_CheckWhichAttribute_Params params;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.UserConstructionScript");

	APlayerStatePackage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.InpActEvt_F8_UniqueObjectNameForCooking_201
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void APlayerStatePackage_C::InpActEvt_F8_UniqueObjectNameForCooking_201(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.InpActEvt_F8_UniqueObjectNameForCooking_201");

	APlayerStatePackage_C_InpActEvt_F8_UniqueObjectNameForCooking_201_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.PlayerLocationTick
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::PlayerLocationTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.PlayerLocationTick");

	APlayerStatePackage_C_PlayerLocationTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.PlayerStuckTick
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::PlayerStuckTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.PlayerStuckTick");

	APlayerStatePackage_C_PlayerStuckTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.PlayerDiedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::PlayerDiedCall(class AController* Killer, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.PlayerDiedCall");

	APlayerStatePackage_C_PlayerDiedCall_Params params;
	params.Killer = Killer;
	params.DamageType = DamageType;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.GetOnVehicleCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class AVehiclePawn*            VehiclePawn                    (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::GetOnVehicleCall(class ABendPawn* Pawn, class AVehiclePawn* VehiclePawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.GetOnVehicleCall");

	APlayerStatePackage_C_GetOnVehicleCall_Params params;
	params.Pawn = Pawn;
	params.VehiclePawn = VehiclePawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.GetOffVehicleCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVehiclePawn*            VehiclePawn                    (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::GetOffVehicleCall(class AVehiclePawn* VehiclePawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.GetOffVehicleCall");

	APlayerStatePackage_C_GetOffVehicleCall_Params params;
	params.VehiclePawn = VehiclePawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.HideStateChangeEnterDumpster
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::HideStateChangeEnterDumpster()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.HideStateChangeEnterDumpster");

	APlayerStatePackage_C_HideStateChangeEnterDumpster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.SkillAcquiredCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventorySkillID> SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryItemSkill*     SkillItem                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::SkillAcquiredCall(TEnumAsByte<EInventorySkillID> SkillID, class UInventoryItemSkill* SkillItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.SkillAcquiredCall");

	APlayerStatePackage_C_SkillAcquiredCall_Params params;
	params.SkillID = SkillID;
	params.SkillItem = SkillItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.LevelUpCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewLevel                       (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::LevelUpCall(int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.LevelUpCall");

	APlayerStatePackage_C_LevelUpCall_Params params;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.HideStateChangeCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHiding                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanControl                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnclosedSpace                (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::HideStateChangeCall(bool IsHiding, bool CanControl, bool IsEnclosedSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.HideStateChangeCall");

	APlayerStatePackage_C_HideStateChangeCall_Params params;
	params.IsHiding = IsHiding;
	params.CanControl = CanControl;
	params.IsEnclosedSpace = IsEnclosedSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.HideStateChangeExitDumpster
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::HideStateChangeExitDumpster()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.HideStateChangeExitDumpster");

	APlayerStatePackage_C_HideStateChangeExitDumpster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.GrappleBrokenCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Grappler                       (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::GrappleBrokenCall(class ABendPawn* Grappler)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.GrappleBrokenCall");

	APlayerStatePackage_C_GrappleBrokenCall_Params params;
	params.Grappler = Grappler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.GrappleFailedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Grappler                       (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::GrappleFailedCall(class ABendPawn* Grappler)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.GrappleFailedCall");

	APlayerStatePackage_C_GrappleFailedCall_Params params;
	params.Grappler = Grappler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.ItemCraftedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryIDDetails     CraftedItem                    (Parm)

void APlayerStatePackage_C::ItemCraftedCall(const struct FInventoryIDDetails& CraftedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.ItemCraftedCall");

	APlayerStatePackage_C_ItemCraftedCall_Params params;
	params.CraftedItem = CraftedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.RecipeUnlockedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItemRecipe*    Recipe                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::RecipeUnlockedCall(class UInventoryItemRecipe* Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.RecipeUnlockedCall");

	APlayerStatePackage_C_RecipeUnlockedCall_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.AttributePointUsedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendAttribute*          Attribute                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::AttributePointUsedCall(class UBendAttribute* Attribute, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.AttributePointUsedCall");

	APlayerStatePackage_C_AttributePointUsedCall_Params params;
	params.Attribute = Attribute;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.EnemyTaggedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendCalloutWidgetComponent* PawnTagged                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::EnemyTaggedCall(class UBendCalloutWidgetComponent* PawnTagged)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.EnemyTaggedCall");

	APlayerStatePackage_C_EnemyTaggedCall_Params params;
	params.PawnTagged = PawnTagged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.PlayerTriggeredTrapCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendTrap*               Trap                           (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               TriggeringPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::PlayerTriggeredTrapCall(class ABendTrap* Trap, class ABendPawn* TriggeringPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.PlayerTriggeredTrapCall");

	APlayerStatePackage_C_PlayerTriggeredTrapCall_Params params;
	params.Trap = Trap;
	params.TriggeringPawn = TriggeringPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.OpenMenuCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Menu_Class                     (Parm, ZeroConstructor)

void APlayerStatePackage_C::OpenMenuCall(const struct FString& Menu_Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.OpenMenuCall");

	APlayerStatePackage_C_OpenMenuCall_Params params;
	params.Menu_Class = Menu_Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.CloseMenuCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 MenuClass                      (Parm, ZeroConstructor)

void APlayerStatePackage_C::CloseMenuCall(const struct FString& MenuClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.CloseMenuCall");

	APlayerStatePackage_C_CloseMenuCall_Params params;
	params.MenuClass = MenuClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.ChangedMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Menu_Class                     (Parm, ZeroConstructor)

void APlayerStatePackage_C::ChangedMenu(const struct FString& Menu_Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.ChangedMenu");

	APlayerStatePackage_C_ChangedMenu_Params params;
	params.Menu_Class = Menu_Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.PlayerTakeDamageCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::PlayerTakeDamageCall(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.PlayerTakeDamageCall");

	APlayerStatePackage_C_PlayerTakeDamageCall_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.PickedUpMeleeCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// TEnumAsByte<EWeaponRarity>     Tier                           (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::PickedUpMeleeCall(const struct FString& Name, TEnumAsByte<EWeaponRarity> Tier)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.PickedUpMeleeCall");

	APlayerStatePackage_C_PickedUpMeleeCall_Params params;
	params.Name = Name;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.PickupItemCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          Pickup_Item                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::PickupItemCall(class UInventoryItem* Pickup_Item, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.PickupItemCall");

	APlayerStatePackage_C_PickupItemCall_Params params;
	params.Pickup_Item = Pickup_Item;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.PhotoModeStartedCall
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::PhotoModeStartedCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.PhotoModeStartedCall");

	APlayerStatePackage_C_PhotoModeStartedCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.PhotoModeEndedCall
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::PhotoModeEndedCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.PhotoModeEndedCall");

	APlayerStatePackage_C_PhotoModeEndedCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.EnteredAdvancedModeCall
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::EnteredAdvancedModeCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.EnteredAdvancedModeCall");

	APlayerStatePackage_C_EnteredAdvancedModeCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.ExitedAdvancedModeCall
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::ExitedAdvancedModeCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.ExitedAdvancedModeCall");

	APlayerStatePackage_C_ExitedAdvancedModeCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.OnPhotoTaken
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::OnPhotoTaken()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.OnPhotoTaken");

	APlayerStatePackage_C_OnPhotoTaken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.MediumTickEvents
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::MediumTickEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.MediumTickEvents");

	APlayerStatePackage_C_MediumTickEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void APlayerStatePackage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.ReceiveBeginPlay");

	APlayerStatePackage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.RecheckPlayer
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::RecheckPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.RecheckPlayer");

	APlayerStatePackage_C_RecheckPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.PlayerDied
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

void APlayerStatePackage_C::PlayerDied(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.PlayerDied");

	APlayerStatePackage_C_PlayerDied_Params params;
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


// Function PlayerStatePackage.PlayerStatePackage_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.ReceivePostSaveGameLoaded");

	APlayerStatePackage_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.BeginGetOnVehicle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class AVehiclePawn*            VehiclePawn                    (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::BeginGetOnVehicle(class ABendAIController* Controller, class ABendPawn* Pawn, class AVehiclePawn* VehiclePawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.BeginGetOnVehicle");

	APlayerStatePackage_C_BeginGetOnVehicle_Params params;
	params.Controller = Controller;
	params.Pawn = Pawn;
	params.VehiclePawn = VehiclePawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.BeginGetOffVehicle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVehiclePawn*            VehiclePawn                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBendVehicleExitReason> ExitReason                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::BeginGetOffVehicle(class AVehiclePawn* VehiclePawn, TEnumAsByte<EBendVehicleExitReason> ExitReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.BeginGetOffVehicle");

	APlayerStatePackage_C_BeginGetOffVehicle_Params params;
	params.VehiclePawn = VehiclePawn;
	params.ExitReason = ExitReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.ShortestTickEvents
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::ShortestTickEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.ShortestTickEvents");

	APlayerStatePackage_C_ShortestTickEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.HideStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHiding                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanControl                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnclosedSpace                (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::HideStateChange(bool IsHiding, bool CanControl, bool IsEnclosedSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.HideStateChange");

	APlayerStatePackage_C_HideStateChange_Params params;
	params.IsHiding = IsHiding;
	params.CanControl = CanControl;
	params.IsEnclosedSpace = IsEnclosedSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.LevelUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerExperienceLevel*  PlayerXP                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::LevelUp(class UPlayerExperienceLevel* PlayerXP, int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.LevelUp");

	APlayerStatePackage_C_LevelUp_Params params;
	params.PlayerXP = PlayerXP;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.GrappleBroken
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Grappler                       (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::GrappleBroken(class ABendPawn* Grappler)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.GrappleBroken");

	APlayerStatePackage_C_GrappleBroken_Params params;
	params.Grappler = Grappler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.GrappleFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Grappler                       (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::GrappleFailed(class ABendPawn* Grappler)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.GrappleFailed");

	APlayerStatePackage_C_GrappleFailed_Params params;
	params.Grappler = Grappler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.ItemCrafted
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryIDDetails     ItemCrafted                    (ConstParm, Parm, OutParm, ReferenceParm)

void APlayerStatePackage_C::ItemCrafted(const struct FInventoryIDDetails& ItemCrafted)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.ItemCrafted");

	APlayerStatePackage_C_ItemCrafted_Params params;
	params.ItemCrafted = ItemCrafted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.RecipeUnlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItemRecipe*    Recipe                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::RecipeUnlocked(class UInventoryItemRecipe* Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.RecipeUnlocked");

	APlayerStatePackage_C_RecipeUnlocked_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.PlayerRespawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPlayerController*   PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::PlayerRespawned(class ABendPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.PlayerRespawned");

	APlayerStatePackage_C_PlayerRespawned_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.CheckTimeSinceClose
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::CheckTimeSinceClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.CheckTimeSinceClose");

	APlayerStatePackage_C_CheckTimeSinceClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.ReceiveEndPlay");

	APlayerStatePackage_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.ResetTimeOffline
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::ResetTimeOffline()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.ResetTimeOffline");

	APlayerStatePackage_C_ResetTimeOffline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.SkillAcquired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventorySkillID> SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryItemSkill*     SkillItem                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::SkillAcquired(TEnumAsByte<EInventorySkillID> SkillID, class UInventoryItemSkill* SkillItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.SkillAcquired");

	APlayerStatePackage_C_SkillAcquired_Params params;
	params.SkillID = SkillID;
	params.SkillItem = SkillItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.EnemyTagged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendCalloutWidgetComponent* PawnTagged                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::EnemyTagged(class UBendCalloutWidgetComponent* PawnTagged)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.EnemyTagged");

	APlayerStatePackage_C_EnemyTagged_Params params;
	params.PawnTagged = PawnTagged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.TriggeredTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendTrap*               Trap                           (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               TriggeringPawn                 (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::TriggeredTrap(class ABendTrap* Trap, class ABendPawn* TriggeringPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.TriggeredTrap");

	APlayerStatePackage_C_TriggeredTrap_Params params;
	params.Trap = Trap;
	params.TriggeringPawn = TriggeringPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.RetryGM
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::RetryGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.RetryGM");

	APlayerStatePackage_C_RetryGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.PauseMenuOpened
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::PauseMenuOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.PauseMenuOpened");

	APlayerStatePackage_C_PauseMenuOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.PauseMenuClosed
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::PauseMenuClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.PauseMenuClosed");

	APlayerStatePackage_C_PauseMenuClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.WeaponWheelOpened
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::WeaponWheelOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.WeaponWheelOpened");

	APlayerStatePackage_C_WeaponWheelOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.WeaponWheelClosed
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::WeaponWheelClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.WeaponWheelClosed");

	APlayerStatePackage_C_WeaponWheelClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.3DMenuClosed
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::_3DMenuClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.3DMenuClosed");

	APlayerStatePackage_C__3DMenuClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.MenuOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        OpenedMenu                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::MenuOpened(TEnumAsByte<EMenuTypes> OpenedMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.MenuOpened");

	APlayerStatePackage_C_MenuOpened_Params params;
	params.OpenedMenu = OpenedMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.PlayerTakeDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::PlayerTakeDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.PlayerTakeDamage");

	APlayerStatePackage_C_PlayerTakeDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.AttributePointUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendAttribute*          Attribute                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::AttributePointUsed(class UBendAttribute* Attribute, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.AttributePointUsed");

	APlayerStatePackage_C_AttributePointUsed_Params params;
	params.Attribute = Attribute;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.InventoryModified
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryOperation     Operation                      (ConstParm, Parm, OutParm, ReferenceParm)

void APlayerStatePackage_C::InventoryModified(const struct FInventoryOperation& Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.InventoryModified");

	APlayerStatePackage_C_InventoryModified_Params params;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.OnInventoryItemPickupDelegate_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          PickupItem                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::OnInventoryItemPickupDelegate_Event_1(class UInventoryItem* PickupItem, int Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.OnInventoryItemPickupDelegate_Event_1");

	APlayerStatePackage_C_OnInventoryItemPickupDelegate_Event_1_Params params;
	params.PickupItem = PickupItem;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.PhotoModeStarted
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::PhotoModeStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.PhotoModeStarted");

	APlayerStatePackage_C_PhotoModeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.PhotoModeEnded
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::PhotoModeEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.PhotoModeEnded");

	APlayerStatePackage_C_PhotoModeEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.EnteredAdvancedMode
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::EnteredAdvancedMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.EnteredAdvancedMode");

	APlayerStatePackage_C_EnteredAdvancedMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.ExitedAdvancedMode
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::ExitedAdvancedMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.ExitedAdvancedMode");

	APlayerStatePackage_C_ExitedAdvancedMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.PhotoCapture
// (BlueprintCallable, BlueprintEvent)

void APlayerStatePackage_C::PhotoCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.PhotoCapture");

	APlayerStatePackage_C_PhotoCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.ExecuteUbergraph_PlayerStatePackage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APlayerStatePackage_C::ExecuteUbergraph_PlayerStatePackage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.ExecuteUbergraph_PlayerStatePackage");

	APlayerStatePackage_C_ExecuteUbergraph_PlayerStatePackage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerStatePackage.PlayerStatePackage_C.PlayerLocationsFull__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTelemetryEventAttr> PlayerLocations                (Parm, OutParm, ZeroConstructor, ReferenceParm)

void APlayerStatePackage_C::PlayerLocationsFull__DelegateSignature(TArray<struct FTelemetryEventAttr>* PlayerLocations)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerStatePackage.PlayerStatePackage_C.PlayerLocationsFull__DelegateSignature");

	APlayerStatePackage_C_PlayerLocationsFull__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerLocations != nullptr)
		*PlayerLocations = params.PlayerLocations;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
