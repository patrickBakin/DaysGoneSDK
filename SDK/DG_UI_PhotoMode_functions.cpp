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

// Function UI_PhotoMode.UI_PhotoMode_C.UpdateMovementInput
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::UpdateMovementInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.UpdateMovementInput");

	UUI_PhotoMode_C_UpdateMovementInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.ScreenCaptureTick
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::ScreenCaptureTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.ScreenCaptureTick");

	UUI_PhotoMode_C_ScreenCaptureTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.GetIsUIVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::GetIsUIVisible(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.GetIsUIVisible");

	UUI_PhotoMode_C_GetIsUIVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function UI_PhotoMode.UI_PhotoMode_C.CaptureScreenShot
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::CaptureScreenShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.CaptureScreenShot");

	UUI_PhotoMode_C_CaptureScreenShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.EnableDeletePresetModalMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::EnableDeletePresetModalMenu(bool enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.EnableDeletePresetModalMenu");

	UUI_PhotoMode_C_EnableDeletePresetModalMenu_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.SetFocusLock
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUsingGamepad                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::SetFocusLock(bool IsUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.SetFocusLock");

	UUI_PhotoMode_C_SetFocusLock_Params params;
	params.IsUsingGamepad = IsUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.Get_CanvasPanel_7_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESlateVisibility>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ESlateVisibility> UUI_PhotoMode_C::Get_CanvasPanel_7_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.Get_CanvasPanel_7_Visibility_1");

	UUI_PhotoMode_C_Get_CanvasPanel_7_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_PhotoMode.UI_PhotoMode_C.ToggleHelpMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::ToggleHelpMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.ToggleHelpMenu");

	UUI_PhotoMode_C_ToggleHelpMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.ToggleAdvancedMode
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::ToggleAdvancedMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.ToggleAdvancedMode");

	UUI_PhotoMode_C_ToggleAdvancedMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.ShowHideUI
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::ShowHideUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.ShowHideUI");

	UUI_PhotoMode_C_ShowHideUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.ExitPhotoMode
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Event                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_PhotoMode_C::ExitPhotoMode(const struct FScriptDelegate& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.ExitPhotoMode");

	UUI_PhotoMode_C_ExitPhotoMode_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.SwitchTabsMouseClick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::SwitchTabsMouseClick(int Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.SwitchTabsMouseClick");

	UUI_PhotoMode_C_SwitchTabsMouseClick_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.CameraSwitchCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               SwitchToCharacter              (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::CameraSwitchCharacter(class ABendPawn* SwitchToCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.CameraSwitchCharacter");

	UUI_PhotoMode_C_CameraSwitchCharacter_Params params;
	params.SwitchToCharacter = SwitchToCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.GetLogoTexture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::GetLogoTexture(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.GetLogoTexture");

	UUI_PhotoMode_C_GetLogoTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;
}


// Function UI_PhotoMode.UI_PhotoMode_C.ExportPresetSettingsToTextFile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::ExportPresetSettingsToTextFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.ExportPresetSettingsToTextFile");

	UUI_PhotoMode_C_ExportPresetSettingsToTextFile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.EnableCustomPresetSaveMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::EnableCustomPresetSaveMenu(bool enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.EnableCustomPresetSaveMenu");

	UUI_PhotoMode_C_EnableCustomPresetSaveMenu_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.PresetUpdateSliders
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendPhotoModePostPreset post                           (Parm)

void UUI_PhotoMode_C::PresetUpdateSliders(const struct FBendPhotoModePostPreset& post)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.PresetUpdateSliders");

	UUI_PhotoMode_C_PresetUpdateSliders_Params params;
	params.post = post;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.EnableFocalDistanceSlider
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::EnableFocalDistanceSlider(bool enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.EnableFocalDistanceSlider");

	UUI_PhotoMode_C_EnableFocalDistanceSlider_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.MoveItemToEnd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABendPawn*>       pawns                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class ABendPawn*>       SortedPawns                    (Parm, OutParm, ZeroConstructor)

void UUI_PhotoMode_C::MoveItemToEnd(int Index, TArray<class ABendPawn*>* pawns, TArray<class ABendPawn*>* SortedPawns)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.MoveItemToEnd");

	UUI_PhotoMode_C_MoveItemToEnd_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pawns != nullptr)
		*pawns = params.pawns;
	if (SortedPawns != nullptr)
		*SortedPawns = params.SortedPawns;
}


// Function UI_PhotoMode.UI_PhotoMode_C.SortSwitchableCharacters
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABendPawn*>       pawns                          (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UUI_PhotoMode_C::SortSwitchableCharacters(TArray<class ABendPawn*>* pawns)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.SortSwitchableCharacters");

	UUI_PhotoMode_C_SortSwitchableCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pawns != nullptr)
		*pawns = params.pawns;
}


// Function UI_PhotoMode.UI_PhotoMode_C.GetOtherCharacters
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABendPawn*>       ValidBendPawns                 (Parm, OutParm, ZeroConstructor)

void UUI_PhotoMode_C::GetOtherCharacters(TArray<class ABendPawn*>* ValidBendPawns)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.GetOtherCharacters");

	UUI_PhotoMode_C_GetOtherCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidBendPawns != nullptr)
		*ValidBendPawns = params.ValidBendPawns;
}


// Function UI_PhotoMode.UI_PhotoMode_C.GetValidSwitchableCharacters
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::GetValidSwitchableCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.GetValidSwitchableCharacters");

	UUI_PhotoMode_C_GetValidSwitchableCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.SetCameraTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::SetCameraTarget(class ABendPawn* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.SetCameraTarget");

	UUI_PhotoMode_C_SetCameraTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.GetFocusLocation
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsUsingController              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Hit                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::GetFocusLocation(bool IsUsingController, struct FVector* Location, bool* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.GetFocusLocation");

	UUI_PhotoMode_C_GetFocusLocation_Params params;
	params.IsUsingController = IsUsingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function UI_PhotoMode.UI_PhotoMode_C.HideFrames
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::HideFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.HideFrames");

	UUI_PhotoMode_C_HideFrames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.SetFrame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::SetFrame(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.SetFrame");

	UUI_PhotoMode_C_SetFrame_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.GetFocalDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          FocalDist                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::GetFocalDistance(const struct FVector& Location, float* FocalDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.GetFocalDistance");

	UUI_PhotoMode_C_GetFocalDistance_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocalDist != nullptr)
		*FocalDist = params.FocalDist;
}


// Function UI_PhotoMode.UI_PhotoMode_C.SetToolTipWidgetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm)

void UUI_PhotoMode_C::SetToolTipWidgetText(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.SetToolTipWidgetText");

	UUI_PhotoMode_C_SetToolTipWidgetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.GetCameraMoveAmount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentGoalDistance            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Axis                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinClampValue                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxClampValue                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PercisionMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Subtract                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Amount                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::GetCameraMoveAmount(float CurrentGoalDistance, float Axis, float MinClampValue, float MaxClampValue, bool PercisionMode, bool Subtract, float* Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.GetCameraMoveAmount");

	UUI_PhotoMode_C_GetCameraMoveAmount_Params params;
	params.CurrentGoalDistance = CurrentGoalDistance;
	params.Axis = Axis;
	params.MinClampValue = MinClampValue;
	params.MaxClampValue = MaxClampValue;
	params.PercisionMode = PercisionMode;
	params.Subtract = Subtract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Amount != nullptr)
		*Amount = params.Amount;
}


// Function UI_PhotoMode.UI_PhotoMode_C.SaveCameraStartingValues
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::SaveCameraStartingValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.SaveCameraStartingValues");

	UUI_PhotoMode_C_SaveCameraStartingValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.SetLogoVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Black_Visible                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           White_Visible                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::SetLogoVisibility(bool Black_Visible, bool White_Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.SetLogoVisibility");

	UUI_PhotoMode_C_SetLogoVisibility_Params params;
	params.Black_Visible = Black_Visible;
	params.White_Visible = White_Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.SetLogoPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ELogoPositions>    Position                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::SetLogoPosition(TEnumAsByte<ELogoPositions> Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.SetLogoPosition");

	UUI_PhotoMode_C_SetLogoPosition_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.HandleInput_CameraUpDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PercisionMode                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::HandleInput_CameraUpDown(bool PercisionMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.HandleInput_CameraUpDown");

	UUI_PhotoMode_C_HandleInput_CameraUpDown_Params params;
	params.PercisionMode = PercisionMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.HandleInput_CameraTranslation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PercisionMode                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::HandleInput_CameraTranslation(bool PercisionMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.HandleInput_CameraTranslation");

	UUI_PhotoMode_C_HandleInput_CameraTranslation_Params params;
	params.PercisionMode = PercisionMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.HandleInput_Footer
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::HandleInput_Footer()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.HandleInput_Footer");

	UUI_PhotoMode_C_HandleInput_Footer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.SetHeaderText
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::SetHeaderText()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.SetHeaderText");

	UUI_PhotoMode_C_SetHeaderText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.HandleInput_Tabs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewTabIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           SwitchingTabs                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::HandleInput_Tabs(int* NewTabIndex, bool* SwitchingTabs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.HandleInput_Tabs");

	UUI_PhotoMode_C_HandleInput_Tabs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewTabIndex != nullptr)
		*NewTabIndex = params.NewTabIndex;
	if (SwitchingTabs != nullptr)
		*SwitchingTabs = params.SwitchingTabs;
}


// Function UI_PhotoMode.UI_PhotoMode_C.SwitchTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewTabIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::SwitchTab(int NewTabIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.SwitchTab");

	UUI_PhotoMode_C_SwitchTab_Params params;
	params.NewTabIndex = NewTabIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_PhotoMode_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.Construct");

	UUI_PhotoMode_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.Tick");

	UUI_PhotoMode_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_PhotoMode_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.Destruct");

	UUI_PhotoMode_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.ResetCamera
// (BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::ResetCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.ResetCamera");

	UUI_PhotoMode_C_ResetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.HideHelp
// (BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::HideHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.HideHelp");

	UUI_PhotoMode_C_HideHelp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.DisplayFrameAsync
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    TextureAsset                   (Parm)

void UUI_PhotoMode_C::DisplayFrameAsync(TAssetPtr<class UTexture2D> TextureAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.DisplayFrameAsync");

	UUI_PhotoMode_C_DisplayFrameAsync_Params params;
	params.TextureAsset = TextureAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void UUI_PhotoMode_C::CustomEvent_1(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.CustomEvent_1");

	UUI_PhotoMode_C_CustomEvent_1_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.OnWidgetClosed
// (Event, Protected, BlueprintEvent)

void UUI_PhotoMode_C::OnWidgetClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.OnWidgetClosed");

	UUI_PhotoMode_C_OnWidgetClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.InitInput
// (BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::InitInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.InitInput");

	UUI_PhotoMode_C_InitInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.OnCameraSlideinput
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::OnCameraSlideinput(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.OnCameraSlideinput");

	UUI_PhotoMode_C_OnCameraSlideinput_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.OnCameraDollyInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::OnCameraDollyInput(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.OnCameraDollyInput");

	UUI_PhotoMode_C_OnCameraDollyInput_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2386_OnExitClicked__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoMode_C::BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2386_OnExitClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2386_OnExitClicked__DelegateSignature");

	UUI_PhotoMode_C_BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2386_OnExitClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2395_OnHideUIClicked__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoMode_C::BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2395_OnHideUIClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2395_OnHideUIClicked__DelegateSignature");

	UUI_PhotoMode_C_BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2395_OnHideUIClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2398_OnHelpClicked__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoMode_C::BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2398_OnHelpClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2398_OnHelpClicked__DelegateSignature");

	UUI_PhotoMode_C_BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2398_OnHelpClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2402_OnAdvancedClicked__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoMode_C::BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2402_OnAdvancedClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2402_OnAdvancedClicked__DelegateSignature");

	UUI_PhotoMode_C_BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_2402_OnAdvancedClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.BndEvt__UI_PhotoModeFooterLeft_K2Node_ComponentBoundEvent_2407_OnResetClicked__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoMode_C::BndEvt__UI_PhotoModeFooterLeft_K2Node_ComponentBoundEvent_2407_OnResetClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.BndEvt__UI_PhotoModeFooterLeft_K2Node_ComponentBoundEvent_2407_OnResetClicked__DelegateSignature");

	UUI_PhotoMode_C_BndEvt__UI_PhotoModeFooterLeft_K2Node_ComponentBoundEvent_2407_OnResetClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.FocusDistanceSliderChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ChangedByUser                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::FocusDistanceSliderChanged(float Value, bool ChangedByUser)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.FocusDistanceSliderChanged");

	UUI_PhotoMode_C_FocusDistanceSliderChanged_Params params;
	params.Value = Value;
	params.ChangedByUser = ChangedByUser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.CaptureShot
// (BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::CaptureShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.CaptureShot");

	UUI_PhotoMode_C_CaptureShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.CaptureShotButtonClicked
// (BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::CaptureShotButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.CaptureShotButtonClicked");

	UUI_PhotoMode_C_CaptureShotButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_1982_OnPhotoCaptureClicked__DelegateSignature
// (BlueprintEvent)

void UUI_PhotoMode_C::BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_1982_OnPhotoCaptureClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_1982_OnPhotoCaptureClicked__DelegateSignature");

	UUI_PhotoMode_C_BndEvt__UI_PhotoModeFooterRight_K2Node_ComponentBoundEvent_1982_OnPhotoCaptureClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.OnFocusLockInput
// (BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::OnFocusLockInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.OnFocusLockInput");

	UUI_PhotoMode_C_OnFocusLockInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.OnTurnDelta
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::OnTurnDelta(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.OnTurnDelta");

	UUI_PhotoMode_C_OnTurnDelta_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.OnTurn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::OnTurn(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.OnTurn");

	UUI_PhotoMode_C_OnTurn_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.OnLookUpDelta
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::OnLookUpDelta(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.OnLookUpDelta");

	UUI_PhotoMode_C_OnLookUpDelta_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.OnLookUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::OnLookUp(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.OnLookUp");

	UUI_PhotoMode_C_OnLookUp_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.ShowPhotoSavedNotification
// (BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::ShowPhotoSavedNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.ShowPhotoSavedNotification");

	UUI_PhotoMode_C_ShowPhotoSavedNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.OnCaptureShotGamepad
// (BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::OnCaptureShotGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.OnCaptureShotGamepad");

	UUI_PhotoMode_C_OnCaptureShotGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.OnAdvanced
// (BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::OnAdvanced()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.OnAdvanced");

	UUI_PhotoMode_C_OnAdvanced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.OnCameraMoveIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::OnCameraMoveIn(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.OnCameraMoveIn");

	UUI_PhotoMode_C_OnCameraMoveIn_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.OnCameraMoveOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::OnCameraMoveOut(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.OnCameraMoveOut");

	UUI_PhotoMode_C_OnCameraMoveOut_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.OnCameraMoveLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::OnCameraMoveLeft(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.OnCameraMoveLeft");

	UUI_PhotoMode_C_OnCameraMoveLeft_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.OnCameraMoveRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::OnCameraMoveRight(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.OnCameraMoveRight");

	UUI_PhotoMode_C_OnCameraMoveRight_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.Exit Photo Mode Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPopupMenuWidget*        PopupMenu                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlatePopupButton> SelectedButton                 (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::Exit_Photo_Mode_Event(class UPopupMenuWidget* PopupMenu, TEnumAsByte<ESlatePopupButton> SelectedButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.Exit Photo Mode Event");

	UUI_PhotoMode_C_Exit_Photo_Mode_Event_Params params;
	params.PopupMenu = PopupMenu;
	params.SelectedButton = SelectedButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.ExecuteUbergraph_UI_PhotoMode
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_PhotoMode_C::ExecuteUbergraph_UI_PhotoMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.ExecuteUbergraph_UI_PhotoMode");

	UUI_PhotoMode_C_ExecuteUbergraph_UI_PhotoMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.CapturedPhoto__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::CapturedPhoto__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.CapturedPhoto__DelegateSignature");

	UUI_PhotoMode_C_CapturedPhoto__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.ExitedAdvancedMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::ExitedAdvancedMode__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.ExitedAdvancedMode__DelegateSignature");

	UUI_PhotoMode_C_ExitedAdvancedMode__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_PhotoMode.UI_PhotoMode_C.EnteredAdvancedMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_PhotoMode_C::EnteredAdvancedMode__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_PhotoMode.UI_PhotoMode_C.EnteredAdvancedMode__DelegateSignature");

	UUI_PhotoMode_C_EnteredAdvancedMode__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
