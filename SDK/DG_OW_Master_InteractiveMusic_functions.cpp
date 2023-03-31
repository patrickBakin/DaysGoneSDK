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

// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.SetupArrays
// (Public, BlueprintCallable, BlueprintEvent)

void UOW_Master_InteractiveMusic_C::SetupArrays()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.SetupArrays");

	UOW_Master_InteractiveMusic_C_SetupArrays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.IntSwitchFunction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    List_Of_Values                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Value_In_Register              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Return_Index                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOW_Master_InteractiveMusic_C::IntSwitchFunction(int Value_In_Register, TArray<int>* List_Of_Values, int* Return_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.IntSwitchFunction");

	UOW_Master_InteractiveMusic_C_IntSwitchFunction_Params params;
	params.Value_In_Register = Value_In_Register;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (List_Of_Values != nullptr)
		*List_Of_Values = params.List_Of_Values;
	if (Return_Index != nullptr)
		*Return_Index = params.Return_Index;
}


// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.TickMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Time                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Tick_Number                    (Parm, ZeroConstructor, IsPlainOldData)

void UOW_Master_InteractiveMusic_C::TickMusic(float Delta_Time, int Tick_Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.TickMusic");

	UOW_Master_InteractiveMusic_C_TickMusic_Params params;
	params.Delta_Time = Delta_Time;
	params.Tick_Number = Tick_Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.Damaged_Player
// (Public, BlueprintCallable, BlueprintEvent)

void UOW_Master_InteractiveMusic_C::Damaged_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.Damaged_Player");

	UOW_Master_InteractiveMusic_C_Damaged_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.BulletBy_Player
// (Public, BlueprintCallable, BlueprintEvent)

void UOW_Master_InteractiveMusic_C::BulletBy_Player()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.BulletBy_Player");

	UOW_Master_InteractiveMusic_C_BulletBy_Player_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.OnBulletPassedByNearPlayer
// (Event, Public, BlueprintEvent)

void UOW_Master_InteractiveMusic_C::OnBulletPassedByNearPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.OnBulletPassedByNearPlayer");

	UOW_Master_InteractiveMusic_C_OnBulletPassedByNearPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.OnPlayerDamaged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UClass**                 TypeOfDamage                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         AmountOfDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CurrentHealth                  (Parm, ZeroConstructor, IsPlainOldData)

void UOW_Master_InteractiveMusic_C::OnPlayerDamaged(class UClass** TypeOfDamage, float* AmountOfDamage, float* CurrentHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.OnPlayerDamaged");

	UOW_Master_InteractiveMusic_C_OnPlayerDamaged_Params params;
	params.TypeOfDamage = TypeOfDamage;
	params.AmountOfDamage = AmountOfDamage;
	params.CurrentHealth = CurrentHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           TickNumber                     (Parm, ZeroConstructor, IsPlainOldData)

void UOW_Master_InteractiveMusic_C::OnTick(float* DeltaTime, int* TickNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.OnTick");

	UOW_Master_InteractiveMusic_C_OnTick_Params params;
	params.DeltaTime = DeltaTime;
	params.TickNumber = TickNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.OnPlay
// (Event, Public, BlueprintEvent)

void UOW_Master_InteractiveMusic_C::OnPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.OnPlay");

	UOW_Master_InteractiveMusic_C_OnPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.OnEnteredInfestation_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendNestingZone*        Zone                           (Parm, ZeroConstructor, IsPlainOldData)

void UOW_Master_InteractiveMusic_C::OnEnteredInfestation_Event_1(class UBendNestingZone* Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.OnEnteredInfestation_Event_1");

	UOW_Master_InteractiveMusic_C_OnEnteredInfestation_Event_1_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.OnLeftInfestation_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendNestingZone*        Zone                           (Parm, ZeroConstructor, IsPlainOldData)

void UOW_Master_InteractiveMusic_C::OnLeftInfestation_Event_1(class UBendNestingZone* Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.OnLeftInfestation_Event_1");

	UOW_Master_InteractiveMusic_C_OnLeftInfestation_Event_1_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.OnTriggerMissionViaMissionTrigger_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendMissionData*        MissionData                    (Parm, ZeroConstructor, IsPlainOldData)

void UOW_Master_InteractiveMusic_C::OnTriggerMissionViaMissionTrigger_Event_1(class UBendMissionData* MissionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.OnTriggerMissionViaMissionTrigger_Event_1");

	UOW_Master_InteractiveMusic_C_OnTriggerMissionViaMissionTrigger_Event_1_Params params;
	params.MissionData = MissionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.ExecuteUbergraph_OW_Master_InteractiveMusic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UOW_Master_InteractiveMusic_C::ExecuteUbergraph_OW_Master_InteractiveMusic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.ExecuteUbergraph_OW_Master_InteractiveMusic");

	UOW_Master_InteractiveMusic_C_ExecuteUbergraph_OW_Master_InteractiveMusic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
