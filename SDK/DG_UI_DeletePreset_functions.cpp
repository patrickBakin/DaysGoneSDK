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

// Function UI_DeletePreset.UI_DeletePreset_C.BndEvt__CancelInteract_K2Node_ComponentBoundEvent_1584_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_DeletePreset_C::BndEvt__CancelInteract_K2Node_ComponentBoundEvent_1584_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeletePreset.UI_DeletePreset_C.BndEvt__CancelInteract_K2Node_ComponentBoundEvent_1584_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_DeletePreset_C_BndEvt__CancelInteract_K2Node_ComponentBoundEvent_1584_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DeletePreset.UI_DeletePreset_C.BndEvt__SaveInteract_K2Node_ComponentBoundEvent_1394_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_DeletePreset_C::BndEvt__SaveInteract_K2Node_ComponentBoundEvent_1394_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeletePreset.UI_DeletePreset_C.BndEvt__SaveInteract_K2Node_ComponentBoundEvent_1394_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_DeletePreset_C_BndEvt__SaveInteract_K2Node_ComponentBoundEvent_1394_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DeletePreset.UI_DeletePreset_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_DeletePreset_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeletePreset.UI_DeletePreset_C.Tick");

	UUI_DeletePreset_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_DeletePreset.UI_DeletePreset_C.ExecuteUbergraph_UI_DeletePreset
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_DeletePreset_C::ExecuteUbergraph_UI_DeletePreset(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_DeletePreset.UI_DeletePreset_C.ExecuteUbergraph_UI_DeletePreset");

	UUI_DeletePreset_C_ExecuteUbergraph_UI_DeletePreset_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
