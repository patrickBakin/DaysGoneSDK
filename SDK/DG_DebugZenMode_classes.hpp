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

// BlueprintGeneratedClass DebugZenMode.DebugZenMode_C
// 0x0034 (0x037C - 0x0348)
class ADebugZenMode_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow1;                                                   // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ZenMode;                                                  // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	float                                              SpeedMultiplier;                                          // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElapsedTimeAtFullSpeed;                                   // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverTimeSpeedMultiplier;                                  // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverTimeMultiplierSleeptime;                              // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeftShoulderDown;                                         // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightShoulderDown;                                        // 0x0371(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0372(0x0002) MISSED OFFSET
	float                                              SpeedMultiplierDefault;                                   // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpeedMultiplier;                                       // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DebugZenMode.DebugZenMode_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_16(const struct FKey& Key);
	void InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_15(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftTrigger_UniqueObjectNameForCooking_14(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftTrigger_UniqueObjectNameForCooking_13(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Top_UniqueObjectNameForCooking_12(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Bottom_UniqueObjectNameForCooking_11(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Bottom_UniqueObjectNameForCooking_10(const struct FKey& Key);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void DisableZenMode();
	void ExecuteUbergraph_DebugZenMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
