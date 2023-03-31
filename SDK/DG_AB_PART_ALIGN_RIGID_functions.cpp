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

// Function AB_PART_ALIGN_RIGID.AB_PART_ALIGN_RIGID_C.ExecuteUbergraph_AB_PART_ALIGN_RIGID
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAB_PART_ALIGN_RIGID_C::ExecuteUbergraph_AB_PART_ALIGN_RIGID(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_PART_ALIGN_RIGID.AB_PART_ALIGN_RIGID_C.ExecuteUbergraph_AB_PART_ALIGN_RIGID");

	UAB_PART_ALIGN_RIGID_C_ExecuteUbergraph_AB_PART_ALIGN_RIGID_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
