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

// AnimBlueprintGeneratedClass AB_rifle_master.AB_rifle_master_C
// 0x0138 (0x05D8 - 0x04A0)
class UAB_rifle_master_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9890A8E34C4615DE1FD1269096D0E6F3;      // 0x04A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A7DA65FE402CCAF9DB93FEAA3C1F5C6B;      // 0x04F0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4CC7149F4552D041BBD63891D3874F61;// 0x0550(0x0088)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_rifle_master.AB_rifle_master_C");
		return ptr;
	}


	void ExecuteUbergraph_AB_rifle_master(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
