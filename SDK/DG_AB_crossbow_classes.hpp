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

// AnimBlueprintGeneratedClass AB_crossbow.AB_crossbow_C
// 0x00B0 (0x0550 - 0x04A0)
class UAB_crossbow_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8D686DD04EDFEF89CE3082995567DC5E;      // 0x04A8(0x0060)
	struct FAnimNode_Root                              AnimGraphNode_Root_F3FFDE4E4854A4B565C370B6BF62E9C2;      // 0x0508(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_crossbow.AB_crossbow_C");
		return ptr;
	}


	void ExecuteUbergraph_AB_crossbow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
