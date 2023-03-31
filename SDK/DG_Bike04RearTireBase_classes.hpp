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

// BlueprintGeneratedClass Bike04RearTireBase.Bike04RearTireBase_C
// 0x0008 (0x00C8 - 0x00C0)
class UBike04RearTireBase_C : public UBendVehicleMeshAttachmentSpecs
{
public:
	class UTireType*                                   TireType;                                                 // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bike04RearTireBase.Bike04RearTireBase_C");
		return ptr;
	}


	void OnVehiclePartAttached(class AVehiclePawn** VehiclePawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
