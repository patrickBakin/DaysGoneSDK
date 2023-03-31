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

// Function AB_MSG90.AB_MSG90_C.ExecuteUbergraph_AB_MSG90
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAB_MSG90_C::ExecuteUbergraph_AB_MSG90(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_MSG90.AB_MSG90_C.ExecuteUbergraph_AB_MSG90");

	UAB_MSG90_C_ExecuteUbergraph_AB_MSG90_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
