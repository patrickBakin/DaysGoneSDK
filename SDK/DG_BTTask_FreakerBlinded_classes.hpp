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

// BlueprintGeneratedClass BTTask_FreakerBlinded.BTTask_FreakerBlinded_C
// 0x0048 (0x00E8 - 0x00A0)
class UBTTask_FreakerBlinded_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABendFreakerController*                      Controller;                                               // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Aborted;                                                  // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	struct FBlackboardKeySelector                      BlindedStun;                                              // 0x00B8(0x0028) (Edit, BlueprintVisible)
	class ABendPawn*                                   Pawn;                                                     // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_FreakerBlinded.BTTask_FreakerBlinded_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void PerformActionCompleteDelegate__DelegateSignature_Event();
	void PerformActionFailedDelegate__DelegateSignature_Event(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure);
	void ReceiveAbort(class AActor** OwnerActor);
	void OnTimedOut();
	void ExecuteUbergraph_BTTask_FreakerBlinded(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
