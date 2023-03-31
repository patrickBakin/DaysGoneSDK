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

// Function Bend_BulletImpact_Assault.Bend_BulletImpact_Assault_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_BulletImpact_Assault_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletImpact_Assault.Bend_BulletImpact_Assault_C.UserConstructionScript");

	ABend_BulletImpact_Assault_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_BulletImpact_Assault.Bend_BulletImpact_Assault_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABend_BulletImpact_Assault_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletImpact_Assault.Bend_BulletImpact_Assault_C.Timeline_0__FinishedFunc");

	ABend_BulletImpact_Assault_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_BulletImpact_Assault.Bend_BulletImpact_Assault_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABend_BulletImpact_Assault_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletImpact_Assault.Bend_BulletImpact_Assault_C.Timeline_0__UpdateFunc");

	ABend_BulletImpact_Assault_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_BulletImpact_Assault.Bend_BulletImpact_Assault_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABend_BulletImpact_Assault_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletImpact_Assault.Bend_BulletImpact_Assault_C.Timeline_1__FinishedFunc");

	ABend_BulletImpact_Assault_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_BulletImpact_Assault.Bend_BulletImpact_Assault_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABend_BulletImpact_Assault_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletImpact_Assault.Bend_BulletImpact_Assault_C.Timeline_1__UpdateFunc");

	ABend_BulletImpact_Assault_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_BulletImpact_Assault.Bend_BulletImpact_Assault_C.BndEvt__ParticleComponent_K2Node_ComponentBoundEvent_113_ParticleCollisionSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ParticleTime                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Normal                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void ABend_BulletImpact_Assault_C::BndEvt__ParticleComponent_K2Node_ComponentBoundEvent_113_ParticleCollisionSignature__DelegateSignature(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletImpact_Assault.Bend_BulletImpact_Assault_C.BndEvt__ParticleComponent_K2Node_ComponentBoundEvent_113_ParticleCollisionSignature__DelegateSignature");

	ABend_BulletImpact_Assault_C_BndEvt__ParticleComponent_K2Node_ComponentBoundEvent_113_ParticleCollisionSignature__DelegateSignature_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;
	params.Normal = Normal;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_BulletImpact_Assault.Bend_BulletImpact_Assault_C.ExecuteUbergraph_Bend_BulletImpact_Assault
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_BulletImpact_Assault_C::ExecuteUbergraph_Bend_BulletImpact_Assault(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletImpact_Assault.Bend_BulletImpact_Assault_C.ExecuteUbergraph_Bend_BulletImpact_Assault");

	ABend_BulletImpact_Assault_C_ExecuteUbergraph_Bend_BulletImpact_Assault_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
