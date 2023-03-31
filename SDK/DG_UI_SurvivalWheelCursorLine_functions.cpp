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

// Function UI_SurvivalWheelCursorLine.UI_SurvivalWheelCursorLine_C.SetScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScaleFrom                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScaleTo                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCursorLine_C::SetScale(float Duration, const struct FVector2D& ScaleFrom, const struct FVector2D& ScaleTo)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCursorLine.UI_SurvivalWheelCursorLine_C.SetScale");

	UUI_SurvivalWheelCursorLine_C_SetScale_Params params;
	params.Duration = Duration;
	params.ScaleFrom = ScaleFrom;
	params.ScaleTo = ScaleTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SurvivalWheelCursorLine.UI_SurvivalWheelCursorLine_C.SetAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SurvivalWheelCursorLine_C::SetAngle(float Duration, float angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SurvivalWheelCursorLine.UI_SurvivalWheelCursorLine_C.SetAngle");

	UUI_SurvivalWheelCursorLine_C_SetAngle_Params params;
	params.Duration = Duration;
	params.angle = angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
