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

// Function BP_ORWindManager.BP_ORWindManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ORWindManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ORWindManager.BP_ORWindManager_C.UserConstructionScript");

	ABP_ORWindManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ORWindManager.BP_ORWindManager_C.ExecuteUbergraph_BP_ORWindManager
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ORWindManager_C::ExecuteUbergraph_BP_ORWindManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ORWindManager.BP_ORWindManager_C.ExecuteUbergraph_BP_ORWindManager");

	ABP_ORWindManager_C_ExecuteUbergraph_BP_ORWindManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
