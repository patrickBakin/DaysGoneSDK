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

// BlueprintGeneratedClass BPI_BendWeatherManagement.BPI_BendWeatherManagement_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_BendWeatherManagement_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_BendWeatherManagement.BPI_BendWeatherManagement_C");
		return ptr;
	}


	void SetIndoors(bool IsIndoors);
	void SetWindSoundIntensity(float intensity);
	void SetRainSoundIntensity(float intensity);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
