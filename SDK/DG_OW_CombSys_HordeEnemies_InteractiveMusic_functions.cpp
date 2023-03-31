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

// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.TickMusic3
// (Public, BlueprintCallable, BlueprintEvent)

void UOW_CombSys_HordeEnemies_InteractiveMusic_C::TickMusic3()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.TickMusic3");

	UOW_CombSys_HordeEnemies_InteractiveMusic_C_TickMusic3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.TickMusic2
// (Public, BlueprintCallable, BlueprintEvent)

void UOW_CombSys_HordeEnemies_InteractiveMusic_C::TickMusic2()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.TickMusic2");

	UOW_CombSys_HordeEnemies_InteractiveMusic_C_TickMusic2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.TickMusic1
// (Public, BlueprintCallable, BlueprintEvent)

void UOW_CombSys_HordeEnemies_InteractiveMusic_C::TickMusic1()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.TickMusic1");

	UOW_CombSys_HordeEnemies_InteractiveMusic_C_TickMusic1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.IntSwitchFunction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    ListOfValues                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ValueInRegister                (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOW_CombSys_HordeEnemies_InteractiveMusic_C::IntSwitchFunction(int ValueInRegister, TArray<int>* ListOfValues, int* ReturnIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.IntSwitchFunction");

	UOW_CombSys_HordeEnemies_InteractiveMusic_C_IntSwitchFunction_Params params;
	params.ValueInRegister = ValueInRegister;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ListOfValues != nullptr)
		*ListOfValues = params.ListOfValues;
	if (ReturnIndex != nullptr)
		*ReturnIndex = params.ReturnIndex;
}


// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.TickMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            TickNumber                     (Parm, ZeroConstructor, IsPlainOldData)

void UOW_CombSys_HordeEnemies_InteractiveMusic_C::TickMusic(float DeltaTime, int TickNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.TickMusic");

	UOW_CombSys_HordeEnemies_InteractiveMusic_C_TickMusic_Params params;
	params.DeltaTime = DeltaTime;
	params.TickNumber = TickNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.Damaged_Player
// (Public, BlueprintCallable, BlueprintEvent)

void UOW_CombSys_HordeEnemies_InteractiveMusic_C::Damaged_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.Damaged_Player");

	UOW_CombSys_HordeEnemies_InteractiveMusic_C_Damaged_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.BulletBy_Player
// (Public, BlueprintCallable, BlueprintEvent)

void UOW_CombSys_HordeEnemies_InteractiveMusic_C::BulletBy_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.BulletBy_Player");

	UOW_CombSys_HordeEnemies_InteractiveMusic_C_BulletBy_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.OnBulletPassedByNearPlayer
// (Event, Public, BlueprintEvent)

void UOW_CombSys_HordeEnemies_InteractiveMusic_C::OnBulletPassedByNearPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.OnBulletPassedByNearPlayer");

	UOW_CombSys_HordeEnemies_InteractiveMusic_C_OnBulletPassedByNearPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.OnPlayerDamaged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UClass**                 TypeOfDamage                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         AmountOfDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CurrentHealth                  (Parm, ZeroConstructor, IsPlainOldData)

void UOW_CombSys_HordeEnemies_InteractiveMusic_C::OnPlayerDamaged(class UClass** TypeOfDamage, float* AmountOfDamage, float* CurrentHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.OnPlayerDamaged");

	UOW_CombSys_HordeEnemies_InteractiveMusic_C_OnPlayerDamaged_Params params;
	params.TypeOfDamage = TypeOfDamage;
	params.AmountOfDamage = AmountOfDamage;
	params.CurrentHealth = CurrentHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TickNumber                     (Parm, ZeroConstructor, IsPlainOldData)

void UOW_CombSys_HordeEnemies_InteractiveMusic_C::OnTick(float* DeltaTime, int* TickNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.OnTick");

	UOW_CombSys_HordeEnemies_InteractiveMusic_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;
	params.TickNumber = TickNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.OnPlay
// (Event, Public, BlueprintEvent)

void UOW_CombSys_HordeEnemies_InteractiveMusic_C::OnPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.OnPlay");

	UOW_CombSys_HordeEnemies_InteractiveMusic_C_OnPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.ExecuteUbergraph_OW_CombSys_HordeEnemies_InteractiveMusic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UOW_CombSys_HordeEnemies_InteractiveMusic_C::ExecuteUbergraph_OW_CombSys_HordeEnemies_InteractiveMusic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_CombSys_HordeEnemies_InteractiveMusic.OW_CombSys_HordeEnemies_InteractiveMusic_C.ExecuteUbergraph_OW_CombSys_HordeEnemies_InteractiveMusic");

	UOW_CombSys_HordeEnemies_InteractiveMusic_C_ExecuteUbergraph_OW_CombSys_HordeEnemies_InteractiveMusic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
