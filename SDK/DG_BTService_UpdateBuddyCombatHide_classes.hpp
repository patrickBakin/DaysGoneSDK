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

// BlueprintGeneratedClass BTService_UpdateBuddyCombatHide.BTService_UpdateBuddyCombatHide_C
// 0x0010 (0x00A8 - 0x0098)
class UBTService_UpdateBuddyCombatHide_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABuddyController_C*                          Controller;                                               // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTService_UpdateBuddyCombatHide.BTService_UpdateBuddyCombatHide_C");
		return ptr;
	}


	void ReceiveActivation(class AActor** OwnerActor);
	void ReceiveDeactivation(class AActor** OwnerActor);
	void ExecuteUbergraph_BTService_UpdateBuddyCombatHide(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
