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

// Function Interface_PairedAnimParent.Interface_PairedAnimParent_C.IsParentFullyEngagedWithChild
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           IsEngaged                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_PairedAnimParent_C::IsParentFullyEngagedWithChild(bool* IsEngaged)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_PairedAnimParent.Interface_PairedAnimParent_C.IsParentFullyEngagedWithChild");

	UInterface_PairedAnimParent_C_IsParentFullyEngagedWithChild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEngaged != nullptr)
		*IsEngaged = params.IsEngaged;
}


// Function Interface_PairedAnimParent.Interface_PairedAnimParent_C.ParentDisengageFromChild
// (Public, BlueprintCallable, BlueprintEvent)

void UInterface_PairedAnimParent_C::ParentDisengageFromChild()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_PairedAnimParent.Interface_PairedAnimParent_C.ParentDisengageFromChild");

	UInterface_PairedAnimParent_C_ParentDisengageFromChild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interface_PairedAnimParent.Interface_PairedAnimParent_C.ParentEngageWithChild_Movement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*           Child                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBendAnimationSetMovement> ParentAnimationSet             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBendAnimationSetMovement> ChildAnimationSet              (Parm, ZeroConstructor, IsPlainOldData)

void UInterface_PairedAnimParent_C::ParentEngageWithChild_Movement(class UAnimInstance* Child, TEnumAsByte<EBendAnimationSetMovement> ParentAnimationSet, TEnumAsByte<EBendAnimationSetMovement> ChildAnimationSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_PairedAnimParent.Interface_PairedAnimParent_C.ParentEngageWithChild_Movement");

	UInterface_PairedAnimParent_C_ParentEngageWithChild_Movement_Params params;
	params.Child = Child;
	params.ParentAnimationSet = ParentAnimationSet;
	params.ChildAnimationSet = ChildAnimationSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
