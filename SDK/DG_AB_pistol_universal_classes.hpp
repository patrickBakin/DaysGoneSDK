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

// AnimBlueprintGeneratedClass AB_pistol_universal.AB_pistol_universal_C
// 0x0138 (0x05D8 - 0x04A0)
class UAB_pistol_universal_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0F7696AD4D61CA69028ED680E811CBC6;      // 0x04A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_93F1B47B4456080F995EF09695B72723;      // 0x04F0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1A154D0A4F134D8436E58EB825C120CB;// 0x0550(0x0088)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_pistol_universal.AB_pistol_universal_C");
		return ptr;
	}


	void ExecuteUbergraph_AB_pistol_universal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
