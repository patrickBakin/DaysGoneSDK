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

// Function BigItemGrid.BigItemGrid_C.BindMouseEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UBigItemGrid_C::BindMouseEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigItemGrid.BigItemGrid_C.BindMouseEvents");

	UBigItemGrid_C_BindMouseEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigItemGrid.BigItemGrid_C.OnHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBigItemGrid_C::OnHover(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigItemGrid.BigItemGrid_C.OnHover");

	UBigItemGrid_C_OnHover_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigItemGrid.BigItemGrid_C.OnClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBigItemGrid_C::OnClick(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigItemGrid.BigItemGrid_C.OnClick");

	UBigItemGrid_C_OnClick_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigItemGrid.BigItemGrid_C.BndEvt__GridWidget_K2Node_ComponentBoundEvent_1878_DLCGridSelectionChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (Parm)

void UBigItemGrid_C::BndEvt__GridWidget_K2Node_ComponentBoundEvent_1878_DLCGridSelectionChangedDelegate__DelegateSignature(const struct FName& Key, const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigItemGrid.BigItemGrid_C.BndEvt__GridWidget_K2Node_ComponentBoundEvent_1878_DLCGridSelectionChangedDelegate__DelegateSignature");

	UBigItemGrid_C_BndEvt__GridWidget_K2Node_ComponentBoundEvent_1878_DLCGridSelectionChangedDelegate__DelegateSignature_Params params;
	params.Key = Key;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigItemGrid.BigItemGrid_C.BndEvt__GridWidget_K2Node_ComponentBoundEvent_1194_DLCGridDataChangedDelegate__DelegateSignature
// (BlueprintEvent)

void UBigItemGrid_C::BndEvt__GridWidget_K2Node_ComponentBoundEvent_1194_DLCGridDataChangedDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigItemGrid.BigItemGrid_C.BndEvt__GridWidget_K2Node_ComponentBoundEvent_1194_DLCGridDataChangedDelegate__DelegateSignature");

	UBigItemGrid_C_BndEvt__GridWidget_K2Node_ComponentBoundEvent_1194_DLCGridDataChangedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigItemGrid.BigItemGrid_C.ExecuteUbergraph_BigItemGrid
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBigItemGrid_C::ExecuteUbergraph_BigItemGrid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigItemGrid.BigItemGrid_C.ExecuteUbergraph_BigItemGrid");

	UBigItemGrid_C_ExecuteUbergraph_BigItemGrid_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigItemGrid.BigItemGrid_C.OnSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (Parm)

void UBigItemGrid_C::OnSelectionChanged__DelegateSignature(const struct FName& Key, const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigItemGrid.BigItemGrid_C.OnSelectionChanged__DelegateSignature");

	UBigItemGrid_C_OnSelectionChanged__DelegateSignature_Params params;
	params.Key = Key;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigItemGrid.BigItemGrid_C.OnItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBigItemGrid_C::OnItemClicked__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigItemGrid.BigItemGrid_C.OnItemClicked__DelegateSignature");

	UBigItemGrid_C_OnItemClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigItemGrid.BigItemGrid_C.OnItemHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UBigItemGrid_C::OnItemHovered__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigItemGrid.BigItemGrid_C.OnItemHovered__DelegateSignature");

	UBigItemGrid_C_OnItemHovered__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
