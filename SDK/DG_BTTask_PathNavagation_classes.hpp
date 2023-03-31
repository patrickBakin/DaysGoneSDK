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

// BlueprintGeneratedClass BTTask_PathNavagation.BTTask_PathNavagation_C
// 0x0018 (0x00B8 - 0x00A0)
class UBTTask_PathNavagation_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Acceptable_Radius;                                        // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	class ABendHumanController*                        Controller;                                               // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTTask_PathNavagation.BTTask_PathNavagation_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void Waypoint_Reached(class ABendAIWaypoint* Waypoint, int Index, bool SequenceFinished);
	void Leave_POI(class ABendPOI* CompletedPOI, class ABendAIController* User);
	void ReceiveAbort(class AActor** OwnerActor);
	void ExecuteUbergraph_BTTask_PathNavagation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
