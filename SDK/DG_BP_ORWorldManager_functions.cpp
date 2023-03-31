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

// Function BP_ORWorldManager.BP_ORWorldManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ORWorldManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ORWorldManager.BP_ORWorldManager_C.UserConstructionScript");

	ABP_ORWorldManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ORWorldManager.BP_ORWorldManager_C.Sun_Tints__FinishedFunc
// (BlueprintEvent)

void ABP_ORWorldManager_C::Sun_Tints__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ORWorldManager.BP_ORWorldManager_C.Sun_Tints__FinishedFunc");

	ABP_ORWorldManager_C_Sun_Tints__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ORWorldManager.BP_ORWorldManager_C.Sun_Tints__UpdateFunc
// (BlueprintEvent)

void ABP_ORWorldManager_C::Sun_Tints__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ORWorldManager.BP_ORWorldManager_C.Sun_Tints__UpdateFunc");

	ABP_ORWorldManager_C_Sun_Tints__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ORWorldManager.BP_ORWorldManager_C.Atmospheric_Fog__FinishedFunc
// (BlueprintEvent)

void ABP_ORWorldManager_C::Atmospheric_Fog__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ORWorldManager.BP_ORWorldManager_C.Atmospheric_Fog__FinishedFunc");

	ABP_ORWorldManager_C_Atmospheric_Fog__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ORWorldManager.BP_ORWorldManager_C.Atmospheric_Fog__UpdateFunc
// (BlueprintEvent)

void ABP_ORWorldManager_C::Atmospheric_Fog__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ORWorldManager.BP_ORWorldManager_C.Atmospheric_Fog__UpdateFunc");

	ABP_ORWorldManager_C_Atmospheric_Fog__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ORWorldManager.BP_ORWorldManager_C.TOD_Post_Weight__FinishedFunc
// (BlueprintEvent)

void ABP_ORWorldManager_C::TOD_Post_Weight__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ORWorldManager.BP_ORWorldManager_C.TOD_Post_Weight__FinishedFunc");

	ABP_ORWorldManager_C_TOD_Post_Weight__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ORWorldManager.BP_ORWorldManager_C.TOD_Post_Weight__UpdateFunc
// (BlueprintEvent)

void ABP_ORWorldManager_C::TOD_Post_Weight__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ORWorldManager.BP_ORWorldManager_C.TOD_Post_Weight__UpdateFunc");

	ABP_ORWorldManager_C_TOD_Post_Weight__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ORWorldManager.BP_ORWorldManager_C.Sun_Moon_Intensity__FinishedFunc
// (BlueprintEvent)

void ABP_ORWorldManager_C::Sun_Moon_Intensity__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ORWorldManager.BP_ORWorldManager_C.Sun_Moon_Intensity__FinishedFunc");

	ABP_ORWorldManager_C_Sun_Moon_Intensity__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ORWorldManager.BP_ORWorldManager_C.Sun_Moon_Intensity__UpdateFunc
// (BlueprintEvent)

void ABP_ORWorldManager_C::Sun_Moon_Intensity__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ORWorldManager.BP_ORWorldManager_C.Sun_Moon_Intensity__UpdateFunc");

	ABP_ORWorldManager_C_Sun_Moon_Intensity__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ORWorldManager.BP_ORWorldManager_C.Update ORWorldManager
// (BlueprintCallable, BlueprintEvent)

void ABP_ORWorldManager_C::Update_ORWorldManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ORWorldManager.BP_ORWorldManager_C.Update ORWorldManager");

	ABP_ORWorldManager_C_Update_ORWorldManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ORWorldManager.BP_ORWorldManager_C.Cinematic_Start
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_ORWorldManager_C::Cinematic_Start(const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ORWorldManager.BP_ORWorldManager_C.Cinematic_Start");

	ABP_ORWorldManager_C_Cinematic_Start_Params params;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ORWorldManager.BP_ORWorldManager_C.Cinematic_End
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_ORWorldManager_C::Cinematic_End(const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ORWorldManager.BP_ORWorldManager_C.Cinematic_End");

	ABP_ORWorldManager_C_Cinematic_End_Params params;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ORWorldManager.BP_ORWorldManager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_ORWorldManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ORWorldManager.BP_ORWorldManager_C.ReceiveBeginPlay");

	ABP_ORWorldManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ORWorldManager.BP_ORWorldManager_C.ExecuteUbergraph_BP_ORWorldManager
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ORWorldManager_C::ExecuteUbergraph_BP_ORWorldManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ORWorldManager.BP_ORWorldManager_C.ExecuteUbergraph_BP_ORWorldManager");

	ABP_ORWorldManager_C_ExecuteUbergraph_BP_ORWorldManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
