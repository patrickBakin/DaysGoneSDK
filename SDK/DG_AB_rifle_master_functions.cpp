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

// Function AB_rifle_master.AB_rifle_master_C.ExecuteUbergraph_AB_rifle_master
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAB_rifle_master_C::ExecuteUbergraph_AB_rifle_master(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_rifle_master.AB_rifle_master_C.ExecuteUbergraph_AB_rifle_master");

	UAB_rifle_master_C_ExecuteUbergraph_AB_rifle_master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
