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

// BlueprintGeneratedClass MasterBuilding_NestBase.MasterBuilding_NestBase_C
// 0x0062 (0x058A - 0x0528)
class AMasterBuilding_NestBase_C : public AMasterBuilding_v2_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0528(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              DynamicBurningTimeline_FloatParam_C351D58945686A77F8714EA2A9ADFC8A;// 0x0530(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DynamicBurningTimeline__Direction_C351D58945686A77F8714EA2A9ADFC8A;// 0x0534(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0535(0x0003) MISSED OFFSET
	class UTimelineComponent*                          DynamicBurningTimeline;                                   // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            DynamicBurnMaterials;                                     // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Pre_Destroyed;                                            // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               showEdgeLocations;                                        // 0x0551(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0552(0x0006) MISSED OFFSET
	TArray<struct FTransform>                          edgeNumber_;                                              // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<bool>                                       DisableStaticMeshEdges;                                   // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                windowCounter;                                            // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               allEdgesFine;                                             // 0x057C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x057D(0x0003) MISSED OFFSET
	int                                                oldDisabledCount;                                         // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                newDisabledCount;                                         // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       windowDrawDebugType;                                      // 0x0588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               excludeFromTerrainColorCapture;                           // 0x0589(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MasterBuilding_NestBase.MasterBuilding_NestBase_C");
		return ptr;
	}


	void verticalUnrotatedWindowChecks(class UStaticMeshComponent* windowComponent, bool* enabledBlocked, bool* disabledBlocked);
	void horizontalUnrotatedWindowChecks(class UStaticMeshComponent* windowComponent, bool* enabledObstructed, bool* disabledUnobstructed);
	void attachedToDummyPyramidReport();
	void hasAnyInteriorLoaded(bool* hasInteriorLoaded);
	void getWindowComponents(TArray<class UStaticMeshComponent*>* allComponents, TArray<class UStaticMeshComponent*>* windowComponents);
	void GetChildrenComponents(TArray<class UStaticMeshComponent*>* outExtComponents);
	void overrideAllEdgesFine();
	void enabledAssetBlockReport(int Index);
	void verticalRotatedWindowChecks(class UStaticMeshComponent* windowComponent, bool* enabledBlocked, bool* disabledBlocked);
	void horizontalRotatedWindowChecks(class UStaticMeshComponent* windowComponent, bool* enabledObstructed, bool* disabledUnobstructed);
	void enabledObstructedReport(int Index);
	void disabledUnobstructedReport(int Index);
	void checkWindowEdgeValidity(class UStaticMeshComponent* windowComponent, int Index);
	void CreateNestDynamicMaterials(TArray<class UStaticMeshComponent*>* Static_Mesh_s, TArray<class UMaterialInstanceDynamic*>* DynamicMaterialArray);
	void UserConstructionScript();
	void DynamicBurningTimeline__FinishedFunc();
	void DynamicBurningTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void NestDestroyed(const struct FString& Nest_ID);
	void FireGoneOut();
	void BurnTheMaterials();
	void RetryLoad();
	void NestFireGoneOut_Event(const struct FString& NestID);
	void OnNestStartedBurning_Event_1(const struct FString& NestID);
	void NestShouldStartSmoke_Event_1();
	void RetryLoad_Copy();
	void NestFireGoneOut_Event_Copy(const struct FString& NestID);
	void OnNestStartedBurning_Event_0_Copy(const struct FString& NestID);
	void NestShouldStartSmoke_Event_0_Copy();
	void ExecuteUbergraph_MasterBuilding_NestBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
