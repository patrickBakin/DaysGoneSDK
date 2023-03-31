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

// Function CalibrationPostProcess.CalibrationPostProcess_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HDR                            (Parm, ZeroConstructor, IsPlainOldData)

void ACalibrationPostProcess_C::SetEnabled(bool Value, bool HDR)
{
	static auto fn = UObject::FindObject<UFunction>("Function CalibrationPostProcess.CalibrationPostProcess_C.SetEnabled");

	ACalibrationPostProcess_C_SetEnabled_Params params;
	params.Value = Value;
	params.HDR = HDR;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CalibrationPostProcess.CalibrationPostProcess_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACalibrationPostProcess_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CalibrationPostProcess.CalibrationPostProcess_C.UserConstructionScript");

	ACalibrationPostProcess_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
