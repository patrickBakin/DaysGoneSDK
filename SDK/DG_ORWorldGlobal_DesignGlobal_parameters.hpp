#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ToggleNEROCheckpointFastTravel
struct AORWorldGlobal_DesignGlobal_C_ToggleNEROCheckpointFastTravel_Params
{
	TArray<class ABP_AmbushCamp_NERO_MiniMapLocationActor_C*> NEROCheckpointMiniMapLocations;                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               NewActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ToggleAmbushCampFastTravel
struct AORWorldGlobal_DesignGlobal_C_ToggleAmbushCampFastTravel_Params
{
	TArray<class ABP_AmbushCamp_MiniMapFastTravelLocation_C*> AmbushCampMiniMapLocations;                               // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               NewActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ToggleEncampmentFastTravel
struct AORWorldGlobal_DesignGlobal_C_ToggleEncampmentFastTravel_Params
{
	TArray<class ABendEncampmentActor*>                BendEncampmentActors;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               NewActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.UnSlowBikeOnExit
struct AORWorldGlobal_DesignGlobal_C_UnSlowBikeOnExit_Params
{
	class AActor*                                      OverlappingActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.SlowBikeOnEnter
struct AORWorldGlobal_DesignGlobal_C_SlowBikeOnEnter_Params
{
	class AActor*                                      OverlappingActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_CopelandsCamp_K2Node_ActorBoundEvent_1335_ActorBeginOverlapSignature__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_CopelandsCamp_K2Node_ActorBoundEvent_1335_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_CopelandsCamp_K2Node_ActorBoundEvent_1340_ActorEndOverlapSignature__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_CopelandsCamp_K2Node_ActorBoundEvent_1340_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_SalomeHotsprings_5_K2Node_ActorBoundEvent_1347_ActorBeginOverlapSignature__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_SalomeHotsprings_5_K2Node_ActorBoundEvent_1347_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_IronMikes_K2Node_ActorBoundEvent_1351_ActorBeginOverlapSignature__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_IronMikes_K2Node_ActorBoundEvent_1351_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_SalomeHotsprings_5_K2Node_ActorBoundEvent_1356_ActorEndOverlapSignature__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_SalomeHotsprings_5_K2Node_ActorBoundEvent_1356_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_IronMikes_K2Node_ActorBoundEvent_1362_ActorEndOverlapSignature__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_IronMikes_K2Node_ActorBoundEvent_1362_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BoozerSafehouseVolume_K2Node_ActorBoundEvent_30_ActorBeginOverlapSignature__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__BoozerSafehouseVolume_K2Node_ActorBoundEvent_30_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BoozerSafehouseVolume_K2Node_ActorBoundEvent_38_ActorEndOverlapSignature__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__BoozerSafehouseVolume_K2Node_ActorBoundEvent_38_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.PlayerRespawnBikeCheck
struct AORWorldGlobal_DesignGlobal_C_PlayerRespawnBikeCheck_Params
{
	class ABendPlayerController*                       PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BikeValidCheck
struct AORWorldGlobal_DesignGlobal_C_BikeValidCheck_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BikeValidCheck2
struct AORWorldGlobal_DesignGlobal_C_BikeValidCheck2_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_EarthBinds
struct AORWorldGlobal_DesignGlobal_C_RFO_EarthBinds_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_EarthUnbinds
struct AORWorldGlobal_DesignGlobal_C_RFO_EarthUnbinds_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ReceiveBeginPlay
struct AORWorldGlobal_DesignGlobal_C_ReceiveBeginPlay_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.OnBikePartPurchased
struct AORWorldGlobal_DesignGlobal_C_OnBikePartPurchased_Params
{
	class UInventoryItemMotorcyclePart*                Part;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_Gun_Control_Binds
struct AORWorldGlobal_DesignGlobal_C_RFO_Gun_Control_Binds_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RecheckGM1
struct AORWorldGlobal_DesignGlobal_C_RecheckGM1_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.GameEvent
struct AORWorldGlobal_DesignGlobal_C_GameEvent_Params
{
	struct FBendGameEventBase                          Event;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_Gun_Control_Unbinds
struct AORWorldGlobal_DesignGlobal_C_RFO_Gun_Control_Unbinds_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RecheckGM2
struct AORWorldGlobal_DesignGlobal_C_RecheckGM2_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_Commercialism_Binds
struct AORWorldGlobal_DesignGlobal_C_RFO_Commercialism_Binds_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RecheckGM3
struct AORWorldGlobal_DesignGlobal_C_RecheckGM3_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_Commercialism_Unbinds
struct AORWorldGlobal_DesignGlobal_C_RFO_Commercialism_Unbinds_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RecheckGM4
struct AORWorldGlobal_DesignGlobal_C_RecheckGM4_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_Bunkers_Property_Binds
struct AORWorldGlobal_DesignGlobal_C_RFO_Bunkers_Property_Binds_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BunkerDiscovered
struct AORWorldGlobal_DesignGlobal_C_BunkerDiscovered_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.AmbushCleared
struct AORWorldGlobal_DesignGlobal_C_AmbushCleared_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_Bunkers_Unbind
struct AORWorldGlobal_DesignGlobal_C_RFO_Bunkers_Unbind_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.RFO_Property_Unbind
struct AORWorldGlobal_DesignGlobal_C_RFO_Property_Unbind_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.FuelEmpty
struct AORWorldGlobal_DesignGlobal_C_FuelEmpty_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.OnMissionComplete_TCA
struct AORWorldGlobal_DesignGlobal_C_OnMissionComplete_TCA_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.OnMissionComplete_LRH
struct AORWorldGlobal_DesignGlobal_C_OnMissionComplete_LRH_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.OnMissionComplete_AWI
struct AORWorldGlobal_DesignGlobal_C_OnMissionComplete_AWI_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.CheckFastTravel
struct AORWorldGlobal_DesignGlobal_C_CheckFastTravel_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_DiamondLake_K2Node_ActorBoundEvent_315_ActorBeginOverlapSignature__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_DiamondLake_K2Node_ActorBoundEvent_315_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_WizardIsland_K2Node_ActorBoundEvent_325_ActorBeginOverlapSignature__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_WizardIsland_K2Node_ActorBoundEvent_325_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_IronMikeFarm_K2Node_ActorBoundEvent_336_ActorBeginOverlapSignature__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_IronMikeFarm_K2Node_ActorBoundEvent_336_ActorBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_IronMikeFarm_K2Node_ActorBoundEvent_392_ActorEndOverlapSignature__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_IronMikeFarm_K2Node_ActorBoundEvent_392_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_DiamondLake_K2Node_ActorBoundEvent_405_ActorEndOverlapSignature__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_DiamondLake_K2Node_ActorBoundEvent_405_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendEncampmentActor_WizardIsland_K2Node_ActorBoundEvent_419_ActorEndOverlapSignature__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__BendEncampmentActor_WizardIsland_K2Node_ActorBoundEvent_419_ActorEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ReceivePostSaveGameLoaded
struct AORWorldGlobal_DesignGlobal_C_ReceivePostSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ReceivePreSaveGameLoaded
struct AORWorldGlobal_DesignGlobal_C_ReceivePreSaveGameLoaded_Params
{
	bool*                                              bIsCheckpoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.TrustBinds
struct AORWorldGlobal_DesignGlobal_C_TrustBinds_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.TrustTierChanged
struct AORWorldGlobal_DesignGlobal_C_TrustTierChanged_Params
{
	class UBendEncampmentData*                         Encampment;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrustTier>                            PreviousTier;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrustTier>                            NewTier;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.CopelandEntered
struct AORWorldGlobal_DesignGlobal_C_CopelandEntered_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.CopelandExited
struct AORWorldGlobal_DesignGlobal_C_CopelandExited_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.DesignGlobal_LevelLoaded
struct AORWorldGlobal_DesignGlobal_C_DesignGlobal_LevelLoaded_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.AWI2_EnableWIStreamingOverrides
struct AORWorldGlobal_DesignGlobal_C_AWI2_EnableWIStreamingOverrides_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.AWI2_DisableWIStreamingOverrides
struct AORWorldGlobal_DesignGlobal_C_AWI2_DisableWIStreamingOverrides_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ToggleFastTravelLocations
struct AORWorldGlobal_DesignGlobal_C_ToggleFastTravelLocations_Params
{
	bool                                               NorthernActive;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SouthernActive;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.MeleeCamFollow
struct AORWorldGlobal_DesignGlobal_C_MeleeCamFollow_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.OnMissionComplete_TCA_Copy
struct AORWorldGlobal_DesignGlobal_C_OnMissionComplete_TCA_Copy_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.OnMissionComplete_TCA_Copy_Copy
struct AORWorldGlobal_DesignGlobal_C_OnMissionComplete_TCA_Copy_Copy_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.OnMissionComplete_TCA_Copy_Copy_Copy
struct AORWorldGlobal_DesignGlobal_C_OnMissionComplete_TCA_Copy_Copy_Copy_Params
{
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BikeChaseSetFail
struct AORWorldGlobal_DesignGlobal_C_BikeChaseSetFail_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BikeChaseDidItFail
struct AORWorldGlobal_DesignGlobal_C_BikeChaseDidItFail_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendSpherePlayerDetector_IronMikes_EastEntrance_K2Node_ActorBoundEvent_370_PlayerBeginOverlap__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__BendSpherePlayerDetector_IronMikes_EastEntrance_K2Node_ActorBoundEvent_370_PlayerBeginOverlap__DelegateSignature_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendSpherePlayerDetector_IronMikes_NorthEntrance_K2Node_ActorBoundEvent_386_PlayerBeginOverlap__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__BendSpherePlayerDetector_IronMikes_NorthEntrance_K2Node_ActorBoundEvent_386_PlayerBeginOverlap__DelegateSignature_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendSpherePlayerDetector_IronMikes_WestEntrance_K2Node_ActorBoundEvent_403_PlayerBeginOverlap__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__BendSpherePlayerDetector_IronMikes_WestEntrance_K2Node_ActorBoundEvent_403_PlayerBeginOverlap__DelegateSignature_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendSpherePlayerDetector_IronMikes_WestEntrance_K2Node_ActorBoundEvent_455_PlayerEndOverlap__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__BendSpherePlayerDetector_IronMikes_WestEntrance_K2Node_ActorBoundEvent_455_PlayerEndOverlap__DelegateSignature_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendSpherePlayerDetector_IronMikes_NorthEntrance_K2Node_ActorBoundEvent_474_PlayerEndOverlap__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__BendSpherePlayerDetector_IronMikes_NorthEntrance_K2Node_ActorBoundEvent_474_PlayerEndOverlap__DelegateSignature_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__BendSpherePlayerDetector_IronMikes_EastEntrance_K2Node_ActorBoundEvent_494_PlayerEndOverlap__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__BendSpherePlayerDetector_IronMikes_EastEntrance_K2Node_ActorBoundEvent_494_PlayerEndOverlap__DelegateSignature_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_WI_K2Node_ActorBoundEvent_140_PlayerBeginOverlap__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_WI_K2Node_ActorBoundEvent_140_PlayerBeginOverlap__DelegateSignature_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_WI_K2Node_ActorBoundEvent_162_PlayerEndOverlap__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_WI_K2Node_ActorBoundEvent_162_PlayerEndOverlap__DelegateSignature_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_WI2_K2Node_ActorBoundEvent_317_PlayerBeginOverlap__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_WI2_K2Node_ActorBoundEvent_317_PlayerBeginOverlap__DelegateSignature_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_WI2_K2Node_ActorBoundEvent_341_PlayerEndOverlap__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_WI2_K2Node_ActorBoundEvent_341_PlayerEndOverlap__DelegateSignature_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_DL2_K2Node_ActorBoundEvent_516_PlayerBeginOverlap__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_DL2_K2Node_ActorBoundEvent_516_PlayerBeginOverlap__DelegateSignature_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_DL2_K2Node_ActorBoundEvent_542_PlayerEndOverlap__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_DL2_K2Node_ActorBoundEvent_542_PlayerEndOverlap__DelegateSignature_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_CL_AZ_01_K2Node_ActorBoundEvent_725_PlayerBeginOverlap__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_CL_AZ_01_K2Node_ActorBoundEvent_725_PlayerBeginOverlap__DelegateSignature_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_CL_AZ_01_K2Node_ActorBoundEvent_753_PlayerEndOverlap__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_CL_AZ_01_K2Node_ActorBoundEvent_753_PlayerEndOverlap__DelegateSignature_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_CL_AZ_3_K2Node_ActorBoundEvent_782_PlayerBeginOverlap__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_CL_AZ_3_K2Node_ActorBoundEvent_782_PlayerBeginOverlap__DelegateSignature_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_CL_AZ_3_K2Node_ActorBoundEvent_812_PlayerEndOverlap__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_CL_AZ_3_K2Node_ActorBoundEvent_812_PlayerEndOverlap__DelegateSignature_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_HW_AZ_02_K2Node_ActorBoundEvent_843_PlayerBeginOverlap__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_HW_AZ_02_K2Node_ActorBoundEvent_843_PlayerBeginOverlap__DelegateSignature_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.BndEvt__SouthernRegionSpawnControl_HW_AZ_02_K2Node_ActorBoundEvent_875_PlayerEndOverlap__DelegateSignature
struct AORWorldGlobal_DesignGlobal_C_BndEvt__SouthernRegionSpawnControl_HW_AZ_02_K2Node_ActorBoundEvent_875_PlayerEndOverlap__DelegateSignature_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.UpdateSpawnControl
struct AORWorldGlobal_DesignGlobal_C_UpdateSpawnControl_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.TurnOffSpawnControl
struct AORWorldGlobal_DesignGlobal_C_TurnOffSpawnControl_Params
{
};

// Function ORWorldGlobal_DesignGlobal.ORWorldGlobal_DesignGlobal_C.ExecuteUbergraph_ORWorldGlobal_DesignGlobal
struct AORWorldGlobal_DesignGlobal_C_ExecuteUbergraph_ORWorldGlobal_DesignGlobal_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
