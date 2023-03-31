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

// Function HUD_Debug_AE_Button.HUD_Debug_AE_Button_C.SetAmbientEventName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHUD_Debug_AE_Button_C::SetAmbientEventName()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Debug_AE_Button.HUD_Debug_AE_Button_C.SetAmbientEventName");

	UHUD_Debug_AE_Button_C_SetAmbientEventName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD_Debug_AE_Button.HUD_Debug_AE_Button_C.BndEvt__Button_142_K2Node_ComponentBoundEvent_541_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UHUD_Debug_AE_Button_C::BndEvt__Button_142_K2Node_ComponentBoundEvent_541_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Debug_AE_Button.HUD_Debug_AE_Button_C.BndEvt__Button_142_K2Node_ComponentBoundEvent_541_OnButtonClickedEvent__DelegateSignature");

	UHUD_Debug_AE_Button_C_BndEvt__Button_142_K2Node_ComponentBoundEvent_541_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Debug_AE_Button.HUD_Debug_AE_Button_C.ExecuteUbergraph_HUD_Debug_AE_Button
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Debug_AE_Button_C::ExecuteUbergraph_HUD_Debug_AE_Button(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Debug_AE_Button.HUD_Debug_AE_Button_C.ExecuteUbergraph_HUD_Debug_AE_Button");

	UHUD_Debug_AE_Button_C_ExecuteUbergraph_HUD_Debug_AE_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
