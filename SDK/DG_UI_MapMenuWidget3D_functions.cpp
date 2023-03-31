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

// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              InMyGeometry                   (Parm, IsPlainOldData)
// struct FPointerEvent*          InMouseEvent                   (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_MapMenuWidget3D_C::OnMouseButtonDoubleClick(struct FGeometry* InMyGeometry, struct FPointerEvent* InMouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnMouseButtonDoubleClick");

	UUI_MapMenuWidget3D_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_MapMenuWidget3D_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnMouseButtonUp");

	UUI_MapMenuWidget3D_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_MapMenuWidget3D_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnMouseButtonDown");

	UUI_MapMenuWidget3D_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_MapMenuWidget3D_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnMouseMove");

	UUI_MapMenuWidget3D_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.TutorialComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::TutorialComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.TutorialComplete");

	UUI_MapMenuWidget3D_C_TutorialComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.ActivateMapBanner
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::ActivateMapBanner()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.ActivateMapBanner");

	UUI_MapMenuWidget3D_C_ActivateMapBanner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.SetStorylineSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::SetStorylineSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.SetStorylineSelected");

	UUI_MapMenuWidget3D_C_SetStorylineSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.GoToPageByType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_Menu_Type>*   MenuType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::GoToPageByType(TEnumAsByte<ENUM_Menu_Type>* MenuType, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.GoToPageByType");

	UUI_MapMenuWidget3D_C_GoToPageByType_Params params;
	params.MenuType = MenuType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.RegionCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ERegions>          Region                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RegionUnlocked                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::RegionCheck(TEnumAsByte<ERegions> Region, bool* RegionUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.RegionCheck");

	UUI_MapMenuWidget3D_C_RegionCheck_Params params;
	params.Region = Region;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RegionUnlocked != nullptr)
		*RegionUnlocked = params.RegionUnlocked;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.SetRegionEntryInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMap_RegionStat_C*       Stat                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Name                           (Parm)
// class UTexture2D*              Icon                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentCount                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            TotalCount                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          Percentage                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   UnlockKey                      (Parm, ZeroConstructor, IsPlainOldData)
// class UBendMissionData*        MissionUnlock                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::SetRegionEntryInfo(class UMap_RegionStat_C* Stat, const struct FText& Name, class UTexture2D* Icon, int CurrentCount, int TotalCount, float Percentage, const struct FName& UnlockKey, class UBendMissionData* MissionUnlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.SetRegionEntryInfo");

	UUI_MapMenuWidget3D_C_SetRegionEntryInfo_Params params;
	params.Stat = Stat;
	params.Name = Name;
	params.Icon = Icon;
	params.CurrentCount = CurrentCount;
	params.TotalCount = TotalCount;
	params.Percentage = Percentage;
	params.UnlockKey = UnlockKey;
	params.MissionUnlock = MissionUnlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.UpdateRegionData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EWorldRegions>     Region                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Initialize                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::UpdateRegionData(TEnumAsByte<EWorldRegions> Region, bool Initialize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.UpdateRegionData");

	UUI_MapMenuWidget3D_C_UpdateRegionData_Params params;
	params.Region = Region;
	params.Initialize = Initialize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.SetLocationImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::SetLocationImage(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.SetLocationImage");

	UUI_MapMenuWidget3D_C_SetLocationImage_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.UpdateActiveMissionJobDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::UpdateActiveMissionJobDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.UpdateActiveMissionJobDisplay");

	UUI_MapMenuWidget3D_C_UpdateActiveMissionJobDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.UpdateTrackedMissionJob
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::UpdateTrackedMissionJob(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.UpdateTrackedMissionJob");

	UUI_MapMenuWidget3D_C_UpdateTrackedMissionJob_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.NoObjectiveActive
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::NoObjectiveActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.NoObjectiveActive");

	UUI_MapMenuWidget3D_C_NoObjectiveActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.DisplayObjective
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TitleText                      (Parm)
// struct FText                   SubtitleText                   (Parm)

void UUI_MapMenuWidget3D_C::DisplayObjective(TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, const struct FText& TitleText, const struct FText& SubtitleText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.DisplayObjective");

	UUI_MapMenuWidget3D_C_DisplayObjective_Params params;
	params.Category = Category;
	params.Type = Type;
	params.TitleText = TitleText;
	params.SubtitleText = SubtitleText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.UpdateTimeWeather
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::UpdateTimeWeather()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.UpdateTimeWeather");

	UUI_MapMenuWidget3D_C_UpdateTimeWeather_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.LocationZOrder
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EMiniMapLocation>  Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ZOrder                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::LocationZOrder(TEnumAsByte<EMiniMapLocation> Type, int* ZOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.LocationZOrder");

	UUI_MapMenuWidget3D_C_LocationZOrder_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ZOrder != nullptr)
		*ZOrder = params.ZOrder;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.Initialize");

	UUI_MapMenuWidget3D_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MapMenuWidget3D_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.Construct");

	UUI_MapMenuWidget3D_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnSynchronizePropertiesEvent
// (Event, Protected, BlueprintEvent)

void UUI_MapMenuWidget3D_C::OnSynchronizePropertiesEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnSynchronizePropertiesEvent");

	UUI_MapMenuWidget3D_C_OnSynchronizePropertiesEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.SetAlphaFade
// (BlueprintEvent)
// Parameters:
// float                          FadeAlpha                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::SetAlphaFade(float FadeAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.SetAlphaFade");

	UUI_MapMenuWidget3D_C_SetAlphaFade_Params params;
	params.FadeAlpha = FadeAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnUpdateFogOfWar
// (BlueprintEvent)

void UUI_MapMenuWidget3D_C::OnUpdateFogOfWar()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnUpdateFogOfWar");

	UUI_MapMenuWidget3D_C_OnUpdateFogOfWar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.ExecuteFastTravel
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FTransform              PlayerTransform                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              BikeTransform                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UUI_MapMenuWidget3D_C::ExecuteFastTravel(const struct FTransform& PlayerTransform, const struct FTransform& BikeTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.ExecuteFastTravel");

	UUI_MapMenuWidget3D_C_ExecuteFastTravel_Params params;
	params.PlayerTransform = PlayerTransform;
	params.BikeTransform = BikeTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnNewMissionOrJobTracked_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 JobOrMissionData               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::OnNewMissionOrJobTracked_Event_1(class UObject* JobOrMissionData)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnNewMissionOrJobTracked_Event_1");

	UUI_MapMenuWidget3D_C_OnNewMissionOrJobTracked_Event_1_Params params;
	params.JobOrMissionData = JobOrMissionData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.RequestClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ClosedByPhotoMode              (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::RequestClose(bool* ClosedByPhotoMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.RequestClose");

	UUI_MapMenuWidget3D_C_RequestClose_Params params;
	params.ClosedByPhotoMode = ClosedByPhotoMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.DisplayAlternateNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::DisplayAlternateNavigation(bool* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.DisplayAlternateNavigation");

	UUI_MapMenuWidget3D_C_DisplayAlternateNavigation_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__CloseMenuInteract_K2Node_ComponentBoundEvent_36_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MapMenuWidget3D_C::BndEvt__CloseMenuInteract_K2Node_ComponentBoundEvent_36_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__CloseMenuInteract_K2Node_ComponentBoundEvent_36_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MapMenuWidget3D_C_BndEvt__CloseMenuInteract_K2Node_ComponentBoundEvent_36_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_SetMarker_K2Node_ComponentBoundEvent_936_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MapMenuWidget3D_C::BndEvt__MenuInteract_SetMarker_K2Node_ComponentBoundEvent_936_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_SetMarker_K2Node_ComponentBoundEvent_936_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MapMenuWidget3D_C_BndEvt__MenuInteract_SetMarker_K2Node_ComponentBoundEvent_936_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_1743_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MapMenuWidget3D_C::BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_1743_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_1743_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MapMenuWidget3D_C_BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_1743_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_Storylines2_K2Node_ComponentBoundEvent_950_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MapMenuWidget3D_C::BndEvt__MenuInteract_Storylines2_K2Node_ComponentBoundEvent_950_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_Storylines2_K2Node_ComponentBoundEvent_950_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MapMenuWidget3D_C_BndEvt__MenuInteract_Storylines2_K2Node_ComponentBoundEvent_950_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnTabNextPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::OnTabNextPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnTabNextPressed");

	UUI_MapMenuWidget3D_C_OnTabNextPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnTabPreviousPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::OnTabPreviousPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnTabPreviousPressed");

	UUI_MapMenuWidget3D_C_OnTabPreviousPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnSelect1Pressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::OnSelect1Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnSelect1Pressed");

	UUI_MapMenuWidget3D_C_OnSelect1Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_Storylines3_K2Node_ComponentBoundEvent_3371_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MapMenuWidget3D_C::BndEvt__MenuInteract_Storylines3_K2Node_ComponentBoundEvent_3371_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_Storylines3_K2Node_ComponentBoundEvent_3371_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MapMenuWidget3D_C_BndEvt__MenuInteract_Storylines3_K2Node_ComponentBoundEvent_3371_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.InitInputs
// (BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::InitInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.InitInputs");

	UUI_MapMenuWidget3D_C_InitInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_Storylines4_K2Node_ComponentBoundEvent_4887_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MapMenuWidget3D_C::BndEvt__MenuInteract_Storylines4_K2Node_ComponentBoundEvent_4887_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_Storylines4_K2Node_ComponentBoundEvent_4887_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MapMenuWidget3D_C_BndEvt__MenuInteract_Storylines4_K2Node_ComponentBoundEvent_4887_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_Inventory_K2Node_ComponentBoundEvent_4894_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MapMenuWidget3D_C::BndEvt__MenuInteract_Inventory_K2Node_ComponentBoundEvent_4894_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_Inventory_K2Node_ComponentBoundEvent_4894_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MapMenuWidget3D_C_BndEvt__MenuInteract_Inventory_K2Node_ComponentBoundEvent_4894_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_Skills_K2Node_ComponentBoundEvent_4902_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MapMenuWidget3D_C::BndEvt__MenuInteract_Skills_K2Node_ComponentBoundEvent_4902_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_Skills_K2Node_ComponentBoundEvent_4902_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MapMenuWidget3D_C_BndEvt__MenuInteract_Skills_K2Node_ComponentBoundEvent_4902_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnCancelPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::OnCancelPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnCancelPressed");

	UUI_MapMenuWidget3D_C_OnCancelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnFastTravelClicked_Event_1
// (BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::OnFastTravelClicked_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnFastTravelClicked_Event_1");

	UUI_MapMenuWidget3D_C_OnFastTravelClicked_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnSetMarkerClicked_Event_1
// (BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::OnSetMarkerClicked_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnSetMarkerClicked_Event_1");

	UUI_MapMenuWidget3D_C_OnSetMarkerClicked_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnConfirmPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::OnConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnConfirmPressed");

	UUI_MapMenuWidget3D_C_OnConfirmPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnSelect2Pressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::OnSelect2Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnSelect2Pressed");

	UUI_MapMenuWidget3D_C_OnSelect2Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_MapMenuWidget3D_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnMouseLeave");

	UUI_MapMenuWidget3D_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_R3_K2Node_ComponentBoundEvent_240_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MapMenuWidget3D_C::BndEvt__MenuInteract_R3_K2Node_ComponentBoundEvent_240_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_R3_K2Node_ComponentBoundEvent_240_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MapMenuWidget3D_C_BndEvt__MenuInteract_R3_K2Node_ComponentBoundEvent_240_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_L3_K2Node_ComponentBoundEvent_341_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MapMenuWidget3D_C::BndEvt__MenuInteract_L3_K2Node_ComponentBoundEvent_341_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_L3_K2Node_ComponentBoundEvent_341_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MapMenuWidget3D_C_BndEvt__MenuInteract_L3_K2Node_ComponentBoundEvent_341_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.Zoom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::Zoom(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.Zoom");

	UUI_MapMenuWidget3D_C_Zoom_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.Center
// (BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::Center()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.Center");

	UUI_MapMenuWidget3D_C_Center_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.TerrainVisibility
// (BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::TerrainVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.TerrainVisibility");

	UUI_MapMenuWidget3D_C_TerrainVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_ZoomIn_K2Node_ComponentBoundEvent_299_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MapMenuWidget3D_C::BndEvt__MenuInteract_ZoomIn_K2Node_ComponentBoundEvent_299_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_ZoomIn_K2Node_ComponentBoundEvent_299_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MapMenuWidget3D_C_BndEvt__MenuInteract_ZoomIn_K2Node_ComponentBoundEvent_299_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_ZoomOut_K2Node_ComponentBoundEvent_311_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_MapMenuWidget3D_C::BndEvt__MenuInteract_ZoomOut_K2Node_ComponentBoundEvent_311_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.BndEvt__MenuInteract_ZoomOut_K2Node_ComponentBoundEvent_311_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_MapMenuWidget3D_C_BndEvt__MenuInteract_ZoomOut_K2Node_ComponentBoundEvent_311_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.ZoomIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::ZoomIn(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.ZoomIn");

	UUI_MapMenuWidget3D_C_ZoomIn_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.ZoomOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::ZoomOut(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.ZoomOut");

	UUI_MapMenuWidget3D_C_ZoomOut_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.ExecuteUbergraph_UI_MapMenuWidget3D
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::ExecuteUbergraph_UI_MapMenuWidget3D(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.ExecuteUbergraph_UI_MapMenuWidget3D");

	UUI_MapMenuWidget3D_C_ExecuteUbergraph_UI_MapMenuWidget3D_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnClickedZoom__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::OnClickedZoom__DelegateSignature(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnClickedZoom__DelegateSignature");

	UUI_MapMenuWidget3D_C_OnClickedZoom__DelegateSignature_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.MouseUpAbs__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    Key                            (Parm)

void UUI_MapMenuWidget3D_C::MouseUpAbs__DelegateSignature(const struct FVector2D& Location, const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.MouseUpAbs__DelegateSignature");

	UUI_MapMenuWidget3D_C_MouseUpAbs__DelegateSignature_Params params;
	params.Location = Location;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.MouseMoveAbs__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Location                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::MouseMoveAbs__DelegateSignature(const struct FVector2D& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.MouseMoveAbs__DelegateSignature");

	UUI_MapMenuWidget3D_C_MouseMoveAbs__DelegateSignature_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.MouseHoverAbs__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Location                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::MouseHoverAbs__DelegateSignature(const struct FVector2D& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.MouseHoverAbs__DelegateSignature");

	UUI_MapMenuWidget3D_C_MouseHoverAbs__DelegateSignature_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnZoom__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::OnZoom__DelegateSignature(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnZoom__DelegateSignature");

	UUI_MapMenuWidget3D_C_OnZoom__DelegateSignature_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnTerrainVisibility__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::OnTerrainVisibility__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnTerrainVisibility__DelegateSignature");

	UUI_MapMenuWidget3D_C_OnTerrainVisibility__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnCenter__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::OnCenter__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnCenter__DelegateSignature");

	UUI_MapMenuWidget3D_C_OnCenter__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.MouseMove__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Normalized                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::MouseMove__DelegateSignature(const struct FVector2D& Normalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.MouseMove__DelegateSignature");

	UUI_MapMenuWidget3D_C_MouseMove__DelegateSignature_Params params;
	params.Normalized = Normalized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnDragEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::OnDragEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnDragEnd__DelegateSignature");

	UUI_MapMenuWidget3D_C_OnDragEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnDragStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::OnDragStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnDragStart__DelegateSignature");

	UUI_MapMenuWidget3D_C_OnDragStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.MouseDown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               NormalizedLocation             (Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    Key                            (Parm)

void UUI_MapMenuWidget3D_C::MouseDown__DelegateSignature(const struct FVector2D& NormalizedLocation, const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.MouseDown__DelegateSignature");

	UUI_MapMenuWidget3D_C_MouseDown__DelegateSignature_Params params;
	params.NormalizedLocation = NormalizedLocation;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnFastTravel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::OnFastTravel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnFastTravel__DelegateSignature");

	UUI_MapMenuWidget3D_C_OnFastTravel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.MouseHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Normalized                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::MouseHover__DelegateSignature(const struct FVector2D& Normalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.MouseHover__DelegateSignature");

	UUI_MapMenuWidget3D_C_MouseHover__DelegateSignature_Params params;
	params.Normalized = Normalized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.MouseUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               NormalizedLocation             (Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    Key                            (Parm)

void UUI_MapMenuWidget3D_C::MouseUp__DelegateSignature(const struct FVector2D& NormalizedLocation, const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.MouseUp__DelegateSignature");

	UUI_MapMenuWidget3D_C_MouseUp__DelegateSignature_Params params;
	params.NormalizedLocation = NormalizedLocation;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnMapDrag__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               ScreenPixelDelta               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::OnMapDrag__DelegateSignature(const struct FVector2D& ScreenPixelDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnMapDrag__DelegateSignature");

	UUI_MapMenuWidget3D_C_OnMapDrag__DelegateSignature_Params params;
	params.ScreenPixelDelta = ScreenPixelDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnZoomOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::OnZoomOut__DelegateSignature(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnZoomOut__DelegateSignature");

	UUI_MapMenuWidget3D_C_OnZoomOut__DelegateSignature_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnZoomIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::OnZoomIn__DelegateSignature(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnZoomIn__DelegateSignature");

	UUI_MapMenuWidget3D_C_OnZoomIn__DelegateSignature_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnMenuClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuWidget3D_C::OnMenuClicked__DelegateSignature(TEnumAsByte<EMenuTypes> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnMenuClicked__DelegateSignature");

	UUI_MapMenuWidget3D_C_OnMenuClicked__DelegateSignature_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnGoToPrevPage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::OnGoToPrevPage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnGoToPrevPage__DelegateSignature");

	UUI_MapMenuWidget3D_C_OnGoToPrevPage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnGoToNextPage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::OnGoToNextPage__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnGoToNextPage__DelegateSignature");

	UUI_MapMenuWidget3D_C_OnGoToNextPage__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnGoToStorylines__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::OnGoToStorylines__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnGoToStorylines__DelegateSignature");

	UUI_MapMenuWidget3D_C_OnGoToStorylines__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnSetMarker__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::OnSetMarker__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnSetMarker__DelegateSignature");

	UUI_MapMenuWidget3D_C_OnSetMarker__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_MapMenuWidget3D_C::OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuWidget3D.UI_MapMenuWidget3D_C.OnClose__DelegateSignature");

	UUI_MapMenuWidget3D_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
