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

// Function BP_TelemetryManager.BP_TelemetryManager_C.GetPackageOfType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  PackageTypeToFind              (Parm, ZeroConstructor, IsPlainOldData)
// class ABP_TelemetryPackageBase_C* Package                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Succes                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TelemetryManager_C::GetPackageOfType(class UClass* PackageTypeToFind, class ABP_TelemetryPackageBase_C** Package, bool* Succes)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TelemetryManager.BP_TelemetryManager_C.GetPackageOfType");

	ABP_TelemetryManager_C_GetPackageOfType_Params params;
	params.PackageTypeToFind = PackageTypeToFind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Package != nullptr)
		*Package = params.Package;
	if (Succes != nullptr)
		*Succes = params.Succes;
}


// Function BP_TelemetryManager.BP_TelemetryManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TelemetryManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TelemetryManager.BP_TelemetryManager_C.UserConstructionScript");

	ABP_TelemetryManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TelemetryManager.BP_TelemetryManager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_TelemetryManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TelemetryManager.BP_TelemetryManager_C.ReceiveBeginPlay");

	ABP_TelemetryManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TelemetryManager.BP_TelemetryManager_C.RerunBeginPlay
// (BlueprintCallable, BlueprintEvent)

void ABP_TelemetryManager_C::RerunBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TelemetryManager.BP_TelemetryManager_C.RerunBeginPlay");

	ABP_TelemetryManager_C_RerunBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TelemetryManager.BP_TelemetryManager_C.FiveSecondTick
// (BlueprintCallable, BlueprintEvent)

void ABP_TelemetryManager_C::FiveSecondTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TelemetryManager.BP_TelemetryManager_C.FiveSecondTick");

	ABP_TelemetryManager_C_FiveSecondTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TelemetryManager.BP_TelemetryManager_C.OneMinuteGrab
// (BlueprintCallable, BlueprintEvent)

void ABP_TelemetryManager_C::OneMinuteGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TelemetryManager.BP_TelemetryManager_C.OneMinuteGrab");

	ABP_TelemetryManager_C_OneMinuteGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TelemetryManager.BP_TelemetryManager_C.TwoSecondTick
// (BlueprintCallable, BlueprintEvent)

void ABP_TelemetryManager_C::TwoSecondTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TelemetryManager.BP_TelemetryManager_C.TwoSecondTick");

	ABP_TelemetryManager_C_TwoSecondTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TelemetryManager.BP_TelemetryManager_C.ExecuteUbergraph_BP_TelemetryManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_TelemetryManager_C::ExecuteUbergraph_BP_TelemetryManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TelemetryManager.BP_TelemetryManager_C.ExecuteUbergraph_BP_TelemetryManager");

	ABP_TelemetryManager_C_ExecuteUbergraph_BP_TelemetryManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
