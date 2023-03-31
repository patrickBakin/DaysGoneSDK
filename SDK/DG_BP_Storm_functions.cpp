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

// Function BP_Storm.BP_Storm_C.Spawn Lighting Blueprint
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// class ABP_LightningBase_C*     Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Storm_C::Spawn_Lighting_Blueprint(const struct FVector& Location, class ABP_LightningBase_C** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm.BP_Storm_C.Spawn Lighting Blueprint");

	ABP_Storm_C_Spawn_Lighting_Blueprint_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_Storm.BP_Storm_C.Choose Location
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Center                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Storm_C::Choose_Location(struct FVector* Location, struct FVector* Center)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm.BP_Storm_C.Choose Location");

	ABP_Storm_C_Choose_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Center != nullptr)
		*Center = params.Center;
}


// Function BP_Storm.BP_Storm_C.SpawnLighting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LightningCenter                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Storm_C::SpawnLighting(struct FVector* LightningCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm.BP_Storm_C.SpawnLighting");

	ABP_Storm_C_SpawnLighting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LightningCenter != nullptr)
		*LightningCenter = params.LightningCenter;
}


// Function BP_Storm.BP_Storm_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Storm_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm.BP_Storm_C.UserConstructionScript");

	ABP_Storm_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
