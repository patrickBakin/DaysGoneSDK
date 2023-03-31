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

// Function AB_MG45.AB_MG45_C.ExecuteUbergraph_AB_MG45
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAB_MG45_C::ExecuteUbergraph_AB_MG45(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_MG45.AB_MG45_C.ExecuteUbergraph_AB_MG45");

	UAB_MG45_C_ExecuteUbergraph_AB_MG45_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
