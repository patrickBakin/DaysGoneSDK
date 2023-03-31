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

// BlueprintGeneratedClass Bike04SidelightBase.Bike04SidelightBase_C
// 0x0000 (0x00C0 - 0x00C0)
class UBike04SidelightBase_C : public UBendVehicleMeshAttachmentSpecs
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bike04SidelightBase.Bike04SidelightBase_C");
		return ptr;
	}


	void OnVehiclePartAttached(class AVehiclePawn** VehiclePawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
