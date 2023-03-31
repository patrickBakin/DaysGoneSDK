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

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.BikeRecover
struct UUI_MapMenuLocationInfoWidget_C_BikeRecover_Params
{
	bool                                               Status;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.Set Primary Storyline
struct UUI_MapMenuLocationInfoWidget_C_Set_Primary_Storyline_Params
{
	TEnumAsByte<EStoryLines>                           Storyline_ID;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetBikeStats
struct UUI_MapMenuLocationInfoWidget_C_SetBikeStats_Params
{
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetJobRewards
struct UUI_MapMenuLocationInfoWidget_C_SetJobRewards_Params
{
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.CheckMotorcycle
struct UUI_MapMenuLocationInfoWidget_C_CheckMotorcycle_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FastTravelStatus;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBikeFastTravelState>                  BikeState;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.GetButtonStateText
struct UUI_MapMenuLocationInfoWidget_C_GetButtonStateText_Params
{
	struct FText                                       Button_Text;                                              // (Parm, OutParm)
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetActiveMiniMapComponent
struct UUI_MapMenuLocationInfoWidget_C_SetActiveMiniMapComponent_Params
{
	class UMiniMapLocationComponent*                   AciveMiniMapComponent;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.DisplayInteractPanel
struct UUI_MapMenuLocationInfoWidget_C_DisplayInteractPanel_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       AltLabel;                                                 // (Parm)
	struct FText                                       ConfirmLabel;                                             // (Parm)
	struct FText                                       CancelLabel;                                              // (Parm)
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.DisplayFeatureInteract
struct UUI_MapMenuLocationInfoWidget_C_DisplayFeatureInteract_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.DisplayConfirmation
struct UUI_MapMenuLocationInfoWidget_C_DisplayConfirmation_Params
{
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.DisplayErrorPanel
struct UUI_MapMenuLocationInfoWidget_C_DisplayErrorPanel_Params
{
	bool                                               State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (Parm)
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetInteractPanel
struct UUI_MapMenuLocationInfoWidget_C_SetInteractPanel_Params
{
	bool                                               ConfimationLayout;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       LabelConfirm;                                             // (Parm)
	struct FText                                       LabelCancel;                                              // (Parm)
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.NestPercentage
struct UUI_MapMenuLocationInfoWidget_C_NestPercentage_Params
{
	struct FString                                     ProgressIn;                                               // (Parm, ZeroConstructor)
	struct FString                                     PercentageOut;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.CheckFastTravel
struct UUI_MapMenuLocationInfoWidget_C_CheckFastTravel_Params
{
	bool                                               Available;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InsideDestinationEncampment;                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLocked;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.GetObjectiveIconAndColor
struct UUI_MapMenuLocationInfoWidget_C_GetObjectiveIconAndColor_Params
{
	TEnumAsByte<EObjectiveCategories>                  Category;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMapRolloverType>                      RollOverType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 SlateColor;                                               // (Parm, OutParm)
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetEncampmentCredits
struct UUI_MapMenuLocationInfoWidget_C_SetEncampmentCredits_Params
{
	int                                                InCredits;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetEncampmentTrust
struct UUI_MapMenuLocationInfoWidget_C_SetEncampmentTrust_Params
{
	struct FTrustData                                  TrustDetails;                                             // (Parm, OutParm, ReferenceParm)
	struct FText                                       Encampment_Percent;                                       // (Parm, OutParm)
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetEncampmentDetails
struct UUI_MapMenuLocationInfoWidget_C_SetEncampmentDetails_Params
{
	struct FMapMarkerWidgetDetails                     Details;                                                  // (Parm, OutParm, ReferenceParm)
	struct FText                                       Encampment_Percent;                                       // (Parm, OutParm)
	bool                                               AltDescription;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       AltDescriptionText;                                       // (Parm, OutParm)
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.HideAllPanels
struct UUI_MapMenuLocationInfoWidget_C_HideAllPanels_Params
{
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SyncLocationImage
struct UUI_MapMenuLocationInfoWidget_C_SyncLocationImage_Params
{
	struct FMapMarkerWidgetDetails                     Details;                                                  // (Parm, OutParm, ReferenceParm)
	TEnumAsByte<EMapRolloverType>                      RollOverType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetLocationDetails
struct UUI_MapMenuLocationInfoWidget_C_SetLocationDetails_Params
{
	struct FMapMarkerWidgetDetails                     Details;                                                  // (Parm, OutParm, ReferenceParm)
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.Construct
struct UUI_MapMenuLocationInfoWidget_C_Construct_Params
{
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.AsyncLoadTextureAsset_Material
struct UUI_MapMenuLocationInfoWidget_C_AsyncLoadTextureAsset_Material_Params
{
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
	class UMaterialInstanceDynamic*                    Mid;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.CustomEvent_2
struct UUI_MapMenuLocationInfoWidget_C_CustomEvent_2_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.BndEvt__MenuInteract_Square_K2Node_ComponentBoundEvent_779_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MapMenuLocationInfoWidget_C_BndEvt__MenuInteract_Square_K2Node_ComponentBoundEvent_779_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_781_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MapMenuLocationInfoWidget_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_781_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_784_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MapMenuLocationInfoWidget_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_784_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.BndEvt__MenuInteract_Confirm2_K2Node_ComponentBoundEvent_13616_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MapMenuLocationInfoWidget_C_BndEvt__MenuInteract_Confirm2_K2Node_ComponentBoundEvent_13616_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.BndEvt__MenuInteract_Square2_K2Node_ComponentBoundEvent_13621_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_MapMenuLocationInfoWidget_C_BndEvt__MenuInteract_Square2_K2Node_ComponentBoundEvent_13621_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.ExecuteUbergraph_UI_MapMenuLocationInfoWidget
struct UUI_MapMenuLocationInfoWidget_C_ExecuteUbergraph_UI_MapMenuLocationInfoWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.OnFastTravelClicked__DelegateSignature
struct UUI_MapMenuLocationInfoWidget_C_OnFastTravelClicked__DelegateSignature_Params
{
};

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.OnSetMarkerClicked__DelegateSignature
struct UUI_MapMenuLocationInfoWidget_C_OnSetMarkerClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
