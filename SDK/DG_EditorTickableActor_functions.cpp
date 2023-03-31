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

// Function EditorTickableActor.EditorTickableActor_C.DebugPrint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Periodic_Ticker_Index          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Print_Immediately              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Message                        (Parm, ZeroConstructor)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Display_Time                   (Parm, ZeroConstructor, IsPlainOldData)

void AEditorTickableActor_C::DebugPrint(int Periodic_Ticker_Index, bool Print_Immediately, const struct FString& Message, const struct FLinearColor& Color, float Display_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditorTickableActor.EditorTickableActor_C.DebugPrint");

	AEditorTickableActor_C_DebugPrint_Params params;
	params.Periodic_Ticker_Index = Periodic_Ticker_Index;
	params.Print_Immediately = Print_Immediately;
	params.Message = Message;
	params.Color = Color;
	params.Display_Time = Display_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditorTickableActor.EditorTickableActor_C.PeriodicTickersTrigger
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Ticker_Index                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Period                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Delta                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Triggered                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEditorTickableActor_C::PeriodicTickersTrigger(int Ticker_Index, float* Period, float* Delta, bool* Triggered)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditorTickableActor.EditorTickableActor_C.PeriodicTickersTrigger");

	AEditorTickableActor_C_PeriodicTickersTrigger_Params params;
	params.Ticker_Index = Ticker_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Period != nullptr)
		*Period = params.Period;
	if (Delta != nullptr)
		*Delta = params.Delta;
	if (Triggered != nullptr)
		*Triggered = params.Triggered;
}


// Function EditorTickableActor.EditorTickableActor_C.PeriodicTickersUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AEditorTickableActor_C::PeriodicTickersUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditorTickableActor.EditorTickableActor_C.PeriodicTickersUpdate");

	AEditorTickableActor_C_PeriodicTickersUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditorTickableActor.EditorTickableActor_C.DoEditorTickInterval
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Tick                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEditorTickableActor_C::DoEditorTickInterval(bool* Tick)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditorTickableActor.EditorTickableActor_C.DoEditorTickInterval");

	AEditorTickableActor_C_DoEditorTickInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tick != nullptr)
		*Tick = params.Tick;
}


// Function EditorTickableActor.EditorTickableActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEditorTickableActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditorTickableActor.EditorTickableActor_C.UserConstructionScript");

	AEditorTickableActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditorTickableActor.EditorTickableActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AEditorTickableActor_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditorTickableActor.EditorTickableActor_C.ReceiveTick");

	AEditorTickableActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditorTickableActor.EditorTickableActor_C.Editor Tick
// (BlueprintCallable, BlueprintEvent)

void AEditorTickableActor_C::Editor_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditorTickableActor.EditorTickableActor_C.Editor Tick");

	AEditorTickableActor_C_Editor_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditorTickableActor.EditorTickableActor_C.ExecuteUbergraph_EditorTickableActor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEditorTickableActor_C::ExecuteUbergraph_EditorTickableActor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditorTickableActor.EditorTickableActor_C.ExecuteUbergraph_EditorTickableActor");

	AEditorTickableActor_C_ExecuteUbergraph_EditorTickableActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
