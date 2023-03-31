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

// BlueprintGeneratedClass Bike04ExhaustBase.Bike04ExhaustBase_C
// 0x0004 (0x00C4 - 0x00C0)
class UBike04ExhaustBase_C : public UBendVehicleMeshAttachmentSpecs
{
public:
	int                                                ExhaustNumber;                                            // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bike04ExhaustBase.Bike04ExhaustBase_C");
		return ptr;
	}


	void SetEngineSounds(class USoundBase* EngineSound, class USoundBase* EngineStartSound, class USoundBase* EngineStopSound, class ABillsBike_C* BikeRef);
	void OnVehiclePartAttached(class AVehiclePawn** VehiclePawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
