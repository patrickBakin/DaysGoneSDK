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

// Function ControllerTouchpad.ControllerTouchpad_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UControllerTouchpad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControllerTouchpad.ControllerTouchpad_C.Construct");

	UControllerTouchpad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControllerTouchpad.ControllerTouchpad_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UControllerTouchpad_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControllerTouchpad.ControllerTouchpad_C.Tick");

	UControllerTouchpad_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControllerTouchpad.ControllerTouchpad_C.Close
// (BlueprintCallable, BlueprintEvent)

void UControllerTouchpad_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControllerTouchpad.ControllerTouchpad_C.Close");

	UControllerTouchpad_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControllerTouchpad.ControllerTouchpad_C.ExecuteUbergraph_ControllerTouchpad
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UControllerTouchpad_C::ExecuteUbergraph_ControllerTouchpad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControllerTouchpad.ControllerTouchpad_C.ExecuteUbergraph_ControllerTouchpad");

	UControllerTouchpad_C_ExecuteUbergraph_ControllerTouchpad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
