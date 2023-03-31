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

// BlueprintGeneratedClass WeatherListener_Interior_WoodRoof.WeatherListener_Interior_WoodRoof_C
// 0x0018 (0x0370 - 0x0358)
class AWeatherListener_Interior_WoodRoof_C : public ABendWeatherListenerBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             cc_rain_interior_wood;                                    // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeatherListener_Interior_WoodRoof.WeatherListener_Interior_WoodRoof_C");
		return ptr;
	}


	void UserConstructionScript();
	void UpdateWeather();
	void ExecuteUbergraph_WeatherListener_Interior_WoodRoof(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
