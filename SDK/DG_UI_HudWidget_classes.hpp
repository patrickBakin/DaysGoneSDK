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

// WidgetBlueprintGeneratedClass UI_HudWidget.UI_HudWidget_C
// 0x02C1 (0x06E1 - 0x0420)
class UUI_HudWidget_C : public UHudWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            StaminaFadeOut;                                           // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            HealFadeOut;                                              // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            GrappleOverlayFade;                                       // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            HudFade;                                                  // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_HudObjective_C*                          _Objectives;                                              // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      AspectBars;                                               // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_Reticle_Binoculars_C*                    Binoculars;                                               // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     Border_6597;                                              // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                CanvasWrapper;                                            // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                CoreElements;                                             // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                EdgeMarkers;                                              // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     HealPrompt;                                               // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      HealthOverlay;                                            // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_HudHitEffects2_C*                        HitEffects;                                               // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOverlay*                                    HUDContents;                                              // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     HudWrapper;                                               // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_LoadingCircle_C*                         Loading;                                                  // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_HudMissionPopup_C*                       MissionPopup;                                             // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_HudNotificationItemNew_C*                NotifyBanner;                                             // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_HudNotificationItemNew_C*                NotifyCollectible;                                        // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_HudNotificationItemNew_C*                NotifyLevelReward;                                        // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_HudNotificationItemNew_C*                NotifyStandard;                                           // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     NotifyStandardWrapper;                                    // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_HudNotificationItemNew_C*                NotifyStoryline;                                          // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_SoundMeter_C*                            PlayerStealth;                                            // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USurvivalBarPreview_C*                       PreviewBar;                                               // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class USurvivalWheelPreview_C*                     PreviewWheel;                                             // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UStealthMeter_C*                             Radar;                                                    // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      RadarBackground;                                          // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_HudReticlesWidget_C*                     Reticles;                                                 // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UOverlay*                                    SimpleTutorialOverlay;                                    // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     StaminaPrompt;                                            // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UHorizontalBox*                              StaminaWarningLabel;                                      // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_SurvivalWheel_C*                         SurvivalWheel;                                            // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_WaterMeter_C*                            UI_WaterMeter;                                            // 0x0538(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_HudWeapon_C*                             Weapon;                                                   // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      WeaponBackground;                                         // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      WeaponBackground2;                                        // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_HudXpMeterWidget2_C*                     xp;                                                       // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               PlayerIsAiming;                                           // 0x0560(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0561(0x0007) MISSED OFFSET
	class UCanvasPanel*                                CurrentReticle;                                           // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   MiniMapIconScale;                                         // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayerIsScoping;                                          // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerIsStealthed;                                        // 0x0579(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x057A(0x0006) MISSED OFFSET
	class UUI_ObjectiveCallout_C*                      ObjCallout;                                               // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberCallouts;                                           // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HudVisible;                                               // 0x058C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x058D(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    EventMissionTimerHidden;                                  // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    EventMissionTimerComplete;                                // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class UWidgetAnimation*>                    WidgetAnims;                                              // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UWidget*>                             VisibleWidgets;                                           // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UWidget*>                             AllWidgets;                                               // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FUI_HudVisibilityOptions                    VisibilityExclusions;                                     // 0x05E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UUI_CollectibleNotification_C*               CollectibleNotification;                                  // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_CollectibleInteract_C*                   CollectibleInteract;                                      // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BinocularsAiming;                                         // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0601(0x0003) MISSED OFFSET
	float                                              FuelWarnPercent;                                          // 0x0604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FuelFlashPercent;                                         // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FuelCriticalPercent;                                      // 0x060C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABendWeapon*                                 EquippedWeapon;                                           // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABendWeapon*                                 HolsteredWeapon;                                          // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                DisplayedIndex;                                           // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0624(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    HealthOverlay_MI;                                         // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UUI_TutorialPanel_C*>                 SimpleTutorialWidgetQueue;                                // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	class UUI_TutorialPanel_C*                         ActiveSimpleTutorialWidget;                               // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               HealPromptActive;                                         // 0x0648(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0649(0x0007) MISSED OFFSET
	TArray<class UUI_TutorialPanel_C*>                 ActiveTutorialMultiWidgets;                               // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance)
	bool                                               SavePromptActive;                                         // 0x0660(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BikeExitUIShouldBeVisible;                                // 0x0661(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0662(0x0002) MISSED OFFSET
	struct FTimerHandle                                BikeExitUITimer;                                          // 0x0664(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UBendCamFollow*                              WaterCamera;                                              // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_World_Collectable_Viewer_C*              CollectableViewer;                                        // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Current_Stamina;                                          // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HUDWeaponsVisible;                                        // 0x067C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HUDRadarVisible;                                          // 0x067D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HUDEncampmentVisible;                                     // 0x067E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSurvivalDiffSurvivalVisionActive;                      // 0x067F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SurvivalDifficultyVisionTime;                             // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0684(0x0004) MISSED OFFSET
	struct FPlayerSaveProfileMenuEntry                 Survival;                                                 // 0x0688(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               WaterBarActive;                                           // 0x06E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HudWidget.UI_HudWidget_C");
		return ptr;
	}


	void ClearAllNotifications(bool* Success);
	void CloseRewardPanel(bool* Success);
	void GetExclusions(struct FUI_HudVisibilityOptions* Exclusions);
	void I_GetUiMarkupDataRows(TArray<struct FName>* Rows);
	void I_GetUiMarkupDataFromRow(const struct FName& Row, struct FBend_UI_ButtonMarkup* Markup);
	void I_SpawnSimpleTutorial(const struct FText& Content, bool AutoClose, const struct FName& CloseAction, class UUI_TutorialPanel_C** Tutorial);
	void DisplayWeaponStats(bool State, class UInventoryWeaponItem* Weapon, bool* Success);
	void UpdateInlineSkipProgress(float Percent, bool* Success);
	void DisplayInlineSkipButton(bool State, bool* Success);
	void CloseTutorial(bool* Success);
	void DisplayTracking(bool State, bool* Success);
	void UpdateTracking(float Percent, bool* Success);
	void PauseObjectiveMeter(bool State, bool* Success);
	void DisplayTrust(int TrustGained, class UBendEncampmentData* Encampment, bool* Success);
	void DisplayAttributeAwardData(bool State, TEnumAsByte<Enum_BannerType> AttributeType, float Value, bool* Success);
	void GetCurrentObjectiveDisplayedIndex(int* Index);
	void RemoveObjectiveMeter(bool* Success);
	void UpdateObjectiveMeter(float Percent, bool* Success);
	void DisplayObjectiveMeter(TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, float Percent, bool Invert, bool IsHealthBar, bool* Success);
	void DisplayObjective(TEnumAsByte<EObjectiveHudState> HUD_State, TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, const struct FText& SubTitle, const struct FBendRewardsScreenData& RewardScreenData, bool NewData, int* Index);
	void AddObjectiveUnlocked(const struct FUI_HudNotificationDetails& Details);
	void GetMissionPopupQueue(TArray<struct FUI_HudMissionPopupDetails>* PopupQueue);
	void ClearObjectives(bool* Success);
	void CompleteObjective(class UHudNotificationItemWidget* Objective, bool* Success);
	void RemoveObjective(class UHudNotificationItemWidget* Objective, bool* Success);
	void CancelNotification(const struct FUI_HudNotificationDetails& Details, bool* Removed);
	void GetIsSurvivalDifficulty(bool* Survival);
	void CheckSurvivalHUDState();
	void HideWeaponAndRadarForRewards(const struct FBendRewardsScreenData& RewardsData);
	void DestroyCollectableViewer();
	void EnqueueCollectable(class UInventoryItemCollectible* New_Collectible, const struct FText& Category);
	void Update_Survival_Mode_Visibility();
	bool IsCompletionScreenActive();
	void QuicksaveButtonHold(float HoldPercentage, bool Released);
	void DisplayQuicksavePrompt(bool State);
	void CheckMeleeHealth();
	void AttemptedStaminaUseWhileEmpty();
	void UpdateBikeHUDVisibility(bool bIsVisible);
	void RemoveTrapStickyIcon(class ABendTrap* Trap);
	void AddTrapStickyIcon(class ABendTrap* Trap, float TimeToExplode, class UUserWidget* Widget);
	void SetHealthRedOverlay();
	void OverrideLevelUpBanner();
	void SpawnSimpleTutorial(const struct FText& Content, bool AutoClose, const struct FName& CloseAction, class UUI_TutorialPanel_C** TutorialPanel);
	void CheckForScrap();
	void ScaledOverlayValue(float Percent, float LimitPercent, float* FinalPercent);
	void SetHealPrompt(bool On);
	void IsLocationPanelVisible(bool* IsVisible);
	void RemoveGrenadeStickyIcon(class ABendProjectile* Projectile);
	void AddGrenadeStickyIcon(class ABendProjectile* Projectile, float TimeToExplode, class UUserWidget* Widget);
	void SetBinocularsAim(bool Aiming);
	void RemoveCollectibleClueInteract();
	void ActivateCollectibleClueInteract(class UInventoryItemCollectible* Collectible, class UUI_CollectibleInteract_C** ClueInteract);
	void InitWidgetsArray();
	void SetWidgetVisible(class UWidgetAnimation* Animation, bool Visible);
	void InitVisibleWidgets();
	void OnDisplayNotification(const struct FUI_HudNotificationDetails& Details);
	void Init();
	void SetVisible(bool IsVisible, const struct FUI_HudVisibilityOptions& Exclusions);
	void InitMinimap();
	void ClearLeavingMissionZoneNotification();
	void DisplaySimpleTutorial(class UUI_TutorialSimple_C* Widget, const struct FText& Content, bool AutoClose, const struct FName& CloseAction, class UObject* CloseInterface);
	void SetObjectiveMeterPaused(bool Paused);
	void SetObjectiveMeterPercent(float Percent);
	void ClearObjectiveMeter();
	void UpdateObjective(const struct FString& Text, class UHudNotificationItemWidget* Widget);
	void SetRangedTarget(class ABendPawn* Pawn);
	void Construct();
	void SyncBikeFuel(float* Percent);
	void SyncBikeBoost(float* Percent);
	void PostWidgetInitialize();
	void OnPlayerAim(class ABendWeapon** EquippedWeapon, bool* IsAiming);
	void SetBikeHudVisible(bool* Visible);
	void SyncBikeDamage(float* Percent);
	void OnEquipWeapon(class ABendWeapon** EquippedWeapon);
	void OnPlayerFire(class ABendWeapon** Weapon);
	void SetHudVisible(bool* Visible);
	void OnPlayerStealth(bool* IsStealthed);
	void OnPlayerScope(class ABendWeapon** EquippedWeapon, bool* IsScoping);
	void SyncAmmoCount(class ABendWeapon** Weapon, int* Clip, int* Spare);
	void DisplayLocationPanel(TEnumAsByte<Enum_HudLocation> LocationType, const struct FText& locationName, float PercentComplete, int CurrentTrust, int CurrentTrustMax, TEnumAsByte<ETrustTier> TrustTier, int CurrentCredits, class UBendEncampmentData* EncampmentData);
	void DisplayMissionInfoPopup(TEnumAsByte<EUI_HudPopupType> Type, const struct FText& Title, TEnumAsByte<EUI_RewardType> RewardType, int RewardValue, const struct FText& SubTitle, const struct FActorInteractDetails& InteractDetails, class UObject* UtilityObject);
	void UpdateMeleeMeter(bool OwnerIsPlayer, float Health);
	void ShowHUD(const struct FUI_HudVisibilityOptions& Exclusions);
	void HideHUD(const struct FUI_HudVisibilityOptions& Exclusions);
	void OnPlayerEarnedCategoryXP(class UPlayerExperienceLevel** PlayerXP, TEnumAsByte<EPlayerExperience>* Type, int* XPEarned);
	void CloseLocationPanel();
	void SetBinocularsAiming(bool Aiming);
	void SetMissionInfoPopupProgress(float Progress);
	void OnWeaponRepaired(class ABendWeapon** Weapon, float* Health);
	void OnWeaponHolstered(class ABendEquippableItem** Weapon);
	void OnHealthModified(class UBendAttribute** Attribute, float* Value);
	void OnStaminaModifed(class UBendAttribute** Attribute, float* Value);
	void OnFocusModifed(class UBendAttribute** Attribute, float* Value);
	void GrenadeOverlapBegin(class ABendProjectile* Projectile, float TimeToExplode, class UUserWidget* Widget);
	void GrenadeOverlapEnd(class ABendProjectile* Projectile, class UUserWidget* Widget);
	void OnPlayerRespawnEvent(class ABendPlayerController** PlayerController);
	void On_Grapple_Exit(class ABendPawn* Attacker);
	void On_Grapple_Start(class ABendPawn* Attacker, bool SkipButtonEvent);
	void OnTrapBegin(class ABendTrap* Trap, class ABendPawn* TriggeringPawn);
	void TrapSuccess();
	void On_Death(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void ShowSurvivalWheel();
	void HideSurvivalWheel();
	void SetRadarVisible(bool Visible);
	void RebindPlayerBoundEvents();
	void On_Respawn(class ABendPlayerController* PlayerController);
	void DisplayNotification(const struct FUI_HudNotificationDetails& Details);
	void UpdateDamagedWeapon();
	void OnInventoryModifiedDelegate(const struct FInventoryOperation& Operation);
	void OnFlashlightToggle(bool FlashlightOn);
	void SetUnderArmorVisible(bool* Visible);
	void SetUnderArmorPercent(float* Percent);
	void SetUnderArmorUILength(int* BarLength);
	void OnConsumableHold(float* HoldPercentage, bool* Released);
	void OnDPadPressed(struct FVector2D* Direction);
	void ProcessSimpleTutorialQueue();
	void OnSimpleTutorialClosed();
	void ClearTutorials();
	void OnPlayerFastTravel();
	void EnableMissionFailMessage(struct FText* NewtText, bool* IsFullFailure);
	void DisableMissionFailMessage();
	void On_Grapple_End(class ABendPawn* Attacker);
	void OnPlayerVisibility(float* PSVisibility);
	void OnPlayerAudibility(float* PSAudibility);
	void OnNewPlayerStealth(bool* DisplayMeter, bool* Alerted);
	void ResetHudVisibilityExclusions();
	void OnDisplayLowHealthWarning_Event_1(bool On);
	void UpdateHealthItemCount(int* Count);
	void OnTrapOverlapBegin(class ABendTrap* Trap, float TimeToExplode, class UUserWidget* Widget);
	void OnTrapOverlapEnd(class ABendTrap* Trap, class UUserWidget* Widget);
	void OnBinocularStart();
	void OnBinocularEnd();
	void OnFocusModeToggle_Event_1(bool EnteredFocusMode);
	void OnCloseDelegate_Event_1();
	void On_Post_Save_Game_Loaded(bool bIsCheckpoint);
	void RegisterTutorialMulti(class UUI_TutorialPanel_C* Widget);
	void OnTutoirialMultiClosed();
	void ClearTutorialMultis();
	void HitEnemyWithMelee(class ABendPawn* VictimPawn, int HitCounter, const struct FVector2D& HitVector);
	void OnDisplayQuicksaveInteractEvent(bool On);
	void OnQuicksaveHold(float* HoldPercentage, bool* Released);
	void UpdateGetOffBikeInteractProgress(float* Percent);
	void SetBikeGetOffInteractVisible(bool* IsVisible, bool* Force);
	void GetOffBikeInputDisplayTimer();
	void On_Ladder_Approach(bool IsTopLadder);
	void On_Ladder_Mount(class ABendPawn* Pawn, bool StartingTopRung);
	void On_Ladder_Leave(bool IsTopLadder);
	void WaterBarStart(float Time);
	void WaterBarEnd();
	void I_RegisterTutorialMulti(class UUI_TutorialPanel_C* Tutorial);
	void I_DisplayRewardPanel(const struct FBendRewardsScreenData& RewardsScreenData);
	void OnSurvivalFocusMode();
	void OnObjectiveAnimFinished();
	void BindSurvivalDifficultyVision();
	void On_Ladder_Dismount(class ABendPawn* Pawn, bool LeavingTopRung);
	void OnQuickSwap(int* InSlotIndex);
	void ExecuteUbergraph_UI_HudWidget(int EntryPoint);
	void EventMissionTimerComplete__DelegateSignature();
	void EventMissionTimerHidden__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
