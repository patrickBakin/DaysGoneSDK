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

// BlueprintGeneratedClass HordeLoader.HordeLoader_C
// 0x0038 (0x0380 - 0x0348)
class AHordeLoader_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelPath;                                                // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHordeLevelEnums>                      HordeLevel;                                               // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanLoad;                                                  // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0362(0x0006) MISSED OFFSET
	struct FString                                     HordeName;                                                // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UBendGameplayDatabase*                       Database;                                                 // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HordeLoader.HordeLoader_C");
		return ptr;
	}


	void CheckHordeCompletion(bool* IsComplete);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void MarkForReload();
	void CustomEvent_1(class ULevel* Level);
	void ReloadLevel(class ULevel* Level);
	void MissionOver(class UBendMissionData* LastMissionData);
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void ExecuteUbergraph_HordeLoader(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
