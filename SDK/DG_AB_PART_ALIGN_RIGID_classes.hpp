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

// AnimBlueprintGeneratedClass AB_PART_ALIGN_RIGID.AB_PART_ALIGN_RIGID_C
// 0x0050 (0x04F0 - 0x04A0)
class UAB_PART_ALIGN_RIGID_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4E7212BA4DB1386CC6A95A90C57450E7;      // 0x04A8(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_PART_ALIGN_RIGID.AB_PART_ALIGN_RIGID_C");
		return ptr;
	}


	void ExecuteUbergraph_AB_PART_ALIGN_RIGID(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
