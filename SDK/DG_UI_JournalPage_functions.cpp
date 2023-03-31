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

// Function UI_JournalPage.UI_JournalPage_C.CircleSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_JournalPage_C::CircleSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JournalPage.UI_JournalPage_C.CircleSelectionInputGiven");

	UUI_JournalPage_C_CircleSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_JournalPage.UI_JournalPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_JournalPage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JournalPage.UI_JournalPage_C.Construct");

	UUI_JournalPage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_JournalPage.UI_JournalPage_C.CrossSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_JournalPage_C::CrossSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JournalPage.UI_JournalPage_C.CrossSelectionInputGiven");

	UUI_JournalPage_C_CrossSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_JournalPage.UI_JournalPage_C.R1orL1SelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          R2                             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_JournalPage_C::R1orL1SelectionInputGiven(bool* R2)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JournalPage.UI_JournalPage_C.R1orL1SelectionInputGiven");

	UUI_JournalPage_C_R1orL1SelectionInputGiven_Params params;
	params.R2 = R2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_JournalPage.UI_JournalPage_C.ExecuteUbergraph_UI_JournalPage
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_JournalPage_C::ExecuteUbergraph_UI_JournalPage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_JournalPage.UI_JournalPage_C.ExecuteUbergraph_UI_JournalPage");

	UUI_JournalPage_C_ExecuteUbergraph_UI_JournalPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
