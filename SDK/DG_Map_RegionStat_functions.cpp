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

// Function Map_RegionStat.Map_RegionStat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMap_RegionStat_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_RegionStat.Map_RegionStat_C.Construct");

	UMap_RegionStat_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_RegionStat.Map_RegionStat_C.ExecuteUbergraph_Map_RegionStat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMap_RegionStat_C::ExecuteUbergraph_Map_RegionStat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_RegionStat.Map_RegionStat_C.ExecuteUbergraph_Map_RegionStat");

	UMap_RegionStat_C_ExecuteUbergraph_Map_RegionStat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
