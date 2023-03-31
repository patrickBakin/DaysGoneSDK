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

// AnimBlueprintGeneratedClass AB_wpnDragunov.AB_wpnDragunov_C
// 0x0138 (0x05D8 - 0x04A0)
class UAB_wpnDragunov_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D24E9CB940C5C96B39C6BDA46550C894;      // 0x04A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_94F2A46A4384F0B0E01514A72CF84EC1;// 0x04F0(0x0088)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E81E17FB404A67734D5F50B970B71280;      // 0x0578(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_wpnDragunov.AB_wpnDragunov_C");
		return ptr;
	}


	void ExecuteUbergraph_AB_wpnDragunov(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
