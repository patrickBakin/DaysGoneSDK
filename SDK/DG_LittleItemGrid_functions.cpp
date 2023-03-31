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

// Function LittleItemGrid.LittleItemGrid_C.BindMouseEvents
// (Public, BlueprintCallable, BlueprintEvent)

void ULittleItemGrid_C::BindMouseEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function LittleItemGrid.LittleItemGrid_C.BindMouseEvents");

	ULittleItemGrid_C_BindMouseEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LittleItemGrid.LittleItemGrid_C.OnHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void ULittleItemGrid_C::OnHover(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function LittleItemGrid.LittleItemGrid_C.OnHover");

	ULittleItemGrid_C_OnHover_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LittleItemGrid.LittleItemGrid_C.OnClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void ULittleItemGrid_C::OnClick(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function LittleItemGrid.LittleItemGrid_C.OnClick");

	ULittleItemGrid_C_OnClick_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LittleItemGrid.LittleItemGrid_C.BndEvt__GridWidget_K2Node_ComponentBoundEvent_1878_DLCGridSelectionChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (Parm)

void ULittleItemGrid_C::BndEvt__GridWidget_K2Node_ComponentBoundEvent_1878_DLCGridSelectionChangedDelegate__DelegateSignature(const struct FName& Key, const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function LittleItemGrid.LittleItemGrid_C.BndEvt__GridWidget_K2Node_ComponentBoundEvent_1878_DLCGridSelectionChangedDelegate__DelegateSignature");

	ULittleItemGrid_C_BndEvt__GridWidget_K2Node_ComponentBoundEvent_1878_DLCGridSelectionChangedDelegate__DelegateSignature_Params params;
	params.Key = Key;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LittleItemGrid.LittleItemGrid_C.BndEvt__GridWidget_K2Node_ComponentBoundEvent_6_DLCGridDataChangedDelegate__DelegateSignature
// (BlueprintEvent)

void ULittleItemGrid_C::BndEvt__GridWidget_K2Node_ComponentBoundEvent_6_DLCGridDataChangedDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LittleItemGrid.LittleItemGrid_C.BndEvt__GridWidget_K2Node_ComponentBoundEvent_6_DLCGridDataChangedDelegate__DelegateSignature");

	ULittleItemGrid_C_BndEvt__GridWidget_K2Node_ComponentBoundEvent_6_DLCGridDataChangedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LittleItemGrid.LittleItemGrid_C.ExecuteUbergraph_LittleItemGrid
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULittleItemGrid_C::ExecuteUbergraph_LittleItemGrid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LittleItemGrid.LittleItemGrid_C.ExecuteUbergraph_LittleItemGrid");

	ULittleItemGrid_C_ExecuteUbergraph_LittleItemGrid_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LittleItemGrid.LittleItemGrid_C.OnSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (Parm)

void ULittleItemGrid_C::OnSelectionChanged__DelegateSignature(const struct FName& Key, const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function LittleItemGrid.LittleItemGrid_C.OnSelectionChanged__DelegateSignature");

	ULittleItemGrid_C_OnSelectionChanged__DelegateSignature_Params params;
	params.Key = Key;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LittleItemGrid.LittleItemGrid_C.OnItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void ULittleItemGrid_C::OnItemClicked__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function LittleItemGrid.LittleItemGrid_C.OnItemClicked__DelegateSignature");

	ULittleItemGrid_C_OnItemClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LittleItemGrid.LittleItemGrid_C.OnItemHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void ULittleItemGrid_C::OnItemHovered__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function LittleItemGrid.LittleItemGrid_C.OnItemHovered__DelegateSignature");

	ULittleItemGrid_C_OnItemHovered__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
