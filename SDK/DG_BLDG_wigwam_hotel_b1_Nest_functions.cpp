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

// Function BLDG_wigwam_hotel_b1_Nest.BLDG_wigwam_hotel_b1_Nest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABLDG_wigwam_hotel_b1_Nest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BLDG_wigwam_hotel_b1_Nest.BLDG_wigwam_hotel_b1_Nest_C.UserConstructionScript");

	ABLDG_wigwam_hotel_b1_Nest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLDG_wigwam_hotel_b1_Nest.BLDG_wigwam_hotel_b1_Nest_C.BndEvt__BendReverb_K2Node_ComponentBoundEvent_483_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABLDG_wigwam_hotel_b1_Nest_C::BndEvt__BendReverb_K2Node_ComponentBoundEvent_483_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BLDG_wigwam_hotel_b1_Nest.BLDG_wigwam_hotel_b1_Nest_C.BndEvt__BendReverb_K2Node_ComponentBoundEvent_483_ComponentBeginOverlapSignature__DelegateSignature");

	ABLDG_wigwam_hotel_b1_Nest_C_BndEvt__BendReverb_K2Node_ComponentBoundEvent_483_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLDG_wigwam_hotel_b1_Nest.BLDG_wigwam_hotel_b1_Nest_C.BndEvt__BendReverb_K2Node_ComponentBoundEvent_488_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABLDG_wigwam_hotel_b1_Nest_C::BndEvt__BendReverb_K2Node_ComponentBoundEvent_488_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BLDG_wigwam_hotel_b1_Nest.BLDG_wigwam_hotel_b1_Nest_C.BndEvt__BendReverb_K2Node_ComponentBoundEvent_488_ComponentEndOverlapSignature__DelegateSignature");

	ABLDG_wigwam_hotel_b1_Nest_C_BndEvt__BendReverb_K2Node_ComponentBoundEvent_488_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLDG_wigwam_hotel_b1_Nest.BLDG_wigwam_hotel_b1_Nest_C.FireGoneOut
// (BlueprintCallable, BlueprintEvent)

void ABLDG_wigwam_hotel_b1_Nest_C::FireGoneOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BLDG_wigwam_hotel_b1_Nest.BLDG_wigwam_hotel_b1_Nest_C.FireGoneOut");

	ABLDG_wigwam_hotel_b1_Nest_C_FireGoneOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLDG_wigwam_hotel_b1_Nest.BLDG_wigwam_hotel_b1_Nest_C.NestDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Nest_ID                        (Parm, ZeroConstructor)

void ABLDG_wigwam_hotel_b1_Nest_C::NestDestroyed(struct FString* Nest_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BLDG_wigwam_hotel_b1_Nest.BLDG_wigwam_hotel_b1_Nest_C.NestDestroyed");

	ABLDG_wigwam_hotel_b1_Nest_C_NestDestroyed_Params params;
	params.Nest_ID = Nest_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLDG_wigwam_hotel_b1_Nest.BLDG_wigwam_hotel_b1_Nest_C.BndEvt__Reverb Box Office_K2Node_ComponentBoundEvent_893_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABLDG_wigwam_hotel_b1_Nest_C::BndEvt__Reverb_Box_Office_K2Node_ComponentBoundEvent_893_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BLDG_wigwam_hotel_b1_Nest.BLDG_wigwam_hotel_b1_Nest_C.BndEvt__Reverb Box Office_K2Node_ComponentBoundEvent_893_ComponentBeginOverlapSignature__DelegateSignature");

	ABLDG_wigwam_hotel_b1_Nest_C_BndEvt__Reverb_Box_Office_K2Node_ComponentBoundEvent_893_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLDG_wigwam_hotel_b1_Nest.BLDG_wigwam_hotel_b1_Nest_C.BndEvt__Reverb Box Office_K2Node_ComponentBoundEvent_897_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABLDG_wigwam_hotel_b1_Nest_C::BndEvt__Reverb_Box_Office_K2Node_ComponentBoundEvent_897_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BLDG_wigwam_hotel_b1_Nest.BLDG_wigwam_hotel_b1_Nest_C.BndEvt__Reverb Box Office_K2Node_ComponentBoundEvent_897_ComponentEndOverlapSignature__DelegateSignature");

	ABLDG_wigwam_hotel_b1_Nest_C_BndEvt__Reverb_Box_Office_K2Node_ComponentBoundEvent_897_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLDG_wigwam_hotel_b1_Nest.BLDG_wigwam_hotel_b1_Nest_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABLDG_wigwam_hotel_b1_Nest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BLDG_wigwam_hotel_b1_Nest.BLDG_wigwam_hotel_b1_Nest_C.ReceiveBeginPlay");

	ABLDG_wigwam_hotel_b1_Nest_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BLDG_wigwam_hotel_b1_Nest.BLDG_wigwam_hotel_b1_Nest_C.ExecuteUbergraph_BLDG_wigwam_hotel_b1_Nest
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABLDG_wigwam_hotel_b1_Nest_C::ExecuteUbergraph_BLDG_wigwam_hotel_b1_Nest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BLDG_wigwam_hotel_b1_Nest.BLDG_wigwam_hotel_b1_Nest_C.ExecuteUbergraph_BLDG_wigwam_hotel_b1_Nest");

	ABLDG_wigwam_hotel_b1_Nest_C_ExecuteUbergraph_BLDG_wigwam_hotel_b1_Nest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
