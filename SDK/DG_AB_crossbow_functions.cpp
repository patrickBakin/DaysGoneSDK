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

// Function AB_crossbow.AB_crossbow_C.ExecuteUbergraph_AB_crossbow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAB_crossbow_C::ExecuteUbergraph_AB_crossbow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_crossbow.AB_crossbow_C.ExecuteUbergraph_AB_crossbow");

	UAB_crossbow_C_ExecuteUbergraph_AB_crossbow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
