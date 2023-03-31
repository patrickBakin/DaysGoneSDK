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

// Function InputRemappingActionItem.InputRemappingActionItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInputRemappingActionItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingActionItem.InputRemappingActionItem_C.Construct");

	UInputRemappingActionItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingActionItem.InputRemappingActionItem_C.BndEvt__MenuInteract_Alternate_K2Node_ComponentBoundEvent_1225_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInputRemappingActionItem_C::BndEvt__MenuInteract_Alternate_K2Node_ComponentBoundEvent_1225_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingActionItem.InputRemappingActionItem_C.BndEvt__MenuInteract_Alternate_K2Node_ComponentBoundEvent_1225_OnMenuInteractClickedEvent__DelegateSignature");

	UInputRemappingActionItem_C_BndEvt__MenuInteract_Alternate_K2Node_ComponentBoundEvent_1225_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingActionItem.InputRemappingActionItem_C.BndEvt__MenuInteract_Primary_K2Node_ComponentBoundEvent_1227_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInputRemappingActionItem_C::BndEvt__MenuInteract_Primary_K2Node_ComponentBoundEvent_1227_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingActionItem.InputRemappingActionItem_C.BndEvt__MenuInteract_Primary_K2Node_ComponentBoundEvent_1227_OnMenuInteractClickedEvent__DelegateSignature");

	UInputRemappingActionItem_C_BndEvt__MenuInteract_Primary_K2Node_ComponentBoundEvent_1227_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingActionItem.InputRemappingActionItem_C.ExecuteUbergraph_InputRemappingActionItem
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UInputRemappingActionItem_C::ExecuteUbergraph_InputRemappingActionItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingActionItem.InputRemappingActionItem_C.ExecuteUbergraph_InputRemappingActionItem");

	UInputRemappingActionItem_C_ExecuteUbergraph_InputRemappingActionItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputRemappingActionItem.InputRemappingActionItem_C.OnBindingSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendInputMapping*       InputMapping                   (Parm, ZeroConstructor, IsPlainOldData)

void UInputRemappingActionItem_C::OnBindingSelected__DelegateSignature(class UBendInputMapping* InputMapping)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputRemappingActionItem.InputRemappingActionItem_C.OnBindingSelected__DelegateSignature");

	UInputRemappingActionItem_C_OnBindingSelected__DelegateSignature_Params params;
	params.InputMapping = InputMapping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
