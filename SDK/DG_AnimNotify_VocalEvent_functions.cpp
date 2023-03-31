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

// Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.RandomVocalPainAmt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  RandByte                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimNotify_VocalEvent_C::RandomVocalPainAmt(unsigned char* RandByte)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.RandomVocalPainAmt");

	UAnimNotify_VocalEvent_C_RandomVocalPainAmt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandByte != nullptr)
		*RandByte = params.RandByte;
}


// Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.RandomVocalAttackExertAmt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  RandByte                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimNotify_VocalEvent_C::RandomVocalAttackExertAmt(unsigned char* RandByte)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.RandomVocalAttackExertAmt");

	UAnimNotify_VocalEvent_C_RandomVocalAttackExertAmt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandByte != nullptr)
		*RandByte = params.RandByte;
}


// Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.RandomVocalSniffAmt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  RandByte                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimNotify_VocalEvent_C::RandomVocalSniffAmt(unsigned char* RandByte)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.RandomVocalSniffAmt");

	UAnimNotify_VocalEvent_C_RandomVocalSniffAmt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandByte != nullptr)
		*RandByte = params.RandByte;
}


// Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.RandomVocalScreamAmt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  RandByte                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimNotify_VocalEvent_C::RandomVocalScreamAmt(unsigned char* RandByte)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.RandomVocalScreamAmt");

	UAnimNotify_VocalEvent_C_RandomVocalScreamAmt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandByte != nullptr)
		*RandByte = params.RandByte;
}


// Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.RandomVocalDeathAmt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  RandByte                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimNotify_VocalEvent_C::RandomVocalDeathAmt(unsigned char* RandByte)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.RandomVocalDeathAmt");

	UAnimNotify_VocalEvent_C_RandomVocalDeathAmt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RandByte != nullptr)
		*RandByte = params.RandByte;
}


// Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.TriggerFaceAnim
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  VocalAmt                       (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPawn*               BendPawn                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UAnimNotify_VocalEvent_C::TriggerFaceAnim(unsigned char VocalAmt, class ABendPawn** BendPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.TriggerFaceAnim");

	UAnimNotify_VocalEvent_C_TriggerFaceAnim_Params params;
	params.VocalAmt = VocalAmt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BendPawn != nullptr)
		*BendPawn = params.BendPawn;
}


// Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.RandomVocalAmount
// (Public, BlueprintCallable, BlueprintEvent)

void UAnimNotify_VocalEvent_C::RandomVocalAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.RandomVocalAmount");

	UAnimNotify_VocalEvent_C_RandomVocalAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.Received_Notify
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimNotify_VocalEvent_C::Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_VocalEvent.AnimNotify_VocalEvent_C.Received_Notify");

	UAnimNotify_VocalEvent_C_Received_Notify_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
