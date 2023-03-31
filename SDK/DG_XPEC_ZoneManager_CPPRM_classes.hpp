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

// BlueprintGeneratedClass XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C
// 0x0051 (0x05B1 - 0x0560)
class AXPEC_ZoneManager_CPPRM_C : public AXpecZoneManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UXpecPOICount*                               XpecPOICount;                                             // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        TextRender;                                               // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FXpecNeedData>                       needs;                                                    // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               s_SoundBankTags;                                          // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AXPEC_MigrationPath_C*>               MigrationPath;                                            // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               m_bFreezeDummyTickOnDeactivate;                           // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass XPEC_ZoneManager_CPPRM.XPEC_ZoneManager_CPPRM_C");
		return ptr;
	}


	TArray<struct FTransform> GetNearbyWaypointsFromMigrationPath(struct FVector* loc);
	void HideActorInMissionBlockingVolume(class AActor* SpawnedActor);
	bool OnZoneDeactivate();
	bool OnZoneActivate();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void RequestSpawn(const struct FString& Message);
	void ExecuteUbergraph_XPEC_ZoneManager_CPPRM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
