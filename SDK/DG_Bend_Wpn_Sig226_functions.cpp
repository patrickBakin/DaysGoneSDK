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

// Function Bend_Wpn_Sig226.Bend_Wpn_Sig226_C.IsFiring
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon_Projectile** Gun                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFiring                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABend_Wpn_Sig226_C::IsFiring(class ABendWeapon_Projectile** Gun, bool* IsFiring)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Sig226.Bend_Wpn_Sig226_C.IsFiring");

	ABend_Wpn_Sig226_C_IsFiring_Params params;
	params.Gun = Gun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFiring != nullptr)
		*IsFiring = params.IsFiring;
}


// Function Bend_Wpn_Sig226.Bend_Wpn_Sig226_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_Wpn_Sig226_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_Wpn_Sig226.Bend_Wpn_Sig226_C.UserConstructionScript");

	ABend_Wpn_Sig226_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
