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

// BlueprintGeneratedClass BendCrowdManagerBP.BendCrowdManagerBP_C
// 0x000C (0x0DCC - 0x0DC0)
class ABendCrowdManagerBP_C : public ABendCrowdManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0DC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                fNumber;                                                  // 0x0DC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendCrowdManagerBP.BendCrowdManagerBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnFocusModeToggle_Event_1(bool EnteredFocusMode);
	void OnFocusFadingFinished_Event_1();
	void ExecuteUbergraph_BendCrowdManagerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
