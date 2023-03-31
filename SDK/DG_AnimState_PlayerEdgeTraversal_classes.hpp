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

// BlueprintGeneratedClass AnimState_PlayerEdgeTraversal.AnimState_PlayerEdgeTraversal_C
// 0x0018 (0x00C8 - 0x00B0)
class UAnimState_PlayerEdgeTraversal_C : public UBendAnimState_Base
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABendPawn*                                   BendPawn;                                                 // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LastCollisionName;                                        // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimState_PlayerEdgeTraversal.AnimState_PlayerEdgeTraversal_C");
		return ptr;
	}


	void OnEnterState();
	void OnExitState();
	void OnStateTimerEvent();
	void ExecuteUbergraph_AnimState_PlayerEdgeTraversal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
