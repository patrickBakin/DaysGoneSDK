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

// BlueprintGeneratedClass BTService_Deer_Scared.BTService_Deer_Scared_C
// 0x0010 (0x00A8 - 0x0098)
class UBTService_Deer_Scared_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              BaseRunSpeed;                                             // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunSpeedModifier;                                         // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTService_Deer_Scared.BTService_Deer_Scared_C");
		return ptr;
	}


	void ReceiveActivationAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ReceiveDeactivationAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_BTService_Deer_Scared(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
