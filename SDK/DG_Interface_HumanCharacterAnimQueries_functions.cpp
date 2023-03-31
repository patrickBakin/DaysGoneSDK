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

// Function Interface_HumanCharacterAnimQueries.Interface_HumanCharacterAnimQueries_C.GetAnimSet_Character
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECharacterAnimSetEnum> AnimSet                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_HumanCharacterAnimQueries_C::GetAnimSet_Character(TEnumAsByte<ECharacterAnimSetEnum>* AnimSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_HumanCharacterAnimQueries.Interface_HumanCharacterAnimQueries_C.GetAnimSet_Character");

	UInterface_HumanCharacterAnimQueries_C_GetAnimSet_Character_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimSet != nullptr)
		*AnimSet = params.AnimSet;
}


// Function Interface_HumanCharacterAnimQueries.Interface_HumanCharacterAnimQueries_C.GetAnimSet_RideVehicle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_AnimSet_RideVehicle> AnimSet                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_HumanCharacterAnimQueries_C::GetAnimSet_RideVehicle(TEnumAsByte<Enum_AnimSet_RideVehicle>* AnimSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_HumanCharacterAnimQueries.Interface_HumanCharacterAnimQueries_C.GetAnimSet_RideVehicle");

	UInterface_HumanCharacterAnimQueries_C_GetAnimSet_RideVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimSet != nullptr)
		*AnimSet = params.AnimSet;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
