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

// Function AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C.PreviousValue
// (Public, BlueprintCallable, BlueprintEvent)

void UAdvancedDisplyMenuEntryBase_C::PreviousValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C.PreviousValue");

	UAdvancedDisplyMenuEntryBase_C_PreviousValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C.NextValue
// (Public, BlueprintCallable, BlueprintEvent)

void UAdvancedDisplyMenuEntryBase_C::NextValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C.NextValue");

	UAdvancedDisplyMenuEntryBase_C_NextValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UAdvancedDisplyMenuEntryBase_C::SetSelected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C.SetSelected");

	UAdvancedDisplyMenuEntryBase_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C.SetDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Disabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UAdvancedDisplyMenuEntryBase_C::SetDisabled(bool Disabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C.SetDisabled");

	UAdvancedDisplyMenuEntryBase_C_SetDisabled_Params params;
	params.Disabled = Disabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C.HandleStateChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAdvancedDisplyMenuEntryBase_C::HandleStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C.HandleStateChanged");

	UAdvancedDisplyMenuEntryBase_C_HandleStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UAdvancedDisplyMenuEntryBase_C::OnSelected__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C.OnSelected__DelegateSignature");

	UAdvancedDisplyMenuEntryBase_C_OnSelected__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UAdvancedDisplyMenuEntryBase_C::OnHovered__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C.OnHovered__DelegateSignature");

	UAdvancedDisplyMenuEntryBase_C_OnHovered__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
