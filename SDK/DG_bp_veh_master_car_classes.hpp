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

// BlueprintGeneratedClass bp_veh_master_car.bp_veh_master_car_C
// 0x0000 (0x0419 - 0x0419)
class Abp_veh_master_car_C : public Abp_veh_master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bp_veh_master_car.bp_veh_master_car_C");
		return ptr;
	}


	void Read_Car_Enum(int* Paint_Color_Index);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
