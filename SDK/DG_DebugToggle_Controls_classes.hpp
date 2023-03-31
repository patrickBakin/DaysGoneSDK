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

// BlueprintGeneratedClass DebugToggle_Controls.DebugToggle_Controls_C
// 0x0011 (0x0359 - 0x0348)
class ADebugToggle_Controls_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugControlsActive;                                      // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DebugToggle_Controls.DebugToggle_Controls_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_DebugControls_Toggle_UniqueObjectNameForCooking_202(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveActorOnInputEnabled();
	void ReceiveActorOnInputDisabled();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_DebugToggle_Controls(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
