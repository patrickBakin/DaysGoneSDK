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

// Function CategoryItemGrid.CategoryItemGrid_C.BindMouseEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UCategoryItemGrid_C::BindMouseEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryItemGrid.CategoryItemGrid_C.BindMouseEvents");

	UCategoryItemGrid_C_BindMouseEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryItemGrid.CategoryItemGrid_C.OnHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UCategoryItemGrid_C::OnHover(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryItemGrid.CategoryItemGrid_C.OnHover");

	UCategoryItemGrid_C_OnHover_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryItemGrid.CategoryItemGrid_C.OnClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UCategoryItemGrid_C::OnClick(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryItemGrid.CategoryItemGrid_C.OnClick");

	UCategoryItemGrid_C_OnClick_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryItemGrid.CategoryItemGrid_C.BndEvt__GridWidget_K2Node_ComponentBoundEvent_1956_DLCGridSelectionChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (Parm)

void UCategoryItemGrid_C::BndEvt__GridWidget_K2Node_ComponentBoundEvent_1956_DLCGridSelectionChangedDelegate__DelegateSignature(const struct FName& Key, const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryItemGrid.CategoryItemGrid_C.BndEvt__GridWidget_K2Node_ComponentBoundEvent_1956_DLCGridSelectionChangedDelegate__DelegateSignature");

	UCategoryItemGrid_C_BndEvt__GridWidget_K2Node_ComponentBoundEvent_1956_DLCGridSelectionChangedDelegate__DelegateSignature_Params params;
	params.Key = Key;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryItemGrid.CategoryItemGrid_C.BndEvt__GridWidget_K2Node_ComponentBoundEvent_1367_DLCGridDataChangedDelegate__DelegateSignature
// (BlueprintEvent)

void UCategoryItemGrid_C::BndEvt__GridWidget_K2Node_ComponentBoundEvent_1367_DLCGridDataChangedDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryItemGrid.CategoryItemGrid_C.BndEvt__GridWidget_K2Node_ComponentBoundEvent_1367_DLCGridDataChangedDelegate__DelegateSignature");

	UCategoryItemGrid_C_BndEvt__GridWidget_K2Node_ComponentBoundEvent_1367_DLCGridDataChangedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryItemGrid.CategoryItemGrid_C.OnHold
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UCategoryItemGrid_C::OnHold(int Index, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryItemGrid.CategoryItemGrid_C.OnHold");

	UCategoryItemGrid_C_OnHold_Params params;
	params.Index = Index;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryItemGrid.CategoryItemGrid_C.ExecuteUbergraph_CategoryItemGrid
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCategoryItemGrid_C::ExecuteUbergraph_CategoryItemGrid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryItemGrid.CategoryItemGrid_C.ExecuteUbergraph_CategoryItemGrid");

	UCategoryItemGrid_C_ExecuteUbergraph_CategoryItemGrid_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryItemGrid.CategoryItemGrid_C.OnItemHold__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UCategoryItemGrid_C::OnItemHold__DelegateSignature(int Index, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryItemGrid.CategoryItemGrid_C.OnItemHold__DelegateSignature");

	UCategoryItemGrid_C_OnItemHold__DelegateSignature_Params params;
	params.Index = Index;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryItemGrid.CategoryItemGrid_C.OnSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (Parm)

void UCategoryItemGrid_C::OnSelectionChanged__DelegateSignature(const struct FName& Key, const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryItemGrid.CategoryItemGrid_C.OnSelectionChanged__DelegateSignature");

	UCategoryItemGrid_C_OnSelectionChanged__DelegateSignature_Params params;
	params.Key = Key;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryItemGrid.CategoryItemGrid_C.OnItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UCategoryItemGrid_C::OnItemClicked__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryItemGrid.CategoryItemGrid_C.OnItemClicked__DelegateSignature");

	UCategoryItemGrid_C_OnItemClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CategoryItemGrid.CategoryItemGrid_C.OnItemHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UCategoryItemGrid_C::OnItemHovered__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CategoryItemGrid.CategoryItemGrid_C.OnItemHovered__DelegateSignature");

	UCategoryItemGrid_C_OnItemHovered__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
