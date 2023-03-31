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

// AnimBlueprintGeneratedClass AB_wpnAK47.AB_wpnAK47_C
// 0x0149 (0x05E9 - 0x04A0)
class UAB_wpnAK47_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5B4497D74F746686BECD94A114B04FC6;      // 0x04A8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2340646F431A54416E1E0CBCBA62E58B;      // 0x04F0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_95717E7B4A608E70FA6BC68057A2506D;// 0x0550(0x0088)
	bool                                               IsFiring;                                                 // 0x05D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05D9(0x0007) MISSED OFFSET
	class ABendPawn*                                   BendPawn;                                                 // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHolstered;                                              // 0x05E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_wpnAK47.AB_wpnAK47_C");
		return ptr;
	}


	void ExecuteUbergraph_AB_wpnAK47(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
