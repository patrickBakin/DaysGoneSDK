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

// Function AB_wpnAK47.AB_wpnAK47_C.ExecuteUbergraph_AB_wpnAK47
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAB_wpnAK47_C::ExecuteUbergraph_AB_wpnAK47(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_wpnAK47.AB_wpnAK47_C.ExecuteUbergraph_AB_wpnAK47");

	UAB_wpnAK47_C_ExecuteUbergraph_AB_wpnAK47_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
