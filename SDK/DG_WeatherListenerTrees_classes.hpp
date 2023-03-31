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

// BlueprintGeneratedClass WeatherListenerTrees.WeatherListenerTrees_C
// 0x0021 (0x0369 - 0x0348)
class AWeatherListenerTrees_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Forest_Sounds;                                            // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             tree_creak;                                               // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             rain_listener_trees;                                      // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanPlayAudio;                                             // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeatherListenerTrees.WeatherListenerTrees_C");
		return ptr;
	}


	void PlayAudio();
	void StopAudio();
	void UserConstructionScript();
	void UpdateWeather();
	void ReceiveBeginPlay();
	void Every5Mins();
	void ExecuteUbergraph_WeatherListenerTrees(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
