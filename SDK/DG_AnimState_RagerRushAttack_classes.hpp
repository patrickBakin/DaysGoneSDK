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

// BlueprintGeneratedClass AnimState_RagerRushAttack.AnimState_RagerRushAttack_C
// 0x0008 (0x00B8 - 0x00B0)
class UAnimState_RagerRushAttack_C : public UBendAnimState_Base
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimState_RagerRushAttack.AnimState_RagerRushAttack_C");
		return ptr;
	}


	void OnEnterState();
	void ExecuteUbergraph_AnimState_RagerRushAttack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
