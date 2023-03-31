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

// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.InitAimSnap
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuProfileEntry_C::InitAimSnap()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.InitAimSnap");

	UOptionsMenuProfileEntry_C_InitAimSnap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.SetDefaults
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuProfileEntry_C::SetDefaults()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.SetDefaults");

	UOptionsMenuProfileEntry_C_SetDefaults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.HandleEntryNav
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InputDirection                 (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuProfileEntry_C::HandleEntryNav(int InputDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.HandleEntryNav");

	UOptionsMenuProfileEntry_C_HandleEntryNav_Params params;
	params.InputDirection = InputDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.ContainsTextFields
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           HasFields                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuProfileEntry_C::ContainsTextFields(bool* HasFields)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.ContainsTextFields");

	UOptionsMenuProfileEntry_C_ContainsTextFields_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasFields != nullptr)
		*HasFields = params.HasFields;
}


// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.AdjustEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuProfileEntry_C::AdjustEntry(int Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.AdjustEntry");

	UOptionsMenuProfileEntry_C_AdjustEntry_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.CanBeModified
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           CanModify                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuProfileEntry_C::CanBeModified(bool* CanModify)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.CanBeModified");

	UOptionsMenuProfileEntry_C_CanBeModified_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanModify != nullptr)
		*CanModify = params.CanModify;
}


// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.SetSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuProfileEntry_C::SetSelected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.SetSelected");

	UOptionsMenuProfileEntry_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.SyncValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsMenuProfileEntry_C::SyncValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.SyncValue");

	UOptionsMenuProfileEntry_C_SyncValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.Init
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerSaveProfileMenuEntry InEntry                        (Parm, OutParm, ReferenceParm)

void UOptionsMenuProfileEntry_C::Init(struct FPlayerSaveProfileMenuEntry* InEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.Init");

	UOptionsMenuProfileEntry_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InEntry != nullptr)
		*InEntry = params.InEntry;
}


// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsMenuProfileEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.Construct");

	UOptionsMenuProfileEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_1533_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuProfileEntry_C::BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_1533_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_1533_OnMenuInteractHoverEvent__DelegateSignature");

	UOptionsMenuProfileEntry_C_BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_1533_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.BndEvt__MenuInteract_Next_K2Node_ComponentBoundEvent_1619_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuProfileEntry_C::BndEvt__MenuInteract_Next_K2Node_ComponentBoundEvent_1619_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.BndEvt__MenuInteract_Next_K2Node_ComponentBoundEvent_1619_OnMenuInteractClickedEvent__DelegateSignature");

	UOptionsMenuProfileEntry_C_BndEvt__MenuInteract_Next_K2Node_ComponentBoundEvent_1619_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.BndEvt__MenuInteract_Previous_K2Node_ComponentBoundEvent_1622_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuProfileEntry_C::BndEvt__MenuInteract_Previous_K2Node_ComponentBoundEvent_1622_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.BndEvt__MenuInteract_Previous_K2Node_ComponentBoundEvent_1622_OnMenuInteractClickedEvent__DelegateSignature");

	UOptionsMenuProfileEntry_C_BndEvt__MenuInteract_Previous_K2Node_ComponentBoundEvent_1622_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2076_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UOptionsMenuProfileEntry_C::BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2076_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2076_OnMenuInteractClickedEvent__DelegateSignature");

	UOptionsMenuProfileEntry_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2076_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.ExecuteUbergraph_OptionsMenuProfileEntry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuProfileEntry_C::ExecuteUbergraph_OptionsMenuProfileEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.ExecuteUbergraph_OptionsMenuProfileEntry");

	UOptionsMenuProfileEntry_C_ExecuteUbergraph_OptionsMenuProfileEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.OnHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuProfileEntry_C::OnHover__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.OnHover__DelegateSignature");

	UOptionsMenuProfileEntry_C_OnHover__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.OnProfileEntryModified__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOptionsMenuProfileEntry_C* ProfileEntry                   (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuProfileEntry_C::OnProfileEntryModified__DelegateSignature(class UOptionsMenuProfileEntry_C* ProfileEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.OnProfileEntryModified__DelegateSignature");

	UOptionsMenuProfileEntry_C_OnProfileEntryModified__DelegateSignature_Params params;
	params.ProfileEntry = ProfileEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.OnProfileEntryAdjustRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOptionsMenuProfileEntry_C* ProfileEntry                   (Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuProfileEntry_C::OnProfileEntryAdjustRequest__DelegateSignature(class UOptionsMenuProfileEntry_C* ProfileEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuProfileEntry.OptionsMenuProfileEntry_C.OnProfileEntryAdjustRequest__DelegateSignature");

	UOptionsMenuProfileEntry_C_OnProfileEntryAdjustRequest__DelegateSignature_Params params;
	params.ProfileEntry = ProfileEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
