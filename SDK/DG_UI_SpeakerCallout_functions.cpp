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

// Function UI_SpeakerCallout.UI_SpeakerCallout_C.ShowOffscreenArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpeakerCallout_C::ShowOffscreenArrow(bool State, float angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpeakerCallout.UI_SpeakerCallout_C.ShowOffscreenArrow");

	UUI_SpeakerCallout_C_ShowOffscreenArrow_Params params;
	params.State = State;
	params.angle = angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpeakerCallout.UI_SpeakerCallout_C.UpdateCalloutPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpeakerCallout_C::UpdateCalloutPosition(class AActor* Actor, const struct FVector& Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpeakerCallout.UI_SpeakerCallout_C.UpdateCalloutPosition");

	UUI_SpeakerCallout_C_UpdateCalloutPosition_Params params;
	params.Actor = Actor;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpeakerCallout.UI_SpeakerCallout_C.SetObjectiveCalloutWarning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpeakerCallout_C::SetObjectiveCalloutWarning(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpeakerCallout.UI_SpeakerCallout_C.SetObjectiveCalloutWarning");

	UUI_SpeakerCallout_C_SetObjectiveCalloutWarning_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpeakerCallout.UI_SpeakerCallout_C.SetStatusEffectVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isPoison                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpeakerCallout_C::SetStatusEffectVisible(bool isPoison, bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpeakerCallout.UI_SpeakerCallout_C.SetStatusEffectVisible");

	UUI_SpeakerCallout_C_SetStatusEffectVisible_Params params;
	params.isPoison = isPoison;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpeakerCallout.UI_SpeakerCallout_C.SetObjectiveCalloutVisible
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           WarningState                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpeakerCallout_C::SetObjectiveCalloutVisible(bool Visible, TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, bool WarningState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpeakerCallout.UI_SpeakerCallout_C.SetObjectiveCalloutVisible");

	UUI_SpeakerCallout_C_SetObjectiveCalloutVisible_Params params;
	params.Visible = Visible;
	params.Category = Category;
	params.Type = Type;
	params.WarningState = WarningState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpeakerCallout.UI_SpeakerCallout_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SpeakerCallout_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpeakerCallout.UI_SpeakerCallout_C.Init");

	UUI_SpeakerCallout_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpeakerCallout.UI_SpeakerCallout_C.SetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpeakerCallout_C::SetHealth(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpeakerCallout.UI_SpeakerCallout_C.SetHealth");

	UUI_SpeakerCallout_C_SetHealth_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpeakerCallout.UI_SpeakerCallout_C.TweenVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SpeakerCallout_C::TweenVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpeakerCallout.UI_SpeakerCallout_C.TweenVisibility");

	UUI_SpeakerCallout_C_TweenVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpeakerCallout.UI_SpeakerCallout_C.SetCalloutDisabled
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SpeakerCallout_C::SetCalloutDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpeakerCallout.UI_SpeakerCallout_C.SetCalloutDisabled");

	UUI_SpeakerCallout_C_SetCalloutDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpeakerCallout.UI_SpeakerCallout_C.SetCalloutHidden
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SpeakerCallout_C::SetCalloutHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpeakerCallout.UI_SpeakerCallout_C.SetCalloutHidden");

	UUI_SpeakerCallout_C_SetCalloutHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpeakerCallout.UI_SpeakerCallout_C.SetCalloutVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_CalloutType>  NPCType                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpeakerCallout_C::SetCalloutVisible(bool Visible, TEnumAsByte<Enum_CalloutType> NPCType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpeakerCallout.UI_SpeakerCallout_C.SetCalloutVisible");

	UUI_SpeakerCallout_C_SetCalloutVisible_Params params;
	params.Visible = Visible;
	params.NPCType = NPCType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpeakerCallout.UI_SpeakerCallout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SpeakerCallout_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpeakerCallout.UI_SpeakerCallout_C.Construct");

	UUI_SpeakerCallout_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SpeakerCallout.UI_SpeakerCallout_C.ExecuteUbergraph_UI_SpeakerCallout
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SpeakerCallout_C::ExecuteUbergraph_UI_SpeakerCallout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SpeakerCallout.UI_SpeakerCallout_C.ExecuteUbergraph_UI_SpeakerCallout");

	UUI_SpeakerCallout_C_ExecuteUbergraph_UI_SpeakerCallout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
