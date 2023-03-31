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

// Function GameStatePackage.GameStatePackage_C.HaveWeResetThisJobBefore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo*           Job                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           WasReset                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::HaveWeResetThisJobBefore(class UJobClassInfo* Job, bool* WasReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.HaveWeResetThisJobBefore");

	AGameStatePackage_C_HaveWeResetThisJobBefore_Params params;
	params.Job = Job;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WasReset != nullptr)
		*WasReset = params.WasReset;
}


// Function GameStatePackage.GameStatePackage_C.FindOutProperID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 MissionOrJobData               (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Proper_ID                      (Parm, OutParm, ZeroConstructor)

void AGameStatePackage_C::FindOutProperID(class UObject* MissionOrJobData, struct FString* Proper_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.FindOutProperID");

	AGameStatePackage_C_FindOutProperID_Params params;
	params.MissionOrJobData = MissionOrJobData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Proper_ID != nullptr)
		*Proper_ID = params.Proper_ID;
}


// Function GameStatePackage.GameStatePackage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGameStatePackage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.UserConstructionScript");

	AGameStatePackage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.MissionBeginCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::MissionBeginCall(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.MissionBeginCall");

	AGameStatePackage_C_MissionBeginCall_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.ObjectiveCompleteCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CompletedObjective             (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::ObjectiveCompleteCall(int CompletedObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.ObjectiveCompleteCall");

	AGameStatePackage_C_ObjectiveCompleteCall_Params params;
	params.CompletedObjective = CompletedObjective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.MissionEndingCall
// (BlueprintCallable, BlueprintEvent)

void AGameStatePackage_C::MissionEndingCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.MissionEndingCall");

	AGameStatePackage_C_MissionEndingCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.FastTravelBeginCall
// (BlueprintCallable, BlueprintEvent)

void AGameStatePackage_C::FastTravelBeginCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.FastTravelBeginCall");

	AGameStatePackage_C_FastTravelBeginCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.CollectibleCollectedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItemCollectible* Collectible                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::CollectibleCollectedCall(class UInventoryItemCollectible* Collectible)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.CollectibleCollectedCall");

	AGameStatePackage_C_CollectibleCollectedCall_Params params;
	params.Collectible = Collectible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.ReachedJobLocationCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo*           JobID                          (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::ReachedJobLocationCall(class UJobClassInfo* JobID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.ReachedJobLocationCall");

	AGameStatePackage_C_ReachedJobLocationCall_Params params;
	params.JobID = JobID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.JobFinishedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo*           JobID                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Failed                         (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::JobFinishedCall(class UJobClassInfo* JobID, bool Failed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.JobFinishedCall");

	AGameStatePackage_C_JobFinishedCall_Params params;
	params.JobID = JobID;
	params.Failed = Failed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.CinematicEndCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 JobOrMissionData               (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::CinematicEndCall(const struct FName& CinematicLevel, class UObject* JobOrMissionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.CinematicEndCall");

	AGameStatePackage_C_CinematicEndCall_Params params;
	params.CinematicLevel = CinematicLevel;
	params.JobOrMissionData = JobOrMissionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.ItemPurchased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETrustTier>        TrustRequired                  (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::ItemPurchased(class UInventoryItem* Item, int Cost, TEnumAsByte<ETrustTier> TrustRequired)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.ItemPurchased");

	AGameStatePackage_C_ItemPurchased_Params params;
	params.Item = Item;
	params.Cost = Cost;
	params.TrustRequired = TrustRequired;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.WeaponPurchased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          Weapon                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETrustTier>        TrustRequired                  (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::WeaponPurchased(class UInventoryItem* Weapon, int Cost, TEnumAsByte<ETrustTier> TrustRequired)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.WeaponPurchased");

	AGameStatePackage_C_WeaponPurchased_Params params;
	params.Weapon = Weapon;
	params.Cost = Cost;
	params.TrustRequired = TrustRequired;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.WeaponPartPurchased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          Weapon                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryItem*          Part                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETrustTier>        TrustRequired                  (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::WeaponPartPurchased(class UInventoryItem* Weapon, class UInventoryItem* Part, int Cost, TEnumAsByte<ETrustTier> TrustRequired)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.WeaponPartPurchased");

	AGameStatePackage_C_WeaponPartPurchased_Params params;
	params.Weapon = Weapon;
	params.Part = Part;
	params.Cost = Cost;
	params.TrustRequired = TrustRequired;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.BikePartPurchased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          Part                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETrustTier>        TrustRequired                  (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::BikePartPurchased(class UInventoryItem* Part, int Cost, TEnumAsByte<ETrustTier> TrustRequired)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.BikePartPurchased");

	AGameStatePackage_C_BikePartPurchased_Params params;
	params.Part = Part;
	params.Cost = Cost;
	params.TrustRequired = TrustRequired;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.ItemSold
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::ItemSold(class UInventoryItem* Item, int Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.ItemSold");

	AGameStatePackage_C_ItemSold_Params params;
	params.Item = Item;
	params.Cost = Cost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.ItemConsumed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::ItemConsumed(class UInventoryItem* Item, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.ItemConsumed");

	AGameStatePackage_C_ItemConsumed_Params params;
	params.Item = Item;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.WeaponPartEquipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          Weapon                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryItem*          Part                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::WeaponPartEquipped(class UInventoryItem* Weapon, class UInventoryItem* Part)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.WeaponPartEquipped");

	AGameStatePackage_C_WeaponPartEquipped_Params params;
	params.Weapon = Weapon;
	params.Part = Part;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.RepairBike
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          RepairAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::RepairBike(int Cost, float RepairAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.RepairBike");

	AGameStatePackage_C_RepairBike_Params params;
	params.Cost = Cost;
	params.RepairAmount = RepairAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.RefuelBike
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          RefuelAmount                   (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::RefuelBike(int Cost, float RefuelAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.RefuelBike");

	AGameStatePackage_C_RefuelBike_Params params;
	params.Cost = Cost;
	params.RefuelAmount = RefuelAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.EarSoldCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::EarSoldCall(class UInventoryItem* Item, int Quantity, int Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.EarSoldCall");

	AGameStatePackage_C_EarSoldCall_Params params;
	params.Item = Item;
	params.Quantity = Quantity;
	params.Cost = Cost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.RepairWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryWeaponItem*    Weapon                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::RepairWeapon(class UInventoryWeaponItem* Weapon, int Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.RepairWeapon");

	AGameStatePackage_C_RepairWeapon_Params params;
	params.Weapon = Weapon;
	params.Cost = Cost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.TrustModifiedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendEncampmentData*     Encampment                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ModificationAmount             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SetDirectly                    (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::TrustModifiedCall(class UBendEncampmentData* Encampment, float ModificationAmount, bool SetDirectly)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.TrustModifiedCall");

	AGameStatePackage_C_TrustModifiedCall_Params params;
	params.Encampment = Encampment;
	params.ModificationAmount = ModificationAmount;
	params.SetDirectly = SetDirectly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.FastTravelEndCall
// (BlueprintCallable, BlueprintEvent)

void AGameStatePackage_C::FastTravelEndCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.FastTravelEndCall");

	AGameStatePackage_C_FastTravelEndCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.EnterEncampmentCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendEncampmentData*     Encampment                     (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::EnterEncampmentCall(class UBendEncampmentData* Encampment)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.EnterEncampmentCall");

	AGameStatePackage_C_EnterEncampmentCall_Params params;
	params.Encampment = Encampment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.ExitEncampmentCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendEncampmentData*     Encampment                     (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::ExitEncampmentCall(class UBendEncampmentData* Encampment)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.ExitEncampmentCall");

	AGameStatePackage_C_ExitEncampmentCall_Params params;
	params.Encampment = Encampment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.CinematicStartCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 JobOrMissionData               (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::CinematicStartCall(const struct FName& CinematicLevel, class UObject* JobOrMissionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.CinematicStartCall");

	AGameStatePackage_C_CinematicStartCall_Params params;
	params.CinematicLevel = CinematicLevel;
	params.JobOrMissionData = JobOrMissionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.LeftJobLocationCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo*           JobID                          (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::LeftJobLocationCall(class UJobClassInfo* JobID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.LeftJobLocationCall");

	AGameStatePackage_C_LeftJobLocationCall_Params params;
	params.JobID = JobID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.JobObjectiveChangeCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   JobID                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ObjectiveID                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveStates>  New_State                      (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::JobObjectiveChangeCall(const struct FName& JobID, const struct FName& ObjectiveID, TEnumAsByte<EObjectiveStates> New_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.JobObjectiveChangeCall");

	AGameStatePackage_C_JobObjectiveChangeCall_Params params;
	params.JobID = JobID;
	params.ObjectiveID = ObjectiveID;
	params.New_State = New_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.UserChoiceMadeCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInteractButton>   ChoiceButton                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ChoiceTitle                    (Parm)

void AGameStatePackage_C::UserChoiceMadeCall(TEnumAsByte<EInteractButton> ChoiceButton, const struct FText& ChoiceTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.UserChoiceMadeCall");

	AGameStatePackage_C_UserChoiceMadeCall_Params params;
	params.ChoiceButton = ChoiceButton;
	params.ChoiceTitle = ChoiceTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.SkippableGameplayStartedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   MissionSkipIdentifier          (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::SkippableGameplayStartedCall(const struct FName& MissionSkipIdentifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.SkippableGameplayStartedCall");

	AGameStatePackage_C_SkippableGameplayStartedCall_Params params;
	params.MissionSkipIdentifier = MissionSkipIdentifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.SkippableGameplayEndedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   MissionSkipIdentifier          (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::SkippableGameplayEndedCall(const struct FName& MissionSkipIdentifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.SkippableGameplayEndedCall");

	AGameStatePackage_C_SkippableGameplayEndedCall_Params params;
	params.MissionSkipIdentifier = MissionSkipIdentifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.CinStartLoadingCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::CinStartLoadingCall(const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.CinStartLoadingCall");

	AGameStatePackage_C_CinStartLoadingCall_Params params;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.CinEndLoadingCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::CinEndLoadingCall(const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.CinEndLoadingCall");

	AGameStatePackage_C_CinEndLoadingCall_Params params;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.CheatMenuUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CommandName                    (Parm, ZeroConstructor)
// struct FString                 CommandArguments               (Parm, ZeroConstructor)

void AGameStatePackage_C::CheatMenuUsed(const struct FString& CommandName, const struct FString& CommandArguments)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.CheatMenuUsed");

	AGameStatePackage_C_CheatMenuUsed_Params params;
	params.CommandName = CommandName;
	params.CommandArguments = CommandArguments;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.ConflictEscalationAddPawnCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       AIController                   (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::ConflictEscalationAddPawnCall(class ABendAIController* AIController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.ConflictEscalationAddPawnCall");

	AGameStatePackage_C_ConflictEscalationAddPawnCall_Params params;
	params.AIController = AIController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.ConflictEscalationCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Center                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EeConflictEventType> Conflict_Event                 (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::ConflictEscalationCall(const struct FVector& Center, float Radius, TEnumAsByte<EeConflictEventType> Conflict_Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.ConflictEscalationCall");

	AGameStatePackage_C_ConflictEscalationCall_Params params;
	params.Center = Center;
	params.Radius = Radius;
	params.Conflict_Event = Conflict_Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnConflictEscalationReady
// (BlueprintCallable, BlueprintEvent)

void AGameStatePackage_C::OnConflictEscalationReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnConflictEscalationReady");

	AGameStatePackage_C_OnConflictEscalationReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.LeftMissionFailureZoneCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ByVolume                       (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::LeftMissionFailureZoneCall(bool ByVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.LeftMissionFailureZoneCall");

	AGameStatePackage_C_LeftMissionFailureZoneCall_Params params;
	params.ByVolume = ByVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.ReturnFromFailureZoneCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ByVolume                       (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::ReturnFromFailureZoneCall(bool ByVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.ReturnFromFailureZoneCall");

	AGameStatePackage_C_ReturnFromFailureZoneCall_Params params;
	params.ByVolume = ByVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.FailedViaFailureZoneCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ByVolume                       (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::FailedViaFailureZoneCall(bool ByVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.FailedViaFailureZoneCall");

	AGameStatePackage_C_FailedViaFailureZoneCall_Params params;
	params.ByVolume = ByVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnOWSaveCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBikeOrBedQuicksave           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsMenuSave                     (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnOWSaveCall(bool IsBikeOrBedQuicksave, bool IsMenuSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnOWSaveCall");

	AGameStatePackage_C_OnOWSaveCall_Params params;
	params.IsBikeOrBedQuicksave = IsBikeOrBedQuicksave;
	params.IsMenuSave = IsMenuSave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnDifficultyChangedCall
// (BlueprintCallable, BlueprintEvent)

void AGameStatePackage_C::OnDifficultyChangedCall()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnDifficultyChangedCall");

	AGameStatePackage_C_OnDifficultyChangedCall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.TrophyUnlockedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TrophyName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            TrophyTag                      (Parm)
// int                            TrophyID                       (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::TrophyUnlockedCall(const struct FName& TrophyName, const struct FGameplayTag& TrophyTag, int TrophyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.TrophyUnlockedCall");

	AGameStatePackage_C_TrophyUnlockedCall_Params params;
	params.TrophyName = TrophyName;
	params.TrophyTag = TrophyTag;
	params.TrophyID = TrophyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnConversationStartedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SoundBankName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundFXName                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxWaitTimeInQueue             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UsesInterruptSystem            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  WhoIsSpeaking                  (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnConversationStartedCall(const struct FName& SoundBankName, const struct FName& SoundFXName, float Priority, float MaxWaitTimeInQueue, bool UsesInterruptSystem, class AActor* WhoIsSpeaking)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnConversationStartedCall");

	AGameStatePackage_C_OnConversationStartedCall_Params params;
	params.SoundBankName = SoundBankName;
	params.SoundFXName = SoundFXName;
	params.Priority = Priority;
	params.MaxWaitTimeInQueue = MaxWaitTimeInQueue;
	params.UsesInterruptSystem = UsesInterruptSystem;
	params.WhoIsSpeaking = WhoIsSpeaking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnConversationInterruptedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SoundBankName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundFXName                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxWaitTimeInQueue             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  WhoIsSpeaking                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EConversationInterruptReason> InterruptReason                (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnConversationInterruptedCall(const struct FName& SoundBankName, const struct FName& SoundFXName, float Priority, float MaxWaitTimeInQueue, class AActor* WhoIsSpeaking, TEnumAsByte<EConversationInterruptReason> InterruptReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnConversationInterruptedCall");

	AGameStatePackage_C_OnConversationInterruptedCall_Params params;
	params.SoundBankName = SoundBankName;
	params.SoundFXName = SoundFXName;
	params.Priority = Priority;
	params.MaxWaitTimeInQueue = MaxWaitTimeInQueue;
	params.WhoIsSpeaking = WhoIsSpeaking;
	params.InterruptReason = InterruptReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnConversationResumedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SoundBankName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundFXName                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxWaitTimeInQueue             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  WhoIsSpeaking                  (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnConversationResumedCall(const struct FName& SoundBankName, const struct FName& SoundFXName, float Priority, float MaxWaitTimeInQueue, class AActor* WhoIsSpeaking)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnConversationResumedCall");

	AGameStatePackage_C_OnConversationResumedCall_Params params;
	params.SoundBankName = SoundBankName;
	params.SoundFXName = SoundFXName;
	params.Priority = Priority;
	params.MaxWaitTimeInQueue = MaxWaitTimeInQueue;
	params.WhoIsSpeaking = WhoIsSpeaking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnConversationFinishedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SoundBankName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundFXName                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxWaitTimeInQueue             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  WhoIsSpeaking                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDonePlayVocalReason> ReasonStopped                  (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnConversationFinishedCall(const struct FName& SoundBankName, const struct FName& SoundFXName, float Priority, float MaxWaitTimeInQueue, class AActor* WhoIsSpeaking, TEnumAsByte<EDonePlayVocalReason> ReasonStopped)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnConversationFinishedCall");

	AGameStatePackage_C_OnConversationFinishedCall_Params params;
	params.SoundBankName = SoundBankName;
	params.SoundFXName = SoundFXName;
	params.Priority = Priority;
	params.MaxWaitTimeInQueue = MaxWaitTimeInQueue;
	params.WhoIsSpeaking = WhoIsSpeaking;
	params.ReasonStopped = ReasonStopped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnProfileEntryChangedCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerSaveProfileType> EntryName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          EntryValue                     (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnProfileEntryChangedCall(TEnumAsByte<EPlayerSaveProfileType> EntryName, float EntryValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnProfileEntryChangedCall");

	AGameStatePackage_C_OnProfileEntryChangedCall_Params params;
	params.EntryName = EntryName;
	params.EntryValue = EntryValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.JobResetCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EJobResetTypes>    JobResetType                   (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::JobResetCall(TEnumAsByte<EJobResetTypes> JobResetType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.JobResetCall");

	AGameStatePackage_C_JobResetCall_Params params;
	params.JobResetType = JobResetType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AGameStatePackage_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.ReceiveBeginPlay");

	AGameStatePackage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.RecheckMM
// (BlueprintCallable, BlueprintEvent)

void AGameStatePackage_C::RecheckMM()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.RecheckMM");

	AGameStatePackage_C_RecheckMM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.ReceivePostSaveGameLoaded");

	AGameStatePackage_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.RecheckPlayer
// (BlueprintCallable, BlueprintEvent)

void AGameStatePackage_C::RecheckPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.RecheckPlayer");

	AGameStatePackage_C_RecheckPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.RecheckPlayerCont
// (BlueprintCallable, BlueprintEvent)

void AGameStatePackage_C::RecheckPlayerCont()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.RecheckPlayerCont");

	AGameStatePackage_C_RecheckPlayerCont_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.RecheckJM
// (BlueprintCallable, BlueprintEvent)

void AGameStatePackage_C::RecheckJM()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.RecheckJM");

	AGameStatePackage_C_RecheckJM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.MissionEnding
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::MissionEnding(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.MissionEnding");

	AGameStatePackage_C_MissionEnding_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.MissionBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::MissionBegin(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.MissionBegin");

	AGameStatePackage_C_MissionBegin_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.FastTravelBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TravelDestination              (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::FastTravelBegin(const struct FName& TravelDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.FastTravelBegin");

	AGameStatePackage_C_FastTravelBegin_Params params;
	params.TravelDestination = TravelDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.CinematicSkipped
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AGameStatePackage_C::CinematicSkipped(const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.CinematicSkipped");

	AGameStatePackage_C_CinematicSkipped_Params params;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.ReachedJobLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo*           JobID                          (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::ReachedJobLocation(class UJobClassInfo* JobID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.ReachedJobLocation");

	AGameStatePackage_C_ReachedJobLocation_Params params;
	params.JobID = JobID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.JobFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo*           JobID                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Failed                         (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::JobFinished(class UJobClassInfo* JobID, bool Failed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.JobFinished");

	AGameStatePackage_C_JobFinished_Params params;
	params.JobID = JobID;
	params.Failed = Failed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.PlayerDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::PlayerDamaged(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.PlayerDamaged");

	AGameStatePackage_C_PlayerDamaged_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.CinEnded
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AGameStatePackage_C::CinEnded(const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.CinEnded");

	AGameStatePackage_C_CinEnded_Params params;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.RecheckEM
// (BlueprintCallable, BlueprintEvent)

void AGameStatePackage_C::RecheckEM()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.RecheckEM");

	AGameStatePackage_C_RecheckEM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.EventHappened
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendGameEventBase      Event                          (ConstParm, Parm, OutParm, ReferenceParm)

void AGameStatePackage_C::EventHappened(const struct FBendGameEventBase& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.EventHappened");

	AGameStatePackage_C_EventHappened_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnObjectiveComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnObjectiveComplete(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnObjectiveComplete");

	AGameStatePackage_C_OnObjectiveComplete_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.PlayerRespawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPlayerController*   PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::PlayerRespawned(class ABendPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.PlayerRespawned");

	AGameStatePackage_C_PlayerRespawned_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.PlayerRespawn
// (BlueprintCallable, BlueprintEvent)

void AGameStatePackage_C::PlayerRespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.PlayerRespawn");

	AGameStatePackage_C_PlayerRespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.EarSold
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::EarSold(class UInventoryItem* Item, int Quantity, int Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.EarSold");

	AGameStatePackage_C_EarSold_Params params;
	params.Item = Item;
	params.Quantity = Quantity;
	params.Cost = Cost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.BikeRefuel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::BikeRefuel(int Cost, float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.BikeRefuel");

	AGameStatePackage_C_BikeRefuel_Params params;
	params.Cost = Cost;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.BikeRepair
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::BikeRepair(int Cost, float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.BikeRepair");

	AGameStatePackage_C_BikeRepair_Params params;
	params.Cost = Cost;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnItemSold
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnItemSold(class UInventoryItem* Item, int Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnItemSold");

	AGameStatePackage_C_OnItemSold_Params params;
	params.Item = Item;
	params.Cost = Cost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnWeaponPartEquip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryWeaponItem*    Weapon                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryItemWeaponPart* Part                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnWeaponPartEquip(class UInventoryWeaponItem* Weapon, class UInventoryItemWeaponPart* Part)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnWeaponPartEquip");

	AGameStatePackage_C_OnWeaponPartEquip_Params params;
	params.Weapon = Weapon;
	params.Part = Part;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.WeaponRepaired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryWeaponItem*    Weapon                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Cost                           (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::WeaponRepaired(class UInventoryWeaponItem* Weapon, int Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.WeaponRepaired");

	AGameStatePackage_C_WeaponRepaired_Params params;
	params.Weapon = Weapon;
	params.Cost = Cost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.TrustModified
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendEncampmentData*     Encampment                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          ModificationAmount             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SetDirectly                    (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::TrustModified(class UBendEncampmentData* Encampment, float ModificationAmount, bool SetDirectly)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.TrustModified");

	AGameStatePackage_C_TrustModified_Params params;
	params.Encampment = Encampment;
	params.ModificationAmount = ModificationAmount;
	params.SetDirectly = SetDirectly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.FastTravelEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TravelDestination              (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::FastTravelEnd(const struct FName& TravelDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.FastTravelEnd");

	AGameStatePackage_C_FastTravelEnd_Params params;
	params.TravelDestination = TravelDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.EnterEncampment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendEncampmentData*     Encampment                     (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::EnterEncampment(class UBendEncampmentData* Encampment)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.EnterEncampment");

	AGameStatePackage_C_EnterEncampment_Params params;
	params.Encampment = Encampment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.ExitEncampment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendEncampmentData*     Encampment                     (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::ExitEncampment(class UBendEncampmentData* Encampment)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.ExitEncampment");

	AGameStatePackage_C_ExitEncampment_Params params;
	params.Encampment = Encampment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.JobUnlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo*           JobID                          (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::JobUnlocked(class UJobClassInfo* JobID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.JobUnlocked");

	AGameStatePackage_C_JobUnlocked_Params params;
	params.JobID = JobID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.LeaveJobLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobClassInfo*           JobID                          (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::LeaveJobLocation(class UJobClassInfo* JobID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.LeaveJobLocation");

	AGameStatePackage_C_LeaveJobLocation_Params params;
	params.JobID = JobID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.UserChoiceMade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInteractButton>   ChoiceButton                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ChoiceTitle                    (Parm)

void AGameStatePackage_C::UserChoiceMade(TEnumAsByte<EInteractButton> ChoiceButton, const struct FText& ChoiceTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.UserChoiceMade");

	AGameStatePackage_C_UserChoiceMade_Params params;
	params.ChoiceButton = ChoiceButton;
	params.ChoiceTitle = ChoiceTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.SkippableGameplayStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   MissionSkipIdentifier          (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::SkippableGameplayStarted(const struct FName& MissionSkipIdentifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.SkippableGameplayStarted");

	AGameStatePackage_C_SkippableGameplayStarted_Params params;
	params.MissionSkipIdentifier = MissionSkipIdentifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.SkippableGameplaySkipped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   MissionSkipIdentifier          (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::SkippableGameplaySkipped(const struct FName& MissionSkipIdentifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.SkippableGameplaySkipped");

	AGameStatePackage_C_SkippableGameplaySkipped_Params params;
	params.MissionSkipIdentifier = MissionSkipIdentifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.SkippableGameplayEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   MissionSkipIdentifier          (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::SkippableGameplayEnded(const struct FName& MissionSkipIdentifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.SkippableGameplayEnded");

	AGameStatePackage_C_SkippableGameplayEnded_Params params;
	params.MissionSkipIdentifier = MissionSkipIdentifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.CollectibleCollected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItemCollectible* Collectible                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::CollectibleCollected(class UInventoryItemCollectible* Collectible)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.CollectibleCollected");

	AGameStatePackage_C_CollectibleCollected_Params params;
	params.Collectible = Collectible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.CinStartLoading
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AGameStatePackage_C::CinStartLoading(const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.CinStartLoading");

	AGameStatePackage_C_CinStartLoading_Params params;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.CinStartPlaying
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AGameStatePackage_C::CinStartPlaying(const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.CinStartPlaying");

	AGameStatePackage_C_CinStartPlaying_Params params;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.RecheckGM
// (BlueprintCallable, BlueprintEvent)

void AGameStatePackage_C::RecheckGM()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.RecheckGM");

	AGameStatePackage_C_RecheckGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.CinBegin
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 JobOrMissionData               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CinematicLevel                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AGameStatePackage_C::CinBegin(class UObject* JobOrMissionData, const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.CinBegin");

	AGameStatePackage_C_CinBegin_Params params;
	params.JobOrMissionData = JobOrMissionData;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.CinEnd
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 JobOrMissionData               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CinematicLevel                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AGameStatePackage_C::CinEnd(class UObject* JobOrMissionData, const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.CinEnd");

	AGameStatePackage_C_CinEnd_Params params;
	params.JobOrMissionData = JobOrMissionData;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnCheatActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 CommandName                    (Parm, ZeroConstructor)
// struct FString                 CommandArguments               (Parm, ZeroConstructor)

void AGameStatePackage_C::OnCheatActivated(const struct FString& CommandName, const struct FString& CommandArguments)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnCheatActivated");

	AGameStatePackage_C_OnCheatActivated_Params params;
	params.CommandName = CommandName;
	params.CommandArguments = CommandArguments;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.Recheck AI
// (BlueprintCallable, BlueprintEvent)

void AGameStatePackage_C::Recheck_AI()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.Recheck AI");

	AGameStatePackage_C_Recheck_AI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnConflictEscalation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Center                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EeConflictEventType> ConflictEventType              (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnConflictEscalation(const struct FVector& Center, float Radius, TEnumAsByte<EeConflictEventType> ConflictEventType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnConflictEscalation");

	AGameStatePackage_C_OnConflictEscalation_Params params;
	params.Center = Center;
	params.Radius = Radius;
	params.ConflictEventType = ConflictEventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnConflictEscalationPullPawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       AIController                   (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnConflictEscalationPullPawn(class ABendAIController* AIController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnConflictEscalationPullPawn");

	AGameStatePackage_C_OnConflictEscalationPullPawn_Params params;
	params.AIController = AIController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnEscalationSpawnedTelemetry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       SpawnedController              (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnEscalationSpawnedTelemetry(class ABendAIController* SpawnedController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnEscalationSpawnedTelemetry");

	AGameStatePackage_C_OnEscalationSpawnedTelemetry_Params params;
	params.SpawnedController = SpawnedController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.JobObjUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   JobID                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ObjectiveID                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveStates>  NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::JobObjUpdate(const struct FName& JobID, const struct FName& ObjectiveID, TEnumAsByte<EObjectiveStates> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.JobObjUpdate");

	AGameStatePackage_C_JobObjUpdate_Params params;
	params.JobID = JobID;
	params.ObjectiveID = ObjectiveID;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnLeftMissionFailureZone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ByVolume                       (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnLeftMissionFailureZone(bool ByVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnLeftMissionFailureZone");

	AGameStatePackage_C_OnLeftMissionFailureZone_Params params;
	params.ByVolume = ByVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnReturnFromFailureZone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ByVolume                       (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnReturnFromFailureZone(bool ByVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnReturnFromFailureZone");

	AGameStatePackage_C_OnReturnFromFailureZone_Params params;
	params.ByVolume = ByVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnFailedViaFailureZone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ByVolume                       (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnFailedViaFailureZone(bool ByVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnFailedViaFailureZone");

	AGameStatePackage_C_OnFailedViaFailureZone_Params params;
	params.ByVolume = ByVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnOWSave
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBikeOrBedQuicksave           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsMenuSave                     (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnOWSave(bool IsBikeOrBedQuicksave, bool IsMenuSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnOWSave");

	AGameStatePackage_C_OnOWSave_Params params;
	params.IsBikeOrBedQuicksave = IsBikeOrBedQuicksave;
	params.IsMenuSave = IsMenuSave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnProfileEntryChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerSaveProfileType> OptionType                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          OptionValue                    (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnProfileEntryChanged_Event_1(TEnumAsByte<EPlayerSaveProfileType> OptionType, float OptionValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnProfileEntryChanged_Event_1");

	AGameStatePackage_C_OnProfileEntryChanged_Event_1_Params params;
	params.OptionType = OptionType;
	params.OptionValue = OptionValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnTrophyUnlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TrophyName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            TrophyTag                      (Parm)
// int                            TrophyID                       (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnTrophyUnlocked(const struct FName& TrophyName, const struct FGameplayTag& TrophyTag, int TrophyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnTrophyUnlocked");

	AGameStatePackage_C_OnTrophyUnlocked_Params params;
	params.TrophyName = TrophyName;
	params.TrophyTag = TrophyTag;
	params.TrophyID = TrophyID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.RecheckTM
// (BlueprintCallable, BlueprintEvent)

void AGameStatePackage_C::RecheckTM()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.RecheckTM");

	AGameStatePackage_C_RecheckTM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.RecheckAudioM
// (BlueprintCallable, BlueprintEvent)

void AGameStatePackage_C::RecheckAudioM()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.RecheckAudioM");

	AGameStatePackage_C_RecheckAudioM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnConversationBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SoundBankName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundFXName                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxWaitTimeInQueue             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UsesInterruptSystem            (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  WhoIsSpeaking                  (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnConversationBegin(const struct FName& SoundBankName, const struct FName& SoundFXName, float Priority, float MaxWaitTimeInQueue, bool UsesInterruptSystem, class AActor* WhoIsSpeaking)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnConversationBegin");

	AGameStatePackage_C_OnConversationBegin_Params params;
	params.SoundBankName = SoundBankName;
	params.SoundFXName = SoundFXName;
	params.Priority = Priority;
	params.MaxWaitTimeInQueue = MaxWaitTimeInQueue;
	params.UsesInterruptSystem = UsesInterruptSystem;
	params.WhoIsSpeaking = WhoIsSpeaking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnConversationInterrupted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SoundBankName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundFXName                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxWaitTimeInQueue             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  WhoIsSpeaking                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EConversationInterruptReason> InterruptReason                (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnConversationInterrupted(const struct FName& SoundBankName, const struct FName& SoundFXName, float Priority, float MaxWaitTimeInQueue, class AActor* WhoIsSpeaking, TEnumAsByte<EConversationInterruptReason> InterruptReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnConversationInterrupted");

	AGameStatePackage_C_OnConversationInterrupted_Params params;
	params.SoundBankName = SoundBankName;
	params.SoundFXName = SoundFXName;
	params.Priority = Priority;
	params.MaxWaitTimeInQueue = MaxWaitTimeInQueue;
	params.WhoIsSpeaking = WhoIsSpeaking;
	params.InterruptReason = InterruptReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnConversationResumed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SoundBankName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundFXName                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxWaitTimeInQueue             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  WhoIsSpeaking                  (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnConversationResumed(const struct FName& SoundBankName, const struct FName& SoundFXName, float Priority, float MaxWaitTimeInQueue, class AActor* WhoIsSpeaking)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnConversationResumed");

	AGameStatePackage_C_OnConversationResumed_Params params;
	params.SoundBankName = SoundBankName;
	params.SoundFXName = SoundFXName;
	params.Priority = Priority;
	params.MaxWaitTimeInQueue = MaxWaitTimeInQueue;
	params.WhoIsSpeaking = WhoIsSpeaking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnConversationFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SoundBankName                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SoundFXName                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Priority                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxWaitTimeInQueue             (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  WhoIsSpeaking                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDonePlayVocalReason> ReasonStopped                  (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnConversationFinished(const struct FName& SoundBankName, const struct FName& SoundFXName, float Priority, float MaxWaitTimeInQueue, class AActor* WhoIsSpeaking, TEnumAsByte<EDonePlayVocalReason> ReasonStopped)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnConversationFinished");

	AGameStatePackage_C_OnConversationFinished_Params params;
	params.SoundBankName = SoundBankName;
	params.SoundFXName = SoundFXName;
	params.Priority = Priority;
	params.MaxWaitTimeInQueue = MaxWaitTimeInQueue;
	params.WhoIsSpeaking = WhoIsSpeaking;
	params.ReasonStopped = ReasonStopped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.JobReset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EJobResetTypes>    JobResetType                   (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::JobReset(TEnumAsByte<EJobResetTypes> JobResetType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.JobReset");

	AGameStatePackage_C_JobReset_Params params;
	params.JobResetType = JobResetType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.OnDifficultyChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameDifficulty>   NewDifficulty                  (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::OnDifficultyChanged(TEnumAsByte<EGameDifficulty> NewDifficulty)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.OnDifficultyChanged");

	AGameStatePackage_C_OnDifficultyChanged_Params params;
	params.NewDifficulty = NewDifficulty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameStatePackage.GameStatePackage_C.ExecuteUbergraph_GameStatePackage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGameStatePackage_C::ExecuteUbergraph_GameStatePackage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameStatePackage.GameStatePackage_C.ExecuteUbergraph_GameStatePackage");

	AGameStatePackage_C_ExecuteUbergraph_GameStatePackage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
