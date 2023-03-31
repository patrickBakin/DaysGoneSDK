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

// BlueprintGeneratedClass BillsBike.BillsBike_C
// 0x033C (0x0C0C - 0x08D0)
class ABillsBike_C : public AVehiclePawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    SmokeParticle;                                            // 0x08D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendFocusModeOutlineComponent*              BendFocusModeOutline;                                     // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendAimAssistTargetComponent*               BendAimAssistTarget1;                                     // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        bike_ragdoll_collider;                                    // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendAimAssistTargetComponent*               BendAimAssistTarget;                                      // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             SND_Bike_Start;                                           // 0x0900(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             SND_Bike_Stop;                                            // 0x0908(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        BikesInteract;                                            // 0x0910(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Particle_Bolts;                                           // 0x0918(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendSpotLightComponent*                     Headlight_Spot;                                           // 0x0920(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             SND_Road_Noise_CC;                                        // 0x0928(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendTireMarkComponent*                      TireMarkComponent;                                        // 0x0930(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               VehicleEnterExitTrigger;                                  // 0x0938(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Particle_Bike_Exhaust;                                    // 0x0940(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             SND_Bike_CC;                                              // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendMovementComp_VehicleNoDrive*            VehicleMovementComponent;                                 // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WheelIndex;                                               // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SoundCurrentRpmOffset0To1;                                // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShiftedIntoCurrentGearWhileThrottlingAndStillThrottling;  // 0x0964(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Sound_Bikes_TempVar_Boost;                                // 0x0965(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Sound_Bikes_TempVar_Burnout;                              // 0x0966(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Sound_Bikes_TempVar_BoostOrBurnout;                       // 0x0967(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Sound_Bikes_TempVar_DrawDebugHeight;                      // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FrontTireIndex;                                           // 0x096C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RearTireIndex;                                            // 0x0970(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PrintDebugSpeed;                                          // 0x0974(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseMphForPrintDebugSpeed;                                 // 0x0975(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EBendVehicleHeadlightBrightnessEnum>   HeadlightBrightnessCurrent;                               // 0x0976(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0977(0x0001) MISSED OFFSET
	float                                              SoundLowOrNoFuelStallDuration;                            // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x097C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    _180Complete;                                             // 0x0980(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<EBendVehicleHeadlightBrightnessEnum>   HeadlightBrightnessCinematic;                             // 0x0990(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DamageParticleSpawned;                                    // 0x0991(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0992(0x0002) MISSED OFFSET
	float                                              _50_Remain;                                               // 0x0994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _25_Remain;                                               // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _0_Remain;                                                // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreviousHealth;                                           // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreviousVelo1;                                            // 0x09A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isSoundKilled;                                            // 0x09B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DealCollisionDamage;                                      // 0x09B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x09B2(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    DriverEnteredVehicle;                                     // 0x09B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BikeDmgVO;                                                // 0x09C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              VOCumulativeDamage;                                       // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                VO_DmgStepVal;                                            // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VO_DmgVO_Fire;                                            // 0x09E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x09E1(0x0003) MISSED OFFSET
	float                                              VOLowFuelThreshold;                                       // 0x09E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                VOFireCountCurrent;                                       // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                VOFireCountLast;                                          // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LowFuelVOPlayed;                                          // 0x09F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SoundForceBoost;                                          // 0x09F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugDamageModePaused;                                    // 0x09F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugBikeTrailRender;                                     // 0x09F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x09F4(0x0004) MISSED OFFSET
	TArray<struct FVector>                             DebugBikeTrailRenderCoords;                               // 0x09F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DeltaCounter;                                             // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DebugBikeTrail_A;                                         // 0x0A0C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DebugBikeTrail_B;                                         // 0x0A18(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DebugBikeTrail_C;                                         // 0x0A24(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             LocationRecords;                                          // 0x0A30(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              DeltaSeconds;                                             // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeSinceLastRecord;                                      // 0x0A44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecordTimeStep;                                           // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxNumberOfRecords;                                       // 0x0A4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DamageDebugPrint;                                         // 0x0A50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0A51(0x0003) MISSED OFFSET
	float                                              BikeMakeNoiseThreshold;                                   // 0x0A54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TempHackScaleRpmForSound;                                 // 0x0A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_VehicleType>                      VehicleType_1;                                            // 0x0A5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CinematicEntered;                                         // 0x0A5D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0A5E(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    TelemetryEvent_BS_BikeImpact;                             // 0x0A60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               FuelOutVOPlayed;                                          // 0x0A70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0A71(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    HeadlightMaterial;                                        // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HeadlightMaterialEmissiveScaleParamName;                  // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BrakelightMaterial;                                       // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BrakelightMaterialEmissiveScaleParamName;                 // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadlightEmissiveScaleOff;                                // 0x0A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadlightEmissiveScaleOn;                                 // 0x0A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BrakelightEmissiveScaleOff;                               // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BrakelightEmissiveScaleOn;                                // 0x0AA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BrakelightEmissiveScaleBraking;                           // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0AAC(0x0004) MISSED OFFSET
	class ABikeInteractBase_C*                         BikeInteractRef;                                          // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentRearSuspensionDamageReductionValue;                // 0x0AB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentFrontSuspensionDamageReductionValue_1;             // 0x0ABC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    SabotageOrRepairComplete;                                 // 0x0AC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              EngineNoiseModifier;                                      // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentExhaustNoiseReduction;                             // 0x0AD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentExhaustTipNoiseReduction;                          // 0x0AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              audioTickCount;                                           // 0x0ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      gearRPMscalars;                                           // 0x0AE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    TelemetryEvent_BS_OutOfGas;                               // 0x0AF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<float>                                      gearRPMoffsets;                                           // 0x0B00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    BikeChainMat;                                             // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BikeEntered;                                              // 0x0B18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugWaterDepth;                                          // 0x0B19(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugWaterTopSpeed;                                       // 0x0B1A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OutOfWater;                                               // 0x0B1B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0B1C(0x0004) MISSED OFFSET
	TArray<struct FGearSetup>                          myGearSetups;                                             // 0x0B20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CurrentAINoise;                                           // 0x0B30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayedLowFuelVO;                                          // 0x0B34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayedReallyLowFuelVO;                                    // 0x0B35(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x0B36(0x0002) MISSED OFFSET
	float                                              MeleeAutoTargetMaxDistance_GroundCombat;                  // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeleeAutoTargetMaxDistance_BikeCombat;                    // 0x0B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EInventoryAmmoID>>              AmmoIDs;                                                  // 0x0B40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPlayerBikeAmmoStorageBP_C*                  BikesAmmoStorage;                                         // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPlayerAmmoStorageBP_C*                      PlayersAmmoStorage;                                       // 0x0B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PlayersAvailableAmmoCap;                                  // 0x0B60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EInventoryAmmoID>                      CurrentAmmoType;                                          // 0x0B64(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0B65(0x0003) MISSED OFFSET
	float                                              Grunge_Offset;                                            // 0x0B68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OldSteeringAngle;                                         // 0x0B6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 DamageVsSpeedGraph_Small;                                 // 0x0B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 DamageVsSpeedGraph_SmallMedium;                           // 0x0B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 DamageVsSpeedGraph_MediumLarge;                           // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 DamageVsSpeedGraph_Large;                                 // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Bike_Materials;                                           // 0x0B90(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              CollisionImpulse;                                         // 0x0BA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0BA4(0x0004) MISSED OFFSET
	class UCurveFloat*                                 BikeSmokeStartCurve;                                      // 0x0BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 BikeSmokeEndCurve;                                        // 0x0BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EBendVehicleDamageType>                DamageType;                                               // 0x0BB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0BB9(0x0003) MISSED OFFSET
	float                                              damageTaken;                                              // 0x0BBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHealth;                                                // 0x0BC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Health;                                                   // 0x0BC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // 0x0BC8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FXImpulseThreshold;                                       // 0x0BD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FXSpeedThreshold;                                         // 0x0BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // 0x0BDC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    BikeFullyDamaged;                                         // 0x0BE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FVector                                     StartWheelieLoc;                                          // 0x0BF8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WheelieStarted;                                           // 0x0C04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoOnce;                                                   // 0x0C05(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x0C06(0x0002) MISSED OFFSET
	float                                              SkipParticleCollisionTime;                                // 0x0C08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BillsBike.BillsBike_C");
		return ptr;
	}


	void I_GetGasValues(float* Gas_Current, float* Gas_Max);
	void GetEngineSoundAsset(class USoundBase** EngineSoundAsset);
	void I_SetVehicleHeadLightBrightness(TEnumAsByte<EBendVehicleHeadlightBrightnessEnum> Setting, bool* Success_);
	void I_SetBikeInCinematicMode(bool ON_, bool* Success_);
	void SetIsSoundKilled(bool isSoundKilled);
	void SetPlayerOnBikeTags(bool IsPlayerOnBike);
	void UpdateDynamicMaterials();
	void CollidedWithEnemy(class UCurveFloat* EnemyDMGCurve, class UForceFeedbackEffect* ControllerFeedback);
	void SetFocusLevel(const struct FGameplayTag& SkillTagToCheck);
	void ControlNPCJumpCollider();
	void FixRagdollColliderAttachment();
	void ArtFuncs_SetGrunge(float Grunge_Offset, TArray<class UMaterialInstanceDynamic*>* Dynamic_Materials);
	void ArtFuncs_MakeDynamicMaterials(TArray<class UMaterialInstanceDynamic*>* Dynamic_Material_Instances);
	void ArtFunctions(float Grunge_Offset, TArray<class UMaterialInstanceDynamic*>* Bike_Materials);
	void SetOutline(bool OutlineOn);
	void SetBikeNoiseReduction();
	void SetBikeDamageReduction();
	void DealMiscellaneousDamage(float Damage, class AController* DamageInstigator);
	void Sound_ForceBoostSound(bool ForceBoost);
	void Sound_EndStall();
	void Sound_StartStall();
	void Sound_StartStallWithTime(float HowLongToStall);
	void CalculateCumulativeDamage(float IncomingDamage, bool* bFireBikeDmgVO, float* CumulativeDmg);
	void CinematicModeToggle(bool ON_);
	void FlipVehicleForwardAndDumpRidersHack();
	void PlayHitSounds(TEnumAsByte<EBendVehicleDamageType> DamageType, float damageTaken, float HealthPercentageRemain);
	void Sound_KillBikeSound(bool KillSound);
	void Sound_StopRpmSuppression();
	void Sound_StopThrottleSuppression();
	void Force180();
	void StopAttractRev();
	void Sound_OutofGas();
	void Sound_AttractEngineRev();
	void Sound_StopAttractorEmitter();
	void Sound_DrawDebug(const struct FString& Name, float Value);
	void Sound_SetupGearAndShift();
	void Sound_Shift();
	void Sound_Gear();
	void Sound_Boost();
	void Sound_ThrottleAutoShift();
	void Sound_IsStopped();
	void Sound_IsBraking();
	void Sound_SetBurnout();
	void Sound_IsThrottlePressed();
	void Sound_SetRPM(float NormalizedRPM);
	void Sound_CalculateNormalizedRPM(float* NormalizedRPM);
	void ChangeHeadlightBrightness();
	void SetHeadlightBrightness(TEnumAsByte<EBendVehicleHeadlightBrightnessEnum> HeadlightBrightness);
	void IsOnGravel(int WheelIndex, bool* IsOnGravel);
	void IsOnDirt(int WheelIndex, bool* IsOnDirt);
	void ApplyTireDrag();
	void Debug_Sound_Bikes(class UAudioComponent* SND_Bike_CC, class UWheeledVehicleMovementComponent* VehicleMovementComponent);
	void UserConstructionScript();
	void I_GasCanDropped();
	void I_RefuelingFinished();
	void I_SetGasCanHasControl(bool HasControl);
	void CheckGasRemaining();
	void StopCheckGasRemaining();
	void StartCheckGasRemaining();
	void SuppressBikeStartupSound();
	void OnDriverEnteredVehicle();
	void OnDriverExitedVehicle(TEnumAsByte<EBendVehicleExitReason>* InExitReason);
	void OnDriverFinishedEnteringVehicle();
	void OnDriverFinishedExitingVehicle(TEnumAsByte<EBendVehicleExitReason>* InExitReason);
	void I_GasPumpFinished();
	void OnSwitchedOffLights();
	void OnSwitchedOnLights();
	void OnChangeTailLightState(TEnumAsByte<EBendVehicleTailLightState>* NewState);
	void SwitchHeadlightBrightness();
	void OnReceivedDamage(TEnumAsByte<EBendVehicleDamageType>* DamageType, float* damageTaken);
	void OnHealthRestored();
	void ForceDamageUpdate();
	void MakeBikeDirtyByDamage();
	void DebugPrintDamage();
	void SetSmokeParticles();
	void ApplyDamageFX();
	void SetBikeDamageSound();
	void PlayImpactSounds();
	void PrintDamageDebug();
	void PlayVOForDamage();
	void ForceVehicleDamageUpdate();
	void OnLanded(int* NumTiresOnGround);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_557_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_565_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void BndEvt__EnemyDamageTrigger2_K2Node_ComponentBoundEvent_401_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnImpactedEnemy(class ABendPawn** OtherActor, struct FVector* Impulse);
	void DisableBikeDetection();
	void EnableBikeDetection();
	void ReceiveBeginPlay();
	void OnSimulateEngineRevSound();
	void On180Finished();
	void PlayBikeSound();
	void BikeDamageDebug_TogglePlayerFalling(bool Enable_Falling);
	void OnVehiclePartUpdated(TEnumAsByte<EMotorcyclePartType>* PartType, class UMeshComponent** Mesh, class UBendVehicleMeshAttachmentSpecs** Specs);
	void I_SetGasAmounts(float NewGas);
	void SabotageOrRepairComplete_Event_1(int ScrapCount);
	void OnStartEngine();
	void OnStopEngine();
	void OnDiedOrDestroyed_Event_1(class ABendPawn* Pawn, bool bDied);
	void OnBikeManualAimSlowdownStarted();
	void OnBikeManualAimSlowdownStopped();
	void OnNotifyBrokenNPCVehicleTutorial();
	void OnNotifyEngineDestroyed();
	void OnNotifyRepairEngine();
	void OnFullyDamaged();
	void OnWheelieStateChanged(unsigned char PreviousState, unsigned char CurrentState);
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void ExecuteUbergraph_BillsBike(int EntryPoint);
	void BikeFullyDamaged__DelegateSignature();
	void TelemetryEvent_BS_OutOfGas__DelegateSignature();
	void SabotageOrRepairComplete__DelegateSignature(class ABillsBike_C* BikeRef, bool Sabotaged, int ScrapCount);
	void TelemetryEvent_BS_BikeImpact__DelegateSignature(const struct FVector& BikeVelocity, float HitIntensity, class AActor* CollidedActor);
	void BikeDmgVO__DelegateSignature();
	void DriverEnteredVehicle__DelegateSignature(class AVehiclePawn* Vehicle);
	void _180Complete__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
