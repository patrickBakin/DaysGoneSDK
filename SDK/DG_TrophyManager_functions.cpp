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

// Function TrophyManager.TrophyManager_C.DebugDumpTrophy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (Parm)

void UTrophyManager_C::DebugDumpTrophy(const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyManager.TrophyManager_C.DebugDumpTrophy");

	UTrophyManager_C_DebugDumpTrophy_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyManager.TrophyManager_C.TrophyUnlocked
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FBendTrophy*            Trophy                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool*                          DisplayWidget                  (Parm, ZeroConstructor, IsPlainOldData)

void UTrophyManager_C::TrophyUnlocked(struct FBendTrophy* Trophy, bool* DisplayWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyManager.TrophyManager_C.TrophyUnlocked");

	UTrophyManager_C_TrophyUnlocked_Params params;
	params.Trophy = Trophy;
	params.DisplayWidget = DisplayWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyManager.TrophyManager_C.UpdateInventorySponge
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AddedCount                     (Parm, ZeroConstructor, IsPlainOldData)

void UTrophyManager_C::UpdateInventorySponge(int* AddedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyManager.TrophyManager_C.UpdateInventorySponge");

	UTrophyManager_C_UpdateInventorySponge_Params params;
	params.AddedCount = AddedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyManager.TrophyManager_C.UpdateGraveRobber
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AddedCount                     (Parm, ZeroConstructor, IsPlainOldData)

void UTrophyManager_C::UpdateGraveRobber(int* AddedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyManager.TrophyManager_C.UpdateGraveRobber");

	UTrophyManager_C_UpdateGraveRobber_Params params;
	params.AddedCount = AddedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyManager.TrophyManager_C.OnPostSaveGameLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void UTrophyManager_C::OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyManager.TrophyManager_C.OnPostSaveGameLoaded_Event_1");

	UTrophyManager_C_OnPostSaveGameLoaded_Event_1_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyManager.TrophyManager_C.BlueprintBindsTrophyManager
// (BlueprintCallable, BlueprintEvent)

void UTrophyManager_C::BlueprintBindsTrophyManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyManager.TrophyManager_C.BlueprintBindsTrophyManager");

	UTrophyManager_C_BlueprintBindsTrophyManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyManager.TrophyManager_C.UpdateGoKickRocks
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AddedCount                     (Parm, ZeroConstructor, IsPlainOldData)

void UTrophyManager_C::UpdateGoKickRocks(int* AddedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyManager.TrophyManager_C.UpdateGoKickRocks");

	UTrophyManager_C_UpdateGoKickRocks_Params params;
	params.AddedCount = AddedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyManager.TrophyManager_C.InitializeBlueprintBinds
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTrophyManager_C::InitializeBlueprintBinds()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyManager.TrophyManager_C.InitializeBlueprintBinds");

	UTrophyManager_C_InitializeBlueprintBinds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyManager.TrophyManager_C.UpdateSurvivingIsntLiving
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AddedCount                     (Parm, ZeroConstructor, IsPlainOldData)

void UTrophyManager_C::UpdateSurvivingIsntLiving(int* AddedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyManager.TrophyManager_C.UpdateSurvivingIsntLiving");

	UTrophyManager_C_UpdateSurvivingIsntLiving_Params params;
	params.AddedCount = AddedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyManager.TrophyManager_C.UpdateLendMeYourEars
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AddedCount                     (Parm, ZeroConstructor, IsPlainOldData)

void UTrophyManager_C::UpdateLendMeYourEars(int* AddedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyManager.TrophyManager_C.UpdateLendMeYourEars");

	UTrophyManager_C_UpdateLendMeYourEars_Params params;
	params.AddedCount = AddedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyManager.TrophyManager_C.UpdateDIYOregonian
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AddedCount                     (Parm, ZeroConstructor, IsPlainOldData)

void UTrophyManager_C::UpdateDIYOregonian(int* AddedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyManager.TrophyManager_C.UpdateDIYOregonian");

	UTrophyManager_C_UpdateDIYOregonian_Params params;
	params.AddedCount = AddedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyManager.TrophyManager_C.UpdateCollectibles
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AddedCount                     (Parm, ZeroConstructor, IsPlainOldData)

void UTrophyManager_C::UpdateCollectibles(int* AddedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyManager.TrophyManager_C.UpdateCollectibles");

	UTrophyManager_C_UpdateCollectibles_Params params;
	params.AddedCount = AddedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyManager.TrophyManager_C.UpdateStealthKill
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AddedCount                     (Parm, ZeroConstructor, IsPlainOldData)

void UTrophyManager_C::UpdateStealthKill(int* AddedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyManager.TrophyManager_C.UpdateStealthKill");

	UTrophyManager_C_UpdateStealthKill_Params params;
	params.AddedCount = AddedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyManager.TrophyManager_C.UpdateOldReliable
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AddedCount                     (Parm, ZeroConstructor, IsPlainOldData)

void UTrophyManager_C::UpdateOldReliable(int* AddedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyManager.TrophyManager_C.UpdateOldReliable");

	UTrophyManager_C_UpdateOldReliable_Params params;
	params.AddedCount = AddedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyManager.TrophyManager_C.UpdateArtOfBikeRepair
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AddedCount                     (Parm, ZeroConstructor, IsPlainOldData)

void UTrophyManager_C::UpdateArtOfBikeRepair(int* AddedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyManager.TrophyManager_C.UpdateArtOfBikeRepair");

	UTrophyManager_C_UpdateArtOfBikeRepair_Params params;
	params.AddedCount = AddedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyManager.TrophyManager_C.UpdateAllSkills
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AddedCount                     (Parm, ZeroConstructor, IsPlainOldData)

void UTrophyManager_C::UpdateAllSkills(int* AddedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyManager.TrophyManager_C.UpdateAllSkills");

	UTrophyManager_C_UpdateAllSkills_Params params;
	params.AddedCount = AddedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyManager.TrophyManager_C.UpdateWelcomeToThePartyPal
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AddedCount                     (Parm, ZeroConstructor, IsPlainOldData)

void UTrophyManager_C::UpdateWelcomeToThePartyPal(int* AddedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyManager.TrophyManager_C.UpdateWelcomeToThePartyPal");

	UTrophyManager_C_UpdateWelcomeToThePartyPal_Params params;
	params.AddedCount = AddedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyManager.TrophyManager_C.UpdateLockerWeaponCounts
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AddedCount                     (Parm, ZeroConstructor, IsPlainOldData)

void UTrophyManager_C::UpdateLockerWeaponCounts(int* AddedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyManager.TrophyManager_C.UpdateLockerWeaponCounts");

	UTrophyManager_C_UpdateLockerWeaponCounts_Params params;
	params.AddedCount = AddedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyManager.TrophyManager_C.UpdateEncampmentJobs
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           AddedCount                     (Parm, ZeroConstructor, IsPlainOldData)

void UTrophyManager_C::UpdateEncampmentJobs(int* AddedCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyManager.TrophyManager_C.UpdateEncampmentJobs");

	UTrophyManager_C_UpdateEncampmentJobs_Params params;
	params.AddedCount = AddedCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyManager.TrophyManager_C.OnTrophyScreenShotBegin
// (Event, Protected, BlueprintEvent)

void UTrophyManager_C::OnTrophyScreenShotBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyManager.TrophyManager_C.OnTrophyScreenShotBegin");

	UTrophyManager_C_OnTrophyScreenShotBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyManager.TrophyManager_C.OnTrophyScreenShotEnd
// (Event, Protected, BlueprintEvent)

void UTrophyManager_C::OnTrophyScreenShotEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyManager.TrophyManager_C.OnTrophyScreenShotEnd");

	UTrophyManager_C_OnTrophyScreenShotEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrophyManager.TrophyManager_C.ExecuteUbergraph_TrophyManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTrophyManager_C::ExecuteUbergraph_TrophyManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TrophyManager.TrophyManager_C.ExecuteUbergraph_TrophyManager");

	UTrophyManager_C_ExecuteUbergraph_TrophyManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
