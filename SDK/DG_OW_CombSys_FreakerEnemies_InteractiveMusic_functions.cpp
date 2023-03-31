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

// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.TickMusic
// (Public, BlueprintCallable, BlueprintEvent)

void UOW_CombSys_FreakerEnemies_InteractiveMusic_C::TickMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.TickMusic");

	UOW_CombSys_FreakerEnemies_InteractiveMusic_C_TickMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.Damaged_Player
// (Public, BlueprintCallable, BlueprintEvent)

void UOW_CombSys_FreakerEnemies_InteractiveMusic_C::Damaged_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.Damaged_Player");

	UOW_CombSys_FreakerEnemies_InteractiveMusic_C_Damaged_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.BulletBy_Player
// (Public, BlueprintCallable, BlueprintEvent)

void UOW_CombSys_FreakerEnemies_InteractiveMusic_C::BulletBy_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.BulletBy_Player");

	UOW_CombSys_FreakerEnemies_InteractiveMusic_C_BulletBy_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.OnBulletPassedByNearPlayer
// (Event, Public, BlueprintEvent)

void UOW_CombSys_FreakerEnemies_InteractiveMusic_C::OnBulletPassedByNearPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.OnBulletPassedByNearPlayer");

	UOW_CombSys_FreakerEnemies_InteractiveMusic_C_OnBulletPassedByNearPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.OnPlayerDamaged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UClass**                 TypeOfDamage                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         AmountOfDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CurrentHealth                  (Parm, ZeroConstructor, IsPlainOldData)

void UOW_CombSys_FreakerEnemies_InteractiveMusic_C::OnPlayerDamaged(class UClass** TypeOfDamage, float* AmountOfDamage, float* CurrentHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.OnPlayerDamaged");

	UOW_CombSys_FreakerEnemies_InteractiveMusic_C_OnPlayerDamaged_Params params;
	params.TypeOfDamage = TypeOfDamage;
	params.AmountOfDamage = AmountOfDamage;
	params.CurrentHealth = CurrentHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TickNumber                     (Parm, ZeroConstructor, IsPlainOldData)

void UOW_CombSys_FreakerEnemies_InteractiveMusic_C::OnTick(float* DeltaTime, int* TickNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.OnTick");

	UOW_CombSys_FreakerEnemies_InteractiveMusic_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;
	params.TickNumber = TickNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.SetMediumState
// (Public, BlueprintCallable, BlueprintEvent)

void UOW_CombSys_FreakerEnemies_InteractiveMusic_C::SetMediumState()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.SetMediumState");

	UOW_CombSys_FreakerEnemies_InteractiveMusic_C_SetMediumState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.SetHighState
// (Public, BlueprintCallable, BlueprintEvent)

void UOW_CombSys_FreakerEnemies_InteractiveMusic_C::SetHighState()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.SetHighState");

	UOW_CombSys_FreakerEnemies_InteractiveMusic_C_SetHighState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.SetLow1State
// (Public, BlueprintCallable, BlueprintEvent)

void UOW_CombSys_FreakerEnemies_InteractiveMusic_C::SetLow1State()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.SetLow1State");

	UOW_CombSys_FreakerEnemies_InteractiveMusic_C_SetLow1State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.SetIdleState
// (Public, BlueprintCallable, BlueprintEvent)

void UOW_CombSys_FreakerEnemies_InteractiveMusic_C::SetIdleState()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.SetIdleState");

	UOW_CombSys_FreakerEnemies_InteractiveMusic_C_SetIdleState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.SetLow2State
// (Public, BlueprintCallable, BlueprintEvent)

void UOW_CombSys_FreakerEnemies_InteractiveMusic_C::SetLow2State()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.SetLow2State");

	UOW_CombSys_FreakerEnemies_InteractiveMusic_C_SetLow2State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.OnPlay
// (Event, Public, BlueprintEvent)

void UOW_CombSys_FreakerEnemies_InteractiveMusic_C::OnPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.OnPlay");

	UOW_CombSys_FreakerEnemies_InteractiveMusic_C_OnPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.ExecuteUbergraph_OW_CombSys_FreakerEnemies_InteractiveMusic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UOW_CombSys_FreakerEnemies_InteractiveMusic_C::ExecuteUbergraph_OW_CombSys_FreakerEnemies_InteractiveMusic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_FreakerEnemies_InteractiveMusic.OW_CombSys_FreakerEnemies_InteractiveMusic_C.ExecuteUbergraph_OW_CombSys_FreakerEnemies_InteractiveMusic");

	UOW_CombSys_FreakerEnemies_InteractiveMusic_C_ExecuteUbergraph_OW_CombSys_FreakerEnemies_InteractiveMusic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
