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

// Function BP_Lightning2.BP_Lightning2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Lightning2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightning2.BP_Lightning2_C.UserConstructionScript");

	ABP_Lightning2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightning2.BP_Lightning2_C.BndEvt__ParticleSystem1_K2Node_ComponentBoundEvent_638_OnSystemFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* PSystem                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightning2_C::BndEvt__ParticleSystem1_K2Node_ComponentBoundEvent_638_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightning2.BP_Lightning2_C.BndEvt__ParticleSystem1_K2Node_ComponentBoundEvent_638_OnSystemFinished__DelegateSignature");

	ABP_Lightning2_C_BndEvt__ParticleSystem1_K2Node_ComponentBoundEvent_638_OnSystemFinished__DelegateSignature_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightning2.BP_Lightning2_C.ExecuteUbergraph_BP_Lightning2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightning2_C::ExecuteUbergraph_BP_Lightning2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightning2.BP_Lightning2_C.ExecuteUbergraph_BP_Lightning2");

	ABP_Lightning2_C_ExecuteUbergraph_BP_Lightning2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
