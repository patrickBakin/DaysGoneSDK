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

// Function BP_OpenWorldVOManager.BP_OpenWorldVOManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OpenWorldVOManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OpenWorldVOManager.BP_OpenWorldVOManager_C.UserConstructionScript");

	ABP_OpenWorldVOManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OpenWorldVOManager.BP_OpenWorldVOManager_C.OnPlayRFO
// (Event, Public, BlueprintEvent)

void ABP_OpenWorldVOManager_C::OnPlayRFO()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OpenWorldVOManager.BP_OpenWorldVOManager_C.OnPlayRFO");

	ABP_OpenWorldVOManager_C_OnPlayRFO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OpenWorldVOManager.BP_OpenWorldVOManager_C.OnSkipGameplaySection_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SkipIdentifier                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OpenWorldVOManager_C::OnSkipGameplaySection_Event_1(const struct FName& SkipIdentifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OpenWorldVOManager.BP_OpenWorldVOManager_C.OnSkipGameplaySection_Event_1");

	ABP_OpenWorldVOManager_C_OnSkipGameplaySection_Event_1_Params params;
	params.SkipIdentifier = SkipIdentifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OpenWorldVOManager.BP_OpenWorldVOManager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_OpenWorldVOManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OpenWorldVOManager.BP_OpenWorldVOManager_C.ReceiveBeginPlay");

	ABP_OpenWorldVOManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OpenWorldVOManager.BP_OpenWorldVOManager_C.OnFinishRFO
// (Event, Public, BlueprintEvent)

void ABP_OpenWorldVOManager_C::OnFinishRFO()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OpenWorldVOManager.BP_OpenWorldVOManager_C.OnFinishRFO");

	ABP_OpenWorldVOManager_C_OnFinishRFO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OpenWorldVOManager.BP_OpenWorldVOManager_C.ExecuteUbergraph_BP_OpenWorldVOManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_OpenWorldVOManager_C::ExecuteUbergraph_BP_OpenWorldVOManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OpenWorldVOManager.BP_OpenWorldVOManager_C.ExecuteUbergraph_BP_OpenWorldVOManager");

	ABP_OpenWorldVOManager_C_ExecuteUbergraph_BP_OpenWorldVOManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
