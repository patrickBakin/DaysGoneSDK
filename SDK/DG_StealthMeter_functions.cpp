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

// Function StealthMeter.StealthMeter_C.CallBecameFound
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStealthMeter_C::CallBecameFound()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeter.StealthMeter_C.CallBecameFound");

	UStealthMeter_C_CallBecameFound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StealthMeter.StealthMeter_C.UpdateNorthRotation
// (Public, BlueprintCallable, BlueprintEvent)

void UStealthMeter_C::UpdateNorthRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeter.StealthMeter_C.UpdateNorthRotation");

	UStealthMeter_C_UpdateNorthRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeter.StealthMeter_C.SetFocused
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Focused                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStealthMeter_C::SetFocused(bool* Focused)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeter.StealthMeter_C.SetFocused");

	UStealthMeter_C_SetFocused_Params params;
	params.Focused = Focused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StealthMeter.StealthMeter_C.UpdateTracking
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UStealthMeter_C::UpdateTracking(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeter.StealthMeter_C.UpdateTracking");

	UStealthMeter_C_UpdateTracking_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeter.StealthMeter_C.DisplayTracking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UStealthMeter_C::DisplayTracking(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeter.StealthMeter_C.DisplayTracking");

	UStealthMeter_C_DisplayTracking_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeter.StealthMeter_C.BendPawnMakeNoiseHandler
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Loudness                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBendSoundEventType> SoundEvent                     (Parm, ZeroConstructor, IsPlainOldData)

void UStealthMeter_C::BendPawnMakeNoiseHandler(float Loudness, TEnumAsByte<EBendSoundEventType> SoundEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeter.StealthMeter_C.BendPawnMakeNoiseHandler");

	UStealthMeter_C_BendPawnMakeNoiseHandler_Params params;
	params.Loudness = Loudness;
	params.SoundEvent = SoundEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeter.StealthMeter_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UStealthMeter_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeter.StealthMeter_C.Init");

	UStealthMeter_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeter.StealthMeter_C.SetOnBike
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OnBike                         (Parm, ZeroConstructor, IsPlainOldData)

void UStealthMeter_C::SetOnBike(bool OnBike)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeter.StealthMeter_C.SetOnBike");

	UStealthMeter_C_SetOnBike_Params params;
	params.OnBike = OnBike;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeter.StealthMeter_C.SetStealthed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Stealthed                      (Parm, ZeroConstructor, IsPlainOldData)

void UStealthMeter_C::SetStealthed(bool Stealthed)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeter.StealthMeter_C.SetStealthed");

	UStealthMeter_C_SetStealthed_Params params;
	params.Stealthed = Stealthed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeter.StealthMeter_C.SetAwareness
// (Public, BlueprintCallable, BlueprintEvent)

void UStealthMeter_C::SetAwareness()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeter.StealthMeter_C.SetAwareness");

	UStealthMeter_C_SetAwareness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeter.StealthMeter_C.SetDMI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* DMI                            (Parm, ZeroConstructor, IsPlainOldData)

void UStealthMeter_C::SetDMI(class UMaterialInstanceDynamic* DMI)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeter.StealthMeter_C.SetDMI");

	UStealthMeter_C_SetDMI_Params params;
	params.DMI = DMI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeter.StealthMeter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UStealthMeter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeter.StealthMeter_C.Construct");

	UStealthMeter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeter.StealthMeter_C.OnFocusChanged
// (BlueprintCallable, BlueprintEvent)

void UStealthMeter_C::OnFocusChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeter.StealthMeter_C.OnFocusChanged");

	UStealthMeter_C_OnFocusChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeter.StealthMeter_C.OnBecameFound
// (BlueprintCallable, BlueprintEvent)

void UStealthMeter_C::OnBecameFound()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeter.StealthMeter_C.OnBecameFound");

	UStealthMeter_C_OnBecameFound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeter.StealthMeter_C.OnBendPawnMakeNoise
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Loudness                       (Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   NoiseInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NoiseLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBendSoundEventType> SoundEvent                     (Parm, ZeroConstructor, IsPlainOldData)

void UStealthMeter_C::OnBendPawnMakeNoise(float Loudness, class APawn* NoiseInstigator, const struct FVector& NoiseLocation, TEnumAsByte<EBendSoundEventType> SoundEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeter.StealthMeter_C.OnBendPawnMakeNoise");

	UStealthMeter_C_OnBendPawnMakeNoise_Params params;
	params.Loudness = Loudness;
	params.NoiseInstigator = NoiseInstigator;
	params.NoiseLocation = NoiseLocation;
	params.SoundEvent = SoundEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeter.StealthMeter_C.Pulse_Event
// (BlueprintCallable, BlueprintEvent)

void UStealthMeter_C::Pulse_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeter.StealthMeter_C.Pulse_Event");

	UStealthMeter_C_Pulse_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeter.StealthMeter_C.BindPlayerEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPlayerPawn*         Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UStealthMeter_C::BindPlayerEvents(class ABendPlayerPawn* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeter.StealthMeter_C.BindPlayerEvents");

	UStealthMeter_C_BindPlayerEvents_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeter.StealthMeter_C.ExecuteUbergraph_StealthMeter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UStealthMeter_C::ExecuteUbergraph_StealthMeter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeter.StealthMeter_C.ExecuteUbergraph_StealthMeter");

	UStealthMeter_C_ExecuteUbergraph_StealthMeter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeter.StealthMeter_C.Pulse__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStealthMeter_C::Pulse__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeter.StealthMeter_C.Pulse__DelegateSignature");

	UStealthMeter_C_Pulse__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeter.StealthMeter_C.BecameFound__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStealthMeter_C::BecameFound__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeter.StealthMeter_C.BecameFound__DelegateSignature");

	UStealthMeter_C_BecameFound__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeter.StealthMeter_C.FocusChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStealthMeter_C::FocusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeter.StealthMeter_C.FocusChanged__DelegateSignature");

	UStealthMeter_C_FocusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
