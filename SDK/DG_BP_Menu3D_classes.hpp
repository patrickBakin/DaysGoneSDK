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

// BlueprintGeneratedClass BP_Menu3D.BP_Menu3D_C
// 0x04D8 (0x08C8 - 0x03F0)
class ABP_Menu3D_C : public AMenu3D
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendWidgetComponent*                        BendWidgetMain;                                           // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshJournalMap;                                     // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshSurvival;                                       // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshRanged;                                         // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshSupplies;                                       // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshGear;                                           // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshMelee;                                          // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SelectorBackground;                                       // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshJounralBackground;                              // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshInvPatch;                                       // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshInvBackground;                                  // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Storylines_Collectibles;                                  // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Storylines_Complete;                                      // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Storylines_Active;                                        // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Inventory_Materials;                                      // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Inventory_Supplies;                                       // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Inventory_Gear;                                           // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Skills_Survival;                                          // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Skills_Ranged;                                            // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Skills_Melee;                                             // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ForegroundMapHeader;                                      // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ForegroundTranslucent;                                    // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshSkillsDeacon;                                   // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshSkillsMap;                                      // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMeshInvImage;                                       // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        PlaneLinesCross;                                          // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        MapMesh;                                                  // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        BackgroundMain;                                           // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        BackgroundTranslucent;                                    // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot1;                                        // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Root1;                                                    // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendWidgetComponent*                        BendWidgetBikeInfo;                                       // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Main;                                                     // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Strorylines;                                              // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Skills;                                                   // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             INV;                                                      // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Map;                                                      // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimelineFade_Float_1CE99B4C472A2B5BE0973FAB03389F3C;      // 0x0528(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TimelineFade__Direction_1CE99B4C472A2B5BE0973FAB03389F3C; // 0x052C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x052D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TimelineFade;                                             // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimelineMain_Float_B51A58234A6D455E045EF495E29DD91B;      // 0x0538(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TimelineMain__Direction_B51A58234A6D455E045EF495E29DD91B; // 0x053C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x053D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TimelineMain;                                             // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MenuStartLocation;                                        // 0x0548(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0554(0x0004) MISSED OFFSET
	class USceneComponent*                             Menus;                                                    // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USceneComponent*                             CurrentTweenObject;                                       // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USceneComponent*                             CurrentDriftObject;                                       // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USceneComponent*                             GrayBackground;                                           // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USceneComponent*                             WhiteBackground;                                          // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   TouchStartVector;                                         // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   TouchEndVector;                                           // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TouchEventsBlocked;                                       // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMenuTypes>                            CurrentMenuEnum;                                          // 0x0591(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMenuTypes>                            NextMenuEnum;                                             // 0x0592(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x0593(0x0005) MISSED OFFSET
	class ABP_Map3D_C*                                 WorldMap3dRef;                                            // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceFromCamera;                                       // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsePlayerCamera;                                          // 0x05A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x05A5(0x0003) MISSED OFFSET
	struct FVector                                     DefaultMapLocation;                                       // 0x05A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x05B4(0x0004) MISSED OFFSET
	class UBendCamDebug*                               DuplicatePlayerCameraRef;                                 // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BgMatInst;                                                // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_MapMenuWidget3D_C*                       MapWidgetRef;                                             // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraFOV;                                                // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TearingDown;                                              // 0x05D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x05D5(0x0003) MISSED OFFSET
	int                                                TearingDownFrames;                                        // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x05DC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Fg_Mat_inst;                                              // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_SkillMenu_C*                             Menu_Base_Skills;                                         // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_InventoryMenu_C*                         Menu_Base_Inventory;                                      // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_Storylines_Menu_C*                       Menu_Base_Storylines;                                     // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_MapMenuWidget3D_C*                       Menu_Base_Map;                                            // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MapDriftScale;                                            // 0x0608(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x060C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    MenuOpened;                                               // 0x0610(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               WereBinocularsInUse;                                      // 0x0620(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0621(0x0007) MISSED OFFSET
	class UUI_MegaMenu_C*                              Menu_Base_MegaMenu;                                       // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class U3D_Select_Left_C*                           Menu_Base_Start;                                          // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMenuRequested;                                          // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bTutorialActive;                                          // 0x0648(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0649(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<EMenuTypes>>                    AllowedMenus;                                             // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bHasRunOnce;                                              // 0x0660(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0661(0x0007) MISSED OFFSET
	class UUI_MenuTutorial_C*                          TutorialWidget;                                           // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMenuTypes>                            LastMenuEnum;                                             // 0x0670(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0671(0x0003) MISSED OFFSET
	float                                              DragThresholdSquared;                                     // 0x0674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMenuTypes>                            SelectedMenuEnum;                                         // 0x0678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0679(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDragMenuSelected;                                       // 0x0680(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDragMenuHighlighted;                                    // 0x0690(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TEnumAsByte<EMenuTypes>                            PreviousMenuEnum;                                         // 0x06A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x06A1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFinishedDisplayingMenu;                                 // 0x06A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TAssetPtr<class UTexture2D>                        ImageInvBike;                                             // 0x06B8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TAssetPtr<class UTexture2D>                        ImageInvPatch;                                            // 0x06D8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TAssetPtr<class UTexture2D>                        ImageSkillsMap;                                           // 0x06F8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TAssetPtr<class UTexture2D>                        ImageSkillsDeacon;                                        // 0x0718(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TAssetPtr<class UTexture2D>                        ImageInvBackground;                                       // 0x0738(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TAssetPtr<class UTexture2D>                        ImageJournalBackground;                                   // 0x0758(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class UTexture2D>                        ImageSelectorBackground;                                  // 0x0778(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TAssetPtr<class UTexture2D>                        ImageInventoryGear;                                       // 0x0798(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TAssetPtr<class UTexture2D>                        ImageInventorySupplies;                                   // 0x07B8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TAssetPtr<class UTexture2D>                        ImageSkillsMelee;                                         // 0x07D8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TAssetPtr<class UTexture2D>                        ImageSkillsRanged;                                        // 0x07F8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TAssetPtr<class UTexture2D>                        ImageSkillsSurvival;                                      // 0x0818(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSTRUCT_TextureRequest_Menu_Mesh>    PendingAsyncLoadRequests;                                 // 0x0838(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bEnableFadeInOut;                                         // 0x0848(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0849(0x0003) MISSED OFFSET
	struct FVector                                     BaseTilt;                                                 // 0x084C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class UClass>                            TutorialWidgetClass;                                      // 0x0858(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<EMenuTypes>                            OverrideMenuEnum;                                         // 0x0878(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0879(0x0007) MISSED OFFSET
	TArray<struct FVector2D>                           SwipeStart;                                               // 0x0880(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class U3D_Select_Left_C*                           Menu_Base_Selector;                                       // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnFadeInFinished;                                         // 0x0898(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFadeOutFinished;                                        // 0x08A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bInExitTransition;                                        // 0x08B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x08B9(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    HeaderMatInst;                                            // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Menu3D.BP_Menu3D_C");
		return ptr;
	}


	void GetStorylinesMenu(class UUI_Storylines_Menu_C** StorylinesMenu);
	void DisplayMenu_For3D(TEnumAsByte<EMenuTypes> MenuTypes, bool NoAnimation, bool* Found);
	void IsMenuClosing(bool* IsClosing);
	void PlayMenuSounds(bool SkipAnimation, TEnumAsByte<EMenuTypes> TargetMenu, bool FromSwipe);
	void SetOverrideMenu(TEnumAsByte<EMenuTypes> Menu);
	void FlushMaterialImages();
	void InitMaterialImages();
	void GetDragSelectedMenu(const struct FVector2D& EndLocation, float* DistanceSquared, float* angle, TEnumAsByte<EMenuTypes>* Menu);
	void IsTopLevelMenu(TEnumAsByte<EMenuTypes> Menu, bool* IsTopLevelMenu);
	void DisplayLastMenu();
	void TouchInputMove(const struct FVector2D& Location, TEnumAsByte<ETouchIndex> TouchIndex);
	void ClearAllowedMenus();
	void IsMenuAllowed(TEnumAsByte<EMenuTypes> Desired_Menu, bool* Is_Menu_Allowed_);
	void SetAllowedMenus(TArray<TEnumAsByte<EMenuTypes>>* Allowed_Menus);
	void SetBlockClose(bool Should_Block_Close_);
	void GetMenu2DPosition(TEnumAsByte<EMenuTypes> MenuType, struct FVector2D* Position);
	void HideSmallImages();
	void GoToPrevMenu();
	void GoToNextMenu();
	void NewFunction_1(struct FVector2D* TouchStartVector);
	void DisplayMenuAtLastTouchLocation();
	void IsTouchInCenter(const struct FVector2D& Location, bool* InCenter);
	void DisableInactiveMenus();
	void ResetMenusToMain(TEnumAsByte<EMenuTypes> Menu);
	void SetMenuImage(class UPrimitiveComponent* Mesh, class UTexture2D* Texture2D, TAssetPtr<class UTexture2D> Texture_Asset, float Opacity, const struct FLinearColor& Tint, bool SingleChannel, bool FadeInWhenLoaded);
	void UpdateHudData();
	void GetMenu(TEnumAsByte<EMenuTypes> Menu, class UBendWidgetComponent** BendWidget, class UUserWidget** UserWidget, struct FVector* TargetLocation, bool* Success, struct FVector2D* TargetTranslation);
	void DisplayMenu(TEnumAsByte<EMenuTypes> Menu, bool NoAnimation, bool FromSwipe);
	void IsMapInputEnabled(bool* Enabled);
	void ResetInputs();
	void TouchInputEnd(const struct FVector2D& TouchLocation, TEnumAsByte<ETouchIndex> TouchIndex);
	void TouchInputStart(const struct FVector2D& TouchLocation, TEnumAsByte<ETouchIndex> TouchIndex);
	void ExitSelector();
	void EnterSelector();
	void UserConstructionScript();
	void TimelineMain__FinishedFunc();
	void TimelineMain__UpdateFunc();
	void TimelineFade__FinishedFunc();
	void TimelineFade__UpdateFunc();
	void InpTchEvt_UniqueObjectNameForCooking_18318174(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpTchEvt_UniqueObjectNameForCooking_18318173(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpTchEvt_UniqueObjectNameForCooking_18318172(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpActEvt_TogglePauseMenu_Map_UniqueObjectNameForCooking_832(const struct FKey& Key);
	void InpActEvt_TogglePauseMenu_Skills_UniqueObjectNameForCooking_831(const struct FKey& Key);
	void InpActEvt_TogglePauseMenu_Inventory_UniqueObjectNameForCooking_830(const struct FKey& Key);
	void InpActEvt_TogglePauseMenu_Storylines_UniqueObjectNameForCooking_829(const struct FKey& Key);
	void InpActEvt_TogglePauseMenu_MapPC_UniqueObjectNameForCooking_828(const struct FKey& Key);
	void InpActEvt_Debug_MapTeleport_UniqueObjectNameForCooking_827(const struct FKey& Key);
	void OnLoaded_1E5A22304C941CB4DAA34197B6B13F13(class UClass* Loaded);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void TweenToMenu(class USceneComponent* SceneComponent, const struct FVector& Current, const struct FVector& Target, TEnumAsByte<EMenuTypes> NextMenu, bool Reverse, bool NoAnimation);
	void FadeMenu(bool Forward);
	void CustomEvent_1();
	void OnMenuOpened();
	void OnMenuClosed();
	void FinishClosing();
	void InputFlickUp();
	void InputFlickDown();
	void InputFlickRight();
	void InputFlickLeft();
	void TouchBegin(const struct FVector& Location, TEnumAsByte<ETouchIndex> Index);
	void TouchEnd(const struct FVector& Location, TEnumAsByte<ETouchIndex> Index);
	void TogglePauseMenu_Map(TEnumAsByte<EMenuTypes> Menu);
	void Initialize();
	void OnMapClose();
	void TouchMove(const struct FVector& Location, TEnumAsByte<ETouchIndex> Index);
	void CustomEvent_2(TEnumAsByte<EMenuTypes> Menu, bool NoAnimation);
	void CustomEvent_3(TEnumAsByte<EMenuTypes> Menu, float angle);
	void CustomEvent_4();
	void CustomEvent_5(TEnumAsByte<EMenuTypes> OpenedMenu);
	void FlushStaticImages();
	void InitStaticImages();
	void CustomEvent_6(TEnumAsByte<EMenuTypes> MenuType);
	void SetMenuImageAsync(TAssetPtr<class UTexture2D> TextureAsset, class UPrimitiveComponent* Mesh, float Opacity, const struct FLinearColor& Tint, bool SingleChannel, bool FadeInWhenLoaded);
	void CustomEvent_7(TAssetPtr<class UObject> ObjectAssetPtr);
	void FadeFinished(bool Forward);
	void OnMenuClicked_Event_1(TEnumAsByte<EMenuTypes> Menu);
	void OpenMegaMenuWidget();
	void CloseMegaMenuWidget();
	void Map_MenuConfirm();
	void UI_MenuCancel();
	void OnRequestClose_Event_1();
	void UI_MenuTabNext();
	void UI_MenuTabPrevious();
	void InpAxisEvt_UI_Map_MoveUp_K2Node_InputAxisEvent_60(float AxisValue);
	void InpAxisEvt_UI_Map_MoveRight_K2Node_InputAxisEvent_68(float AxisValue);
	void Map_FastTravel();
	void OnDragStart_Event_1();
	void OnDragEnd_Event_1();
	void OnCenter_Event_1();
	void OnTerrainVisibility();
	void Map_Zoom(float AxisValue);
	void OnZoom(float AxisValue);
	void RightThumbStickButton();
	void LeftThumbStickButton();
	void OnClosingFinished(TEnumAsByte<EMenuTypes> OpenedMenu);
	void MouseMoveAbs_Event_1(const struct FVector2D& Location);
	void MouseHoverAbs_Event_1(const struct FVector2D& Location);
	void MouseUpAbs_Event_1(const struct FVector2D& Location, const struct FKey& Key);
	void InpAxisEvt_UI_Map_MoveUpKey_K2Node_InputAxisEvent_55(float AxisValue);
	void InpAxisEvt_UI_Map_MoveDownKey_K2Node_InputAxisEvent_59(float AxisValue);
	void InpAxisEvt_UI_Map_MoveLeftKey_K2Node_InputAxisEvent_64(float AxisValue);
	void InpAxisEvt_UI_Map_MoveRightKey_K2Node_InputAxisEvent_70(float AxisValue);
	void Map_Zoom_In(float AxisValue);
	void Map_Zoom_Out(float AxisValue);
	void OnZoomIn(float AxisValue);
	void OnZoomOut(float AxisValue);
	void ClickedZoom(float AxisValue);
	void MapClickedZoom(float AxisValue);
	void OnTutorialStep(int Step);
	void OnTutorialComplete();
	void ExecuteUbergraph_BP_Menu3D(int EntryPoint);
	void OnFadeOutFinished__DelegateSignature();
	void OnFadeInFinished__DelegateSignature();
	void OnFinishedDisplayingMenu__DelegateSignature(TEnumAsByte<EMenuTypes> MenuType);
	void OnDragMenuHighlighted__DelegateSignature(TEnumAsByte<EMenuTypes> Menu, float angle);
	void OnDragMenuSelected__DelegateSignature(TEnumAsByte<EMenuTypes> Menu, bool NoAnimation);
	void OnMenuRequested__DelegateSignature(TEnumAsByte<EMenuTypes> Displayed_Menu);
	void MenuOpened__DelegateSignature(TEnumAsByte<EMenuTypes> OpenedMenu);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
