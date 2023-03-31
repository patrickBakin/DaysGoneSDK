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

// AnimBlueprintGeneratedClass AB_PART_ALIGN.AB_PART_ALIGN_C
// 0x02B0 (0x0750 - 0x04A0)
class UAB_PART_ALIGN_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_432C4DEB4C7D06E0E916F2AE94E0C5B4;      // 0x04A8(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BAB6F58F49C8AE0EEEF33193238B283C;// 0x04F0(0x0218)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_15FAE55344FCC3B233767FB75D8CB137;// 0x0708(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_PART_ALIGN.AB_PART_ALIGN_C");
		return ptr;
	}


	void ExecuteUbergraph_AB_PART_ALIGN(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
