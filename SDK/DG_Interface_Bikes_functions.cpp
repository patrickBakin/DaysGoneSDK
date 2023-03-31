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

// Function Interface_Bikes.Interface_Bikes_C.WhatBikeIsThis
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAB_bike_size>     VehBIkeType                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_Bikes_C::WhatBikeIsThis(TEnumAsByte<EAB_bike_size>* VehBIkeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_Bikes.Interface_Bikes_C.WhatBikeIsThis");

	UInterface_Bikes_C_WhatBikeIsThis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VehBIkeType != nullptr)
		*VehBIkeType = params.VehBIkeType;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
