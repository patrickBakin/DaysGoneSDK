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

// Function bp_veh_master_car.bp_veh_master_car_C.Read Car Enum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Paint_Color_Index              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Abp_veh_master_car_C::Read_Car_Enum(int* Paint_Color_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master_car.bp_veh_master_car_C.Read Car Enum");

	Abp_veh_master_car_C_Read_Car_Enum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Paint_Color_Index != nullptr)
		*Paint_Color_Index = params.Paint_Color_Index;
}


// Function bp_veh_master_car.bp_veh_master_car_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_veh_master_car_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master_car.bp_veh_master_car_C.UserConstructionScript");

	Abp_veh_master_car_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
