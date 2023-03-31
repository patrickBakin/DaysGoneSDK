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

// BlueprintGeneratedClass BTTask_Crow_FlyToPerch.BTTask_Crow_FlyToPerch_C
// 0x0018 (0x00B8 - 0x00A0)
class UBTTask_Crow_FlyToPerch_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<EPerchType>                            MinimumPerchType;                                         // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	class ABendFlyingAnimalPawn*                       Pawn;                                                     // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_Crow_FlyToPerch.BTTask_Crow_FlyToPerch_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void OnMoveToPerchComplete();
	void ExecuteUbergraph_BTTask_Crow_FlyToPerch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
