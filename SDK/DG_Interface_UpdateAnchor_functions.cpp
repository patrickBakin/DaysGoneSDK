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

// Function Interface_UpdateAnchor.Interface_UpdateAnchor_C.UpdateAnchor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAnimNotify_UpdateAnchor_Enum_Type> UpdateAnchorType               (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_UpdateAnchor_C::UpdateAnchor(TEnumAsByte<EAnimNotify_UpdateAnchor_Enum_Type> UpdateAnchorType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_UpdateAnchor.Interface_UpdateAnchor_C.UpdateAnchor");

	UInterface_UpdateAnchor_C_UpdateAnchor_Params params;
	params.UpdateAnchorType = UpdateAnchorType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_UpdateAnchor.Interface_UpdateAnchor_C.UpdateAnchor_DodgeAttack
// (Public, BlueprintCallable, BlueprintEvent)

void UInterface_UpdateAnchor_C::UpdateAnchor_DodgeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_UpdateAnchor.Interface_UpdateAnchor_C.UpdateAnchor_DodgeAttack");

	UInterface_UpdateAnchor_C_UpdateAnchor_DodgeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
