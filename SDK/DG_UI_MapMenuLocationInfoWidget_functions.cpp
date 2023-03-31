// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.BikeRecover
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Status                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuLocationInfoWidget_C::BikeRecover(bool* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.BikeRecover");

	UUI_MapMenuLocationInfoWidget_C_BikeRecover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Status != nullptr)
		*Status = params.Status;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.Set Primary Storyline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EStoryLines>       Storyline_ID                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Show                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuLocationInfoWidget_C::Set_Primary_Storyline(TEnumAsByte<EStoryLines> Storyline_ID, bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.Set Primary Storyline");

	UUI_MapMenuLocationInfoWidget_C_Set_Primary_Storyline_Params params;
	params.Storyline_ID = Storyline_ID;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetBikeStats
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuLocationInfoWidget_C::SetBikeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetBikeStats");

	UUI_MapMenuLocationInfoWidget_C_SetBikeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetJobRewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuLocationInfoWidget_C::SetJobRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetJobRewards");

	UUI_MapMenuLocationInfoWidget_C_SetJobRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.CheckMotorcycle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FastTravelStatus               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EBikeFastTravelState> BikeState                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuLocationInfoWidget_C::CheckMotorcycle(float Distance, bool* FastTravelStatus, TEnumAsByte<EBikeFastTravelState>* BikeState)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.CheckMotorcycle");

	UUI_MapMenuLocationInfoWidget_C_CheckMotorcycle_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FastTravelStatus != nullptr)
		*FastTravelStatus = params.FastTravelStatus;
	if (BikeState != nullptr)
		*BikeState = params.BikeState;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.GetButtonStateText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   Button_Text                    (Parm, OutParm)

void UUI_MapMenuLocationInfoWidget_C::GetButtonStateText(struct FText* Button_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.GetButtonStateText");

	UUI_MapMenuLocationInfoWidget_C_GetButtonStateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button_Text != nullptr)
		*Button_Text = params.Button_Text;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetActiveMiniMapComponent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMiniMapLocationComponent* AciveMiniMapComponent          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuLocationInfoWidget_C::SetActiveMiniMapComponent(class UMiniMapLocationComponent* AciveMiniMapComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetActiveMiniMapComponent");

	UUI_MapMenuLocationInfoWidget_C_SetActiveMiniMapComponent_Params params;
	params.AciveMiniMapComponent = AciveMiniMapComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.DisplayInteractPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   AltLabel                       (Parm)
// struct FText                   ConfirmLabel                   (Parm)
// struct FText                   CancelLabel                    (Parm)

void UUI_MapMenuLocationInfoWidget_C::DisplayInteractPanel(bool State, const struct FText& AltLabel, const struct FText& ConfirmLabel, const struct FText& CancelLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.DisplayInteractPanel");

	UUI_MapMenuLocationInfoWidget_C_DisplayInteractPanel_Params params;
	params.State = State;
	params.AltLabel = AltLabel;
	params.ConfirmLabel = ConfirmLabel;
	params.CancelLabel = CancelLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.DisplayFeatureInteract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuLocationInfoWidget_C::DisplayFeatureInteract(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.DisplayFeatureInteract");

	UUI_MapMenuLocationInfoWidget_C_DisplayFeatureInteract_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.DisplayConfirmation
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuLocationInfoWidget_C::DisplayConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.DisplayConfirmation");

	UUI_MapMenuLocationInfoWidget_C_DisplayConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.DisplayErrorPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Message                        (Parm)

void UUI_MapMenuLocationInfoWidget_C::DisplayErrorPanel(bool State, const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.DisplayErrorPanel");

	UUI_MapMenuLocationInfoWidget_C_DisplayErrorPanel_Params params;
	params.State = State;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetInteractPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ConfimationLayout              (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   LabelConfirm                   (Parm)
// struct FText                   LabelCancel                    (Parm)

void UUI_MapMenuLocationInfoWidget_C::SetInteractPanel(bool ConfimationLayout, const struct FText& LabelConfirm, const struct FText& LabelCancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetInteractPanel");

	UUI_MapMenuLocationInfoWidget_C_SetInteractPanel_Params params;
	params.ConfimationLayout = ConfimationLayout;
	params.LabelConfirm = LabelConfirm;
	params.LabelCancel = LabelCancel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.NestPercentage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ProgressIn                     (Parm, ZeroConstructor)
// struct FString                 PercentageOut                  (Parm, OutParm, ZeroConstructor)

void UUI_MapMenuLocationInfoWidget_C::NestPercentage(const struct FString& ProgressIn, struct FString* PercentageOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.NestPercentage");

	UUI_MapMenuLocationInfoWidget_C_NestPercentage_Params params;
	params.ProgressIn = ProgressIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PercentageOut != nullptr)
		*PercentageOut = params.PercentageOut;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.CheckFastTravel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Available                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InsideDestinationEncampment    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocked                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Destination                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuLocationInfoWidget_C::CheckFastTravel(bool Available, bool InsideDestinationEncampment, bool bLocked, const struct FVector& Destination, float Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.CheckFastTravel");

	UUI_MapMenuLocationInfoWidget_C_CheckFastTravel_Params params;
	params.Available = Available;
	params.InsideDestinationEncampment = InsideDestinationEncampment;
	params.bLocked = bLocked;
	params.Destination = Destination;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.GetObjectiveIconAndColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMapRolloverType>  RollOverType                   (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             SlateColor                     (Parm, OutParm)

void UUI_MapMenuLocationInfoWidget_C::GetObjectiveIconAndColor(TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, TEnumAsByte<EMapRolloverType> RollOverType, class UTexture2D** Icon, struct FLinearColor* Color, struct FSlateColor* SlateColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.GetObjectiveIconAndColor");

	UUI_MapMenuLocationInfoWidget_C_GetObjectiveIconAndColor_Params params;
	params.Category = Category;
	params.Type = Type;
	params.RollOverType = RollOverType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
	if (Color != nullptr)
		*Color = params.Color;
	if (SlateColor != nullptr)
		*SlateColor = params.SlateColor;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetEncampmentCredits
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InCredits                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuLocationInfoWidget_C::SetEncampmentCredits(int InCredits)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetEncampmentCredits");

	UUI_MapMenuLocationInfoWidget_C_SetEncampmentCredits_Params params;
	params.InCredits = InCredits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetEncampmentTrust
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTrustData              TrustDetails                   (Parm, OutParm, ReferenceParm)
// struct FText                   Encampment_Percent             (Parm, OutParm)

void UUI_MapMenuLocationInfoWidget_C::SetEncampmentTrust(struct FTrustData* TrustDetails, struct FText* Encampment_Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetEncampmentTrust");

	UUI_MapMenuLocationInfoWidget_C_SetEncampmentTrust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TrustDetails != nullptr)
		*TrustDetails = params.TrustDetails;
	if (Encampment_Percent != nullptr)
		*Encampment_Percent = params.Encampment_Percent;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetEncampmentDetails
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapMarkerWidgetDetails Details                        (Parm, OutParm, ReferenceParm)
// struct FText                   Encampment_Percent             (Parm, OutParm)
// bool                           AltDescription                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   AltDescriptionText             (Parm, OutParm)

void UUI_MapMenuLocationInfoWidget_C::SetEncampmentDetails(struct FMapMarkerWidgetDetails* Details, struct FText* Encampment_Percent, bool* AltDescription, struct FText* AltDescriptionText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetEncampmentDetails");

	UUI_MapMenuLocationInfoWidget_C_SetEncampmentDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Details != nullptr)
		*Details = params.Details;
	if (Encampment_Percent != nullptr)
		*Encampment_Percent = params.Encampment_Percent;
	if (AltDescription != nullptr)
		*AltDescription = params.AltDescription;
	if (AltDescriptionText != nullptr)
		*AltDescriptionText = params.AltDescriptionText;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.HideAllPanels
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuLocationInfoWidget_C::HideAllPanels()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.HideAllPanels");

	UUI_MapMenuLocationInfoWidget_C_HideAllPanels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SyncLocationImage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapMarkerWidgetDetails Details                        (Parm, OutParm, ReferenceParm)
// TEnumAsByte<EMapRolloverType>  RollOverType                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuLocationInfoWidget_C::SyncLocationImage(TEnumAsByte<EMapRolloverType> RollOverType, struct FMapMarkerWidgetDetails* Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SyncLocationImage");

	UUI_MapMenuLocationInfoWidget_C_SyncLocationImage_Params params;
	params.RollOverType = RollOverType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Details != nullptr)
		*Details = params.Details;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetLocationDetails
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapMarkerWidgetDetails Details                        (Parm, OutParm, ReferenceParm)
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuLocationInfoWidget_C::SetLocationDetails(struct FMapMarkerWidgetDetails* Details, bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.SetLocationDetails");

	UUI_MapMenuLocationInfoWidget_C_SetLocationDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Details != nullptr)
		*Details = params.Details;
	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MapMenuLocationInfoWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.Construct");

	UUI_MapMenuLocationInfoWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.AsyncLoadTextureAsset_Material
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    TextureAsset                   (Parm)
// class UMaterialInstanceDynamic* Mid                            (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuLocationInfoWidget_C::AsyncLoadTextureAsset_Material(TAssetPtr<class UTexture2D> TextureAsset, class UMaterialInstanceDynamic* Mid)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.AsyncLoadTextureAsset_Material");

	UUI_MapMenuLocationInfoWidget_C_AsyncLoadTextureAsset_Material_Params params;
	params.TextureAsset = TextureAsset;
	params.Mid = Mid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void UUI_MapMenuLocationInfoWidget_C::CustomEvent_2(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.CustomEvent_2");

	UUI_MapMenuLocationInfoWidget_C_CustomEvent_2_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.BndEvt__MenuInteract_Square_K2Node_ComponentBoundEvent_779_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MapMenuLocationInfoWidget_C::BndEvt__MenuInteract_Square_K2Node_ComponentBoundEvent_779_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.BndEvt__MenuInteract_Square_K2Node_ComponentBoundEvent_779_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MapMenuLocationInfoWidget_C_BndEvt__MenuInteract_Square_K2Node_ComponentBoundEvent_779_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_781_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MapMenuLocationInfoWidget_C::BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_781_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_781_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MapMenuLocationInfoWidget_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_781_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_784_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MapMenuLocationInfoWidget_C::BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_784_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_784_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MapMenuLocationInfoWidget_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_784_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.BndEvt__MenuInteract_Confirm2_K2Node_ComponentBoundEvent_13616_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MapMenuLocationInfoWidget_C::BndEvt__MenuInteract_Confirm2_K2Node_ComponentBoundEvent_13616_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.BndEvt__MenuInteract_Confirm2_K2Node_ComponentBoundEvent_13616_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MapMenuLocationInfoWidget_C_BndEvt__MenuInteract_Confirm2_K2Node_ComponentBoundEvent_13616_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.BndEvt__MenuInteract_Square2_K2Node_ComponentBoundEvent_13621_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MapMenuLocationInfoWidget_C::BndEvt__MenuInteract_Square2_K2Node_ComponentBoundEvent_13621_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.BndEvt__MenuInteract_Square2_K2Node_ComponentBoundEvent_13621_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MapMenuLocationInfoWidget_C_BndEvt__MenuInteract_Square2_K2Node_ComponentBoundEvent_13621_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.ExecuteUbergraph_UI_MapMenuLocationInfoWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuLocationInfoWidget_C::ExecuteUbergraph_UI_MapMenuLocationInfoWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.ExecuteUbergraph_UI_MapMenuLocationInfoWidget");

	UUI_MapMenuLocationInfoWidget_C_ExecuteUbergraph_UI_MapMenuLocationInfoWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.OnFastTravelClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuLocationInfoWidget_C::OnFastTravelClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.OnFastTravelClicked__DelegateSignature");

	UUI_MapMenuLocationInfoWidget_C_OnFastTravelClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.OnSetMarkerClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuLocationInfoWidget_C::OnSetMarkerClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuLocationInfoWidget.UI_MapMenuLocationInfoWidget_C.OnSetMarkerClicked__DelegateSignature");

	UUI_MapMenuLocationInfoWidget_C_OnSetMarkerClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
