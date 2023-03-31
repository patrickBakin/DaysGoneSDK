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

// Function UI_PhotoModeRowBase.UI_PhotoModeRowBase_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ResetAll                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeRowBase_C::Reset(bool ResetAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeRowBase.UI_PhotoModeRowBase_C.Reset");

	UUI_PhotoModeRowBase_C_Reset_Params params;
	params.ResetAll = ResetAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoModeRowBase.UI_PhotoModeRowBase_C.Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Selected                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            SubIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoModeRowBase_C::Selected(bool Is_Selected, int SubIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoModeRowBase.UI_PhotoModeRowBase_C.Selected");

	UUI_PhotoModeRowBase_C_Selected_Params params;
	params.Is_Selected = Is_Selected;
	params.SubIndex = SubIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
