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

// Function UI_PMNotification.UI_PMNotification_C.BndEvt__MenuInteract_515_K2Node_ComponentBoundEvent_1496_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_PMNotification_C::BndEvt__MenuInteract_515_K2Node_ComponentBoundEvent_1496_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PMNotification.UI_PMNotification_C.BndEvt__MenuInteract_515_K2Node_ComponentBoundEvent_1496_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_PMNotification_C_BndEvt__MenuInteract_515_K2Node_ComponentBoundEvent_1496_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PMNotification.UI_PMNotification_C.SetFilePath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor)

void UUI_PMNotification_C::SetFilePath(const struct FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PMNotification.UI_PMNotification_C.SetFilePath");

	UUI_PMNotification_C_SetFilePath_Params params;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PMNotification.UI_PMNotification_C.StartFadeOut
// (BlueprintCallable, BlueprintEvent)

void UUI_PMNotification_C::StartFadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PMNotification.UI_PMNotification_C.StartFadeOut");

	UUI_PMNotification_C_StartFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PMNotification.UI_PMNotification_C.AnimDone
// (BlueprintCallable, BlueprintEvent)

void UUI_PMNotification_C::AnimDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PMNotification.UI_PMNotification_C.AnimDone");

	UUI_PMNotification_C_AnimDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PMNotification.UI_PMNotification_C.FullOpacity
// (BlueprintCallable, BlueprintEvent)

void UUI_PMNotification_C::FullOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PMNotification.UI_PMNotification_C.FullOpacity");

	UUI_PMNotification_C_FullOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PMNotification.UI_PMNotification_C.ExecuteUbergraph_UI_PMNotification
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PMNotification_C::ExecuteUbergraph_UI_PMNotification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PMNotification.UI_PMNotification_C.ExecuteUbergraph_UI_PMNotification");

	UUI_PMNotification_C_ExecuteUbergraph_UI_PMNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
