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

// Function UI_OptionsMenuController.UI_OptionsMenuController_C.GetInputMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUI_OptionsMenuController_C::GetInputMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuController.UI_OptionsMenuController_C.GetInputMode");

	UUI_OptionsMenuController_C_GetInputMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OptionsMenuController.UI_OptionsMenuController_C.Get_ModeDisplay_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UUI_OptionsMenuController_C::Get_ModeDisplay_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuController.UI_OptionsMenuController_C.Get_ModeDisplay_Visibility_1");

	UUI_OptionsMenuController_C_Get_ModeDisplay_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OptionsMenuController.UI_OptionsMenuController_C.Get_ModeLabel_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUI_OptionsMenuController_C::Get_ModeLabel_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuController.UI_OptionsMenuController_C.Get_ModeLabel_Text_1");

	UUI_OptionsMenuController_C_Get_ModeLabel_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OptionsMenuController.UI_OptionsMenuController_C.Get_UniversalControls_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UUI_OptionsMenuController_C::Get_UniversalControls_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuController.UI_OptionsMenuController_C.Get_UniversalControls_Visibility_1");

	UUI_OptionsMenuController_C_Get_UniversalControls_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OptionsMenuController.UI_OptionsMenuController_C.Get_OnFootControls_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UUI_OptionsMenuController_C::Get_OnFootControls_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuController.UI_OptionsMenuController_C.Get_OnFootControls_Visibility_1");

	UUI_OptionsMenuController_C_Get_OnFootControls_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OptionsMenuController.UI_OptionsMenuController_C.Get_OnBikeControls_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UUI_OptionsMenuController_C::Get_OnBikeControls_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuController.UI_OptionsMenuController_C.Get_OnBikeControls_Visibility_1");

	UUI_OptionsMenuController_C_Get_OnBikeControls_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OptionsMenuController.UI_OptionsMenuController_C.SetMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_OptionsMenuController_C::SetMode(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuController.UI_OptionsMenuController_C.SetMode");

	UUI_OptionsMenuController_C_SetMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenuController.UI_OptionsMenuController_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UUI_OptionsMenuController_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuController.UI_OptionsMenuController_C.GetVisibility_1");

	UUI_OptionsMenuController_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OptionsMenuController.UI_OptionsMenuController_C.Get_Footer_Navigation_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UUI_OptionsMenuController_C::Get_Footer_Navigation_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuController.UI_OptionsMenuController_C.Get_Footer_Navigation_Visibility_1");

	UUI_OptionsMenuController_C_Get_Footer_Navigation_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_OptionsMenuController.UI_OptionsMenuController_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_OptionsMenuController_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuController.UI_OptionsMenuController_C.Construct");

	UUI_OptionsMenuController_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenuController.UI_OptionsMenuController_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_OptionsMenuController_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuController.UI_OptionsMenuController_C.Tick");

	UUI_OptionsMenuController_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenuController.UI_OptionsMenuController_C.BndEvt__MenuInteract_OnFoot_K2Node_ComponentBoundEvent_2243_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_OptionsMenuController_C::BndEvt__MenuInteract_OnFoot_K2Node_ComponentBoundEvent_2243_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuController.UI_OptionsMenuController_C.BndEvt__MenuInteract_OnFoot_K2Node_ComponentBoundEvent_2243_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_OptionsMenuController_C_BndEvt__MenuInteract_OnFoot_K2Node_ComponentBoundEvent_2243_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenuController.UI_OptionsMenuController_C.BndEvt__MenuInteract_OnBike_K2Node_ComponentBoundEvent_2257_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_OptionsMenuController_C::BndEvt__MenuInteract_OnBike_K2Node_ComponentBoundEvent_2257_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuController.UI_OptionsMenuController_C.BndEvt__MenuInteract_OnBike_K2Node_ComponentBoundEvent_2257_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_OptionsMenuController_C_BndEvt__MenuInteract_OnBike_K2Node_ComponentBoundEvent_2257_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenuController.UI_OptionsMenuController_C.BndEvt__MenuInteract_TouchPad_K2Node_ComponentBoundEvent_2268_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_OptionsMenuController_C::BndEvt__MenuInteract_TouchPad_K2Node_ComponentBoundEvent_2268_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuController.UI_OptionsMenuController_C.BndEvt__MenuInteract_TouchPad_K2Node_ComponentBoundEvent_2268_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_OptionsMenuController_C_BndEvt__MenuInteract_TouchPad_K2Node_ComponentBoundEvent_2268_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenuController.UI_OptionsMenuController_C.Next
// (BlueprintCallable, BlueprintEvent)

void UUI_OptionsMenuController_C::Next()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuController.UI_OptionsMenuController_C.Next");

	UUI_OptionsMenuController_C_Next_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenuController.UI_OptionsMenuController_C.Previous
// (BlueprintCallable, BlueprintEvent)

void UUI_OptionsMenuController_C::Previous()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuController.UI_OptionsMenuController_C.Previous");

	UUI_OptionsMenuController_C_Previous_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_OptionsMenuController.UI_OptionsMenuController_C.ExecuteUbergraph_UI_OptionsMenuController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_OptionsMenuController_C::ExecuteUbergraph_UI_OptionsMenuController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuController.UI_OptionsMenuController_C.ExecuteUbergraph_UI_OptionsMenuController");

	UUI_OptionsMenuController_C_ExecuteUbergraph_UI_OptionsMenuController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
