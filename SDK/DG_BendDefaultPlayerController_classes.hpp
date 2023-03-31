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

// BlueprintGeneratedClass BendDefaultPlayerController.BendDefaultPlayerController_C
// 0x04B8 (0x2488 - 0x1FD0)
class ABendDefaultPlayerController_C : public ABendPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1FD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       DeathPost;                                                // 0x1FD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       WaterPost;                                                // 0x1FE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             sndFocusMode;                                             // 0x1FE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       FocusPostHighlightOnly;                                   // 0x1FF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       GrappleOverlayPost;                                       // 0x1FF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       RockPost;                                                 // 0x2000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       HiddenPost;                                               // 0x2008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       AdrenalinePost;                                           // 0x2010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       SloMoPost;                                                // 0x2018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       UIPostProcess;                                            // 0x2020(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       WeaponWheelPost;                                          // 0x2028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       FocusPostDay;                                             // 0x2030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       HealthPostProcess;                                        // 0x2038(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       BushHidePost;                                             // 0x2040(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_Death_Fade_13BA37C048396F69D59BF9BD328034E8;     // 0x2048(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_Death__Direction_13BA37C048396F69D59BF9BD328034E8;// 0x204C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x204D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_Death;                                           // 0x2050(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusFadeOut_FadeIn_6E29C0F742D4D205A1811C831FFAEDBA;     // 0x2058(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FocusFadeOut__Direction_6E29C0F742D4D205A1811C831FFAEDBA; // 0x205C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x205D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FocusFadeOut;                                             // 0x2060(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_3_Voffset_D66BCC074A5291117DA144A57A159C69;      // 0x2068(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_3_Depth_D66BCC074A5291117DA144A57A159C69;        // 0x206C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_3_Hoffsewt_D66BCC074A5291117DA144A57A159C69;     // 0x2070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_3_PostBlend_D66BCC074A5291117DA144A57A159C69;    // 0x2074(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_3__Direction_D66BCC074A5291117DA144A57A159C69;   // 0x2078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x2079(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_4;                                               // 0x2080(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrappleOverlayBlendingTimeline_NewTrack_0_D27E71054B074887DF1C2EB043C51C29;// 0x2088(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    GrappleOverlayBlendingTimeline__Direction_D27E71054B074887DF1C2EB043C51C29;// 0x208C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x208D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          GrappleOverlayBlendingTimeline;                           // 0x2090(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_2_NewTrack_0_583A305D47894B63139D35AE4490B281;   // 0x2098(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_583A305D47894B63139D35AE4490B281;   // 0x209C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x209D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x20A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_1_FadeIn_DE7CEE2C4B5D0889CCB6C484FB9FC284;       // 0x20A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_DE7CEE2C4B5D0889CCB6C484FB9FC284;   // 0x20AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x20AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x20B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Fade_In_C47EB2834FE8E08552066DA23C12EC98;      // 0x20B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_C47EB2834FE8E08552066DA23C12EC98;   // 0x20BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x20BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x20C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusModeOut_FadeIn_61074FE64DA9ECF475FB67937506E6F2;     // 0x20C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FocusModeOut__Direction_61074FE64DA9ECF475FB67937506E6F2; // 0x20CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x20CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FocusModeOut;                                             // 0x20D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OnHide_Timeline_B_5A56FA3E49F73E9CCDEF6EB49C10763F;       // 0x20D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OnHide_Timeline_G_5A56FA3E49F73E9CCDEF6EB49C10763F;       // 0x20DC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OnHide_Timeline_R_5A56FA3E49F73E9CCDEF6EB49C10763F;       // 0x20E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    OnHide_Timeline__Direction_5A56FA3E49F73E9CCDEF6EB49C10763F;// 0x20E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x20E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          OnHide_Timeline;                                          // 0x20E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OnEnemyAware_Timeline_B_7DEBA5794E7BA74AB2CB76BF0220035C; // 0x20F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OnEnemyAware_Timeline_G_7DEBA5794E7BA74AB2CB76BF0220035C; // 0x20F4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OnEnemyAware_Timeline_R_7DEBA5794E7BA74AB2CB76BF0220035C; // 0x20F8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    OnEnemyAware_Timeline__Direction_7DEBA5794E7BA74AB2CB76BF0220035C;// 0x20FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x20FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          OnEnemyAware_Timeline;                                    // 0x2100(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OnEnemySemiAware_Timeline_B_20A0F8A147EBBC931B68EEB496F9B033;// 0x2108(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OnEnemySemiAware_Timeline_G_20A0F8A147EBBC931B68EEB496F9B033;// 0x210C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OnEnemySemiAware_Timeline_R_20A0F8A147EBBC931B68EEB496F9B033;// 0x2110(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    OnEnemySemiAware_Timeline__Direction_20A0F8A147EBBC931B68EEB496F9B033;// 0x2114(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x2115(0x0003) MISSED OFFSET
	class UTimelineComponent*                          OnEnemySemiAware_Timeline;                                // 0x2118(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OnDamage_TImeline_B_AE6CE2B6422D567BE40D16AFAA3B77CD;     // 0x2120(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OnDamage_TImeline_G_AE6CE2B6422D567BE40D16AFAA3B77CD;     // 0x2124(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OnDamage_TImeline_R_AE6CE2B6422D567BE40D16AFAA3B77CD;     // 0x2128(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    OnDamage_TImeline__Direction_AE6CE2B6422D567BE40D16AFAA3B77CD;// 0x212C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x212D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          OnDamage_TImeline;                                        // 0x2130(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OnDied_Timeline_B_56F005834ECF0FA38B09D5B7B9CC41B5;       // 0x2138(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OnDied_Timeline_G_56F005834ECF0FA38B09D5B7B9CC41B5;       // 0x213C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OnDied_Timeline_R_56F005834ECF0FA38B09D5B7B9CC41B5;       // 0x2140(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    OnDied_Timeline__Direction_56F005834ECF0FA38B09D5B7B9CC41B5;// 0x2144(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x2145(0x0003) MISSED OFFSET
	class UTimelineComponent*                          OnDied_Timeline;                                          // 0x2148(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FocusPost_Timeline_FadeIn_DC3AC4E94101C613071392BB32F34AE3;// 0x2150(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FocusPost_Timeline__Direction_DC3AC4E94101C613071392BB32F34AE3;// 0x2154(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x2155(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FocusPost_Timeline;                                       // 0x2158(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsInDebugZenMode;                                         // 0x2160(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x2161(0x0007) MISSED OFFSET
	class AActor*                                      DebugZenModeActor;                                        // 0x2168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               PawnDead;                                                 // 0x2170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FlashlightEnabled;                                        // 0x2171(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bScoped;                                                  // 0x2172(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugCamActive;                                           // 0x2173(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DebugCameraMode;                                          // 0x2174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebugCam_SpeedMultiplier;                                 // 0x2178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x217C(0x0004) MISSED OFFSET
	TArray<bool>                                       LowStatWarningSoundPlayed;                                // 0x2180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       ZeroStatWarningSoundPlayed;                               // 0x2190(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UBendAnimBlueprintMessenger*                 AnimMessenger;                                            // 0x21A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              DeathCams;                                                // 0x21A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      ActiveDeathCam;                                           // 0x21B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugTimeScaleOn;                                        // 0x21C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugFreezeTime;                                          // 0x21C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x6];                                       // 0x21C2(0x0006) MISSED OFFSET
	class ABendPOI*                                    LastPlayerGorePOI;                                        // 0x21C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               SkipNextGrappleButtonEvent;                               // 0x21D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x21D1(0x0007) MISSED OFFSET
	class ABP_ButtonPressEvent_C*                      CurrentStabKillButtonEvent;                               // 0x21D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABendPawn*                                   CurrentGrappleAttacker;                                   // 0x21E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              NegateAnyDamage_LowerPercentile;                          // 0x21E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BuffNegateAnyDamage;                                      // 0x21EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x21ED(0x0003) MISSED OFFSET
	class ABP_DebugScreenshotBikeCamera_C*             TempBikeDamageCamera;                                     // 0x21F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UPostProcessComponent*                       CurrentFocusPost;                                         // 0x21F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanAimOnBike;                                             // 0x2200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x2201(0x0003) MISSED OFFSET
	float                                              DodgeBufferedInputTime;                                   // 0x2204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DodgeInputCount;                                          // 0x2208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BikeInRange;                                              // 0x220C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BikeExitButtonPressed;                                    // 0x220D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BoostActive;                                              // 0x220E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData20[0x1];                                       // 0x220F(0x0001) MISSED OFFSET
	struct FScriptMulticastDelegate                    TelemetryEvent_PS_LevelUp;                                // 0x2210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TelemetryEvent_GS_EnterRegion;                            // 0x2220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TelemetryEvent_PS_FocusBegin;                             // 0x2230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TelemetryEvent_PS_FocusEnd;                               // 0x2240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TelemetryEvent_PS_BushHideBegin;                          // 0x2250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TelemetryEvent_PS_BushHideEnd;                            // 0x2260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TelemetryEvent_PS_ZenEnter;                               // 0x2270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TelemetryEvent_PS_ZenExit;                                // 0x2280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TelemetryEvent_PS_OpenMenu;                               // 0x2290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TelemetryEvent_PS_SprintBegin;                            // 0x22A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TelemetryEvent_PS_SprintEnd;                              // 0x22B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TelemetryEvent_PS_CrouchBegin;                            // 0x22C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TelemetryEvent_PS_CrouchEnd;                              // 0x22D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FKey                                        WeaponWheelKey;                                           // 0x22E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              WeaponWheelHoldDuration;                                  // 0x22F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TimeScaleInput_DID;                                       // 0x22FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                U_Key_DID;                                                // 0x2300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BikeDamageCam_DID;                                        // 0x2304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                I_Key_DID;                                                // 0x2308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WeaponWheel_DID;                                          // 0x230C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Death_DID;                                                // 0x2310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TriggerSensitivity;                                       // 0x2314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugDisableGrapple;                                      // 0x2318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanUseWeaponWheel;                                        // 0x2319(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData21[0x6];                                       // 0x231A(0x0006) MISSED OFFSET
	struct FName                                       Current_Play_Region;                                      // 0x2320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AvoidedCrouchForInteract;                                 // 0x2328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowBikePartHotSwapping;                                 // 0x2329(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2];                                       // 0x232A(0x0002) MISSED OFFSET
	int                                                BikeHotSwapCounter;                                       // 0x232C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FlashlightOnBeforeCinematic;                              // 0x2330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_CalloutType>                      CalloutType;                                              // 0x2331(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData23[0x6];                                       // 0x2332(0x0006) MISSED OFFSET
	struct FText                                       CollectibleCategoryName;                                  // 0x2338(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    TelemetryEvent_PS_EnemyTagged;                            // 0x2350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              QuickSwapHoldDuration;                                    // 0x2360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x4];                                       // 0x2364(0x0004) MISSED OFFSET
	struct FKey                                        QuickSwapKey;                                             // 0x2368(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<EControllerInputButton>                PrevButton;                                               // 0x2380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x2381(0x0003) MISSED OFFSET
	int                                                HumansLooted;                                             // 0x2384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AimRightShoulder;                                         // 0x2388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x2389(0x0003) MISSED OFFSET
	float                                              MeleeInput;                                               // 0x238C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MeleePress;                                               // 0x2390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MeleeLetGo;                                               // 0x2391(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FireStarted;                                              // 0x2392(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData27[0x1];                                       // 0x2393(0x0001) MISSED OFFSET
	struct FTimerHandle                                AdrenalineModeTimer;                                      // 0x2394(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TEnumAsByte<EInventoryAmmoID>>              AmmoTypesToIncrease;                                      // 0x2398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                ForcedWalkToken;                                          // 0x23A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerHiddenFlag;                                         // 0x23AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GrenadeAimed;                                             // 0x23AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponAimed;                                              // 0x23AE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FocusModeBuffer;                                          // 0x23AF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowedToSlide;                                           // 0x23B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData28[0x7];                                       // 0x23B1(0x0007) MISSED OFFSET
	TArray<struct FName>                               CollectibleTags;                                          // 0x23B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FText>                               CategoryNames;                                            // 0x23C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FInventoryStorageConsumableItemDetails> HealthItemsRef;                                           // 0x23D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              HitReactAnimTimer;                                        // 0x23E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaIncrease;                                            // 0x23EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewTime;                                                  // 0x23F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FocusWalkToken;                                           // 0x23F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShownStaminaTutorial;                                     // 0x23F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               SprintSlideBlocked;                                       // 0x23F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWasSurvivalWheelOpen;                                    // 0x23FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWasEquippedWeaponChanged;                                // 0x23FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWasFireReleased;                                         // 0x23FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MeleeFollowTarget;                                        // 0x23FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WasWeaponReset;                                           // 0x23FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData29[0x1];                                       // 0x23FF(0x0001) MISSED OFFSET
	struct FTimerHandle                                FocusModeBufferTimer;                                     // 0x2400(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     LocationWhenStartedFocusMode;                             // 0x2404(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SurvivalWheelFromBike;                                    // 0x2410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData30[0x7];                                       // 0x2411(0x0007) MISSED OFFSET
	class UUI_PhotoMode_C*                             PhotoModeWidget;                                          // 0x2418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBendPhotoModeFollowCam_C*                   PhotoModeCamera;                                          // 0x2420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    MoveForwardPhotoMode;                                     // 0x2428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               EscalationTutorial;                                       // 0x2438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               TopLadderTutorial;                                        // 0x2439(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               LadderTutTimerExpired;                                    // 0x243A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSwimmingPrevTick;                                       // 0x243B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData31[0x4];                                       // 0x243C(0x0004) MISSED OFFSET
	struct FName                                       CrossbowAimingTutorial;                                   // 0x2440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BottomLadderTutorial;                                     // 0x2448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               IsLadderTop;                                              // 0x2449(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanPlayBoostTutorial;                                     // 0x244A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData32[0x5];                                       // 0x244B(0x0005) MISSED OFFSET
	class UUI_DeathScreen_C*                           DeathScreenWidget;                                        // 0x2450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FInventoryStorageWeaponPart>         PartsForWeapon;                                           // 0x2458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABendDefaultPlayerPawn_C*                    PlayerPawn;                                               // 0x2468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponSelectPrimary;                                      // 0x2470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponSelectAlternate;                                    // 0x2471(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData33[0x2];                                       // 0x2472(0x0002) MISSED OFFSET
	struct FsCamTransitionData                         PhotoModeTransition;                                      // 0x2474(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               zoomScroll;                                               // 0x2480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData34[0x3];                                       // 0x2481(0x0003) MISSED OFFSET
	float                                              PreviousSteamTagEnemiesVal;                               // 0x2484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendDefaultPlayerController.BendDefaultPlayerController_C");
		return ptr;
	}


	void I_SetCanRideVehicles(bool CanRide, bool* Success);
	void I_GetCanRideVehicle(bool* Can);
	void I_SetPlayerAimVariables(bool Scoped, bool AimRightSide, bool* Success);
	void I_SetPlayerinCinematicMode(bool ON_, bool* Success);
	void CanKillGrappler(bool* CanKill);
	void AutoCompleteGrappleEvent(bool* AutoComplete);
	void ToggleAiming(bool* Toggle);
	void ToggleSurvivalWheel(bool* Toggle);
	void AddOnDeathContextualTips(class AController* Killer, class UDamageType* DamageType, class AActor* DamageCauser);
	bool HeldExitTheVehicle();
	void PlayQuickhealSound();
	void AmbushHitReacts();
	void IncreaseAmmoCap();
	void SetPlayerOnBikeTags(bool IsInVehicle);
	void ConfigureFocusModeDistance();
	void SetFocusForFocusEfficiencySkill();
	void SetFocusForJudgeJurySkill();
	bool NeedCounter();
	void CloseWeaponWheelAction();
	void OpenWeaponWheelAction(bool FromBike);
	void HandleAcquiredSkills(TEnumAsByte<EInventorySkillID> Acquired_Skill_ID);
	void SkillAcquire_Weak_HandReloading(bool Skip_Has_Acquired_Check);
	void IncreasePlayerAmmoCapacity(bool UpgradeAllAmmoTypes, TEnumAsByte<EInventoryAmmoID> AmmoType, int UpgradeTier_1_4, bool FillAmmo);
	void SetBikePartPreset4();
	void SetBikePartPreset3();
	void SetBikePartPreset2();
	void SetBikePartPreset1();
	void CheckFlashback(bool* IsInFlashback);
	void DisplaySaveGameNotification();
	void PrintPlayerPosForScreenshot();
	void SimplifyVectorForPrint(const struct FVector& InputVector, struct FString* Return);
	void PlayerPawnTakeScreenshot();
	void MarkEnemiesInBinoculars();
	void CreateGrappleButtonEvent();
	void RestoreButtonEventForNextGrapple();
	void SkipButtonEventForNextGrapple();
	void ChooseDeathCam(float Damage, const struct FVector& Momentum, class UDamageType* Damaged_By, class AActor* Killers_actor, class AController* Killers_Controller);
	void SetDeathCam(bool Turn_On_);
	void UpdateStatSoundEffects(int StatIndex, class UBendAttribute* Stat);
	void InitStatSoundEffects();
	void UnForceCrouch();
	void ForceCrouch();
	void DisplayDebugCameraText();
	void ToggleZenMode();
	void InitStats();
	void UserConstructionScript();
	void FocusPost_Timeline__FinishedFunc();
	void FocusPost_Timeline__UpdateFunc();
	void FocusModeOut__FinishedFunc();
	void FocusModeOut__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void GrappleOverlayBlendingTimeline__FinishedFunc();
	void GrappleOverlayBlendingTimeline__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void FocusFadeOut__FinishedFunc();
	void FocusFadeOut__UpdateFunc();
	void Timeline_Death__FinishedFunc();
	void Timeline_Death__UpdateFunc();
	void OnDied_Timeline__FinishedFunc();
	void OnDied_Timeline__UpdateFunc();
	void OnDamage_TImeline__FinishedFunc();
	void OnDamage_TImeline__UpdateFunc();
	void OnEnemySemiAware_Timeline__FinishedFunc();
	void OnEnemySemiAware_Timeline__UpdateFunc();
	void OnEnemyAware_Timeline__FinishedFunc();
	void OnEnemyAware_Timeline__UpdateFunc();
	void OnHide_Timeline__FinishedFunc();
	void OnHide_Timeline__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void InpActEvt_FocusModeToggle_UniqueObjectNameForCooking_121(const struct FKey& Key);
	void InpActEvt_SprintAction_UniqueObjectNameForCooking_120(const struct FKey& Key);
	void InpActEvt_SprintAction_UniqueObjectNameForCooking_119(const struct FKey& Key);
	void InpActEvt_LightToggle_UniqueObjectNameForCooking_118(const struct FKey& Key);
	void InpActEvt_LightToggle_UniqueObjectNameForCooking_117(const struct FKey& Key);
	void InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_116(const struct FKey& Key);
	void InpActEvt_Gamepad_RightShoulder_UniqueObjectNameForCooking_74(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftShoulder_UniqueObjectNameForCooking_73(const struct FKey& Key);
	void InpActEvt_Reload_UniqueObjectNameForCooking_115(const struct FKey& Key);
	void InpActEvt_QuickRecovery_UniqueObjectNameForCooking_114(const struct FKey& Key);
	void InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_113(const struct FKey& Key);
	void InpActEvt_Vehicle_EnterExitToggle_UniqueObjectNameForCooking_112(const struct FKey& Key);
	void InpActEvt_WeaponFire_UniqueObjectNameForCooking_111(const struct FKey& Key);
	void InpActEvt_WeaponFire_UniqueObjectNameForCooking_110(const struct FKey& Key);
	void InpActEvt_UseBinoculars_UniqueObjectNameForCooking_109(const struct FKey& Key);
	void InpActEvt_BinocularTagEnemies_UniqueObjectNameForCooking_108(const struct FKey& Key);
	void InpActEvt_WeaponWheel_UniqueObjectNameForCooking_107(const struct FKey& Key);
	void InpActEvt_WeaponWheel_UniqueObjectNameForCooking_106(const struct FKey& Key);
	void InpActEvt_WeaponWheel_UniqueObjectNameForCooking_105(const struct FKey& Key);
	void InpActEvt_Player_WeaponSwap_UniqueObjectNameForCooking_104(const struct FKey& Key);
	void InpActEvt_Player_WeaponSwap_UniqueObjectNameForCooking_103(const struct FKey& Key);
	void InpActEvt_Player_ManualAim_UniqueObjectNameForCooking_102(const struct FKey& Key);
	void InpActEvt_Player_ManualAim_UniqueObjectNameForCooking_101(const struct FKey& Key);
	void InpActEvt_Crouch_UniqueObjectNameForCooking_100(const struct FKey& Key);
	void InpActEvt_Crouch_UniqueObjectNameForCooking_99(const struct FKey& Key);
	void InpActEvt_QuickUseMedkit_UniqueObjectNameForCooking_98(const struct FKey& Key);
	void InpActEvt_QuickUseMedkit_UniqueObjectNameForCooking_97(const struct FKey& Key);
	void InpActEvt_Player_Climb_UniqueObjectNameForCooking_96(const struct FKey& Key);
	void InpActEvt_Player_Roll_UniqueObjectNameForCooking_95(const struct FKey& Key);
	void InpActEvt_Player_SelectWeaponSpecial_UniqueObjectNameForCooking_94(const struct FKey& Key);
	void InpActEvt_Player_SelectWeaponOne_UniqueObjectNameForCooking_93(const struct FKey& Key);
	void InpActEvt_Player_SelectWeaponTwo_UniqueObjectNameForCooking_92(const struct FKey& Key);
	void InpActEvt_Player_Detonator_UniqueObjectNameForCooking_91(const struct FKey& Key);
	void InpActEvt_Weapon_ZoomStep_UniqueObjectNameForCooking_90(const struct FKey& Key);
	void InpActEvt_Weapon_ZoomIn_UniqueObjectNameForCooking_89(const struct FKey& Key);
	void InpActEvt_Weapon_ZoomOut_UniqueObjectNameForCooking_88(const struct FKey& Key);
	void InpActEvt_CrouchToggle_UniqueObjectNameForCooking_87(const struct FKey& Key);
	void InpActEvt_SprintActionToggle_UniqueObjectNameForCooking_86(const struct FKey& Key);
	void InpActEvt_WeaponWheelToggle_UniqueObjectNameForCooking_85(const struct FKey& Key);
	void InpActEvt_PM_Hotkey_UniqueObjectNameForCooking_84(const struct FKey& Key);
	void InpActEvt_Interact3_UniqueObjectNameForCooking_83(const struct FKey& Key);
	void InpActEvt_Player_SelectWeaponThrowables_UniqueObjectNameForCooking_82(const struct FKey& Key);
	void InpActEvt_Player_SelectWeaponTraps_UniqueObjectNameForCooking_81(const struct FKey& Key);
	void InpActEvt_Player_SelectWeaponDistractions_UniqueObjectNameForCooking_80(const struct FKey& Key);
	void InpActEvt_Player_SelectWeapon_Next_UniqueObjectNameForCooking_79(const struct FKey& Key);
	void InpActEvt_Player_SelectWeapon_Prev_UniqueObjectNameForCooking_78(const struct FKey& Key);
	void InpActEvt_Player_ManualAimToggle_UniqueObjectNameForCooking_77(const struct FKey& Key);
	void InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_72(const struct FKey& Key);
	void InpActEvt_Gamepad_RightTrigger_UniqueObjectNameForCooking_71(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftTrigger_UniqueObjectNameForCooking_70(const struct FKey& Key);
	void InpActEvt_Gamepad_LeftTrigger_UniqueObjectNameForCooking_69(const struct FKey& Key);
	void InpActEvt_Hyphen_UniqueObjectNameForCooking_68(const struct FKey& Key);
	void InpActEvt_Zero_UniqueObjectNameForCooking_67(const struct FKey& Key);
	void InpActEvt_Debug_BikeHotSwapUp_UniqueObjectNameForCooking_76(const struct FKey& Key);
	void InpActEvt_Debug_BikeHotSwapDown_UniqueObjectNameForCooking_75(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Bottom_UniqueObjectNameForCooking_66(const struct FKey& Key);
	void I_InRangeOfVehicle(bool InRange_, class AVehiclePawn* VehicleRef);
	void DebugFreezeTimeScale();
	void CustomEvent_OnBeginSwimming();
	void CustomEvent_OnEndSwimming();
	void DieFromWater();
	void CODE_BeginSwimming();
	void CODE_EndSwimming();
	void OnPhotoModeEnabled();
	void OnPhotoModeDisabled();
	void TriggerOutOfBreath();
	void UpdateOutOfBreath();
	void FocusModePostProcessHandling(bool Turn_On_);
	void ResetBikeAim();
	void CallCrouch();
	void SwitchAimSides();
	void I_SetInteractableForBike(bool Interactable);
	void TurnPlayerFlashlightOnOff(bool* TurnOn);
	void ResetWWBikeAim();
	void DisableWeaponWheelPost();
	void EnableWeaponWheelPost();
	void PerformDodge();
	void Dodge_Buffered_Input_Expired_Copy_Copy();
	void DeactivateFocusMode_NEW(bool* PlayExitSound);
	void CloseWeaponWheel_Blueprint();
	void Melee();
	void TryAutoTraversal();
	void DeactivateAdrenalineMode();
	void ActivateAdrenalineMode();
	void ResetAdrenalineMode();
	void DrawThrownWeaponCheck();
	void ActivateGrappleOverlayEffect();
	void DeactivateGrappleOverlayEffect(bool* Instant);
	void ResetFire();
	void DisplayWeaponReturnedToLocker(struct FGameplayTag* WeaponTag, int* AmmoReturned);
	void AmbushHitReactTick(float* DeltaTime);
	void AmbushHitReactEnd();
	void AmbushHitReactBegin(float* TotalDuration);
	void OnDeactivatedSurvivalVision();
	void AmbushHitReactForceStop();
	void TurnOnRockThrowPostProcess(bool* On);
	void MeleeCamFollow();
	void OnActivatedSurvivalVision();
	void FocusModeTimerUp();
	void SurvivalVisionDisablePostProcessAndStartTimer();
	void OnSurvivalWheelPressed(bool* bFromBike);
	void OnSurvivalWheelReleased(bool* bFromBike);
	void UpdateAfterImagesCount(int* Added);
	void ForceUpdateSurvivalVisionHighlight();
	void NoBoostTutorialCheck();
	void OnTutorialBoostInputPressed();
	void CheckSprintSlide();
	void InpAxisEvt_WeaponFireAxis_K2Node_InputAxisEvent_38(float AxisValue);
	void ToggleWeaponWheel();
	void InpAxisEvt_SteamBinocularTagEnemies_K2Node_InputAxisEvent_48(float AxisValue);
	void SpawnDespawnBikeDamageCam(bool Spawn);
	void HideGrappleIcon(class AGrappleButtonPressEvent_C* GrappleIcon);
	void RetryGrappleHide();
	void OnPawnDie(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void OnPlayerRespawned(class ABendPlayerController* PlayerController);
	void ReceiveBeginPlay();
	void AttributeChangedDelegate_Stamina(class UBendAttribute* Attribute, float Value);
	void OnGrappledBegin_Event(class ABendPawn* Attacker, bool SkipButtonEvent);
	void GrappleButtonPressEventSuccess();
	void ReBindOnGrappleBegin();
	void OnStabKillBegin(class ABendPawn* Attacker);
	void OnStabKillEnded(class ABendPawn* Attacker);
	void StabKillSuccess();
	void PawnOnTakeAnyDamage_Event(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void PawnDiedSignature__DelegateSignature_Event(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void CauseGrappleFail();
	void ButtonEventFailure_Event_1();
	void OnNewGrappler_Event_1(class ABendPawn* NewGrappler, int GrapplerCount);
	void OnRiderStartedExitingVehicle_Event_1(class ABendPawn* Character, class AVehiclePawn* Vehicle, TEnumAsByte<EBendVehicleExitReason> ExitReason);
	void ReceiveSetNegateDamage(bool* State);
	void OnHidingStateChanged_Event_0_Copy(bool IsHiding, bool CanControl, bool IsEnclosedSpace);
	void OnPawnDetectedPlayer_Event_1(class ABendPawn* DetectingPawn, float AwarenessLevel);
	void DisplaySaveGameUI();
	void OnSkillAcquired(TEnumAsByte<EInventorySkillID> SkillID, class UInventoryItemSkill* SkillItem);
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void OnGrappledEnded_Event_1(class ABendPawn* Attacker);
	void AttributeChangedDelegate_Focus(class UBendAttribute* Attribute, float Value);
	void OnPlayerDiscoverCollectibleDelegate_Event_1(class UInventoryItemCollectible* Collectible);
	void OnPlayerDiscoverRecipeDelegate_Event_1(class UInventoryItemRecipe* Recipe);
	void OnRecipeCraftable(class UInventoryItemRecipe* Recipe);
	void OnAttributeChanged_Event_1(class UBendAttribute* Attribute, float Value);
	void OnPlayerReloadStarted_Event_1();
	void Inventory_UsedForNode(const struct FInventoryOperation& Operation);
	void OnPlayerReloadFinished();
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void DisplaySaveGameUIOnCheckpoint();
	void EscalationStarted(const struct FVector& Center, float Radius, TEnumAsByte<EeConflictEventType> ConflictEventType);
	void LadderApproachedEvent(bool IsTopLadder);
	void DeaconEnteredLadder(class ABendPawn* Pawn, bool StartingTopRung);
	void LadderTutorialClosed();
	void CallPhotoModeStarted();
	void CallPhotoModeEnded();
	void RecipeTutorial(const struct FName& TutorialKey);
	void OnPawnSet(class APawn** InPawn);
	void EnteredRegion(TEnumAsByte<ERegions>* Region);
	void LightBar_OnDied();
	void LightBar_OnDamage();
	void LightBar_OnHide();
	void LightBar_EnemySemiAware();
	void LightBar_EnemyAware();
	void LightBar_EnemyUnaware();
	void StopAllLightBar();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void GivePlayerKillEXP(int* Experience);
	void ShouldSkipButtonEventForNextGrapple(bool* Skip);
	void PlayerHidingUpdate();
	void CloseRangeEnemyHeadLook();
	void SpawnWeaponFromMenu(TEnumAsByte<EInventoryWeaponID>* WeaponIDToAdd, class UWidget** CallingMenu, bool* isWeaponMerchant);
	void ExecuteUbergraph_BendDefaultPlayerController(int EntryPoint);
	void MoveForwardPhotoMode__DelegateSignature(float Axis_Value);
	void TelemetryEvent_PS_EnemyTagged__DelegateSignature(class UBendCalloutWidgetComponent* PawnTagged);
	void TelemetryEvent_PS_CrouchEnd__DelegateSignature();
	void TelemetryEvent_PS_CrouchBegin__DelegateSignature();
	void TelemetryEvent_PS_SprintEnd__DelegateSignature();
	void TelemetryEvent_PS_SprintBegin__DelegateSignature();
	void TelemetryEvent_PS_OpenMenu__DelegateSignature(TEnumAsByte<EWidgetMenuClass> Menu);
	void TelemetryEvent_PS_ZenExit__DelegateSignature();
	void TelemetryEvent_PS_ZenEnter__DelegateSignature();
	void TelemetryEvent_PS_BushHideEnd__DelegateSignature();
	void TelemetryEvent_PS_BushHideBegin__DelegateSignature();
	void TelemetryEvent_PS_FocusEnd__DelegateSignature();
	void TelemetryEvent_PS_FocusBegin__DelegateSignature();
	void TelemetryEvent_GS_EnterRegion__DelegateSignature(TEnumAsByte<ERegions> Region);
	void TelemetryEvent_PS_LevelUp__DelegateSignature(int NewLevel);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
