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

// Function Interface_PairedAnimChild.Interface_PairedAnimChild_C.ChildSetAnimationSet_Movement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBendAnimationSetMovement> AnimationSet                   (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimInstance*           Parent                         (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_PairedAnimChild_C::ChildSetAnimationSet_Movement(TEnumAsByte<EBendAnimationSetMovement> AnimationSet, class UAnimInstance* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_PairedAnimChild.Interface_PairedAnimChild_C.ChildSetAnimationSet_Movement");

	UInterface_PairedAnimChild_C_ChildSetAnimationSet_Movement_Params params;
	params.AnimationSet = AnimationSet;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_PairedAnimChild.Interface_PairedAnimChild_C.OnChildsParentStateChanged_Movement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBendPairedStateMovement> NewParentState                 (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_PairedAnimChild_C::OnChildsParentStateChanged_Movement(TEnumAsByte<EBendPairedStateMovement> NewParentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_PairedAnimChild.Interface_PairedAnimChild_C.OnChildsParentStateChanged_Movement");

	UInterface_PairedAnimChild_C_OnChildsParentStateChanged_Movement_Params params;
	params.NewParentState = NewParentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
