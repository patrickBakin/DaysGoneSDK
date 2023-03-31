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

// BlueprintGeneratedClass MasterBuilding_v2.MasterBuilding_v2_C
// 0x01B0 (0x0528 - 0x0378)
class AMasterBuilding_v2_C : public ABendBuilding
{
public:
	class UBendCoverChildComponent*                    BendCoverChild;                                           // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayerInside;                                             // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               INT_Active;                                               // 0x0389(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x038A(0x0006) MISSED OFFSET
	class UBoxComponent*                               Master_Activation_INT;                                    // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UChildActorComponent*                        Master_Structure_EXT;                                     // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UChildActorComponent*>                BuildingWindows;                                          // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      coverProxyBP;                                             // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               autoscaleCoverVolume;                                     // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	struct FTransform                                  BendCoverChildTransforms;                                 // 0x03C0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    initialRotation;                                          // 0x03F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               lockNavMeshVolume;                                        // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               hasNavMeshVolume;                                         // 0x03FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03FE(0x0002) MISSED OFFSET
	struct FVector                                     positiveBounds;                                           // 0x0400(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     negativeBounds;                                           // 0x040C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UBendCoverProxyComponent*>            proxyCoverComponents;                                     // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0428(0x0008) MISSED OFFSET
	struct FTransform                                  hiddenNavTransforms;                                      // 0x0430(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                MeshComponents;                                           // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FTransform                                  navVolGeneratedTransforms;                                // 0x0470(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               resetNavMeshVolume;                                       // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x04A1(0x0007) MISSED OFFSET
	TArray<struct FTransform>                          RoofNavTransforms;                                        // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<bool>                                       disableClimbEdges;                                        // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                edgeCount;                                                // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x04CC(0x0004) MISSED OFFSET
	TArray<struct FTransform>                          edgeTransforms;                                           // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                edgeCounter;                                              // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	TArray<class UBendWorldEdgeChildComponent*>        climbEdges;                                               // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               showClimbEdgeArray;                                       // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               improperChildActorComponents;                             // 0x04F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NestIsMeshCollecting;                                     // 0x04FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5];                                       // 0x04FB(0x0005) MISSED OFFSET
	TArray<struct FTransform>                          TempRagerTransforms;                                      // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               AutoGenRagerExcludeVolume;                                // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0511(0x0007) MISSED OFFSET
	TArray<struct FVector>                             TempRagerBoxExtents;                                      // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MasterBuilding_v2.MasterBuilding_v2_C");
		return ptr;
	}


	void BadChildrenErrorReport();
	void getChildActorEdgeComponents();
	void getcombinedLocalMeshComponentBounds();
	void getChildMeshComponents();
	void getCombinedLocalProxyComponentBounds();
	void AddChildCover(class UBendCoverChildComponent* coverVolume, class UClass* coverClass);
	void UpdateWeatherParticles(float Rain_Intensity);
	void WeatherInteriorUpdateEvents(bool Bool);
	void SetUpWindowEvents();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
