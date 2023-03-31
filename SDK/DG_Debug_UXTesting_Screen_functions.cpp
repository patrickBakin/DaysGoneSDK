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

// Function Debug_UXTesting_Screen.Debug_UXTesting_Screen_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataAsset*              Asset                          (Parm, ZeroConstructor, IsPlainOldData)

void UDebug_UXTesting_Screen_C::SetText(class UDataAsset* Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Debug_UXTesting_Screen.Debug_UXTesting_Screen_C.SetText");

	UDebug_UXTesting_Screen_C_SetText_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Debug_UXTesting_Screen.Debug_UXTesting_Screen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UDebug_UXTesting_Screen_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Debug_UXTesting_Screen.Debug_UXTesting_Screen_C.Tick");

	UDebug_UXTesting_Screen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Debug_UXTesting_Screen.Debug_UXTesting_Screen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDebug_UXTesting_Screen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Debug_UXTesting_Screen.Debug_UXTesting_Screen_C.Construct");

	UDebug_UXTesting_Screen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Debug_UXTesting_Screen.Debug_UXTesting_Screen_C.ExecuteUbergraph_Debug_UXTesting_Screen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDebug_UXTesting_Screen_C::ExecuteUbergraph_Debug_UXTesting_Screen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Debug_UXTesting_Screen.Debug_UXTesting_Screen_C.ExecuteUbergraph_Debug_UXTesting_Screen");

	UDebug_UXTesting_Screen_C_ExecuteUbergraph_Debug_UXTesting_Screen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Debug_UXTesting_Screen.Debug_UXTesting_Screen_C.InputClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UDebug_UXTesting_Screen_C::InputClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Debug_UXTesting_Screen.Debug_UXTesting_Screen_C.InputClosed__DelegateSignature");

	UDebug_UXTesting_Screen_C_InputClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
