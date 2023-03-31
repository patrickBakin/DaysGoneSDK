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

// Function BP_bike04Drifter_HAT.BP_bike04Drifter_HAT_C.WhatBikeIsThis
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAB_bike_size>     VehBIkeType                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_bike04Drifter_HAT_C::WhatBikeIsThis(TEnumAsByte<EAB_bike_size>* VehBIkeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter_HAT.BP_bike04Drifter_HAT_C.WhatBikeIsThis");

	ABP_bike04Drifter_HAT_C_WhatBikeIsThis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VehBIkeType != nullptr)
		*VehBIkeType = params.VehBIkeType;
}


// Function BP_bike04Drifter_HAT.BP_bike04Drifter_HAT_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_bike04Drifter_HAT_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter_HAT.BP_bike04Drifter_HAT_C.UserConstructionScript");

	ABP_bike04Drifter_HAT_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_bike04Drifter_HAT.BP_bike04Drifter_HAT_C.ExecuteUbergraph_BP_bike04Drifter_HAT
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_bike04Drifter_HAT_C::ExecuteUbergraph_BP_bike04Drifter_HAT(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_bike04Drifter_HAT.BP_bike04Drifter_HAT_C.ExecuteUbergraph_BP_bike04Drifter_HAT");

	ABP_bike04Drifter_HAT_C_ExecuteUbergraph_BP_bike04Drifter_HAT_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
