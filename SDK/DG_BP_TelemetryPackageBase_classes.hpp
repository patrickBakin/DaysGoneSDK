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

// BlueprintGeneratedClass BP_TelemetryPackageBase.BP_TelemetryPackageBase_C
// 0x0068 (0x03B0 - 0x0348)
class ABP_TelemetryPackageBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugPrint;                                               // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	struct FString                                     Mission;                                                  // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     ActiveJobs;                                               // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Episode;                                                  // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	TArray<struct FTelemetryEventAttr>                 Attributes;                                               // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DisableTelemetry;                                         // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	TArray<struct FTelemetryEventTypedAttr>            TelemetryAttributes;                                      // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TelemetryPackageBase.BP_TelemetryPackageBase_C");
		return ptr;
	}


	void ReplaceTelemetryAttrData(const struct FString& TargetTelemetryAttributeName, const struct FString& NewData, TArray<struct FTelemetryEventAttr>* TelemetryAttributes);
	void FindTelemetryAttrIndex(const struct FString& TelemetryAttrName, TArray<struct FTelemetryEventAttr>* TelemetryAttrArray, int* TelemtryAttrIndex);
	void InANewEpisode_(int New_Episode, bool* IsInNewEpisode);
	void GetMissionAndJob(const struct FString& MissionIdOverride);
	void UserConstructionScript();
	void MediumTickEvents();
	void ShortestTickEvents();
	void LongTickEvents();
	void ExecuteUbergraph_BP_TelemetryPackageBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
