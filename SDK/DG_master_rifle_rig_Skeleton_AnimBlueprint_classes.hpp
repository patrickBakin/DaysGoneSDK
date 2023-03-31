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

// AnimBlueprintGeneratedClass master_rifle_rig_Skeleton_AnimBlueprint.master_rifle_rig_Skeleton_AnimBlueprint_C
// 0x0138 (0x05D8 - 0x04A0)
class Umaster_rifle_rig_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6DC40027492602E6DD776C8985F28D6B;      // 0x04A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_99E76B1C4D97ADC3B5954188C63E0381;      // 0x04F0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_479794B745214AE9C8310BA265E79D4D;// 0x0550(0x0088)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass master_rifle_rig_Skeleton_AnimBlueprint.master_rifle_rig_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_master_rifle_rig_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
