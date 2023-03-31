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

// Function DirectionalHit.DirectionalHit_C.HitDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          angle                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)

void UDirectionalHit_C::HitDetails(float angle, float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectionalHit.DirectionalHit_C.HitDetails");

	UDirectionalHit_C_HitDetails_Params params;
	params.angle = angle;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DirectionalHit.DirectionalHit_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDirectionalHit_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectionalHit.DirectionalHit_C.Construct");

	UDirectionalHit_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DirectionalHit.DirectionalHit_C.ExecuteUbergraph_DirectionalHit
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDirectionalHit_C::ExecuteUbergraph_DirectionalHit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectionalHit.DirectionalHit_C.ExecuteUbergraph_DirectionalHit");

	UDirectionalHit_C_ExecuteUbergraph_DirectionalHit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
