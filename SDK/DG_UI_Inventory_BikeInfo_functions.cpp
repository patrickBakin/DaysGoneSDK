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

// Function UI_Inventory_BikeInfo.UI_Inventory_BikeInfo_C.ToDecimalString
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Gallons                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Retrun                         (Parm, OutParm, ZeroConstructor)

void UUI_Inventory_BikeInfo_C::ToDecimalString(float Gallons, struct FString* Retrun)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_BikeInfo.UI_Inventory_BikeInfo_C.ToDecimalString");

	UUI_Inventory_BikeInfo_C_ToDecimalString_Params params;
	params.Gallons = Gallons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Retrun != nullptr)
		*Retrun = params.Retrun;
}


// Function UI_Inventory_BikeInfo.UI_Inventory_BikeInfo_C.SetAmmoCounts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Inventory_BikeInfo_C::SetAmmoCounts()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_BikeInfo.UI_Inventory_BikeInfo_C.SetAmmoCounts");

	UUI_Inventory_BikeInfo_C_SetAmmoCounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory_BikeInfo.UI_Inventory_BikeInfo_C.UpdateBikeFuel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Inventory_BikeInfo_C::UpdateBikeFuel(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_BikeInfo.UI_Inventory_BikeInfo_C.UpdateBikeFuel");

	UUI_Inventory_BikeInfo_C_UpdateBikeFuel_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory_BikeInfo.UI_Inventory_BikeInfo_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Inventory_BikeInfo_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_BikeInfo.UI_Inventory_BikeInfo_C.Init");

	UUI_Inventory_BikeInfo_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory_BikeInfo.UI_Inventory_BikeInfo_C.UpdateBikeDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Inventory_BikeInfo_C::UpdateBikeDamage(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_BikeInfo.UI_Inventory_BikeInfo_C.UpdateBikeDamage");

	UUI_Inventory_BikeInfo_C_UpdateBikeDamage_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory_BikeInfo.UI_Inventory_BikeInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Inventory_BikeInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_BikeInfo.UI_Inventory_BikeInfo_C.Construct");

	UUI_Inventory_BikeInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Inventory_BikeInfo.UI_Inventory_BikeInfo_C.ExecuteUbergraph_UI_Inventory_BikeInfo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Inventory_BikeInfo_C::ExecuteUbergraph_UI_Inventory_BikeInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Inventory_BikeInfo.UI_Inventory_BikeInfo_C.ExecuteUbergraph_UI_Inventory_BikeInfo");

	UUI_Inventory_BikeInfo_C_ExecuteUbergraph_UI_Inventory_BikeInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
