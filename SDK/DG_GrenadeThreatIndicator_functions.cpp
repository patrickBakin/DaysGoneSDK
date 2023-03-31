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

// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.Scale
// (Public, BlueprintCallable, BlueprintEvent)

void UGrenadeThreatIndicator_C::Scale()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.Scale");

	UGrenadeThreatIndicator_C_Scale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.Remove
// (Public, BlueprintCallable, BlueprintEvent)

void UGrenadeThreatIndicator_C::Remove()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.Remove");

	UGrenadeThreatIndicator_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeThreatIndicator_C::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.SetVisible");

	UGrenadeThreatIndicator_C_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.UpdateScreenPosition
// (Public, BlueprintCallable, BlueprintEvent)

void UGrenadeThreatIndicator_C::UpdateScreenPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.UpdateScreenPosition");

	UGrenadeThreatIndicator_C_UpdateScreenPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UGrenadeThreatIndicator_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.Init");

	UGrenadeThreatIndicator_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.SetWarning State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeThreatIndicator_C::SetWarning_State(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.SetWarning State");

	UGrenadeThreatIndicator_C_SetWarning_State_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGrenadeThreatIndicator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.Construct");

	UGrenadeThreatIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeThreatIndicator_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.Tick");

	UGrenadeThreatIndicator_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.OnPlayerThrew
// (BlueprintCallable, BlueprintEvent)

void UGrenadeThreatIndicator_C::OnPlayerThrew()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.OnPlayerThrew");

	UGrenadeThreatIndicator_C_OnPlayerThrew_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.ExecuteUbergraph_GrenadeThreatIndicator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGrenadeThreatIndicator_C::ExecuteUbergraph_GrenadeThreatIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.ExecuteUbergraph_GrenadeThreatIndicator");

	UGrenadeThreatIndicator_C_ExecuteUbergraph_GrenadeThreatIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.PlayerThrew__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGrenadeThreatIndicator_C::PlayerThrew__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.PlayerThrew__DelegateSignature");

	UGrenadeThreatIndicator_C_PlayerThrew__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.Initialized__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGrenadeThreatIndicator_C::Initialized__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GrenadeThreatIndicator.GrenadeThreatIndicator_C.Initialized__DelegateSignature");

	UGrenadeThreatIndicator_C_Initialized__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
