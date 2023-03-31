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

// Function PerformanceProfiler_AutodetectItem.PerformanceProfiler_AutodetectItem_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (Parm, ZeroConstructor, IsPlainOldData)

void UPerformanceProfiler_AutodetectItem_C::SetSelected(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler_AutodetectItem.PerformanceProfiler_AutodetectItem_C.SetSelected");

	UPerformanceProfiler_AutodetectItem_C_SetSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerformanceProfiler_AutodetectItem.PerformanceProfiler_AutodetectItem_C.SetContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)
// struct FText                   Description                    (Parm)

void UPerformanceProfiler_AutodetectItem_C::SetContent(const struct FText& Title, const struct FText& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function PerformanceProfiler_AutodetectItem.PerformanceProfiler_AutodetectItem_C.SetContent");

	UPerformanceProfiler_AutodetectItem_C_SetContent_Params params;
	params.Title = Title;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
