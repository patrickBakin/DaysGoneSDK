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

// BlueprintGeneratedClass BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C
// 0x008A (0x04A2 - 0x0418)
class ABP_Storm_Lightning_NoClouds_C : public ABP_Storm_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              LightningEventsPerMinute;                                 // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetLightningStrikeChance;                              // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              LightningEffectsFar;                                      // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              LightningEffectsNear;                                     // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              LightningEffectsTarget;                                   // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UBP_Storm_Lightning_StrikeTarget_Component_C* LightningStrikeTarget;                                    // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABP_Storm_Lightning_Effect_C*                ActiveLightningEffect;                                    // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              LastLightningDeltatime;                                   // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightningPeriodicTickDeltatime;                           // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ABP_Storm_Lightning_Effect_C*>        AvailableLightningEffectsFar;                             // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABP_Storm_Lightning_Effect_C*>        AvailableLightningEffectsNear;                            // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class ABP_Storm_Lightning_Effect_C*>        AvailableLightningEffectsTarget;                          // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               InvokedLightning;                                         // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllEffectsSpawned;                                        // 0x04A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Storm_Lightning_NoClouds.BP_Storm_Lightning_NoClouds_C");
		return ptr;
	}


	void ResetLightningEffects();
	void LightningEffectsDespawner();
	void LightningEffectsManager();
	void LightningEffectsSpawner();
	void GetStrikeTarget(class AActor** StrikeTarget);
	void TargetLightningController();
	void AmbientLightningController();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void Editor_Tick();
	void End_Storm();
	void Invoke_Lightning(class UBP_Storm_Lightning_StrikeTarget_Component_C* Lightning_Strike_Target);
	void ReceiveBeginPlay();
	void Reset_Storm();
	void ExecuteUbergraph_BP_Storm_Lightning_NoClouds(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
