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

// Function INTERFACE_GasFillObject.INTERFACE_GasFillObject_C.I_GasPumpFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UINTERFACE_GasFillObject_C::I_GasPumpFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function INTERFACE_GasFillObject.INTERFACE_GasFillObject_C.I_GasPumpFinished");

	UINTERFACE_GasFillObject_C_I_GasPumpFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function INTERFACE_GasFillObject.INTERFACE_GasFillObject_C.I_SetGasCanHasControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasControl                     (Parm, ZeroConstructor, IsPlainOldData)

void UINTERFACE_GasFillObject_C::I_SetGasCanHasControl(bool HasControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function INTERFACE_GasFillObject.INTERFACE_GasFillObject_C.I_SetGasCanHasControl");

	UINTERFACE_GasFillObject_C_I_SetGasCanHasControl_Params params;
	params.HasControl = HasControl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function INTERFACE_GasFillObject.INTERFACE_GasFillObject_C.I_RefuelingFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UINTERFACE_GasFillObject_C::I_RefuelingFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function INTERFACE_GasFillObject.INTERFACE_GasFillObject_C.I_RefuelingFinished");

	UINTERFACE_GasFillObject_C_I_RefuelingFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function INTERFACE_GasFillObject.INTERFACE_GasFillObject_C.I_GasCanDropped
// (Public, BlueprintCallable, BlueprintEvent)

void UINTERFACE_GasFillObject_C::I_GasCanDropped()
{
	static auto fn = UObject::FindObject<UFunction>("Function INTERFACE_GasFillObject.INTERFACE_GasFillObject_C.I_GasCanDropped");

	UINTERFACE_GasFillObject_C_I_GasCanDropped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function INTERFACE_GasFillObject.INTERFACE_GasFillObject_C.I_GetGasValues
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Gas_Current                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Gas_Max                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UINTERFACE_GasFillObject_C::I_GetGasValues(float* Gas_Current, float* Gas_Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function INTERFACE_GasFillObject.INTERFACE_GasFillObject_C.I_GetGasValues");

	UINTERFACE_GasFillObject_C_I_GetGasValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Gas_Current != nullptr)
		*Gas_Current = params.Gas_Current;
	if (Gas_Max != nullptr)
		*Gas_Max = params.Gas_Max;
}


// Function INTERFACE_GasFillObject.INTERFACE_GasFillObject_C.I_SetGasAmounts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewGas                         (Parm, ZeroConstructor, IsPlainOldData)

void UINTERFACE_GasFillObject_C::I_SetGasAmounts(float NewGas)
{
	static auto fn = UObject::FindObject<UFunction>("Function INTERFACE_GasFillObject.INTERFACE_GasFillObject_C.I_SetGasAmounts");

	UINTERFACE_GasFillObject_C_I_SetGasAmounts_Params params;
	params.NewGas = NewGas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
