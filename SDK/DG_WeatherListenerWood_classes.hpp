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

// BlueprintGeneratedClass WeatherListenerWood.WeatherListenerWood_C
// 0x0010 (0x0368 - 0x0358)
class AWeatherListenerWood_C : public ABendWeatherListenerBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             rain_listener_wood;                                       // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeatherListenerWood.WeatherListenerWood_C");
		return ptr;
	}


	void UserConstructionScript();
	void UpdateWeather();
	void ExecuteUbergraph_WeatherListenerWood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
