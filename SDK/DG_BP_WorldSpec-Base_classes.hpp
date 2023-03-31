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

// BlueprintGeneratedClass BP_WorldSpec-Base.BP_WorldSpec-Base_C
// 0x0209 (0x0899 - 0x0690)
class ABP_WorldSpec_Base_C : public ABendWorldSpec
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0690(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BaseAtmosphericFogVals_TOD_FogDensityColor_CCD917C54DB131C11AC2C2AAA1D470D6;// 0x06A0(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              BaseAtmosphericFogVals_TOD_FogDistanceLinearity_CCD917C54DB131C11AC2C2AAA1D470D6;// 0x06B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseAtmosphericFogVals_TOD_AltitudeScale_CCD917C54DB131C11AC2C2AAA1D470D6;// 0x06B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseAtmosphericFogVals_TOD_DistanceScale_CCD917C54DB131C11AC2C2AAA1D470D6;// 0x06B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseAtmosphericFogVals_TOD_DensityOffset_CCD917C54DB131C11AC2C2AAA1D470D6;// 0x06BC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BaseAtmosphericFogVals_TOD__Direction_CCD917C54DB131C11AC2C2AAA1D470D6;// 0x06C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x06C1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          BaseAtmosphericFogVals~TOD;                               // 0x06C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BaseVolFogVals_TOD_AmbientColor_1784A06C4BF398BF5978FCB23497D7F3;// 0x06D0(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              BaseVolFogVals_TOD_Tree_Fog_1784A06C4BF398BF5978FCB23497D7F3;// 0x06E0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseVolFogVals_TOD_HeightFalloff_1784A06C4BF398BF5978FCB23497D7F3;// 0x06E4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseVolFogVals_TOD_Density_1784A06C4BF398BF5978FCB23497D7F3;// 0x06E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BaseVolFogVals_TOD__Direction_1784A06C4BF398BF5978FCB23497D7F3;// 0x06EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BaseVolFogVals~TOD;                                       // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BaseLightingVals_TOD_AmbientTint_A92FFDEB4EE94A56D1B6EE9A7EC9D77E;// 0x06F8(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BaseLightingVals_TOD_MoonColor_A92FFDEB4EE94A56D1B6EE9A7EC9D77E;// 0x0708(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BaseLightingVals_TOD_SunColor_A92FFDEB4EE94A56D1B6EE9A7EC9D77E;// 0x0718(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              BaseLightingVals_TOD_CinematicSunDirectLightIntensity_A92FFDEB4EE94A56D1B6EE9A7EC9D77E;// 0x0728(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseLightingVals_TOD_CinematicSunGlobalIntensity_A92FFDEB4EE94A56D1B6EE9A7EC9D77E;// 0x072C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseLightingVals_TOD_SunTemperature_A92FFDEB4EE94A56D1B6EE9A7EC9D77E;// 0x0730(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseLightingVals_TOD_EmissiveIntensityCurve2_A92FFDEB4EE94A56D1B6EE9A7EC9D77E;// 0x0734(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseLightingVals_TOD_EmissiveIntensityCurve1_A92FFDEB4EE94A56D1B6EE9A7EC9D77E;// 0x0738(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseLightingVals_TOD_StarfieldOpacity_A92FFDEB4EE94A56D1B6EE9A7EC9D77E;// 0x073C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseLightingVals_TOD_GIBrightness_A92FFDEB4EE94A56D1B6EE9A7EC9D77E;// 0x0740(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseLightingVals_TOD_AmbientBrightness_A92FFDEB4EE94A56D1B6EE9A7EC9D77E;// 0x0744(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseLightingVals_TOD_LocalLightsEnabled_A92FFDEB4EE94A56D1B6EE9A7EC9D77E;// 0x0748(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseLightingVals_TOD_MoonCastShadow_A92FFDEB4EE94A56D1B6EE9A7EC9D77E;// 0x074C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseLightingVals_TOD_MoonPitch_A92FFDEB4EE94A56D1B6EE9A7EC9D77E;// 0x0750(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseLightingVals_TOD_SunCastShadow_A92FFDEB4EE94A56D1B6EE9A7EC9D77E;// 0x0754(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseLightingVals_TOD_SunPitch_A92FFDEB4EE94A56D1B6EE9A7EC9D77E;// 0x0758(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BaseLightingVals_TOD__Direction_A92FFDEB4EE94A56D1B6EE9A7EC9D77E;// 0x075C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x075D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BaseLightingVals~TOD;                                     // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BaseBackCloudVals_TOD_UpperSkyColor_84E032B24925C5F003012D913AF77C02;// 0x0768(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BaseBackCloudVals_TOD_LowerSkyColor_84E032B24925C5F003012D913AF77C02;// 0x0778(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BaseBackCloudVals_TOD_SunColor_84E032B24925C5F003012D913AF77C02;// 0x0788(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              BaseBackCloudVals_TOD_CirrusOpacity_84E032B24925C5F003012D913AF77C02;// 0x0798(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseBackCloudVals_TOD_FogFalloff_84E032B24925C5F003012D913AF77C02;// 0x079C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseBackCloudVals_TOD_Density_84E032B24925C5F003012D913AF77C02;// 0x07A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BaseBackCloudVals_TOD__Direction_84E032B24925C5F003012D913AF77C02;// 0x07A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x07A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BaseBackCloudVals~TOD;                                    // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseForeCloudVals_TOD_Scrolling_Shadow_Intensity_0BDFE98E42A01864E4EA5AA92663CE7D;// 0x07B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseForeCloudVals_TOD_Scrolling_Shadow_Thickness_0BDFE98E42A01864E4EA5AA92663CE7D;// 0x07B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseForeCloudVals_TOD_Thickness_0BDFE98E42A01864E4EA5AA92663CE7D;// 0x07B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseForeCloudVals_TOD_Scattering_0BDFE98E42A01864E4EA5AA92663CE7D;// 0x07BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseForeCloudVals_TOD_FogFalloff_0BDFE98E42A01864E4EA5AA92663CE7D;// 0x07C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseForeCloudVals_TOD_Density_0BDFE98E42A01864E4EA5AA92663CE7D;// 0x07C4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BaseForeCloudVals_TOD__Direction_0BDFE98E42A01864E4EA5AA92663CE7D;// 0x07C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x07C9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          BaseForeCloudVals~TOD;                                    // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseDepthFogVals_TOD_HorizonFadeToBlackFalloff_51D9F1C44094FB674EAC81B208FDF572;// 0x07D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseDepthFogVals_TOD_HorizonFadeToBlack_51D9F1C44094FB674EAC81B208FDF572;// 0x07DC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BaseDepthFogVals_TOD__Direction_51D9F1C44094FB674EAC81B208FDF572;// 0x07E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x07E1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          BaseDepthFogVals~TOD;                                     // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BaseColorCorrectVals_TOD_ColorBalance_9A4F62904892C220EE4E5988535062E0;// 0x07F0(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              BaseColorCorrectVals_TOD_Brightness_9A4F62904892C220EE4E5988535062E0;// 0x0800(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseColorCorrectVals_TOD_Saturation_9A4F62904892C220EE4E5988535062E0;// 0x0804(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseColorCorrectVals_TOD_Contrast_9A4F62904892C220EE4E5988535062E0;// 0x0808(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseColorCorrectVals_TOD_Hue_9A4F62904892C220EE4E5988535062E0;// 0x080C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BaseColorCorrectVals_TOD__Direction_9A4F62904892C220EE4E5988535062E0;// 0x0810(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0811(0x0007) MISSED OFFSET
	class UTimelineComponent*                          BaseColorCorrectVals~TOD;                                 // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseTonemapVals_TOD_WhiteTint_440D180F467163C1EFB3EEBCCD8C1DAF;// 0x0820(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseTonemapVals_TOD_WhiteTemp_440D180F467163C1EFB3EEBCCD8C1DAF;// 0x0824(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseTonemapVals_TOD_AssumedAverageBaseColor_440D180F467163C1EFB3EEBCCD8C1DAF;// 0x0828(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseTonemapVals_TOD_MaxBrightness_440D180F467163C1EFB3EEBCCD8C1DAF;// 0x082C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseTonemapVals_TOD_MinBrightness_440D180F467163C1EFB3EEBCCD8C1DAF;// 0x0830(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseTonemapVals_TOD_BloomIntensity_440D180F467163C1EFB3EEBCCD8C1DAF;// 0x0834(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseTonemapVals_TOD_BloomThreshold_440D180F467163C1EFB3EEBCCD8C1DAF;// 0x0838(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseTonemapVals_TOD_ExposureBias_440D180F467163C1EFB3EEBCCD8C1DAF;// 0x083C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BaseTonemapVals_TOD__Direction_440D180F467163C1EFB3EEBCCD8C1DAF;// 0x0840(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0841(0x0007) MISSED OFFSET
	class UTimelineComponent*                          BaseTonemapVals~TOD;                                      // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseWeatherVals_TOD_Wetness_4A5B2A534137B87482B69887F33E0C9C;// 0x0850(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseWeatherVals_TOD_LightningProbability_4A5B2A534137B87482B69887F33E0C9C;// 0x0854(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseWeatherVals_TOD_TODSound_4A5B2A534137B87482B69887F33E0C9C;// 0x0858(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseWeatherVals_TOD_WindIntensity_4A5B2A534137B87482B69887F33E0C9C;// 0x085C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseWeatherVals_TOD_WorldBrightness_4A5B2A534137B87482B69887F33E0C9C;// 0x0860(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseWeatherVals_TOD_Visibility_4A5B2A534137B87482B69887F33E0C9C;// 0x0864(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseWeatherVals_TOD_SnowIntensity_4A5B2A534137B87482B69887F33E0C9C;// 0x0868(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseWeatherVals_TOD_RainIntensity_4A5B2A534137B87482B69887F33E0C9C;// 0x086C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseWeatherVals_TOD_CloudIntensity_4A5B2A534137B87482B69887F33E0C9C;// 0x0870(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BaseWeatherVals_TOD__Direction_4A5B2A534137B87482B69887F33E0C9C;// 0x0874(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0875(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BaseWeatherVals~TOD;                                      // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SelectionWeight;                                          // 0x0880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0884(0x0004) MISSED OFFSET
	TArray<class UTimelineComponent*>                  SubTimelines;                                             // 0x0888(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               BackgroundClouds_CirrusOpacity_UseBase;                   // 0x0898(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WorldSpec-Base.BP_WorldSpec-Base_C");
		return ptr;
	}


	void StopTimelines(TArray<class UTimelineComponent*>* Timelines);
	void SyncTimelines(float TimeOfDay, float Rate, TArray<class UTimelineComponent*>* Timelines);
	void SyncBaseTimelines(float TimeOfDay, float Rate);
	void UserConstructionScript();
	void BaseLightingVals~TOD__FinishedFunc();
	void BaseLightingVals~TOD__UpdateFunc();
	void BaseDepthFogVals~TOD__FinishedFunc();
	void BaseDepthFogVals~TOD__UpdateFunc();
	void BaseVolFogVals~TOD__FinishedFunc();
	void BaseVolFogVals~TOD__UpdateFunc();
	void BaseTonemapVals~TOD__FinishedFunc();
	void BaseTonemapVals~TOD__UpdateFunc();
	void BaseColorCorrectVals~TOD__FinishedFunc();
	void BaseColorCorrectVals~TOD__UpdateFunc();
	void BaseForeCloudVals~TOD__FinishedFunc();
	void BaseForeCloudVals~TOD__UpdateFunc();
	void BaseBackCloudVals~TOD__FinishedFunc();
	void BaseBackCloudVals~TOD__UpdateFunc();
	void BaseWeatherVals~TOD__FinishedFunc();
	void BaseWeatherVals~TOD__UpdateFunc();
	void BaseAtmosphericFogVals~TOD__FinishedFunc();
	void BaseAtmosphericFogVals~TOD__UpdateFunc();
	void ReceiveSync(float* TimeOfDay, float* Rate);
	void ReceiveStop();
	void OnLerpComplete();
	void ExecuteUbergraph_BP_WorldSpec_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
