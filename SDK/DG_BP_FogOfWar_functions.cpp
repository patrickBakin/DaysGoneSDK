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

// Function BP_FogOfWar.BP_FogOfWar_C.SetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FogOfWar_C::SetVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogOfWar.BP_FogOfWar_C.SetVisibility");

	ABP_FogOfWar_C_SetVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FogOfWar.BP_FogOfWar_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FogOfWar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogOfWar.BP_FogOfWar_C.UserConstructionScript");

	ABP_FogOfWar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FogOfWar.BP_FogOfWar_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_FogOfWar_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogOfWar.BP_FogOfWar_C.ReceiveBeginPlay");

	ABP_FogOfWar_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FogOfWar.BP_FogOfWar_C.OnMissionBegin_MM_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FogOfWar_C::OnMissionBegin_MM_Event_1(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogOfWar.BP_FogOfWar_C.OnMissionBegin_MM_Event_1");

	ABP_FogOfWar_C_OnMissionBegin_MM_Event_1_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FogOfWar.BP_FogOfWar_C.ExecuteUbergraph_BP_FogOfWar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_FogOfWar_C::ExecuteUbergraph_BP_FogOfWar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogOfWar.BP_FogOfWar_C.ExecuteUbergraph_BP_FogOfWar");

	ABP_FogOfWar_C_ExecuteUbergraph_BP_FogOfWar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
