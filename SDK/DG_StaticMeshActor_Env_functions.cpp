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

// Function StaticMeshActor_Env.StaticMeshActor_Env_C.RequestSMPReplacement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AStaticMeshActor_Env_C::RequestSMPReplacement()
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshActor_Env.StaticMeshActor_Env_C.RequestSMPReplacement");

	AStaticMeshActor_Env_C_RequestSMPReplacement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StaticMeshActor_Env.StaticMeshActor_Env_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStaticMeshActor_Env_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshActor_Env.StaticMeshActor_Env_C.UserConstructionScript");

	AStaticMeshActor_Env_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
