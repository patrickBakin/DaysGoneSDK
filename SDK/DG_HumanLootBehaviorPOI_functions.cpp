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

// Function HumanLootBehaviorPOI.HumanLootBehaviorPOI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHumanLootBehaviorPOI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanLootBehaviorPOI.HumanLootBehaviorPOI_C.UserConstructionScript");

	AHumanLootBehaviorPOI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanLootBehaviorPOI.HumanLootBehaviorPOI_C.OnGetPriority
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         defaultPriority                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EePOIUserType>*    userType                       (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            User                           (Parm, ZeroConstructor, IsPlainOldData)

void AHumanLootBehaviorPOI_C::OnGetPriority(float* defaultPriority, TEnumAsByte<EePOIUserType>* userType, class AController** User)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanLootBehaviorPOI.HumanLootBehaviorPOI_C.OnGetPriority");

	AHumanLootBehaviorPOI_C_OnGetPriority_Params params;
	params.defaultPriority = defaultPriority;
	params.userType = userType;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HumanLootBehaviorPOI.HumanLootBehaviorPOI_C.ExecuteUbergraph_HumanLootBehaviorPOI
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AHumanLootBehaviorPOI_C::ExecuteUbergraph_HumanLootBehaviorPOI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HumanLootBehaviorPOI.HumanLootBehaviorPOI_C.ExecuteUbergraph_HumanLootBehaviorPOI");

	AHumanLootBehaviorPOI_C_ExecuteUbergraph_HumanLootBehaviorPOI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
