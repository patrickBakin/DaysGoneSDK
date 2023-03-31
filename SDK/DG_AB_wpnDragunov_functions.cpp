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

// Function AB_wpnDragunov.AB_wpnDragunov_C.ExecuteUbergraph_AB_wpnDragunov
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAB_wpnDragunov_C::ExecuteUbergraph_AB_wpnDragunov(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_wpnDragunov.AB_wpnDragunov_C.ExecuteUbergraph_AB_wpnDragunov");

	UAB_wpnDragunov_C_ExecuteUbergraph_AB_wpnDragunov_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
