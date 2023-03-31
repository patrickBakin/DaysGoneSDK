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

// AnimBlueprintGeneratedClass melee_general_Skeleton_AnimBlueprint.melee_general_Skeleton_AnimBlueprint_C
// 0x0138 (0x05D8 - 0x04A0)
class Umelee_general_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_BB28D1604B42B0EA448AE7BB6CEDF05F;      // 0x04A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FF83C03947745609EDC276BF8633B2C7;      // 0x04F0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_45E414C04EB854A8FB707185CCECD92A;// 0x0550(0x0088)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass melee_general_Skeleton_AnimBlueprint.melee_general_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_melee_general_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
