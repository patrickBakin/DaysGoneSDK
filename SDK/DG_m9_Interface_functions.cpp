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

// Function m9_Interface.m9_Interface_C.IsFiring
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon_Projectile*  Gun                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFiring                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Um9_Interface_C::IsFiring(class ABendWeapon_Projectile* Gun, bool* IsFiring)
{
	static auto fn = UObject::FindObject<UFunction>("Function m9_Interface.m9_Interface_C.IsFiring");

	Um9_Interface_C_IsFiring_Params params;
	params.Gun = Gun;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFiring != nullptr)
		*IsFiring = params.IsFiring;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
