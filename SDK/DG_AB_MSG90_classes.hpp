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

// AnimBlueprintGeneratedClass AB_MSG90.AB_MSG90_C
// 0x0138 (0x05D8 - 0x04A0)
class UAB_MSG90_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_62FD6A8244361560CA2FDE959CA65FFB;      // 0x04A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_18DA9BE44B61BD6B527453BFE4089FD6;// 0x04F0(0x0088)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6203DB984FC61B4F8C1881AE63427663;      // 0x0578(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_MSG90.AB_MSG90_C");
		return ptr;
	}


	void ExecuteUbergraph_AB_MSG90(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
