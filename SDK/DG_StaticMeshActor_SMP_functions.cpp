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

// Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.switchToInteriorEdges
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AStaticMeshActor_SMP_C::switchToInteriorEdges()
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.switchToInteriorEdges");

	AStaticMeshActor_SMP_C_switchToInteriorEdges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.respawnSelf
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AStaticMeshActor_SMP_C::respawnSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.respawnSelf");

	AStaticMeshActor_SMP_C_respawnSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.levelValidityTest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           currentLevelValid              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 outputLevel                    (Parm, OutParm, ZeroConstructor)

void AStaticMeshActor_SMP_C::levelValidityTest(bool* currentLevelValid, struct FString* outputLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.levelValidityTest");

	AStaticMeshActor_SMP_C_levelValidityTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (currentLevelValid != nullptr)
		*currentLevelValid = params.currentLevelValid;
	if (outputLevel != nullptr)
		*outputLevel = params.outputLevel;
}


// Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.fullReconstruction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AStaticMeshActor_SMP_C::fullReconstruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.fullReconstruction");

	AStaticMeshActor_SMP_C_fullReconstruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.constructOuterLevelString
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 containingLevel                (Parm, OutParm, ZeroConstructor)

void AStaticMeshActor_SMP_C::constructOuterLevelString(struct FString* containingLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.constructOuterLevelString");

	AStaticMeshActor_SMP_C_constructOuterLevelString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (containingLevel != nullptr)
		*containingLevel = params.containingLevel;
}


// Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.checkForErrors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AStaticMeshActor_SMP_C::checkForErrors()
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.checkForErrors");

	AStaticMeshActor_SMP_C_checkForErrors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.controlDestMeshes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AStaticMeshActor_SMP_C::controlDestMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.controlDestMeshes");

	AStaticMeshActor_SMP_C_controlDestMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStaticMeshActor_SMP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.UserConstructionScript");

	AStaticMeshActor_SMP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.Respawn.
// (BlueprintCallable, BlueprintEvent)

void AStaticMeshActor_SMP_C::Respawn_()
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.Respawn.");

	AStaticMeshActor_SMP_C_Respawn__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.ExecuteUbergraph_StaticMeshActor_SMP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStaticMeshActor_SMP_C::ExecuteUbergraph_StaticMeshActor_SMP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshActor_SMP.StaticMeshActor_SMP_C.ExecuteUbergraph_StaticMeshActor_SMP");

	AStaticMeshActor_SMP_C_ExecuteUbergraph_StaticMeshActor_SMP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
