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

// BlueprintGeneratedClass BP_DebugGammaCalibration.BP_DebugGammaCalibration_C
// 0x0A24 (0x0D6C - 0x0348)
class ABP_DebugGammaCalibration_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APostProcessVolume*                          GammaPostProcess;                                         // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0361(0x000F) MISSED OFFSET
	struct FPostProcessSettings                        RevertPostProcessSettings;                                // 0x0370(0x0960) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UWidgetBlueprint_GammaCalibration_C*         GammaHUDDisplay;                                          // 0x0CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HUDMaterialInstance;                                      // 0x0CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MenuInstructionsDisplayed;                                // 0x0CE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0CE1(0x0003) MISSED OFFSET
	int                                                TimeDilationID;                                           // 0x0CE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKey                                        GamepadFaceButtonBottom;                                  // 0x0CE8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        GamepadFaceButtonRight;                                   // 0x0D00(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        GamepadD_PadLeft;                                         // 0x0D18(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        GamepadD_PadRight;                                        // 0x0D30(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FKey                                        LeftAnalogX_Axis;                                         // 0x0D48(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                FPS;                                                      // 0x0D60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FrameTime;                                                // 0x0D64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentAccumulatedFrameTime;                              // 0x0D68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DebugGammaCalibration.BP_DebugGammaCalibration_C");
		return ptr;
	}


	void DisableInstructions();
	void SetUIGammaToMatch(const struct FVector& Gamma);
	void DeactivateMenu();
	void ActivateMenu();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_DebugGammaCalibration(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
