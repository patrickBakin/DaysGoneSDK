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

// Function UI_PhotoModeHeader.UI_PhotoModeHeader_C.SetHeaderText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm)

void UUI_PhotoModeHeader_C::SetHeaderText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHeader.UI_PhotoModeHeader_C.SetHeaderText");

	UUI_PhotoModeHeader_C_SetHeaderText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeHeader.UI_PhotoModeHeader_C.BndEvt__RightInteract_K2Node_ComponentBoundEvent_1126_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoModeHeader_C::BndEvt__RightInteract_K2Node_ComponentBoundEvent_1126_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHeader.UI_PhotoModeHeader_C.BndEvt__RightInteract_K2Node_ComponentBoundEvent_1126_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_PhotoModeHeader_C_BndEvt__RightInteract_K2Node_ComponentBoundEvent_1126_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeHeader.UI_PhotoModeHeader_C.BndEvt__LeftInteract_K2Node_ComponentBoundEvent_1140_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoModeHeader_C::BndEvt__LeftInteract_K2Node_ComponentBoundEvent_1140_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHeader.UI_PhotoModeHeader_C.BndEvt__LeftInteract_K2Node_ComponentBoundEvent_1140_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_PhotoModeHeader_C_BndEvt__LeftInteract_K2Node_ComponentBoundEvent_1140_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeHeader.UI_PhotoModeHeader_C.ExecuteUbergraph_UI_PhotoModeHeader
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeHeader_C::ExecuteUbergraph_UI_PhotoModeHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeHeader.UI_PhotoModeHeader_C.ExecuteUbergraph_UI_PhotoModeHeader");

	UUI_PhotoModeHeader_C_ExecuteUbergraph_UI_PhotoModeHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
