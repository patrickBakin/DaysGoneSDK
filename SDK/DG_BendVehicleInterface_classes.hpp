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

// BlueprintGeneratedClass BendVehicleInterface.BendVehicleInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBendVehicleInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendVehicleInterface.BendVehicleInterface_C");
		return ptr;
	}


	void GetEngineSoundAsset(class USoundBase** EngineSoundAsset);
	void I_SetVehicleHeadLightBrightness(TEnumAsByte<EBendVehicleHeadlightBrightnessEnum> Setting, bool* Success_);
	void I_SetBikeInCinematicMode(bool ON_, bool* Success_);
	void SwitchHeadlightBrightness();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
