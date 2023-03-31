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

// BlueprintGeneratedClass staticMeshActor_SFAB.staticMeshActor_SFAB_C
// 0x0080 (0x03D8 - 0x0358)
class AstaticMeshActor_SFAB_C : public AStaticMeshActor
{
public:
	bool                                               excludeFromTerrainColorCapture;                           // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               newMethod;                                                // 0x0359(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               transferWindowMeshes;                                     // 0x035A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               showEdgeLocations;                                        // 0x035B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	TArray<struct FTransform>                          edgeNumber__;                                             // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<bool>                                       DisableStaticMeshEdges;                                   // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               generateWindowMeshes;                                     // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0381(0x0007) MISSED OFFSET
	TArray<class UStaticMesh*>                         windowMeshes;                                             // 0x0388(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FTransform>                          windowTransforms;                                         // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                windowCounter;                                            // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  windowMaterials;                                          // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UStaticMesh*                                 emptyStaticMesh;                                          // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               allEdgesFine;                                             // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       windowDrawDebugType;                                      // 0x03C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x03CA(0x0002) MISSED OFFSET
	int                                                oldDisabledCount;                                         // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                newDisabledCount;                                         // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               paintedWetnessOverride;                                   // 0x03D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               usePaintedWetness;                                        // 0x03D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               neverUseWetnessOverride;                                  // 0x03D6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               neverUseWetness;                                          // 0x03D7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass staticMeshActor_SFAB.staticMeshActor_SFAB_C");
		return ptr;
	}


	void hasAnyInteriorLoaded(bool* hasInteriorLoaded);
	void verticalRotatedWindowChecks(class UStaticMeshComponent* windowComponent, bool* enabledBlocked, bool* disabledBlocked);
	void horizontalUnrotatedWindowChecks(class UStaticMeshComponent* windowComponenet, bool* enabledObstructed, bool* disabledUnobstructed);
	void getWindowComponents(TArray<class UStaticMeshComponent*>* windowComponents);
	void attachedToDummyPyramidReport();
	void overrideAllEdgesFine();
	void enabledAssetBlockReport(int Index);
	void verticalUnrotatedWindowChecks(class UStaticMeshComponent* windowComponent, bool* enabledBlocked, bool* disabledBlocked);
	void horizontalRotatedWindowChecks(class UStaticMeshComponent* windowComponenet, bool* enabledObstructed, bool* disabledUnobstructed);
	void enabledObstructedReport(int Index);
	void disabledUnobstructedReport(int Index);
	void checkWindowEdgeValidity(class UStaticMeshComponent* windowComponent, int Index);
	void getWindowInfo();
	void countWindows();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
