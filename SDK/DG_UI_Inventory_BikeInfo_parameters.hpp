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

// Function UI_Inventory_BikeInfo.UI_Inventory_BikeInfo_C.ToDecimalString
struct UUI_Inventory_BikeInfo_C_ToDecimalString_Params
{
	float                                              Gallons;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Retrun;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function UI_Inventory_BikeInfo.UI_Inventory_BikeInfo_C.SetAmmoCounts
struct UUI_Inventory_BikeInfo_C_SetAmmoCounts_Params
{
};

// Function UI_Inventory_BikeInfo.UI_Inventory_BikeInfo_C.UpdateBikeFuel
struct UUI_Inventory_BikeInfo_C_UpdateBikeFuel_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Inventory_BikeInfo.UI_Inventory_BikeInfo_C.Init
struct UUI_Inventory_BikeInfo_C_Init_Params
{
};

// Function UI_Inventory_BikeInfo.UI_Inventory_BikeInfo_C.UpdateBikeDamage
struct UUI_Inventory_BikeInfo_C_UpdateBikeDamage_Params
{
	float                                              Percent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Inventory_BikeInfo.UI_Inventory_BikeInfo_C.Construct
struct UUI_Inventory_BikeInfo_C_Construct_Params
{
};

// Function UI_Inventory_BikeInfo.UI_Inventory_BikeInfo_C.ExecuteUbergraph_UI_Inventory_BikeInfo
struct UUI_Inventory_BikeInfo_C_ExecuteUbergraph_UI_Inventory_BikeInfo_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
