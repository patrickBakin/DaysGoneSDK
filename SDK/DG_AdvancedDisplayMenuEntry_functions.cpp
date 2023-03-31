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

// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.DataChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAdvancedDisplayMenuEntry_C::DataChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.DataChanged");

	UAdvancedDisplayMenuEntry_C_DataChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.Init
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           Items                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            DefaultValueIndex              (Parm, ZeroConstructor, IsPlainOldData)

void UAdvancedDisplayMenuEntry_C::Init(int DefaultValueIndex, TArray<struct FText>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.Init");

	UAdvancedDisplayMenuEntry_C_Init_Params params;
	params.DefaultValueIndex = DefaultValueIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
}


// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.GetCurrentItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UAdvancedDisplayMenuEntry_C::GetCurrentItem(int* Index, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.GetCurrentItem");

	UAdvancedDisplayMenuEntry_C_GetCurrentItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
	if (Text != nullptr)
		*Text = params.Text;
}


// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.PreviousItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAdvancedDisplayMenuEntry_C::PreviousItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.PreviousItem");

	UAdvancedDisplayMenuEntry_C_PreviousItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.NextItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAdvancedDisplayMenuEntry_C::NextItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.NextItem");

	UAdvancedDisplayMenuEntry_C_NextItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_2057_OnMenuInteractHoverEvent__DelegateSignature
// (BlueprintEvent)

void UAdvancedDisplayMenuEntry_C::BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_2057_OnMenuInteractHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_2057_OnMenuInteractHoverEvent__DelegateSignature");

	UAdvancedDisplayMenuEntry_C_BndEvt__MenuInteract_Entry_K2Node_ComponentBoundEvent_2057_OnMenuInteractHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.BndEvt__MenuInteract_Previous_K2Node_ComponentBoundEvent_2059_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAdvancedDisplayMenuEntry_C::BndEvt__MenuInteract_Previous_K2Node_ComponentBoundEvent_2059_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.BndEvt__MenuInteract_Previous_K2Node_ComponentBoundEvent_2059_OnMenuInteractClickedEvent__DelegateSignature");

	UAdvancedDisplayMenuEntry_C_BndEvt__MenuInteract_Previous_K2Node_ComponentBoundEvent_2059_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.BndEvt__MenuInteract_Next_K2Node_ComponentBoundEvent_2062_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAdvancedDisplayMenuEntry_C::BndEvt__MenuInteract_Next_K2Node_ComponentBoundEvent_2062_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.BndEvt__MenuInteract_Next_K2Node_ComponentBoundEvent_2062_OnMenuInteractClickedEvent__DelegateSignature");

	UAdvancedDisplayMenuEntry_C_BndEvt__MenuInteract_Next_K2Node_ComponentBoundEvent_2062_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.HandleStateChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAdvancedDisplayMenuEntry_C::HandleStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.HandleStateChanged");

	UAdvancedDisplayMenuEntry_C_HandleStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.NextValue
// (Public, BlueprintCallable, BlueprintEvent)

void UAdvancedDisplayMenuEntry_C::NextValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.NextValue");

	UAdvancedDisplayMenuEntry_C_NextValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.PreviousValue
// (Public, BlueprintCallable, BlueprintEvent)

void UAdvancedDisplayMenuEntry_C::PreviousValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.PreviousValue");

	UAdvancedDisplayMenuEntry_C_PreviousValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAdvancedDisplayMenuEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.Construct");

	UAdvancedDisplayMenuEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.ExecuteUbergraph_AdvancedDisplayMenuEntry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAdvancedDisplayMenuEntry_C::ExecuteUbergraph_AdvancedDisplayMenuEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.ExecuteUbergraph_AdvancedDisplayMenuEntry");

	UAdvancedDisplayMenuEntry_C_ExecuteUbergraph_AdvancedDisplayMenuEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.ItemChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm)

void UAdvancedDisplayMenuEntry_C::ItemChanged__DelegateSignature(int Index, const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.ItemChanged__DelegateSignature");

	UAdvancedDisplayMenuEntry_C_ItemChanged__DelegateSignature_Params params;
	params.Index = Index;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.OnHovered_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UAdvancedDisplayMenuEntry_C::OnHovered_0__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AdvancedDisplayMenuEntry.AdvancedDisplayMenuEntry_C.OnHovered_0__DelegateSignature");

	UAdvancedDisplayMenuEntry_C_OnHovered_0__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
