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

// Function Bend_WpnMelee_BaseballBat.Bend_WpnMelee_BaseballBat_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABend_WpnMelee_BaseballBat_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_BaseballBat.Bend_WpnMelee_BaseballBat_C.UserConstructionScript");

	ABend_WpnMelee_BaseballBat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_BaseballBat.Bend_WpnMelee_BaseballBat_C.OnDamaged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          OwnerIsPlayer                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         WeaponsHealthPercentage        (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnMelee_BaseballBat_C::OnDamaged(bool* OwnerIsPlayer, float* WeaponsHealthPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_BaseballBat.Bend_WpnMelee_BaseballBat_C.OnDamaged");

	ABend_WpnMelee_BaseballBat_C_OnDamaged_Params params;
	params.OwnerIsPlayer = OwnerIsPlayer;
	params.WeaponsHealthPercentage = WeaponsHealthPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bend_WpnMelee_BaseballBat.Bend_WpnMelee_BaseballBat_C.ExecuteUbergraph_Bend_WpnMelee_BaseballBat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABend_WpnMelee_BaseballBat_C::ExecuteUbergraph_Bend_WpnMelee_BaseballBat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bend_WpnMelee_BaseballBat.Bend_WpnMelee_BaseballBat_C.ExecuteUbergraph_Bend_WpnMelee_BaseballBat");

	ABend_WpnMelee_BaseballBat_C_ExecuteUbergraph_Bend_WpnMelee_BaseballBat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
