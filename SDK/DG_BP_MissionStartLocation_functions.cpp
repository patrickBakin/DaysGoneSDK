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

// Function BP_MissionStartLocation.BP_MissionStartLocation_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MissionStartLocation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionStartLocation.BP_MissionStartLocation_C.UserConstructionScript");

	ABP_MissionStartLocation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionStartLocation.BP_MissionStartLocation_C.OnPawnEnterVehicleFromLoc__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class AVehiclePawn*            Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// class ABP_MissionStartLocation_C* Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionStartLocation_C::OnPawnEnterVehicleFromLoc__DelegateSignature(class ABendPawn* Pawn, class AVehiclePawn* Vehicle, class ABP_MissionStartLocation_C* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionStartLocation.BP_MissionStartLocation_C.OnPawnEnterVehicleFromLoc__DelegateSignature");

	ABP_MissionStartLocation_C_OnPawnEnterVehicleFromLoc__DelegateSignature_Params params;
	params.Pawn = Pawn;
	params.Vehicle = Vehicle;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionStartLocation.BP_MissionStartLocation_C.OnVehicleSpawnedFromLoc__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVehiclePawn*            Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            VehicleIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// class ABP_MissionStartLocation_C* StartLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionStartLocation_C::OnVehicleSpawnedFromLoc__DelegateSignature(class AVehiclePawn* Vehicle, int VehicleIndex, class ABP_MissionStartLocation_C* StartLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionStartLocation.BP_MissionStartLocation_C.OnVehicleSpawnedFromLoc__DelegateSignature");

	ABP_MissionStartLocation_C_OnVehicleSpawnedFromLoc__DelegateSignature_Params params;
	params.Vehicle = Vehicle;
	params.VehicleIndex = VehicleIndex;
	params.StartLocation = StartLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MissionStartLocation.BP_MissionStartLocation_C.OnPawnSpawnedFromLoc__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// class ABendAIController*       Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            PawnIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class ABP_MissionStartLocation_C* StartLocation                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_MissionStartLocation_C::OnPawnSpawnedFromLoc__DelegateSignature(class ABendPawn* Pawn, class ABendAIController* Controller, int PawnIndex, class ABP_MissionStartLocation_C* StartLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MissionStartLocation.BP_MissionStartLocation_C.OnPawnSpawnedFromLoc__DelegateSignature");

	ABP_MissionStartLocation_C_OnPawnSpawnedFromLoc__DelegateSignature_Params params;
	params.Pawn = Pawn;
	params.Controller = Controller;
	params.PawnIndex = PawnIndex;
	params.StartLocation = StartLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
