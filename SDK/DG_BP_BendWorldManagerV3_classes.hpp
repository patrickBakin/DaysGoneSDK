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

// BlueprintGeneratedClass BP_BendWorldManagerV3.BP_BendWorldManagerV3_C
// 0x0080 (0x3AF8 - 0x3A78)
class ABP_BendWorldManagerV3_C : public ABendWorldManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x3A78(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x3A80(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              World_Brightness_WorldBrightness_1A7B314E4B90A0CFB5C6E8A010D64EA6;// 0x3A88(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    World_Brightness__Direction_1A7B314E4B90A0CFB5C6E8A010D64EA6;// 0x3A8C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x3A8D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          World_Brightness;                                         // 0x3A90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PlayerPositionSafe;                                       // 0x3A98(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LightningNow;                                             // 0x3AA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x3AA5(0x0003) MISSED OFFSET
	class ABP_Storm_C*                                 Storm;                                                    // 0x3AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UCurveVector*                                WeatherMapSnow;                                           // 0x3AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableWeatherMapDebugging;                                // 0x3AB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x3AB9(0x0003) MISSED OFFSET
	float                                              RainIntensityToSunTemperature;                            // 0x3ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainIntensityToWhiteTemperature;                          // 0x3AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainIntensityToVolumetricFog;                             // 0x3AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainIntensityToVolumetricFogHeightFalloff;                // 0x3AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RainIntensityToBloomIntensity;                            // 0x3ACC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreviousWorldTimeOfDay;                                   // 0x3AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x3AD4(0x0004) MISSED OFFSET
	class AActor*                                      GlobalWeather;                                            // 0x3AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_SP_Manager_C*                            Sky_Preset_Manager;                                       // 0x3AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class ABP_ORWorldManager_C*                        ORWorldManager;                                           // 0x3AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              RainIntensityToBrightness;                                // 0x3AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SnowIntensityToBrightness;                                // 0x3AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BendWorldManagerV3.BP_BendWorldManagerV3_C");
		return ptr;
	}


	void PlayThunderSound(const struct FVector& Location);
	void StopAllWeatherSpecs();
	void Spawn_Storm();
	void UpdateBackgroundClouds(class UObject* Weather, class ABendWorldSpec* WorldSpec);
	void UpdatePlayerPosition();
	void UpdateTimeLapse();
	void SetTimeLapse(float TimeRate, int EndWorldTimeHour);
	void UpdateLightningFlash();
	void SetLightningFlashOff();
	void SetLightningFlashOn(struct FVector* LightningCenter);
	void SetTimeOfNextLightningStrike();
	void UpdateLightning();
	void SetRandomWindGust();
	void UpdateWindGust();
	void SetTimeOfNextWindGust();
	void UpdateWind(float WeatherWindIntensity);
	void UpdateWorldSpecWeather(class ABendWorldSpec* WorldSpec);
	void UpdateWorldSpecLighting(class ABendWorldSpec* WorldSpec);
	void UpdateWorldSpec(class ABendWorldSpec* WorldSpec);
	void Sync(class ABendWorldSpec* WorldSpec);
	void GetTimeOfDayPlayRate(float* Result);
	void UserConstructionScript();
	void World_Brightness__FinishedFunc();
	void World_Brightness__UpdateFunc();
	void ReceiveStartWorldTime();
	void ReceiveInitialize();
	void ReceiveSyncTimeOfDay();
	void ReceiveBendEditorTick(float* DeltaSeconds);
	void ReceiveBendEditorStop();
	void Play_SOS_Delayed_Sound(class USoundCue* Sound, const struct FVector& Location, float Delay, TArray<struct FName> Parameters, TArray<float> Values);
	void ReceiveTickTimeOfDay(float* DeltaSeconds, bool* bDebug);
	void ExecuteUbergraph_BP_BendWorldManagerV3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
