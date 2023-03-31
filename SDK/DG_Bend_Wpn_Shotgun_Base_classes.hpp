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

// BlueprintGeneratedClass Bend_Wpn_Shotgun_Base.Bend_Wpn_Shotgun_Base_C
// 0x004F (0x2B88 - 0x2B39)
class ABend_Wpn_Shotgun_Base_C : public ABend_Wpn_Gun_Base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2B39(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2B40(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               isRiding;                                                 // 0x2B48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2B49(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStartReloading;                                         // 0x2B50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              GoalLerp_Default;                                         // 0x2B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GoalInputSpeed_Default;                                   // 0x2B64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TraceRadius;                                              // 0x2B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceRadiusMultiplier;                                    // 0x2B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GoalLerp_Slow;                                            // 0x2B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GoalInputSpeed_Slow;                                      // 0x2B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GoalLerp_Normal;                                          // 0x2B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GoalInputSpeed_Normal;                                    // 0x2B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UForceFeedbackEffect*                        Fired_ForceFeedback;                                      // 0x2B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_Wpn_Shotgun_Base.Bend_Wpn_Shotgun_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnReloadStarted();
	void OnFired();
	void OnOutOfAmmo();
	void ExecuteUbergraph_Bend_Wpn_Shotgun_Base(int EntryPoint);
	void OnStartReloading__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
