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

// BlueprintGeneratedClass Interface_PairedAnimChild.Interface_PairedAnimChild_C
// 0x0000 (0x0028 - 0x0028)
class UInterface_PairedAnimChild_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interface_PairedAnimChild.Interface_PairedAnimChild_C");
		return ptr;
	}


	void ChildSetAnimationSet_Movement(TEnumAsByte<EBendAnimationSetMovement> AnimationSet, class UAnimInstance* Parent);
	void OnChildsParentStateChanged_Movement(TEnumAsByte<EBendPairedStateMovement> NewParentState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
