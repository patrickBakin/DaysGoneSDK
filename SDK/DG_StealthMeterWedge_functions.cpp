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

// Function StealthMeterWedge.StealthMeterWedge_C.TweenHatch
// (Public, BlueprintCallable, BlueprintEvent)

void UStealthMeterWedge_C::TweenHatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeterWedge.StealthMeterWedge_C.TweenHatch");

	UStealthMeterWedge_C_TweenHatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeterWedge.StealthMeterWedge_C.SetHatch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Amount                         (Parm, ZeroConstructor, IsPlainOldData)

void UStealthMeterWedge_C::SetHatch(float Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeterWedge.StealthMeterWedge_C.SetHatch");

	UStealthMeterWedge_C_SetHatch_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeterWedge.StealthMeterWedge_C.TweenRotation
// (Public, BlueprintCallable, BlueprintEvent)

void UStealthMeterWedge_C::TweenRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeterWedge.StealthMeterWedge_C.TweenRotation");

	UStealthMeterWedge_C_TweenRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeterWedge.StealthMeterWedge_C.SetRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UStealthMeterWedge_C::SetRotation(float angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeterWedge.StealthMeterWedge_C.SetRotation");

	UStealthMeterWedge_C_SetRotation_Params params;
	params.angle = angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeterWedge.StealthMeterWedge_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* DMI                            (Parm, ZeroConstructor, IsPlainOldData)

void UStealthMeterWedge_C::Init(class UMaterialInstanceDynamic* DMI)
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeterWedge.StealthMeterWedge_C.Init");

	UStealthMeterWedge_C_Init_Params params;
	params.DMI = DMI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StealthMeterWedge.StealthMeterWedge_C.TweenColor
// (Public, BlueprintCallable, BlueprintEvent)

void UStealthMeterWedge_C::TweenColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function StealthMeterWedge.StealthMeterWedge_C.TweenColor");

	UStealthMeterWedge_C_TweenColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
