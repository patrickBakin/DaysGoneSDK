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

// Function Bend_BulletImpact_Pistol.Bend_BulletImpact_Pistol_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_BulletImpact_Pistol_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_BulletImpact_Pistol.Bend_BulletImpact_Pistol_C.UserConstructionScript");

	ABend_BulletImpact_Pistol_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
