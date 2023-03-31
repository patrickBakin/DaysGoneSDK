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

// Function UI_PhotoModeFooterLeft.UI_PhotoModeFooterLeft_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeFooterLeft_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFooterLeft.UI_PhotoModeFooterLeft_C.Tick");

	UUI_PhotoModeFooterLeft_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFooterLeft.UI_PhotoModeFooterLeft_C.BndEvt__ResetInteract_K2Node_ComponentBoundEvent_2124_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoModeFooterLeft_C::BndEvt__ResetInteract_K2Node_ComponentBoundEvent_2124_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFooterLeft.UI_PhotoModeFooterLeft_C.BndEvt__ResetInteract_K2Node_ComponentBoundEvent_2124_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_PhotoModeFooterLeft_C_BndEvt__ResetInteract_K2Node_ComponentBoundEvent_2124_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFooterLeft.UI_PhotoModeFooterLeft_C.ExecuteUbergraph_UI_PhotoModeFooterLeft
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeFooterLeft_C::ExecuteUbergraph_UI_PhotoModeFooterLeft(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFooterLeft.UI_PhotoModeFooterLeft_C.ExecuteUbergraph_UI_PhotoModeFooterLeft");

	UUI_PhotoModeFooterLeft_C_ExecuteUbergraph_UI_PhotoModeFooterLeft_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeFooterLeft.UI_PhotoModeFooterLeft_C.OnResetClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_PhotoModeFooterLeft_C::OnResetClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeFooterLeft.UI_PhotoModeFooterLeft_C.OnResetClicked__DelegateSignature");

	UUI_PhotoModeFooterLeft_C_OnResetClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
