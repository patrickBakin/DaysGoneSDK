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

// BlueprintGeneratedClass AnimState_EdgeTraversal.AnimState_EdgeTraversal_C
// 0x0018 (0x00C8 - 0x00B0)
class UAnimState_EdgeTraversal_C : public UBendAnimState_Base
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABendPawn*                                   BendPawn;                                                 // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LastCollisionProfileName;                                 // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimState_EdgeTraversal.AnimState_EdgeTraversal_C");
		return ptr;
	}


	void OnEnterState();
	void OnExitState();
	void ExecuteUbergraph_AnimState_EdgeTraversal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
