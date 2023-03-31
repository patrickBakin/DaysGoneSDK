#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bp_veh_master_car.bp_veh_master_car_C.Read Car Enum
struct Abp_veh_master_car_C_Read_Car_Enum_Params
{
	int                                                Paint_Color_Index;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bp_veh_master_car.bp_veh_master_car_C.UserConstructionScript
struct Abp_veh_master_car_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
