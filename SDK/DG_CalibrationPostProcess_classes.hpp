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

// BlueprintGeneratedClass CalibrationPostProcess.CalibrationPostProcess_C
// 0x0018 (0x0360 - 0x0348)
class ACalibrationPostProcess_C : public AActor
{
public:
	class UPostProcessComponent*                       PostProcessSDR;                                           // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       PostProcessHDR;                                           // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CalibrationPostProcess.CalibrationPostProcess_C");
		return ptr;
	}


	void SetEnabled(bool Value, bool HDR);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
