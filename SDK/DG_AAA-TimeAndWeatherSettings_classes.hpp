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

// BlueprintGeneratedClass AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C
// 0x0079 (0x03C1 - 0x0348)
class AAAA_TimeAndWeatherSettings_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow1;                                                   // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SavedWorldTime;                                           // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SavedWorldTimeRate;                                       // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EWeatherType>                          SavedWorldWeather;                                        // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EWeatherTransitionRateType>            SavedWorldWeatherRate;                                    // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0362(0x0002) MISSED OFFSET
	int                                                Index;                                                    // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Active;                                                   // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TimeRateActive;                                           // 0x0369(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x036A(0x0002) MISSED OFFSET
	float                                              DebugTimer;                                               // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimeAndWeatherSettings                     CurrentSettings;                                          // 0x0370(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, SaveGame)
	struct FLinearColor                                SavedWorldCloudRandomSeed;                                // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FTimeAndWeatherSettings>             Settings;                                                 // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               DidSaveWorldSettings;                                     // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AAA-TimeAndWeatherSettings.AAA-TimeAndWeatherSettings_C");
		return ptr;
	}


	void Time_and_Weather_Apply_Overrides(const struct FTimeAndWeatherSettings& InTimeAndWeather, struct FTimeAndWeatherSettings* OutTimeAndWeather);
	void Lightning_Event();
	void Next_Time_and_Weather_Setting();
	void Time_And_Weather_End();
	void Time_And_Weather_Start_at_Index(int StartAtIndex);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AAA_TimeAndWeatherSettings(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
