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

// Function UI_PhotoModeHelpDialog.UI_PhotoModeHelpDialog_C.BndEvt__MenuInteract_161_K2Node_ComponentBoundEvent_1675_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoModeHelpDialog_C::BndEvt__MenuInteract_161_K2Node_ComponentBoundEvent_1675_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHelpDialog.UI_PhotoModeHelpDialog_C.BndEvt__MenuInteract_161_K2Node_ComponentBoundEvent_1675_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_PhotoModeHelpDialog_C_BndEvt__MenuInteract_161_K2Node_ComponentBoundEvent_1675_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeHelpDialog.UI_PhotoModeHelpDialog_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeHelpDialog_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHelpDialog.UI_PhotoModeHelpDialog_C.Tick");

	UUI_PhotoModeHelpDialog_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeHelpDialog.UI_PhotoModeHelpDialog_C.ExecuteUbergraph_UI_PhotoModeHelpDialog
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeHelpDialog_C::ExecuteUbergraph_UI_PhotoModeHelpDialog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHelpDialog.UI_PhotoModeHelpDialog_C.ExecuteUbergraph_UI_PhotoModeHelpDialog");

	UUI_PhotoModeHelpDialog_C_ExecuteUbergraph_UI_PhotoModeHelpDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
