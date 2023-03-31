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

// BlueprintGeneratedClass WeatherListenerMetal.WeatherListenerMetal_C
// 0x0010 (0x0368 - 0x0358)
class AWeatherListenerMetal_C : public ABendWeatherListenerBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             rain_listener_metal;                                      // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeatherListenerMetal.WeatherListenerMetal_C");
		return ptr;
	}


	void UserConstructionScript();
	void UpdateWeather();
	void ExecuteUbergraph_WeatherListenerMetal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
