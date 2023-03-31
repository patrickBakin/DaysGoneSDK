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

// BlueprintGeneratedClass GenericPOI.GenericPOI_C
// 0x00AD (0x04AD - 0x0400)
class AGenericPOI_C : public ABendPOI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FBendActionData                             ActionData;                                               // 0x0408(0x00A0) (Edit, BlueprintVisible)
	float                                              AutoNavSpeed;                                             // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAIMoveSpeed>                          DefaultSlotAutoNavSpeed;                                  // 0x04AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GenericPOI.GenericPOI_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnPathComplete(TEnumAsByte<EPathFollowingResult>* Result);
	void PerformActionFailedDelegate(TEnumAsByte<EPeformActionFailedReason> ReasonForFailure);
	void PerformActionCompleteDelegate();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GenericPOI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
