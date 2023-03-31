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

// Function UI_TitleCredits.UI_TitleCredits_C.SetPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_AnchorPosition> Anchor                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TitleCredits_C::SetPosition(TEnumAsByte<Enum_AnchorPosition> Anchor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TitleCredits.UI_TitleCredits_C.SetPosition");

	UUI_TitleCredits_C_SetPosition_Params params;
	params.Anchor = Anchor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TitleCredits.UI_TitleCredits_C.HideCredits
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TitleCredits_C::HideCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TitleCredits.UI_TitleCredits_C.HideCredits");

	UUI_TitleCredits_C_HideCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TitleCredits.UI_TitleCredits_C.ShowCredits
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TitleCredits_C::ShowCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TitleCredits.UI_TitleCredits_C.ShowCredits");

	UUI_TitleCredits_C_ShowCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TitleCredits.UI_TitleCredits_C.SetCredits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)
// struct FText                   Name                           (Parm)
// bool                           SlidingAnim                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TitleCredits_C::SetCredits(const struct FText& Title, const struct FText& Name, bool SlidingAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TitleCredits.UI_TitleCredits_C.SetCredits");

	UUI_TitleCredits_C_SetCredits_Params params;
	params.Title = Title;
	params.Name = Name;
	params.SlidingAnim = SlidingAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TitleCredits.UI_TitleCredits_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_TitleCredits_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TitleCredits.UI_TitleCredits_C.Construct");

	UUI_TitleCredits_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TitleCredits.UI_TitleCredits_C.OnAnimationFinished_Event_1
// (BlueprintCallable, BlueprintEvent)

void UUI_TitleCredits_C::OnAnimationFinished_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TitleCredits.UI_TitleCredits_C.OnAnimationFinished_Event_1");

	UUI_TitleCredits_C_OnAnimationFinished_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TitleCredits.UI_TitleCredits_C.CloseCredits
// (BlueprintCallable, BlueprintEvent)

void UUI_TitleCredits_C::CloseCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TitleCredits.UI_TitleCredits_C.CloseCredits");

	UUI_TitleCredits_C_CloseCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TitleCredits.UI_TitleCredits_C.ExecuteUbergraph_UI_TitleCredits
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TitleCredits_C::ExecuteUbergraph_UI_TitleCredits(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TitleCredits.UI_TitleCredits_C.ExecuteUbergraph_UI_TitleCredits");

	UUI_TitleCredits_C_ExecuteUbergraph_UI_TitleCredits_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TitleCredits.UI_TitleCredits_C.CreditComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_TitleCredits_C*      Referenced                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TitleCredits_C::CreditComplete__DelegateSignature(class UUI_TitleCredits_C* Referenced)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TitleCredits.UI_TitleCredits_C.CreditComplete__DelegateSignature");

	UUI_TitleCredits_C_CreditComplete__DelegateSignature_Params params;
	params.Referenced = Referenced;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
