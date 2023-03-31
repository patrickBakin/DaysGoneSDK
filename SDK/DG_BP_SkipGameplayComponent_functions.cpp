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

// Function BP_SkipGameplayComponent.BP_SkipGameplayComponent_C.DisplayMissionSkipButton
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_SkipGameplayComponent_C::DisplayMissionSkipButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkipGameplayComponent.BP_SkipGameplayComponent_C.DisplayMissionSkipButton");

	UBP_SkipGameplayComponent_C_DisplayMissionSkipButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkipGameplayComponent.BP_SkipGameplayComponent_C.RemoveMissionSkipButton
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Hide                           (Parm, ZeroConstructor, IsPlainOldData)

void UBP_SkipGameplayComponent_C::RemoveMissionSkipButton(bool* Hide)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkipGameplayComponent.BP_SkipGameplayComponent_C.RemoveMissionSkipButton");

	UBP_SkipGameplayComponent_C_RemoveMissionSkipButton_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkipGameplayComponent.BP_SkipGameplayComponent_C.UpdatePercent
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UBP_SkipGameplayComponent_C::UpdatePercent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkipGameplayComponent.BP_SkipGameplayComponent_C.UpdatePercent");

	UBP_SkipGameplayComponent_C_UpdatePercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkipGameplayComponent.BP_SkipGameplayComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void UBP_SkipGameplayComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkipGameplayComponent.BP_SkipGameplayComponent_C.ReceiveEndPlay");

	UBP_SkipGameplayComponent_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SkipGameplayComponent.BP_SkipGameplayComponent_C.ExecuteUbergraph_BP_SkipGameplayComponent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_SkipGameplayComponent_C::ExecuteUbergraph_BP_SkipGameplayComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SkipGameplayComponent.BP_SkipGameplayComponent_C.ExecuteUbergraph_BP_SkipGameplayComponent");

	UBP_SkipGameplayComponent_C_ExecuteUbergraph_BP_SkipGameplayComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
