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

// Function MasterBuilding_v2.MasterBuilding_v2_C.BadChildrenErrorReport
// (Public, BlueprintCallable, BlueprintEvent)

void AMasterBuilding_v2_C::BadChildrenErrorReport()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_v2.MasterBuilding_v2_C.BadChildrenErrorReport");

	AMasterBuilding_v2_C_BadChildrenErrorReport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_v2.MasterBuilding_v2_C.getChildActorEdgeComponents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMasterBuilding_v2_C::getChildActorEdgeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_v2.MasterBuilding_v2_C.getChildActorEdgeComponents");

	AMasterBuilding_v2_C_getChildActorEdgeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_v2.MasterBuilding_v2_C.getcombinedLocalMeshComponentBounds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMasterBuilding_v2_C::getcombinedLocalMeshComponentBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_v2.MasterBuilding_v2_C.getcombinedLocalMeshComponentBounds");

	AMasterBuilding_v2_C_getcombinedLocalMeshComponentBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_v2.MasterBuilding_v2_C.getChildMeshComponents
// (Public, BlueprintCallable, BlueprintEvent)

void AMasterBuilding_v2_C::getChildMeshComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_v2.MasterBuilding_v2_C.getChildMeshComponents");

	AMasterBuilding_v2_C_getChildMeshComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_v2.MasterBuilding_v2_C.getCombinedLocalProxyComponentBounds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMasterBuilding_v2_C::getCombinedLocalProxyComponentBounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_v2.MasterBuilding_v2_C.getCombinedLocalProxyComponentBounds");

	AMasterBuilding_v2_C_getCombinedLocalProxyComponentBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_v2.MasterBuilding_v2_C.AddChildCover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendCoverChildComponent* coverVolume                    (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  coverClass                     (Parm, ZeroConstructor, IsPlainOldData)

void AMasterBuilding_v2_C::AddChildCover(class UBendCoverChildComponent* coverVolume, class UClass* coverClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_v2.MasterBuilding_v2_C.AddChildCover");

	AMasterBuilding_v2_C_AddChildCover_Params params;
	params.coverVolume = coverVolume;
	params.coverClass = coverClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_v2.MasterBuilding_v2_C.UpdateWeatherParticles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Rain_Intensity                 (Parm, ZeroConstructor, IsPlainOldData)

void AMasterBuilding_v2_C::UpdateWeatherParticles(float Rain_Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_v2.MasterBuilding_v2_C.UpdateWeatherParticles");

	AMasterBuilding_v2_C_UpdateWeatherParticles_Params params;
	params.Rain_Intensity = Rain_Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_v2.MasterBuilding_v2_C.WeatherInteriorUpdateEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Bool                           (Parm, ZeroConstructor, IsPlainOldData)

void AMasterBuilding_v2_C::WeatherInteriorUpdateEvents(bool Bool)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_v2.MasterBuilding_v2_C.WeatherInteriorUpdateEvents");

	AMasterBuilding_v2_C_WeatherInteriorUpdateEvents_Params params;
	params.Bool = Bool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_v2.MasterBuilding_v2_C.SetUpWindowEvents
// (Public, BlueprintCallable, BlueprintEvent)

void AMasterBuilding_v2_C::SetUpWindowEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_v2.MasterBuilding_v2_C.SetUpWindowEvents");

	AMasterBuilding_v2_C_SetUpWindowEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_v2.MasterBuilding_v2_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMasterBuilding_v2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_v2.MasterBuilding_v2_C.UserConstructionScript");

	AMasterBuilding_v2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
