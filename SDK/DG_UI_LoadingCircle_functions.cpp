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

// Function UI_LoadingCircle.UI_LoadingCircle_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_LoadingCircle_C::Hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingCircle.UI_LoadingCircle_C.Hide");

	UUI_LoadingCircle_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LoadingCircle.UI_LoadingCircle_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_LoadingCircle_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingCircle.UI_LoadingCircle_C.Show");

	UUI_LoadingCircle_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LoadingCircle.UI_LoadingCircle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_LoadingCircle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingCircle.UI_LoadingCircle_C.Construct");

	UUI_LoadingCircle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LoadingCircle.UI_LoadingCircle_C.BndEvt__Exit_K2Node_ComponentBoundEvent_26_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_LoadingCircle_C::BndEvt__Exit_K2Node_ComponentBoundEvent_26_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingCircle.UI_LoadingCircle_C.BndEvt__Exit_K2Node_ComponentBoundEvent_26_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_LoadingCircle_C_BndEvt__Exit_K2Node_ComponentBoundEvent_26_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LoadingCircle.UI_LoadingCircle_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_LoadingCircle_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingCircle.UI_LoadingCircle_C.Tick");

	UUI_LoadingCircle_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_LoadingCircle.UI_LoadingCircle_C.ExecuteUbergraph_UI_LoadingCircle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_LoadingCircle_C::ExecuteUbergraph_UI_LoadingCircle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_LoadingCircle.UI_LoadingCircle_C.ExecuteUbergraph_UI_LoadingCircle");

	UUI_LoadingCircle_C_ExecuteUbergraph_UI_LoadingCircle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
