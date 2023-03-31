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

// BlueprintGeneratedClass Bike04StorageBase.Bike04StorageBase_C
// 0x0020 (0x00E8 - 0x00C8)
class UBike04StorageBase_C : public UBendVehicleStorageSpecs
{
public:
	TArray<int>                                        AmmoCapacitys;                                            // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FGameplayTag>                        AmmoTypeTags;                                             // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bike04StorageBase.Bike04StorageBase_C");
		return ptr;
	}


	void OnVehiclePartAttached(class AVehiclePawn** VehiclePawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
