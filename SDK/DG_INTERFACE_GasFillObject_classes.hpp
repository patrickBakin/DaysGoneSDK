#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass INTERFACE_GasFillObject.INTERFACE_GasFillObject_C
// 0x0000 (0x0028 - 0x0028)
class UINTERFACE_GasFillObject_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass INTERFACE_GasFillObject.INTERFACE_GasFillObject_C");
		return ptr;
	}


	void I_GasPumpFinished();
	void I_SetGasCanHasControl(bool HasControl);
	void I_RefuelingFinished();
	void I_GasCanDropped();
	void I_GetGasValues(float* Gas_Current, float* Gas_Max);
	void I_SetGasAmounts(float NewGas);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
