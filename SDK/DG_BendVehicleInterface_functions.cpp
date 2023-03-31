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

// Function BendVehicleInterface.BendVehicleInterface_C.GetEngineSoundAsset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              EngineSoundAsset               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendVehicleInterface_C::GetEngineSoundAsset(class USoundBase** EngineSoundAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendVehicleInterface.BendVehicleInterface_C.GetEngineSoundAsset");

	UBendVehicleInterface_C_GetEngineSoundAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EngineSoundAsset != nullptr)
		*EngineSoundAsset = params.EngineSoundAsset;
}


// Function BendVehicleInterface.BendVehicleInterface_C.I_SetVehicleHeadLightBrightness
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBendVehicleHeadlightBrightnessEnum> Setting                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendVehicleInterface_C::I_SetVehicleHeadLightBrightness(TEnumAsByte<EBendVehicleHeadlightBrightnessEnum> Setting, bool* Success_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendVehicleInterface.BendVehicleInterface_C.I_SetVehicleHeadLightBrightness");

	UBendVehicleInterface_C_I_SetVehicleHeadLightBrightness_Params params;
	params.Setting = Setting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success_ != nullptr)
		*Success_ = params.Success_;
}


// Function BendVehicleInterface.BendVehicleInterface_C.I_SetBikeInCinematicMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ON_                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendVehicleInterface_C::I_SetBikeInCinematicMode(bool ON_, bool* Success_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendVehicleInterface.BendVehicleInterface_C.I_SetBikeInCinematicMode");

	UBendVehicleInterface_C_I_SetBikeInCinematicMode_Params params;
	params.ON_ = ON_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success_ != nullptr)
		*Success_ = params.Success_;
}


// Function BendVehicleInterface.BendVehicleInterface_C.SwitchHeadlightBrightness
// (Public, BlueprintCallable, BlueprintEvent)

void UBendVehicleInterface_C::SwitchHeadlightBrightness()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendVehicleInterface.BendVehicleInterface_C.SwitchHeadlightBrightness");

	UBendVehicleInterface_C_SwitchHeadlightBrightness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
