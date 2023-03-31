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

// Function FreakerListenerDistant.FreakerListenerDistant_C.PlayAudio
// (Public, BlueprintCallable, BlueprintEvent)

void AFreakerListenerDistant_C::PlayAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreakerListenerDistant.FreakerListenerDistant_C.PlayAudio");

	AFreakerListenerDistant_C_PlayAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreakerListenerDistant.FreakerListenerDistant_C.StopAudio
// (Public, BlueprintCallable, BlueprintEvent)

void AFreakerListenerDistant_C::StopAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreakerListenerDistant.FreakerListenerDistant_C.StopAudio");

	AFreakerListenerDistant_C_StopAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreakerListenerDistant.FreakerListenerDistant_C.TimerExpire
// (Public, BlueprintCallable, BlueprintEvent)

void AFreakerListenerDistant_C::TimerExpire()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreakerListenerDistant.FreakerListenerDistant_C.TimerExpire");

	AFreakerListenerDistant_C_TimerExpire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreakerListenerDistant.FreakerListenerDistant_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFreakerListenerDistant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreakerListenerDistant.FreakerListenerDistant_C.UserConstructionScript");

	AFreakerListenerDistant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreakerListenerDistant.FreakerListenerDistant_C.BndEvt__PawnSensing1_K2Node_ComponentBoundEvent_102_HearNoiseDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class APawn*                   Instigator                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          Volume                         (Parm, ZeroConstructor, IsPlainOldData)

void AFreakerListenerDistant_C::BndEvt__PawnSensing1_K2Node_ComponentBoundEvent_102_HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function FreakerListenerDistant.FreakerListenerDistant_C.BndEvt__PawnSensing1_K2Node_ComponentBoundEvent_102_HearNoiseDelegate__DelegateSignature");

	AFreakerListenerDistant_C_BndEvt__PawnSensing1_K2Node_ComponentBoundEvent_102_HearNoiseDelegate__DelegateSignature_Params params;
	params.Instigator = Instigator;
	params.Location = Location;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreakerListenerDistant.FreakerListenerDistant_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AFreakerListenerDistant_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreakerListenerDistant.FreakerListenerDistant_C.ReceiveBeginPlay");

	AFreakerListenerDistant_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreakerListenerDistant.FreakerListenerDistant_C.EveryHour
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Hour                           (Parm, ZeroConstructor, IsPlainOldData)

void AFreakerListenerDistant_C::EveryHour(int Hour)
{
	static auto fn = UObject::FindObject<UFunction>("Function FreakerListenerDistant.FreakerListenerDistant_C.EveryHour");

	AFreakerListenerDistant_C_EveryHour_Params params;
	params.Hour = Hour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreakerListenerDistant.FreakerListenerDistant_C.weatherChanged
// (BlueprintCallable, BlueprintEvent)

void AFreakerListenerDistant_C::weatherChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreakerListenerDistant.FreakerListenerDistant_C.weatherChanged");

	AFreakerListenerDistant_C_weatherChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FreakerListenerDistant.FreakerListenerDistant_C.ExecuteUbergraph_FreakerListenerDistant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFreakerListenerDistant_C::ExecuteUbergraph_FreakerListenerDistant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FreakerListenerDistant.FreakerListenerDistant_C.ExecuteUbergraph_FreakerListenerDistant");

	AFreakerListenerDistant_C_ExecuteUbergraph_FreakerListenerDistant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
