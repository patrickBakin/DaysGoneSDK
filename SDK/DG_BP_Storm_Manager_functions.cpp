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

// Function BP_Storm_Manager.BP_Storm_Manager_C.HandleStormEvents
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Storm_Manager_C::HandleStormEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Manager.BP_Storm_Manager_C.HandleStormEvents");

	ABP_Storm_Manager_C_HandleStormEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Manager.BP_Storm_Manager_C.SpawnAmbientStorm
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Storm_Manager_C::SpawnAmbientStorm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Manager.BP_Storm_Manager_C.SpawnAmbientStorm");

	ABP_Storm_Manager_C_SpawnAmbientStorm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Manager.BP_Storm_Manager_C.AmbientStormManager
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Storm_Manager_C::AmbientStormManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Manager.BP_Storm_Manager_C.AmbientStormManager");

	ABP_Storm_Manager_C_AmbientStormManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Manager.BP_Storm_Manager_C.UpdateManager
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Storm_Manager_C::UpdateManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Manager.BP_Storm_Manager_C.UpdateManager");

	ABP_Storm_Manager_C_UpdateManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Manager.BP_Storm_Manager_C.InventoryStormsAndTargets
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Storm_Manager_C::InventoryStormsAndTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Manager.BP_Storm_Manager_C.InventoryStormsAndTargets");

	ABP_Storm_Manager_C_InventoryStormsAndTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Manager.BP_Storm_Manager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Storm_Manager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Manager.BP_Storm_Manager_C.UserConstructionScript");

	ABP_Storm_Manager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Manager.BP_Storm_Manager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Storm_Manager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Manager.BP_Storm_Manager_C.ReceiveTick");

	ABP_Storm_Manager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Manager.BP_Storm_Manager_C.Editor Tick
// (BlueprintCallable, BlueprintEvent)

void ABP_Storm_Manager_C::Editor_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Manager.BP_Storm_Manager_C.Editor Tick");

	ABP_Storm_Manager_C_Editor_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Manager.BP_Storm_Manager_C.Spawn Storm
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Storm_Type                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Storm_Formed_Position          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Storm_Direction                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Storm_Lifetime                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          Storm_Formation___Fade_Rate    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Storm_Spawn_Distance           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Storm_Forms_Instantly          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Storm_Never_Ends               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ambiently_Spawned              (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Storm_Manager_C::Spawn_Storm(class UClass* Storm_Type, const struct FVector2D& Storm_Formed_Position, const struct FVector2D& Storm_Direction, float Storm_Lifetime, float Storm_Formation___Fade_Rate, float Storm_Spawn_Distance, bool Storm_Forms_Instantly, bool Storm_Never_Ends, bool Ambiently_Spawned)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Manager.BP_Storm_Manager_C.Spawn Storm");

	ABP_Storm_Manager_C_Spawn_Storm_Params params;
	params.Storm_Type = Storm_Type;
	params.Storm_Formed_Position = Storm_Formed_Position;
	params.Storm_Direction = Storm_Direction;
	params.Storm_Lifetime = Storm_Lifetime;
	params.Storm_Formation___Fade_Rate = Storm_Formation___Fade_Rate;
	params.Storm_Spawn_Distance = Storm_Spawn_Distance;
	params.Storm_Forms_Instantly = Storm_Forms_Instantly;
	params.Storm_Never_Ends = Storm_Never_Ends;
	params.Ambiently_Spawned = Ambiently_Spawned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Manager.BP_Storm_Manager_C.DisableStormEvents
// (BlueprintCallable, BlueprintEvent)

void ABP_Storm_Manager_C::DisableStormEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Manager.BP_Storm_Manager_C.DisableStormEvents");

	ABP_Storm_Manager_C_DisableStormEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Manager.BP_Storm_Manager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Storm_Manager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Manager.BP_Storm_Manager_C.ReceiveBeginPlay");

	ABP_Storm_Manager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Manager.BP_Storm_Manager_C.ExecuteUbergraph_BP_Storm_Manager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Storm_Manager_C::ExecuteUbergraph_BP_Storm_Manager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Manager.BP_Storm_Manager_C.ExecuteUbergraph_BP_Storm_Manager");

	ABP_Storm_Manager_C_ExecuteUbergraph_BP_Storm_Manager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
