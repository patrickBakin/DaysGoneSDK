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

// Function BP_LightningBase.BP_LightningBase_C.Suicide
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LightningBase_C::Suicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningBase.BP_LightningBase_C.Suicide");

	ABP_LightningBase_C_Suicide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightningBase.BP_LightningBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LightningBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningBase.BP_LightningBase_C.UserConstructionScript");

	ABP_LightningBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightningBase.BP_LightningBase_C.ExecuteUbergraph_BP_LightningBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_LightningBase_C::ExecuteUbergraph_BP_LightningBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightningBase.BP_LightningBase_C.ExecuteUbergraph_BP_LightningBase");

	ABP_LightningBase_C_ExecuteUbergraph_BP_LightningBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
