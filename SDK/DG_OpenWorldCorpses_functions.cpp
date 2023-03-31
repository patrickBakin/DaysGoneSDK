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

// Function OpenWorldCorpses.OpenWorldCorpses_C.ToggleCorpseVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewHidden                      (Parm, ZeroConstructor, IsPlainOldData)

void AOpenWorldCorpses_C::ToggleCorpseVisibility(bool NewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldCorpses.OpenWorldCorpses_C.ToggleCorpseVisibility");

	AOpenWorldCorpses_C_ToggleCorpseVisibility_Params params;
	params.NewHidden = NewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldCorpses.OpenWorldCorpses_C.AddNewCorpseFlys
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AOpenWorldCorpses_C::AddNewCorpseFlys()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldCorpses.OpenWorldCorpses_C.AddNewCorpseFlys");

	AOpenWorldCorpses_C_AddNewCorpseFlys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldCorpses.OpenWorldCorpses_C.AddNewInternalMaggot
// (Public, BlueprintCallable, BlueprintEvent)

void AOpenWorldCorpses_C::AddNewInternalMaggot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldCorpses.OpenWorldCorpses_C.AddNewInternalMaggot");

	AOpenWorldCorpses_C_AddNewInternalMaggot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldCorpses.OpenWorldCorpses_C.AddNewLimMaggot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AOpenWorldCorpses_C::AddNewLimMaggot()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldCorpses.OpenWorldCorpses_C.AddNewLimMaggot");

	AOpenWorldCorpses_C_AddNewLimMaggot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OpenWorldCorpses.OpenWorldCorpses_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AOpenWorldCorpses_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OpenWorldCorpses.OpenWorldCorpses_C.UserConstructionScript");

	AOpenWorldCorpses_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
