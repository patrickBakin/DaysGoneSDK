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

// BlueprintGeneratedClass Debug_Controls.Debug_Controls_C
// 0x0060 (0x03A8 - 0x0348)
class ADebug_Controls_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugTimeScaleOn;                                        // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	int                                                TimeScaleInput_DID;                                       // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHUD_DebugMissionLoader_C*                   MissionLoaderWidget;                                      // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHUD_DebugJobLoader_C*                       JobLoaderWidget;                                          // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UHUD_DebugDemoLoader_C*                      DemoLoaderWidget;                                         // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                U_Key_DID;                                                // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                I_Key_DID;                                                // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugFreezeTime;                                          // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0381(0x0007) MISSED OFFSET
	struct FString                                     HiddenArgument;                                           // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     InvulnerableArgument;                                     // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Debug_Controls.Debug_Controls_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_Debug_ScreenShotInput_UniqueObjectNameForCooking_200(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftShoulder_UniqueObjectNameForCooking_199(const struct FKey& Key);
	void InpActEvt_Gamepad_RightShoulder_UniqueObjectNameForCooking_198(const struct FKey& Key);
	void InpActEvt_Ctrl_Shift_Home_UniqueObjectNameForCooking_197(const struct FKey& Key);
	void InpActEvt_Ctrl_Shift_PageUp_UniqueObjectNameForCooking_196(const struct FKey& Key);
	void InpActEvt_Ctrl_Shift_B_UniqueObjectNameForCooking_195(const struct FKey& Key);
	void InpActEvt_Ctrl_Shift_M_UniqueObjectNameForCooking_194(const struct FKey& Key);
	void InpActEvt_Ctrl_Period_UniqueObjectNameForCooking_193(const struct FKey& Key);
	void InpActEvt_Ctrl_Hyphen_UniqueObjectNameForCooking_192(const struct FKey& Key);
	void InpActEvt_Ctrl_Zero_UniqueObjectNameForCooking_191(const struct FKey& Key);
	void InpActEvt_Ctrl_Quote_UniqueObjectNameForCooking_190(const struct FKey& Key);
	void InpActEvt_Ctrl_Add_UniqueObjectNameForCooking_189(const struct FKey& Key);
	void InpActEvt_Ctrl_Shift_K_UniqueObjectNameForCooking_188(const struct FKey& Key);
	void InpActEvt_Debug_ScreenShotInput_UniqueObjectNameForCooking_187(const struct FKey& Key);
	void InpActEvt_Debug_TimeScaleInput_UniqueObjectNameForCooking_186(const struct FKey& Key);
	void InpActEvt_Ctrl_Shift_N_UniqueObjectNameForCooking_185(const struct FKey& Key);
	void InpActEvt_Ctrl_RightBracket_UniqueObjectNameForCooking_184(const struct FKey& Key);
	void InpActEvt_Ctrl_LeftBracket_UniqueObjectNameForCooking_183(const struct FKey& Key);
	void InpActEvt_Ctrl_Slash_UniqueObjectNameForCooking_182(const struct FKey& Key);
	void InpActEvt_Ctrl_Equals_UniqueObjectNameForCooking_181(const struct FKey& Key);
	void InpActEvt_Ctrl_Backslash_UniqueObjectNameForCooking_180(const struct FKey& Key);
	void InpActEvt_Ctrl_Shift_P_UniqueObjectNameForCooking_179(const struct FKey& Key);
	void InpActEvt_Add_UniqueObjectNameForCooking_178(const struct FKey& Key);
	void InpActEvt_NumPadZero_UniqueObjectNameForCooking_177(const struct FKey& Key);
	void InpActEvt_NumPadOne_UniqueObjectNameForCooking_176(const struct FKey& Key);
	void InpActEvt_NumPadTwo_UniqueObjectNameForCooking_175(const struct FKey& Key);
	void InpActEvt_NumPadThree_UniqueObjectNameForCooking_174(const struct FKey& Key);
	void InpActEvt_NumPadFour_UniqueObjectNameForCooking_173(const struct FKey& Key);
	void InpActEvt_NumPadFive_UniqueObjectNameForCooking_172(const struct FKey& Key);
	void InpActEvt_NumPadSix_UniqueObjectNameForCooking_171(const struct FKey& Key);
	void InpActEvt_NumPadSeven_UniqueObjectNameForCooking_170(const struct FKey& Key);
	void InpActEvt_NumPadEight_UniqueObjectNameForCooking_169(const struct FKey& Key);
	void InpActEvt_NumPadNine_UniqueObjectNameForCooking_168(const struct FKey& Key);
	void InpActEvt_Decimal_UniqueObjectNameForCooking_167(const struct FKey& Key);
	void InpActEvt_Ctrl_Shift_Multiply_UniqueObjectNameForCooking_166(const struct FKey& Key);
	void InpActEvt_Ctrl_Shift_L_UniqueObjectNameForCooking_165(const struct FKey& Key);
	void InpActEvt_Ctrl_Shift_V_UniqueObjectNameForCooking_164(const struct FKey& Key);
	void InpActEvt_Ctrl_Shift_U_UniqueObjectNameForCooking_163(const struct FKey& Key);
	void InpActEvt_Ctrl_Shift_I_UniqueObjectNameForCooking_162(const struct FKey& Key);
	void InpActEvt_Ctrl_Shift_I_UniqueObjectNameForCooking_161(const struct FKey& Key);
	void InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_160(const struct FKey& Key);
	void InpActEvt_Ctrl_Shift_Semicolon_UniqueObjectNameForCooking_159(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveActorOnInputEnabled();
	void ReceiveActorOnInputDisabled();
	void ExecuteUbergraph_Debug_Controls(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
