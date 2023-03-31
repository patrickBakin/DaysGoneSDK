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

// Function PerformanceProfiler.PerformanceProfiler_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UPerformanceProfiler_C::SetState(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler.PerformanceProfiler_C.SetState");

	UPerformanceProfiler_C_SetState_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceProfiler.PerformanceProfiler_C.SetSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UPerformanceProfiler_C::SetSelection(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler.PerformanceProfiler_C.SetSelection");

	UPerformanceProfiler_C_SetSelection_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceProfiler.PerformanceProfiler_C.GetPercent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UPerformanceProfiler_C::GetPercent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler.PerformanceProfiler_C.GetPercent_1");

	UPerformanceProfiler_C_GetPercent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PerformanceProfiler.PerformanceProfiler_C.MakeText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPerfTest               PerfTest                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   Text                           (Parm, OutParm)

void UPerformanceProfiler_C::MakeText(const struct FPerfTest& PerfTest, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler.PerformanceProfiler_C.MakeText");

	UPerformanceProfiler_C_MakeText_Params params;
	params.PerfTest = PerfTest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function PerformanceProfiler.PerformanceProfiler_C.Get_FPSCurrent_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UPerformanceProfiler_C::Get_FPSCurrent_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler.PerformanceProfiler_C.Get_FPSCurrent_ColorAndOpacity_1");

	UPerformanceProfiler_C_Get_FPSCurrent_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PerformanceProfiler.PerformanceProfiler_C.Get_FPSMedian_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UPerformanceProfiler_C::Get_FPSMedian_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler.PerformanceProfiler_C.Get_FPSMedian_ColorAndOpacity_1");

	UPerformanceProfiler_C_Get_FPSMedian_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PerformanceProfiler.PerformanceProfiler_C.Get_FPSMedian_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPerformanceProfiler_C::Get_FPSMedian_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler.PerformanceProfiler_C.Get_FPSMedian_Text_1");

	UPerformanceProfiler_C_Get_FPSMedian_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PerformanceProfiler.PerformanceProfiler_C.Get_FPSCurrent_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPerformanceProfiler_C::Get_FPSCurrent_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler.PerformanceProfiler_C.Get_FPSCurrent_Text_1");

	UPerformanceProfiler_C_Get_FPSCurrent_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PerformanceProfiler.PerformanceProfiler_C.Get_GPUUsageMedian_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPerformanceProfiler_C::Get_GPUUsageMedian_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler.PerformanceProfiler_C.Get_GPUUsageMedian_Text_1");

	UPerformanceProfiler_C_Get_GPUUsageMedian_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PerformanceProfiler.PerformanceProfiler_C.Get_GPUUsageCurrent_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPerformanceProfiler_C::Get_GPUUsageCurrent_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler.PerformanceProfiler_C.Get_GPUUsageCurrent_Text_1");

	UPerformanceProfiler_C_Get_GPUUsageCurrent_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PerformanceProfiler.PerformanceProfiler_C.Get_FrameMedian_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPerformanceProfiler_C::Get_FrameMedian_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler.PerformanceProfiler_C.Get_FrameMedian_Text_1");

	UPerformanceProfiler_C_Get_FrameMedian_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PerformanceProfiler.PerformanceProfiler_C.Get_GPUMedian_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPerformanceProfiler_C::Get_GPUMedian_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler.PerformanceProfiler_C.Get_GPUMedian_Text_1");

	UPerformanceProfiler_C_Get_GPUMedian_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PerformanceProfiler.PerformanceProfiler_C.Get_FrameCurrent_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPerformanceProfiler_C::Get_FrameCurrent_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler.PerformanceProfiler_C.Get_FrameCurrent_Text_1");

	UPerformanceProfiler_C_Get_FrameCurrent_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PerformanceProfiler.PerformanceProfiler_C.Get_GPUCurrent_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPerformanceProfiler_C::Get_GPUCurrent_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler.PerformanceProfiler_C.Get_GPUCurrent_Text_1");

	UPerformanceProfiler_C_Get_GPUCurrent_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PerformanceProfiler.PerformanceProfiler_C.End Autodetect
// (BlueprintCallable, BlueprintEvent)

void UPerformanceProfiler_C::End_Autodetect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler.PerformanceProfiler_C.End Autodetect");

	UPerformanceProfiler_C_End_Autodetect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceProfiler.PerformanceProfiler_C.PreAutodetect
// (Event, Public, BlueprintEvent)

void UPerformanceProfiler_C::PreAutodetect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler.PerformanceProfiler_C.PreAutodetect");

	UPerformanceProfiler_C_PreAutodetect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceProfiler.PerformanceProfiler_C.PostAutodetect
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FPerfTest*              Optimized                      (Parm)

void UPerformanceProfiler_C::PostAutodetect(struct FPerfTest* Optimized)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler.PerformanceProfiler_C.PostAutodetect");

	UPerformanceProfiler_C_PostAutodetect_Params params;
	params.Optimized = Optimized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceProfiler.PerformanceProfiler_C.OnAutodetectCancelled
// (Event, Public, BlueprintEvent)

void UPerformanceProfiler_C::OnAutodetectCancelled()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler.PerformanceProfiler_C.OnAutodetectCancelled");

	UPerformanceProfiler_C_OnAutodetectCancelled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceProfiler.PerformanceProfiler_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPerformanceProfiler_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler.PerformanceProfiler_C.Construct");

	UPerformanceProfiler_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceProfiler.PerformanceProfiler_C.OnPopupInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPopupMenuWidget*        PopupMenu                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlatePopupButton> SelectedButton                 (Parm, ZeroConstructor, IsPlainOldData)

void UPerformanceProfiler_C::OnPopupInteract(class UPopupMenuWidget* PopupMenu, TEnumAsByte<ESlatePopupButton> SelectedButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler.PerformanceProfiler_C.OnPopupInteract");

	UPerformanceProfiler_C_OnPopupInteract_Params params;
	params.PopupMenu = PopupMenu;
	params.SelectedButton = SelectedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceProfiler.PerformanceProfiler_C.Cancel
// (BlueprintCallable, BlueprintEvent)

void UPerformanceProfiler_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler.PerformanceProfiler_C.Cancel");

	UPerformanceProfiler_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceProfiler.PerformanceProfiler_C.ExecuteUbergraph_PerformanceProfiler
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPerformanceProfiler_C::ExecuteUbergraph_PerformanceProfiler(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler.PerformanceProfiler_C.ExecuteUbergraph_PerformanceProfiler");

	UPerformanceProfiler_C_ExecuteUbergraph_PerformanceProfiler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
