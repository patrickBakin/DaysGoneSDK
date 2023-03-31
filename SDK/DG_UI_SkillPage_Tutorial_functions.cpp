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

// Function UI_SkillPage_Tutorial.UI_SkillPage_Tutorial_C.SetCategory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESkillClass>       SkillClass                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillPage_Tutorial_C::SetCategory(TEnumAsByte<ESkillClass> SkillClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Tutorial.UI_SkillPage_Tutorial_C.SetCategory");

	UUI_SkillPage_Tutorial_C_SetCategory_Params params;
	params.SkillClass = SkillClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Tutorial.UI_SkillPage_Tutorial_C.SetDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Desc                           (Parm)

void UUI_SkillPage_Tutorial_C::SetDescription(const struct FText& Desc)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Tutorial.UI_SkillPage_Tutorial_C.SetDescription");

	UUI_SkillPage_Tutorial_C_SetDescription_Params params;
	params.Desc = Desc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Tutorial.UI_SkillPage_Tutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SkillPage_Tutorial_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Tutorial.UI_SkillPage_Tutorial_C.Construct");

	UUI_SkillPage_Tutorial_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Tutorial.UI_SkillPage_Tutorial_C.ButtonHoldComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GridItem_Base_C**    GridItemSelected               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillPage_Tutorial_C::ButtonHoldComplete(class UUI_GridItem_Base_C** GridItemSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Tutorial.UI_SkillPage_Tutorial_C.ButtonHoldComplete");

	UUI_SkillPage_Tutorial_C_ButtonHoldComplete_Params params;
	params.GridItemSelected = GridItemSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Tutorial.UI_SkillPage_Tutorial_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_1469_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SkillPage_Tutorial_C::BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_1469_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Tutorial.UI_SkillPage_Tutorial_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_1469_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_SkillPage_Tutorial_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_1469_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Tutorial.UI_SkillPage_Tutorial_C.CrossSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SkillPage_Tutorial_C::CrossSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Tutorial.UI_SkillPage_Tutorial_C.CrossSelectionInputGiven");

	UUI_SkillPage_Tutorial_C_CrossSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Tutorial.UI_SkillPage_Tutorial_C.ExecuteUbergraph_UI_SkillPage_Tutorial
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillPage_Tutorial_C::ExecuteUbergraph_UI_SkillPage_Tutorial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Tutorial.UI_SkillPage_Tutorial_C.ExecuteUbergraph_UI_SkillPage_Tutorial");

	UUI_SkillPage_Tutorial_C_ExecuteUbergraph_UI_SkillPage_Tutorial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
