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

// Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.TickMusic
// (Public, BlueprintCallable, BlueprintEvent)

void UIYK_InteractiveMusic_C::TickMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.TickMusic");

	UIYK_InteractiveMusic_C_TickMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.Damaged_Player
// (Public, BlueprintCallable, BlueprintEvent)

void UIYK_InteractiveMusic_C::Damaged_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.Damaged_Player");

	UIYK_InteractiveMusic_C_Damaged_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.BulletBy_Player
// (Public, BlueprintCallable, BlueprintEvent)

void UIYK_InteractiveMusic_C::BulletBy_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.BulletBy_Player");

	UIYK_InteractiveMusic_C_BulletBy_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.OnBulletPassedByNearPlayer
// (Event, Public, BlueprintEvent)

void UIYK_InteractiveMusic_C::OnBulletPassedByNearPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.OnBulletPassedByNearPlayer");

	UIYK_InteractiveMusic_C_OnBulletPassedByNearPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.OnPlayerDamaged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UClass**                 TypeOfDamage                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         AmountOfDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CurrentHealth                  (Parm, ZeroConstructor, IsPlainOldData)

void UIYK_InteractiveMusic_C::OnPlayerDamaged(class UClass** TypeOfDamage, float* AmountOfDamage, float* CurrentHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.OnPlayerDamaged");

	UIYK_InteractiveMusic_C_OnPlayerDamaged_Params params;
	params.TypeOfDamage = TypeOfDamage;
	params.AmountOfDamage = AmountOfDamage;
	params.CurrentHealth = CurrentHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TickNumber                     (Parm, ZeroConstructor, IsPlainOldData)

void UIYK_InteractiveMusic_C::OnTick(float* DeltaTime, int* TickNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.OnTick");

	UIYK_InteractiveMusic_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;
	params.TickNumber = TickNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.SetLow1State
// (Public, BlueprintCallable, BlueprintEvent)

void UIYK_InteractiveMusic_C::SetLow1State()
{
	static auto fn = UObject::FindObject<UFunction>("Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.SetLow1State");

	UIYK_InteractiveMusic_C_SetLow1State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.SetHighState
// (Public, BlueprintCallable, BlueprintEvent)

void UIYK_InteractiveMusic_C::SetHighState()
{
	static auto fn = UObject::FindObject<UFunction>("Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.SetHighState");

	UIYK_InteractiveMusic_C_SetHighState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.SetMediumState
// (Public, BlueprintCallable, BlueprintEvent)

void UIYK_InteractiveMusic_C::SetMediumState()
{
	static auto fn = UObject::FindObject<UFunction>("Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.SetMediumState");

	UIYK_InteractiveMusic_C_SetMediumState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.ExecuteUbergraph_IYK_InteractiveMusic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIYK_InteractiveMusic_C::ExecuteUbergraph_IYK_InteractiveMusic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IYK_InteractiveMusic.IYK_InteractiveMusic_C.ExecuteUbergraph_IYK_InteractiveMusic");

	UIYK_InteractiveMusic_C_ExecuteUbergraph_IYK_InteractiveMusic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
