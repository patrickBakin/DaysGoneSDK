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

// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.DLC_SetLoadingTipText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LoadingTipRowName              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TextSet                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_LoadingScreenWidget_C::DLC_SetLoadingTipText(const struct FName& LoadingTipRowName, bool* TextSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.DLC_SetLoadingTipText");

	UUI_LoadingScreenWidget_C_DLC_SetLoadingTipText_Params params;
	params.LoadingTipRowName = LoadingTipRowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextSet != nullptr)
		*TextSet = params.TextSet;
}


// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.DLC_VerifyLoadingTip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LoadingTipRowName              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Verified                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_LoadingScreenWidget_C::DLC_VerifyLoadingTip(const struct FName& LoadingTipRowName, bool* Verified)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.DLC_VerifyLoadingTip");

	UUI_LoadingScreenWidget_C_DLC_VerifyLoadingTip_Params params;
	params.LoadingTipRowName = LoadingTipRowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Verified != nullptr)
		*Verified = params.Verified;
}


// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.DLC_ReloadLoadingTips
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TipsReloaded                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_LoadingScreenWidget_C::DLC_ReloadLoadingTips(bool* TipsReloaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.DLC_ReloadLoadingTips");

	UUI_LoadingScreenWidget_C_DLC_ReloadLoadingTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TipsReloaded != nullptr)
		*TipsReloaded = params.TipsReloaded;
}


// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.DLC_GetNextLoadingTip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LoadingTipRowName              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_LoadingScreenWidget_C::DLC_GetNextLoadingTip(struct FName* LoadingTipRowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.DLC_GetNextLoadingTip");

	UUI_LoadingScreenWidget_C_DLC_GetNextLoadingTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LoadingTipRowName != nullptr)
		*LoadingTipRowName = params.LoadingTipRowName;
}


// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.UpdateProgressBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          In_Delta_Time                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_LoadingScreenWidget_C::UpdateProgressBar(float In_Delta_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.UpdateProgressBar");

	UUI_LoadingScreenWidget_C_UpdateProgressBar_Params params;
	params.In_Delta_Time = In_Delta_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.SetLoadingTipText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LoadingTipRowName              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TextSet                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_LoadingScreenWidget_C::SetLoadingTipText(const struct FName& LoadingTipRowName, bool* TextSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.SetLoadingTipText");

	UUI_LoadingScreenWidget_C_SetLoadingTipText_Params params;
	params.LoadingTipRowName = LoadingTipRowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextSet != nullptr)
		*TextSet = params.TextSet;
}


// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.VerifyLoadingTip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LoadingTipRowName              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Verified                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_LoadingScreenWidget_C::VerifyLoadingTip(const struct FName& LoadingTipRowName, bool* Verified)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.VerifyLoadingTip");

	UUI_LoadingScreenWidget_C_VerifyLoadingTip_Params params;
	params.LoadingTipRowName = LoadingTipRowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Verified != nullptr)
		*Verified = params.Verified;
}


// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.ReloadLoadingTips
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TipsReloaded                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_LoadingScreenWidget_C::ReloadLoadingTips(bool* TipsReloaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.ReloadLoadingTips");

	UUI_LoadingScreenWidget_C_ReloadLoadingTips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TipsReloaded != nullptr)
		*TipsReloaded = params.TipsReloaded;
}


// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.GetNextLoadingTip
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LoadingTipRowName              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_LoadingScreenWidget_C::GetNextLoadingTip(struct FName* LoadingTipRowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.GetNextLoadingTip");

	UUI_LoadingScreenWidget_C_GetNextLoadingTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LoadingTipRowName != nullptr)
		*LoadingTipRowName = params.LoadingTipRowName;
}


// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_LoadingScreenWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.Construct");

	UUI_LoadingScreenWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_LoadingScreenWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.Tick");

	UUI_LoadingScreenWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.Switch To Next Tip
// (BlueprintCallable, BlueprintEvent)

void UUI_LoadingScreenWidget_C::Switch_To_Next_Tip()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.Switch To Next Tip");

	UUI_LoadingScreenWidget_C_Switch_To_Next_Tip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.BndEvt__TextOut_K2Node_ComponentBoundEvent_445_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_LoadingScreenWidget_C::BndEvt__TextOut_K2Node_ComponentBoundEvent_445_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.BndEvt__TextOut_K2Node_ComponentBoundEvent_445_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_LoadingScreenWidget_C_BndEvt__TextOut_K2Node_ComponentBoundEvent_445_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_LoadingScreenWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.Destruct");

	UUI_LoadingScreenWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.DisplayFirstTip
// (BlueprintCallable, BlueprintEvent)

void UUI_LoadingScreenWidget_C::DisplayFirstTip()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.DisplayFirstTip");

	UUI_LoadingScreenWidget_C_DisplayFirstTip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.BndEvt__TextIn_K2Node_ComponentBoundEvent_519_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_LoadingScreenWidget_C::BndEvt__TextIn_K2Node_ComponentBoundEvent_519_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.BndEvt__TextIn_K2Node_ComponentBoundEvent_519_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_LoadingScreenWidget_C_BndEvt__TextIn_K2Node_ComponentBoundEvent_519_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.ExecuteUbergraph_UI_LoadingScreenWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_LoadingScreenWidget_C::ExecuteUbergraph_UI_LoadingScreenWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingScreenWidget.UI_LoadingScreenWidget_C.ExecuteUbergraph_UI_LoadingScreenWidget");

	UUI_LoadingScreenWidget_C_ExecuteUbergraph_UI_LoadingScreenWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
