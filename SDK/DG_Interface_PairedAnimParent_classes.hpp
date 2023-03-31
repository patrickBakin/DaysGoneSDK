#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Interface_PairedAnimParent.Interface_PairedAnimParent_C
// 0x0000 (0x0028 - 0x0028)
class UInterface_PairedAnimParent_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interface_PairedAnimParent.Interface_PairedAnimParent_C");
		return ptr;
	}


	void IsParentFullyEngagedWithChild(bool* IsEngaged);
	void ParentDisengageFromChild();
	void ParentEngageWithChild_Movement(class UAnimInstance* Child, TEnumAsByte<EBendAnimationSetMovement> ParentAnimationSet, TEnumAsByte<EBendAnimationSetMovement> ChildAnimationSet);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
