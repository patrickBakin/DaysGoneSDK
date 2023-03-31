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

// Function FreakCrowPawn.FreakCrowPawn_C.SpawnAndSetupSearchBodyActor
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequenceBase**      AnimSequence                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      AnimSequenceCrouched           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  SubClass                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AFreakCrowPawn_C::SpawnAndSetupSearchBodyActor(class UAnimSequenceBase** AnimSequence, class UAnimSequenceBase** AnimSequenceCrouched, struct FName* SubClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function FreakCrowPawn.FreakCrowPawn_C.SpawnAndSetupSearchBodyActor");

	AFreakCrowPawn_C_SpawnAndSetupSearchBodyActor_Params params;
	params.AnimSequence = AnimSequence;
	params.AnimSequenceCrouched = AnimSequenceCrouched;
	params.SubClass = SubClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FreakCrowPawn.FreakCrowPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFreakCrowPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FreakCrowPawn.FreakCrowPawn_C.UserConstructionScript");

	AFreakCrowPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
