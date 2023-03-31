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

// Function WildlifeListenerForest.WildlifeListenerForest_C.AllRippersAreDeadInGame
// (Public, BlueprintCallable, BlueprintEvent)

void AWildlifeListenerForest_C::AllRippersAreDeadInGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function WildlifeListenerForest.WildlifeListenerForest_C.AllRippersAreDeadInGame");

	AWildlifeListenerForest_C_AllRippersAreDeadInGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WildlifeListenerForest.WildlifeListenerForest_C.RippersStillAliveInGame
// (Public, BlueprintCallable, BlueprintEvent)

void AWildlifeListenerForest_C::RippersStillAliveInGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function WildlifeListenerForest.WildlifeListenerForest_C.RippersStillAliveInGame");

	AWildlifeListenerForest_C_RippersStillAliveInGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WildlifeListenerForest.WildlifeListenerForest_C.EnteredNewRegion
// (Public, BlueprintCallable, BlueprintEvent)

void AWildlifeListenerForest_C::EnteredNewRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function WildlifeListenerForest.WildlifeListenerForest_C.EnteredNewRegion");

	AWildlifeListenerForest_C_EnteredNewRegion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WildlifeListenerForest.WildlifeListenerForest_C.PlayAudio
// (Public, BlueprintCallable, BlueprintEvent)

void AWildlifeListenerForest_C::PlayAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function WildlifeListenerForest.WildlifeListenerForest_C.PlayAudio");

	AWildlifeListenerForest_C_PlayAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WildlifeListenerForest.WildlifeListenerForest_C.StopAudio
// (Public, BlueprintCallable, BlueprintEvent)

void AWildlifeListenerForest_C::StopAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function WildlifeListenerForest.WildlifeListenerForest_C.StopAudio");

	AWildlifeListenerForest_C_StopAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WildlifeListenerForest.WildlifeListenerForest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWildlifeListenerForest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WildlifeListenerForest.WildlifeListenerForest_C.UserConstructionScript");

	AWildlifeListenerForest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WildlifeListenerForest.WildlifeListenerForest_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AWildlifeListenerForest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WildlifeListenerForest.WildlifeListenerForest_C.ReceiveBeginPlay");

	AWildlifeListenerForest_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WildlifeListenerForest.WildlifeListenerForest_C.weatherChanged
// (BlueprintCallable, BlueprintEvent)

void AWildlifeListenerForest_C::weatherChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WildlifeListenerForest.WildlifeListenerForest_C.weatherChanged");

	AWildlifeListenerForest_C_weatherChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WildlifeListenerForest.WildlifeListenerForest_C.Every5Mins
// (BlueprintCallable, BlueprintEvent)

void AWildlifeListenerForest_C::Every5Mins()
{
	static auto fn = UObject::FindObject<UFunction>("Function WildlifeListenerForest.WildlifeListenerForest_C.Every5Mins");

	AWildlifeListenerForest_C_Every5Mins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WildlifeListenerForest.WildlifeListenerForest_C.EveryHour
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Hour                           (Parm, ZeroConstructor, IsPlainOldData)

void AWildlifeListenerForest_C::EveryHour(int Hour)
{
	static auto fn = UObject::FindObject<UFunction>("Function WildlifeListenerForest.WildlifeListenerForest_C.EveryHour");

	AWildlifeListenerForest_C_EveryHour_Params params;
	params.Hour = Hour;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WildlifeListenerForest.WildlifeListenerForest_C.ExecuteUbergraph_WildlifeListenerForest
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWildlifeListenerForest_C::ExecuteUbergraph_WildlifeListenerForest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WildlifeListenerForest.WildlifeListenerForest_C.ExecuteUbergraph_WildlifeListenerForest");

	AWildlifeListenerForest_C_ExecuteUbergraph_WildlifeListenerForest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
