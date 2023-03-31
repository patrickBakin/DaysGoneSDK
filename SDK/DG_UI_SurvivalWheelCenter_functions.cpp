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

// Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.SetSquareAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCenter_C::SetSquareAngle(float angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.SetSquareAngle");

	UUI_SurvivalWheelCenter_C_SetSquareAngle_Params params;
	params.angle = angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.TweenSquareAngle
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCenter_C::TweenSquareAngle()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.TweenSquareAngle");

	UUI_SurvivalWheelCenter_C_TweenSquareAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.MakeLine
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SurvivalWheelCursorLine_C* Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCenter_C::MakeLine(class UUI_SurvivalWheelCursorLine_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.MakeLine");

	UUI_SurvivalWheelCenter_C_MakeLine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCenter_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.Init");

	UUI_SurvivalWheelCenter_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.ResetLines
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SurvivalWheelCenter_C::ResetLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.ResetLines");

	UUI_SurvivalWheelCenter_C_ResetLines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCenter_C::SetActive(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.SetActive");

	UUI_SurvivalWheelCenter_C_SetActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.SetAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          angle                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            NumSubitems                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCenter_C::SetAngle(float angle, int NumSubitems)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.SetAngle");

	UUI_SurvivalWheelCenter_C_SetAngle_Params params;
	params.angle = angle;
	params.NumSubitems = NumSubitems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SurvivalWheelCenter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.Construct");

	UUI_SurvivalWheelCenter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCenter_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.Tick");

	UUI_SurvivalWheelCenter_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.ExecuteUbergraph_UI_SurvivalWheelCenter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCenter_C::ExecuteUbergraph_UI_SurvivalWheelCenter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCenter.UI_SurvivalWheelCenter_C.ExecuteUbergraph_UI_SurvivalWheelCenter");

	UUI_SurvivalWheelCenter_C_ExecuteUbergraph_UI_SurvivalWheelCenter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
