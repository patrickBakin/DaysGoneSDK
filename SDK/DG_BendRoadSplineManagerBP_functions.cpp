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

// Function BendRoadSplineManagerBP.BendRoadSplineManagerBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendRoadSplineManagerBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendRoadSplineManagerBP.BendRoadSplineManagerBP_C.UserConstructionScript");

	ABendRoadSplineManagerBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendRoadSplineManagerBP.BendRoadSplineManagerBP_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABendRoadSplineManagerBP_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendRoadSplineManagerBP.BendRoadSplineManagerBP_C.ReceivePostSaveGameLoaded");

	ABendRoadSplineManagerBP_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendRoadSplineManagerBP.BendRoadSplineManagerBP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABendRoadSplineManagerBP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendRoadSplineManagerBP.BendRoadSplineManagerBP_C.ReceiveBeginPlay");

	ABendRoadSplineManagerBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendRoadSplineManagerBP.BendRoadSplineManagerBP_C.OnMissionComplete_MM_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABendRoadSplineManagerBP_C::OnMissionComplete_MM_Event_1(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendRoadSplineManagerBP.BendRoadSplineManagerBP_C.OnMissionComplete_MM_Event_1");

	ABendRoadSplineManagerBP_C_OnMissionComplete_MM_Event_1_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendRoadSplineManagerBP.BendRoadSplineManagerBP_C.OnMissionBegin_MM_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       MissionID                      (Parm, ZeroConstructor, IsPlainOldData)

void ABendRoadSplineManagerBP_C::OnMissionBegin_MM_Event_1(TEnumAsByte<EMissionIDs> MissionID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendRoadSplineManagerBP.BendRoadSplineManagerBP_C.OnMissionBegin_MM_Event_1");

	ABendRoadSplineManagerBP_C_OnMissionBegin_MM_Event_1_Params params;
	params.MissionID = MissionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendRoadSplineManagerBP.BendRoadSplineManagerBP_C.UpdateRoadSplineSegmentsManually
// (BlueprintCallable, BlueprintEvent)

void ABendRoadSplineManagerBP_C::UpdateRoadSplineSegmentsManually()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendRoadSplineManagerBP.BendRoadSplineManagerBP_C.UpdateRoadSplineSegmentsManually");

	ABendRoadSplineManagerBP_C_UpdateRoadSplineSegmentsManually_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendRoadSplineManagerBP.BendRoadSplineManagerBP_C.ExecuteUbergraph_BendRoadSplineManagerBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABendRoadSplineManagerBP_C::ExecuteUbergraph_BendRoadSplineManagerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendRoadSplineManagerBP.BendRoadSplineManagerBP_C.ExecuteUbergraph_BendRoadSplineManagerBP");

	ABendRoadSplineManagerBP_C_ExecuteUbergraph_BendRoadSplineManagerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
