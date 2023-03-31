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

// Function BendSpherePlayerDetector.BendSpherePlayerDetector_C.Set Sphere Radius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          New_Radius                     (Parm, ZeroConstructor, IsPlainOldData)

void ABendSpherePlayerDetector_C::Set_Sphere_Radius(float New_Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendSpherePlayerDetector.BendSpherePlayerDetector_C.Set Sphere Radius");

	ABendSpherePlayerDetector_C_Set_Sphere_Radius_Params params;
	params.New_Radius = New_Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendSpherePlayerDetector.BendSpherePlayerDetector_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABendSpherePlayerDetector_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendSpherePlayerDetector.BendSpherePlayerDetector_C.UserConstructionScript");

	ABendSpherePlayerDetector_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendSpherePlayerDetector.BendSpherePlayerDetector_C.BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_488_BeginOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABendSpherePlayerDetector_C::BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_488_BeginOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendSpherePlayerDetector.BendSpherePlayerDetector_C.BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_488_BeginOverlapSig__DelegateSignature");

	ABendSpherePlayerDetector_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_488_BeginOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendSpherePlayerDetector.BendSpherePlayerDetector_C.BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_490_EndOverlapSig__DelegateSignature
// (BlueprintEvent)

void ABendSpherePlayerDetector_C::BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_490_EndOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendSpherePlayerDetector.BendSpherePlayerDetector_C.BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_490_EndOverlapSig__DelegateSignature");

	ABendSpherePlayerDetector_C_BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_490_EndOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendSpherePlayerDetector.BendSpherePlayerDetector_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABendSpherePlayerDetector_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendSpherePlayerDetector.BendSpherePlayerDetector_C.ReceiveBeginPlay");

	ABendSpherePlayerDetector_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendSpherePlayerDetector.BendSpherePlayerDetector_C.ExecuteUbergraph_BendSpherePlayerDetector
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABendSpherePlayerDetector_C::ExecuteUbergraph_BendSpherePlayerDetector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendSpherePlayerDetector.BendSpherePlayerDetector_C.ExecuteUbergraph_BendSpherePlayerDetector");

	ABendSpherePlayerDetector_C_ExecuteUbergraph_BendSpherePlayerDetector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendSpherePlayerDetector.BendSpherePlayerDetector_C.PlayerEndOverlap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABendSpherePlayerDetector_C::PlayerEndOverlap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendSpherePlayerDetector.BendSpherePlayerDetector_C.PlayerEndOverlap__DelegateSignature");

	ABendSpherePlayerDetector_C_PlayerEndOverlap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendSpherePlayerDetector.BendSpherePlayerDetector_C.PlayerBeginOverlap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABendSpherePlayerDetector_C::PlayerBeginOverlap__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendSpherePlayerDetector.BendSpherePlayerDetector_C.PlayerBeginOverlap__DelegateSignature");

	ABendSpherePlayerDetector_C_PlayerBeginOverlap__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
