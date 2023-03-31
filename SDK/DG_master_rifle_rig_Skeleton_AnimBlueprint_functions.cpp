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

// Function master_rifle_rig_Skeleton_AnimBlueprint.master_rifle_rig_Skeleton_AnimBlueprint_C.ExecuteUbergraph_master_rifle_rig_Skeleton_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Umaster_rifle_rig_Skeleton_AnimBlueprint_C::ExecuteUbergraph_master_rifle_rig_Skeleton_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function master_rifle_rig_Skeleton_AnimBlueprint.master_rifle_rig_Skeleton_AnimBlueprint_C.ExecuteUbergraph_master_rifle_rig_Skeleton_AnimBlueprint");

	Umaster_rifle_rig_Skeleton_AnimBlueprint_C_ExecuteUbergraph_master_rifle_rig_Skeleton_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
