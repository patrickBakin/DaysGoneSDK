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

// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.MakeNeverSpawnAgainCounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAIFactionType>    UnitSpawnedFactionType         (Parm, ZeroConstructor, IsPlainOldData)

void AGlobalPopulation_Casl_C::MakeNeverSpawnAgainCounter(TEnumAsByte<EAIFactionType> UnitSpawnedFactionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.MakeNeverSpawnAgainCounter");

	AGlobalPopulation_Casl_C_MakeNeverSpawnAgainCounter_Params params;
	params.UnitSpawnedFactionType = UnitSpawnedFactionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.PlayedEncounter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAIFactionType>    UnitSpawnedFactionType         (Parm, ZeroConstructor, IsPlainOldData)

void AGlobalPopulation_Casl_C::PlayedEncounter(TEnumAsByte<EAIFactionType> UnitSpawnedFactionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.PlayedEncounter");

	AGlobalPopulation_Casl_C_PlayedEncounter_Params params;
	params.UnitSpawnedFactionType = UnitSpawnedFactionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Construction function call-setup poi's
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABendPOI*>        Bend_POI                       (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGlobalPopulation_Casl_C::Construction_function_call_setup_poi_s(TArray<class ABendPOI*>* Bend_POI)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Construction function call-setup poi's");

	AGlobalPopulation_Casl_C_Construction_function_call_setup_poi_s_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bend_POI != nullptr)
		*Bend_POI = params.Bend_POI;
}


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Set correct poi array to use
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABendPOI*>        NewParam                       (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AGlobalPopulation_Casl_C::Set_correct_poi_array_to_use(TArray<class ABendPOI*>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Set correct poi array to use");

	AGlobalPopulation_Casl_C_Set_correct_poi_array_to_use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Find an open poi force use
// (Public, BlueprintCallable, BlueprintEvent)

void AGlobalPopulation_Casl_C::Find_an_open_poi_force_use()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Find an open poi force use");

	AGlobalPopulation_Casl_C_Find_an_open_poi_force_use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGlobalPopulation_Casl_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.UserConstructionScript");

	AGlobalPopulation_Casl_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AGlobalPopulation_Casl_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.ReceiveBeginPlay");

	AGlobalPopulation_Casl_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Play Anim On Spawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class ABendSpawnLocationBase*  SpawnLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void AGlobalPopulation_Casl_C::Play_Anim_On_Spawn(class ABendAIController* Controller, class ABendPawn* Pawn, class ABendSpawnLocationBase* SpawnLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Play Anim On Spawn");

	AGlobalPopulation_Casl_C_Play_Anim_On_Spawn_Params params;
	params.Controller = Controller;
	params.Pawn = Pawn;
	params.SpawnLocation = SpawnLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.UserLeavesSlotDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPOISlot*            Slot                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class ABendAIController*       User                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AGlobalPopulation_Casl_C::UserLeavesSlotDelegate_Event(class ABendPOISlot* Slot, class ABendAIController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.UserLeavesSlotDelegate_Event");

	AGlobalPopulation_Casl_C_UserLeavesSlotDelegate_Event_Params params;
	params.Slot = Slot;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.OnAutoNavSuccess_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPOISlot*            Slot                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             User                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AGlobalPopulation_Casl_C::OnAutoNavSuccess_Event(class ABendPOISlot* Slot, class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.OnAutoNavSuccess_Event");

	AGlobalPopulation_Casl_C_OnAutoNavSuccess_Event_Params params;
	params.Slot = Slot;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Setup auto awarness changes based on distance and camera
// (BlueprintCallable, BlueprintEvent)

void AGlobalPopulation_Casl_C::Setup_auto_awarness_changes_based_on_distance_and_camera()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Setup auto awarness changes based on distance and camera");

	AGlobalPopulation_Casl_C_Setup_auto_awarness_changes_based_on_distance_and_camera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Tick for distance and sight timer
// (BlueprintCallable, BlueprintEvent)

void AGlobalPopulation_Casl_C::Tick_for_distance_and_sight_timer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Tick for distance and sight timer");

	AGlobalPopulation_Casl_C_Tick_for_distance_and_sight_timer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Unit become semi aware of player
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       AI_Controller                  (Parm, ZeroConstructor, IsPlainOldData)

void AGlobalPopulation_Casl_C::Unit_become_semi_aware_of_player(class ABendAIController* AI_Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Unit become semi aware of player");

	AGlobalPopulation_Casl_C_Unit_become_semi_aware_of_player_Params params;
	params.AI_Controller = AI_Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.unit become full aware of player
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       AI_Controller                  (Parm, ZeroConstructor, IsPlainOldData)

void AGlobalPopulation_Casl_C::unit_become_full_aware_of_player(class ABendAIController* AI_Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.unit become full aware of player");

	AGlobalPopulation_Casl_C_unit_become_full_aware_of_player_Params params;
	params.AI_Controller = AI_Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Timer update to spawn
// (BlueprintCallable, BlueprintEvent)

void AGlobalPopulation_Casl_C::Timer_update_to_spawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Timer update to spawn");

	AGlobalPopulation_Casl_C_Timer_update_to_spawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.OnDiedOrDestroyed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDied                          (Parm, ZeroConstructor, IsPlainOldData)

void AGlobalPopulation_Casl_C::OnDiedOrDestroyed_Event_1(class ABendPawn* Pawn, bool bDied)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.OnDiedOrDestroyed_Event_1");

	AGlobalPopulation_Casl_C_OnDiedOrDestroyed_Event_1_Params params;
	params.Pawn = Pawn;
	params.bDied = bDied;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.ExitAnimStarted_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPOISlot*            Slot                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             User                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AGlobalPopulation_Casl_C::ExitAnimStarted_Event_1(class ABendPOISlot* Slot, class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.ExitAnimStarted_Event_1");

	AGlobalPopulation_Casl_C_ExitAnimStarted_Event_1_Params params;
	params.Slot = Slot;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.OnBendPawnTakeAnyDamage_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               PawnDamaged                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CriticalHit                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           KillingBlow                    (Parm, ZeroConstructor, IsPlainOldData)

void AGlobalPopulation_Casl_C::OnBendPawnTakeAnyDamage_Event_1(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser, class ABendPawn* PawnDamaged, bool CriticalHit, bool KillingBlow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.OnBendPawnTakeAnyDamage_Event_1");

	AGlobalPopulation_Casl_C_OnBendPawnTakeAnyDamage_Event_1_Params params;
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


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.ExitAnimComplete_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPOISlot*            Slot                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             User                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AGlobalPopulation_Casl_C::ExitAnimComplete_Event_1(class ABendPOISlot* Slot, class AController* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.ExitAnimComplete_Event_1");

	AGlobalPopulation_Casl_C_ExitAnimComplete_Event_1_Params params;
	params.Slot = Slot;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.TestForBetterSpawnLocation
// (BlueprintCallable, BlueprintEvent)

void AGlobalPopulation_Casl_C::TestForBetterSpawnLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.TestForBetterSpawnLocation");

	AGlobalPopulation_Casl_C_TestForBetterSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Plusonevent
// (BlueprintCallable, BlueprintEvent)

void AGlobalPopulation_Casl_C::Plusonevent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.Plusonevent");

	AGlobalPopulation_Casl_C_Plusonevent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.FailGroupTest
// (BlueprintCallable, BlueprintEvent)

void AGlobalPopulation_Casl_C::FailGroupTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.FailGroupTest");

	AGlobalPopulation_Casl_C_FailGroupTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.ExecuteUbergraph_GlobalPopulation_Casl
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGlobalPopulation_Casl_C::ExecuteUbergraph_GlobalPopulation_Casl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.ExecuteUbergraph_GlobalPopulation_Casl");

	AGlobalPopulation_Casl_C_ExecuteUbergraph_GlobalPopulation_Casl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.LeftPOI__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void AGlobalPopulation_Casl_C::LeftPOI__DelegateSignature(class ABendAIController* Controller, class ABendPawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalPopulation_Casl.GlobalPopulation_Casl_C.LeftPOI__DelegateSignature");

	AGlobalPopulation_Casl_C_LeftPOI__DelegateSignature_Params params;
	params.Controller = Controller;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
