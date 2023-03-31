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

// Function ChallengeGridItem.ChallengeGridItem_C.OnLoaded_8920ED0E42E2B35FF95AFC991A6A660B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (Parm, ZeroConstructor, IsPlainOldData)

void UChallengeGridItem_C::OnLoaded_8920ED0E42E2B35FF95AFC991A6A660B(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeGridItem.ChallengeGridItem_C.OnLoaded_8920ED0E42E2B35FF95AFC991A6A660B");

	UChallengeGridItem_C_OnLoaded_8920ED0E42E2B35FF95AFC991A6A660B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeGridItem.ChallengeGridItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChallengeGridItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeGridItem.ChallengeGridItem_C.Construct");

	UChallengeGridItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeGridItem.ChallengeGridItem_C.SetSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsSelected                    (Parm, ZeroConstructor, IsPlainOldData)

void UChallengeGridItem_C::SetSelected(bool* bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeGridItem.ChallengeGridItem_C.SetSelected");

	UChallengeGridItem_C_SetSelected_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeGridItem.ChallengeGridItem_C.Invalidate
// (Event, Public, BlueprintEvent)

void UChallengeGridItem_C::Invalidate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeGridItem.ChallengeGridItem_C.Invalidate");

	UChallengeGridItem_C_Invalidate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeGridItem.ChallengeGridItem_C.ExecuteUbergraph_ChallengeGridItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UChallengeGridItem_C::ExecuteUbergraph_ChallengeGridItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeGridItem.ChallengeGridItem_C.ExecuteUbergraph_ChallengeGridItem");

	UChallengeGridItem_C_ExecuteUbergraph_ChallengeGridItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
