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

// AnimBlueprintGeneratedClass AB_MG45.AB_MG45_C
// 0x0138 (0x05D8 - 0x04A0)
class UAB_MG45_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CD0B446141962FEA6EDBDE83636671AC;      // 0x04A8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7155F4C849E5057DA3953985A275D273;// 0x04F0(0x0088)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D6AC156F478104C2608C378A4B9DC8E2;      // 0x0578(0x0060)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_MG45.AB_MG45_C");
		return ptr;
	}


	void ExecuteUbergraph_AB_MG45(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
