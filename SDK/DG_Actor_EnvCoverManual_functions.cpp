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

// Function Actor_EnvCoverManual.Actor_EnvCoverManual_C.AddChildCover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendCoverChildComponent* coverVolume                    (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  coverClass                     (Parm, ZeroConstructor, IsPlainOldData)

void AActor_EnvCoverManual_C::AddChildCover(class UBendCoverChildComponent* coverVolume, class UClass* coverClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Actor_EnvCoverManual.Actor_EnvCoverManual_C.AddChildCover");

	AActor_EnvCoverManual_C_AddChildCover_Params params;
	params.coverVolume = coverVolume;
	params.coverClass = coverClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Actor_EnvCoverManual.Actor_EnvCoverManual_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AActor_EnvCoverManual_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Actor_EnvCoverManual.Actor_EnvCoverManual_C.UserConstructionScript");

	AActor_EnvCoverManual_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
