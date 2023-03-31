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

// BlueprintGeneratedClass AnimalAnimState_EdgeTraversal.AnimalAnimState_EdgeTraversal_C
// 0x0008 (0x00D0 - 0x00C8)
class UAnimalAnimState_EdgeTraversal_C : public UAnimState_EdgeTraversal_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimalAnimState_EdgeTraversal.AnimalAnimState_EdgeTraversal_C");
		return ptr;
	}


	void OnEnterState();
	void OnExitState();
	void ExecuteUbergraph_AnimalAnimState_EdgeTraversal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
