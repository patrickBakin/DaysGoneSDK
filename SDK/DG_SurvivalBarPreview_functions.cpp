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

// Function SurvivalBarPreview.SurvivalBarPreview_C.MakeData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FName>           OutActions                     (Parm, OutParm, ZeroConstructor)
// TArray<TAssetPtr<class UTexture2D>> OutImages                      (Parm, OutParm, ZeroConstructor)

void USurvivalBarPreview_C::MakeData(TArray<struct FName>* OutActions, TArray<TAssetPtr<class UTexture2D>>* OutImages)
{
	static auto fn = UObject::FindObject<UFunction>("Function SurvivalBarPreview.SurvivalBarPreview_C.MakeData");

	USurvivalBarPreview_C_MakeData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActions != nullptr)
		*OutActions = params.OutActions;
	if (OutImages != nullptr)
		*OutImages = params.OutImages;
}


// Function SurvivalBarPreview.SurvivalBarPreview_C.UpdateIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USurvivalBarPreview_C::UpdateIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurvivalBarPreview.SurvivalBarPreview_C.UpdateIcons");

	USurvivalBarPreview_C_UpdateIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurvivalBarPreview.SurvivalBarPreview_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USurvivalBarPreview_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurvivalBarPreview.SurvivalBarPreview_C.Construct");

	USurvivalBarPreview_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurvivalBarPreview.SurvivalBarPreview_C.OnShow
// (Event, Public, BlueprintEvent)

void USurvivalBarPreview_C::OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurvivalBarPreview.SurvivalBarPreview_C.OnShow");

	USurvivalBarPreview_C_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurvivalBarPreview.SurvivalBarPreview_C.OnHide
// (Event, Public, BlueprintEvent)

void USurvivalBarPreview_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurvivalBarPreview.SurvivalBarPreview_C.OnHide");

	USurvivalBarPreview_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurvivalBarPreview.SurvivalBarPreview_C.ExecuteUbergraph_SurvivalBarPreview
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USurvivalBarPreview_C::ExecuteUbergraph_SurvivalBarPreview(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SurvivalBarPreview.SurvivalBarPreview_C.ExecuteUbergraph_SurvivalBarPreview");

	USurvivalBarPreview_C_ExecuteUbergraph_SurvivalBarPreview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
