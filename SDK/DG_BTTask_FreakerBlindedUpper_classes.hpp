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

// BlueprintGeneratedClass BTTask_FreakerBlindedUpper.BTTask_FreakerBlindedUpper_C
// 0x0024 (0x00C4 - 0x00A0)
class UBTTask_FreakerBlindedUpper_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABendFreakerController*                      Controller;                                               // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Aborted;                                                  // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00B1(0x0007) MISSED OFFSET
	class ABendPawn*                                   Pawn;                                                     // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              BlindAngle;                                               // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_FreakerBlindedUpper.BTTask_FreakerBlindedUpper_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void PerformActionCompleteDelegate__DelegateSignature_Event();
	void PerformActionFailedDelegate__DelegateSignature_Event(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure);
	void ReceiveAbort(class AActor** OwnerActor);
	void ExecuteUbergraph_BTTask_FreakerBlindedUpper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
