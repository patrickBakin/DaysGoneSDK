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

// BlueprintGeneratedClass Bike04RearBrakeBase.Bike04RearBrakeBase_C
// 0x0004 (0x00C4 - 0x00C0)
class UBike04RearBrakeBase_C : public UBendVehicleMeshAttachmentSpecs
{
public:
	float                                              MaxBrakeTorque;                                           // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bike04RearBrakeBase.Bike04RearBrakeBase_C");
		return ptr;
	}


	void OnVehiclePartAttached(class AVehiclePawn** VehiclePawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
