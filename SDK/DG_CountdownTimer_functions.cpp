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

// Function CountdownTimer.CountdownTimer_C.SetCountdownTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan               TotalTime                      (Parm, ZeroConstructor)
// struct FTimespan               RemainingTime                  (Parm, ZeroConstructor)

void UCountdownTimer_C::SetCountdownTime(const struct FTimespan& TotalTime, const struct FTimespan& RemainingTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CountdownTimer.CountdownTimer_C.SetCountdownTime");

	UCountdownTimer_C_SetCountdownTime_Params params;
	params.TotalTime = TotalTime;
	params.RemainingTime = RemainingTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CountdownTimer.CountdownTimer_C.SetTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan               CurrentTime                    (Parm, ZeroConstructor)

void UCountdownTimer_C::SetTime(const struct FTimespan& CurrentTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CountdownTimer.CountdownTimer_C.SetTime");

	UCountdownTimer_C_SetTime_Params params;
	params.CurrentTime = CurrentTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CountdownTimer.CountdownTimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCountdownTimer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CountdownTimer.CountdownTimer_C.Construct");

	UCountdownTimer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CountdownTimer.CountdownTimer_C.ResetTimer
// (BlueprintCallable, BlueprintEvent)

void UCountdownTimer_C::ResetTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function CountdownTimer.CountdownTimer_C.ResetTimer");

	UCountdownTimer_C_ResetTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CountdownTimer.CountdownTimer_C.Display Flashing
// (BlueprintCallable, BlueprintEvent)

void UCountdownTimer_C::Display_Flashing()
{
	static auto fn = UObject::FindObject<UFunction>("Function CountdownTimer.CountdownTimer_C.Display Flashing");

	UCountdownTimer_C_Display_Flashing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CountdownTimer.CountdownTimer_C.Display Steady
// (BlueprintCallable, BlueprintEvent)

void UCountdownTimer_C::Display_Steady()
{
	static auto fn = UObject::FindObject<UFunction>("Function CountdownTimer.CountdownTimer_C.Display Steady");

	UCountdownTimer_C_Display_Steady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CountdownTimer.CountdownTimer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UCountdownTimer_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CountdownTimer.CountdownTimer_C.Tick");

	UCountdownTimer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CountdownTimer.CountdownTimer_C.ExecuteUbergraph_CountdownTimer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCountdownTimer_C::ExecuteUbergraph_CountdownTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CountdownTimer.CountdownTimer_C.ExecuteUbergraph_CountdownTimer");

	UCountdownTimer_C_ExecuteUbergraph_CountdownTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
