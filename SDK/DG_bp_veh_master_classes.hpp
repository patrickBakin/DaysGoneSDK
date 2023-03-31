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

// BlueprintGeneratedClass bp_veh_master.bp_veh_master_C
// 0x00D1 (0x0419 - 0x0348)
class Abp_veh_master_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendSphereComponent*                        PlayerSphere;                                             // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             rain_listener_3;                                          // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             rain_listener_2;                                          // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveHood;                                               // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveTrunk;                                              // 0x0371(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eenum_veh_colors>                      PaintColor;                                               // 0x0372(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0373(0x0005) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                SnappingExclusions;                                       // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRandomStream                               RandomStream_;                                            // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     VehType;                                                  // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              GrungeOffset;                                             // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	TArray<class UTexture2D*>                          LicensePlateTextures;                                     // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               SnapToTerrain;                                            // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	TArray<class UAudioComponent*>                     RainListeners;                                            // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               RemoveSteeringWheel;                                      // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	TArray<class UMaterialInstanceConstant*>           PaintMaterials;                                           // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               PaintMaterialParamNames;                                  // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               excludeFromTerrainColorCapture;                           // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               dontReceiveDecals;                                        // 0x03F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x03FA(0x0002) MISSED OFFSET
	int                                                License_Plate_Seed_Offset;                                // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Vert_Visibility;                                          // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               autoUpdateTires;                                          // 0x0404(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Eenum_veh_tireStates>                  TireState;                                                // 0x0405(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0406(0x0002) MISSED OFFSET
	TArray<struct FStruct_Veh_TireState>               TireStateConfigurations;                                  // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               HasMeshCollectionError;                                   // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bp_veh_master.bp_veh_master_C");
		return ptr;
	}


	void checkForUncollectableStaticMeshes();
	void autoSetTireEnum();
	void setTireState();
	void setExcludeFromTerrainColorCapture();
	void setPawnCollideHidden();
	void turnOffReceivesDecals();
	void getBendCoverChildTransforms(class UStaticMesh* car, struct FTransform* BendCoverChildTransforms);
	void SnapToSurface();
	void CreateDynamicMaterials(TArray<int>* Paint_Color_Indexes, TArray<class UMaterialInstanceDynamic*>* Dynamic_Material_Instances);
	void ReadPaintedColorEnum_GetRandom(TArray<int>* Paint_Indexes);
	void ReadPaintColorEnum_GetIndexes(const struct FString& Enum_Value, TArray<int>* PaintIndexes);
	void ReadPaintColorEnum(TArray<int>* Paint_Color_Indexes);
	void TokenizeStringToList(const struct FString& In_String, const struct FString& Split_By, TArray<struct FString>* Token_List_as_String, TArray<int>* Token_List_as_Int);
	void BendVehCarArt_SplitPaintColorEnum();
	void SetMaterialParams(class UMaterialInstanceDynamic* Dynamic_Material_Instances);
	void BendVehCarArt_ReadPaintColorEnum();
	void ArtFunctions();
	void RemoveParts(class UStaticMeshComponent* Hood, class UStaticMeshComponent* Trunk, class UStaticMeshComponent* SteeringWheel);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_6_BeginOverlapSig__DelegateSignature();
	void BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_8_EndOverlapSig__DelegateSignature();
	void ExecuteUbergraph_bp_veh_master(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
