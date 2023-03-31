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

// Function UI_WaterMeter.UI_WaterMeter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_WaterMeter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaterMeter.UI_WaterMeter_C.Construct");

	UUI_WaterMeter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WaterMeter.UI_WaterMeter_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_WaterMeter_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaterMeter.UI_WaterMeter_C.Tick");

	UUI_WaterMeter_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WaterMeter.UI_WaterMeter_C.WaterMeterStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_WaterMeter_C::WaterMeterStart(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaterMeter.UI_WaterMeter_C.WaterMeterStart");

	UUI_WaterMeter_C_WaterMeterStart_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WaterMeter.UI_WaterMeter_C.WaterMeterEnd
// (BlueprintCallable, BlueprintEvent)

void UUI_WaterMeter_C::WaterMeterEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaterMeter.UI_WaterMeter_C.WaterMeterEnd");

	UUI_WaterMeter_C_WaterMeterEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_WaterMeter.UI_WaterMeter_C.ExecuteUbergraph_UI_WaterMeter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_WaterMeter_C::ExecuteUbergraph_UI_WaterMeter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WaterMeter.UI_WaterMeter_C.ExecuteUbergraph_UI_WaterMeter");

	UUI_WaterMeter_C_ExecuteUbergraph_UI_WaterMeter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
