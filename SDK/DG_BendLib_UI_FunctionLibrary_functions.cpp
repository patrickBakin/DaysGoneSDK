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

// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetMenuTranslationOffset
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               TranslationOffset              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_GetMenuTranslationOffset(TEnumAsByte<EMenuTypes> Menu, class UObject* __WorldContext, struct FVector2D* TranslationOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetMenuTranslationOffset");

	UBendLib_UI_FunctionLibrary_C_GetMenuTranslationOffset_Params params;
	params.Menu = Menu;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TranslationOffset != nullptr)
		*TranslationOffset = params.TranslationOffset;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SaveAndApplyGameUserSettings
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_SaveAndApplyGameUserSettings(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SaveAndApplyGameUserSettings");

	UBendLib_UI_FunctionLibrary_C_SaveAndApplyGameUserSettings_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayFileSelectMenu
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESaveMenuMode>     MenuMode                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         OnFileSelected                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UFileSelectMenu_C*       Menu                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_DisplayFileSelectMenu(TEnumAsByte<ESaveMenuMode> MenuMode, const struct FScriptDelegate& OnFileSelected, class UObject* __WorldContext, class UFileSelectMenu_C** Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayFileSelectMenu");

	UBendLib_UI_FunctionLibrary_C_DisplayFileSelectMenu_Params params;
	params.MenuMode = MenuMode;
	params.OnFileSelected = OnFileSelected;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Menu != nullptr)
		*Menu = params.Menu;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetInputActionFromButton
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EControllerInputButton> Button                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Action                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_GetInputActionFromButton(TEnumAsByte<EControllerInputButton> Button, class UObject* __WorldContext, struct FName* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetInputActionFromButton");

	UBendLib_UI_FunctionLibrary_C_GetInputActionFromButton_Params params;
	params.Button = Button;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ActionOffset
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Action                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               InPosition                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               OutPosition                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_ActionOffset(const struct FName& Action, const struct FVector2D& InPosition, class UObject* __WorldContext, struct FVector2D* OutPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ActionOffset");

	UBendLib_UI_FunctionLibrary_C_ActionOffset_Params params;
	params.Action = Action;
	params.InPosition = InPosition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPosition != nullptr)
		*OutPosition = params.OutPosition;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.CloseRewardsPanel
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_CloseRewardsPanel(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.CloseRewardsPanel");

	UBendLib_UI_FunctionLibrary_C_CloseRewardsPanel_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ShowMissionInStorylinesMenu
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 MissionOrJob                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_ShowMissionInStorylinesMenu(class UObject* MissionOrJob, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ShowMissionInStorylinesMenu");

	UBendLib_UI_FunctionLibrary_C_ShowMissionInStorylinesMenu_Params params;
	params.MissionOrJob = MissionOrJob;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayTutorialMultiByName
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TutorialName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HiddenTutorial                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_TutorialPanel_C*     Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_DisplayTutorialMultiByName(const struct FName& TutorialName, bool HiddenTutorial, class UObject* __WorldContext, class UUI_TutorialPanel_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayTutorialMultiByName");

	UBendLib_UI_FunctionLibrary_C_DisplayTutorialMultiByName_Params params;
	params.TutorialName = TutorialName;
	params.HiddenTutorial = HiddenTutorial;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayTutorialSimpleByName
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TutorialName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HiddenTutorial                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CloseAction                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AutoClose                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_TutorialPanel_C*     Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_DisplayTutorialSimpleByName(const struct FName& TutorialName, bool HiddenTutorial, const struct FName& CloseAction, bool AutoClose, class UObject* __WorldContext, class UUI_TutorialPanel_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayTutorialSimpleByName");

	UBendLib_UI_FunctionLibrary_C_DisplayTutorialSimpleByName_Params params;
	params.TutorialName = TutorialName;
	params.HiddenTutorial = HiddenTutorial;
	params.CloseAction = CloseAction;
	params.AutoClose = AutoClose;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayWeaponStats
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryWeaponItem*    Weapon                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_DisplayWeaponStats(bool State, class UInventoryWeaponItem* Weapon, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayWeaponStats");

	UBendLib_UI_FunctionLibrary_C_DisplayWeaponStats_Params params;
	params.State = State;
	params.Weapon = Weapon;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SubstituteGlyphs
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Target_Text                    (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Formatted_Text                 (Parm, OutParm)

void UBendLib_UI_FunctionLibrary_C::STATIC_SubstituteGlyphs(const struct FText& Target_Text, class UObject* __WorldContext, struct FText* Formatted_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SubstituteGlyphs");

	UBendLib_UI_FunctionLibrary_C_SubstituteGlyphs_Params params;
	params.Target_Text = Target_Text;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Formatted_Text != nullptr)
		*Formatted_Text = params.Formatted_Text;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.FollowMeshInScreenSpace
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Socket                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPlayerController*   Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SmoothMotion                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               PrevPosition                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenPosition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_FollowMeshInScreenSpace(class USkeletalMeshComponent* Mesh, const struct FName& Socket, const struct FVector& Offset, class ABendPlayerController* Player, bool SmoothMotion, const struct FVector2D& PrevPosition, class UObject* __WorldContext, struct FVector2D* ScreenPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.FollowMeshInScreenSpace");

	UBendLib_UI_FunctionLibrary_C_FollowMeshInScreenSpace_Params params;
	params.Mesh = Mesh;
	params.Socket = Socket;
	params.Offset = Offset;
	params.Player = Player;
	params.SmoothMotion = SmoothMotion;
	params.PrevPosition = PrevPosition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenPosition != nullptr)
		*ScreenPosition = params.ScreenPosition;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.UpdateTracking
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_UpdateTracking(float Percent, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.UpdateTracking");

	UBendLib_UI_FunctionLibrary_C_UpdateTracking_Params params;
	params.Percent = Percent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayTracking
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_DisplayTracking(bool State, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayTracking");

	UBendLib_UI_FunctionLibrary_C_DisplayTracking_Params params;
	params.State = State;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.RemoveObjectiveMeter_1
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_RemoveObjectiveMeter_1(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.RemoveObjectiveMeter_1");

	UBendLib_UI_FunctionLibrary_C_RemoveObjectiveMeter_1_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayTrust
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TrustGained                    (Parm, ZeroConstructor, IsPlainOldData)
// class UBendEncampmentData*     Encampment                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_DisplayTrust(int TrustGained, class UBendEncampmentData* Encampment, class UObject* __WorldContext, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayTrust");

	UBendLib_UI_FunctionLibrary_C_DisplayTrust_Params params;
	params.TrustGained = TrustGained;
	params.Encampment = Encampment;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetCurrentDisplayedObjectiveIndex
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_GetCurrentDisplayedObjectiveIndex(class UObject* __WorldContext, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetCurrentDisplayedObjectiveIndex");

	UBendLib_UI_FunctionLibrary_C_GetCurrentDisplayedObjectiveIndex_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.RemoveObjectiveMeter
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_RemoveObjectiveMeter(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.RemoveObjectiveMeter");

	UBendLib_UI_FunctionLibrary_C_RemoveObjectiveMeter_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.UpdateObjectiveMeter
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_UpdateObjectiveMeter(float Percent, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.UpdateObjectiveMeter");

	UBendLib_UI_FunctionLibrary_C_UpdateObjectiveMeter_Params params;
	params.Percent = Percent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayObjectiveMeter
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Invert                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHealthBar                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_DisplayObjectiveMeter(TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, float Percent, bool Invert, bool IsHealthBar, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayObjectiveMeter");

	UBendLib_UI_FunctionLibrary_C_DisplayObjectiveMeter_Params params;
	params.Type = Type;
	params.Title = Title;
	params.Percent = Percent;
	params.Invert = Invert;
	params.IsHealthBar = IsHealthBar;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayObjective
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveHudState> HUD_State                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)
// struct FBendRewardsScreenData  RewardScreenData               (Parm)
// class UObject*                 DataAsset                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CurrentlyTracked               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsNewData                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_DisplayObjective(TEnumAsByte<EObjectiveHudState> HUD_State, TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, const struct FText& SubTitle, const struct FBendRewardsScreenData& RewardScreenData, class UObject* DataAsset, bool CurrentlyTracked, bool IsNewData, class UObject* __WorldContext, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayObjective");

	UBendLib_UI_FunctionLibrary_C_DisplayObjective_Params params;
	params.HUD_State = HUD_State;
	params.Category = Category;
	params.Type = Type;
	params.Title = Title;
	params.SubTitle = SubTitle;
	params.RewardScreenData = RewardScreenData;
	params.DataAsset = DataAsset;
	params.CurrentlyTracked = CurrentlyTracked;
	params.IsNewData = IsNewData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.AddObjectiveUnlocked
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// struct FText                   SubTitle                       (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_AddObjectiveUnlocked(TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, const struct FText& Title, const struct FText& SubTitle, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.AddObjectiveUnlocked");

	UBendLib_UI_FunctionLibrary_C_AddObjectiveUnlocked_Params params;
	params.Category = Category;
	params.Type = Type;
	params.Title = Title;
	params.SubTitle = SubTitle;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.AddObjectiveUnlockedOld
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (Parm, ZeroConstructor)
// struct FString                 SubTitle                       (Parm, ZeroConstructor)
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UHudNotificationItemWidget* Objective                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_AddObjectiveUnlockedOld(const struct FString& Text, const struct FString& SubTitle, TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, class UObject* __WorldContext, class UHudNotificationItemWidget** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.AddObjectiveUnlockedOld");

	UBendLib_UI_FunctionLibrary_C_AddObjectiveUnlockedOld_Params params;
	params.Text = Text;
	params.SubTitle = SubTitle;
	params.Category = Category;
	params.Type = Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Objective != nullptr)
		*Objective = params.Objective;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetObjectiveIconAndColor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             SlateColor                     (Parm, OutParm)
// class UTexture2D*              MapIcon                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_GetObjectiveIconAndColor(TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, class UObject* __WorldContext, class UTexture2D** Icon, struct FLinearColor* Color, struct FSlateColor* SlateColor, class UTexture2D** MapIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetObjectiveIconAndColor");

	UBendLib_UI_FunctionLibrary_C_GetObjectiveIconAndColor_Params params;
	params.Category = Category;
	params.Type = Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
	if (Color != nullptr)
		*Color = params.Color;
	if (SlateColor != nullptr)
		*SlateColor = params.SlateColor;
	if (MapIcon != nullptr)
		*MapIcon = params.MapIcon;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetRadarVisible
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_SetRadarVisible(bool Visible, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetRadarVisible");

	UBendLib_UI_FunctionLibrary_C_SetRadarVisible_Params params;
	params.Visible = Visible;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ContextualButtonPosition
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EControllerInputButton> Button                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenPosition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_ContextualButtonPosition(TEnumAsByte<EControllerInputButton> Button, class UObject* __WorldContext, struct FVector2D* ScreenPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ContextualButtonPosition");

	UBendLib_UI_FunctionLibrary_C_ContextualButtonPosition_Params params;
	params.Button = Button;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenPosition != nullptr)
		*ScreenPosition = params.ScreenPosition;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SmoothPosition2D_DEPRECATED
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               TargetPosition                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               PrevPosition                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               OutPosition                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_SmoothPosition2D_DEPRECATED(const struct FVector2D& TargetPosition, const struct FVector2D& PrevPosition, float Speed, class UObject* __WorldContext, struct FVector2D* OutPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SmoothPosition2D_DEPRECATED");

	UBendLib_UI_FunctionLibrary_C_SmoothPosition2D_DEPRECATED_Params params;
	params.TargetPosition = TargetPosition;
	params.PrevPosition = PrevPosition;
	params.Speed = Speed;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPosition != nullptr)
		*OutPosition = params.OutPosition;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ConstrainToMargin
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               InPosition                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               OutPosition                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_ConstrainToMargin(const struct FVector2D& InPosition, class UObject* __WorldContext, struct FVector2D* OutPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ConstrainToMargin");

	UBendLib_UI_FunctionLibrary_C_ConstrainToMargin_Params params;
	params.InPosition = InPosition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPosition != nullptr)
		*OutPosition = params.OutPosition;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ButtonOffset
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EControllerInputButton> Button                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               InPosition                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               OutPosition                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_ButtonOffset(TEnumAsByte<EControllerInputButton> Button, const struct FVector2D& InPosition, class UObject* __WorldContext, struct FVector2D* OutPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ButtonOffset");

	UBendLib_UI_FunctionLibrary_C_ButtonOffset_Params params;
	params.Button = Button;
	params.InPosition = InPosition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPosition != nullptr)
		*OutPosition = params.OutPosition;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.FollowActorInScreenSpace_DEPRECATED
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Socket                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Offset                         (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPlayerController*   Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SmoothMotion                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               PrevPosition                   (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         OverrideComponent              (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenPosition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_FollowActorInScreenSpace_DEPRECATED(class AActor* Actor, const struct FName& Socket, const struct FVector& Offset, class ABendPlayerController* Player, bool SmoothMotion, const struct FVector2D& PrevPosition, class USceneComponent* OverrideComponent, class UObject* __WorldContext, struct FVector2D* ScreenPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.FollowActorInScreenSpace_DEPRECATED");

	UBendLib_UI_FunctionLibrary_C_FollowActorInScreenSpace_DEPRECATED_Params params;
	params.Actor = Actor;
	params.Socket = Socket;
	params.Offset = Offset;
	params.Player = Player;
	params.SmoothMotion = SmoothMotion;
	params.PrevPosition = PrevPosition;
	params.OverrideComponent = OverrideComponent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenPosition != nullptr)
		*ScreenPosition = params.ScreenPosition;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.NormalizeAngle_DEPRECATED
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InAngle                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutAngle                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_NormalizeAngle_DEPRECATED(float InAngle, class UObject* __WorldContext, float* OutAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.NormalizeAngle_DEPRECATED");

	UBendLib_UI_FunctionLibrary_C_NormalizeAngle_DEPRECATED_Params params;
	params.InAngle = InAngle;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAngle != nullptr)
		*OutAngle = params.OutAngle;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetInteractButtonTexture
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInteractButton>   Button_Type                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_GetInteractButtonTexture(TEnumAsByte<EInteractButton> Button_Type, class UObject* __WorldContext, class UTexture2D** Texture, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetInteractButtonTexture");

	UBendLib_UI_FunctionLibrary_C_GetInteractButtonTexture_Params params;
	params.Button_Type = Button_Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;
	if (Color != nullptr)
		*Color = params.Color;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetHUDIconByType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_IconTypes>    Icon                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_GetHUDIconByType(TEnumAsByte<Enum_IconTypes> Icon, class UObject* __WorldContext, class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetHUDIconByType");

	UBendLib_UI_FunctionLibrary_C_GetHUDIconByType_Params params;
	params.Icon = Icon;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayCredits
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (Parm)
// struct FText                   Name                           (Parm)
// TEnumAsByte<Enum_AnchorPosition> Position                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SlidingAnimation               (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_TitleCredits_C*      Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_DisplayCredits(const struct FText& Title, const struct FText& Name, TEnumAsByte<Enum_AnchorPosition> Position, bool SlidingAnimation, class UObject* __WorldContext, class UUI_TitleCredits_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayCredits");

	UBendLib_UI_FunctionLibrary_C_DisplayCredits_Params params;
	params.Title = Title;
	params.Name = Name;
	params.Position = Position;
	params.SlidingAnimation = SlidingAnimation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.CheckTextFit
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              TextBlock                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_CheckTextFit(class UTextBlock* TextBlock, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.CheckTextFit");

	UBendLib_UI_FunctionLibrary_C_CheckTextFit_Params params;
	params.TextBlock = TextBlock;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetMissionPopupQueue
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FUI_HudMissionPopupDetails> Queue                          (Parm, OutParm, ZeroConstructor)

void UBendLib_UI_FunctionLibrary_C::STATIC_GetMissionPopupQueue(class UObject* __WorldContext, TArray<struct FUI_HudMissionPopupDetails>* Queue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetMissionPopupQueue");

	UBendLib_UI_FunctionLibrary_C_GetMissionPopupQueue_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Queue != nullptr)
		*Queue = params.Queue;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetUiWeaponColor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EWeaponType>       Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_GetUiWeaponColor(TEnumAsByte<EWeaponType> Name, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetUiWeaponColor");

	UBendLib_UI_FunctionLibrary_C_GetUiWeaponColor_Params params;
	params.Name = Name;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetMissionInfoPopupInteractProgress
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_SetMissionInfoPopupInteractProgress(float Progress, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetMissionInfoPopupInteractProgress");

	UBendLib_UI_FunctionLibrary_C_SetMissionInfoPopupInteractProgress_Params params;
	params.Progress = Progress;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetBinocularsAiming
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Aiming                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_SetBinocularsAiming(bool Aiming, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetBinocularsAiming");

	UBendLib_UI_FunctionLibrary_C_SetBinocularsAiming_Params params;
	params.Aiming = Aiming;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetFactionIconTexture
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAIFactionType>    Faction                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_GetFactionIconTexture(TEnumAsByte<EAIFactionType> Faction, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetFactionIconTexture");

	UBendLib_UI_FunctionLibrary_C_GetFactionIconTexture_Params params;
	params.Faction = Faction;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenAlignment_DEPRECATED
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTweening                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UCanvasPanelSlot*        Slot                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Progress                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               From                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               To                             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_TweenAlignment_DEPRECATED(class UCanvasPanelSlot* Slot, float Duration, const struct FVector2D& From, const struct FVector2D& To, class UObject* __WorldContext, bool* IsTweening, float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenAlignment_DEPRECATED");

	UBendLib_UI_FunctionLibrary_C_TweenAlignment_DEPRECATED_Params params;
	params.Slot = Slot;
	params.Duration = Duration;
	params.From = From;
	params.To = To;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsTweening != nullptr)
		*IsTweening = params.IsTweening;
	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetAmmoCount_DEPRECATED
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            AmmoCount                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_GetAmmoCount_DEPRECATED(class ABendWeapon* Weapon, class UObject* __WorldContext, int* AmmoCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetAmmoCount_DEPRECATED");

	UBendLib_UI_FunctionLibrary_C_GetAmmoCount_DEPRECATED_Params params;
	params.Weapon = Weapon;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoCount != nullptr)
		*AmmoCount = params.AmmoCount;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.IncrementProgress_DEPRECATED
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Progress                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ProgressOut                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_IncrementProgress_DEPRECATED(float Duration, class UObject* __WorldContext, float* Progress, float* ProgressOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.IncrementProgress_DEPRECATED");

	UBendLib_UI_FunctionLibrary_C_IncrementProgress_DEPRECATED_Params params;
	params.Duration = Duration;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;
	if (ProgressOut != nullptr)
		*ProgressOut = params.ProgressOut;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.HideHUD
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ExcludeMiniMap                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeWeaponInfo              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeNotifications           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeTooltips                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeNpcMeter                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeXpMeter                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeReticles                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeLocationInfo            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeWaypoints               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeCallouts                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeInteracts               (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_HideHUD(bool ExcludeMiniMap, bool ExcludeWeaponInfo, bool ExcludeNotifications, bool ExcludeTooltips, bool ExcludeNpcMeter, bool ExcludeXpMeter, bool ExcludeReticles, bool ExcludeLocationInfo, bool ExcludeWaypoints, bool ExcludeCallouts, bool ExcludeInteracts, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.HideHUD");

	UBendLib_UI_FunctionLibrary_C_HideHUD_Params params;
	params.ExcludeMiniMap = ExcludeMiniMap;
	params.ExcludeWeaponInfo = ExcludeWeaponInfo;
	params.ExcludeNotifications = ExcludeNotifications;
	params.ExcludeTooltips = ExcludeTooltips;
	params.ExcludeNpcMeter = ExcludeNpcMeter;
	params.ExcludeXpMeter = ExcludeXpMeter;
	params.ExcludeReticles = ExcludeReticles;
	params.ExcludeLocationInfo = ExcludeLocationInfo;
	params.ExcludeWaypoints = ExcludeWaypoints;
	params.ExcludeCallouts = ExcludeCallouts;
	params.ExcludeInteracts = ExcludeInteracts;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ShowHUD
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ExcludeMiniMap                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeWeaponInfo              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeNotifications           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeTooltips                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeNpcMeter                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeXpMeter                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeReticles                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeLocationInfo            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeWaypoints               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeCallouts                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeInteracts               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeStamina                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeAdrenaline              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeHealth                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeSupplies                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ExcludeWeapons                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_ShowHUD(bool ExcludeMiniMap, bool ExcludeWeaponInfo, bool ExcludeNotifications, bool ExcludeTooltips, bool ExcludeNpcMeter, bool ExcludeXpMeter, bool ExcludeReticles, bool ExcludeLocationInfo, bool ExcludeWaypoints, bool ExcludeCallouts, bool ExcludeInteracts, bool ExcludeStamina, bool ExcludeAdrenaline, bool ExcludeHealth, bool ExcludeSupplies, bool ExcludeWeapons, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ShowHUD");

	UBendLib_UI_FunctionLibrary_C_ShowHUD_Params params;
	params.ExcludeMiniMap = ExcludeMiniMap;
	params.ExcludeWeaponInfo = ExcludeWeaponInfo;
	params.ExcludeNotifications = ExcludeNotifications;
	params.ExcludeTooltips = ExcludeTooltips;
	params.ExcludeNpcMeter = ExcludeNpcMeter;
	params.ExcludeXpMeter = ExcludeXpMeter;
	params.ExcludeReticles = ExcludeReticles;
	params.ExcludeLocationInfo = ExcludeLocationInfo;
	params.ExcludeWaypoints = ExcludeWaypoints;
	params.ExcludeCallouts = ExcludeCallouts;
	params.ExcludeInteracts = ExcludeInteracts;
	params.ExcludeStamina = ExcludeStamina;
	params.ExcludeAdrenaline = ExcludeAdrenaline;
	params.ExcludeHealth = ExcludeHealth;
	params.ExcludeSupplies = ExcludeSupplies;
	params.ExcludeWeapons = ExcludeWeapons;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.CancelNotification
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUI_HudNotificationDetails Details                        (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_CancelNotification(const struct FUI_HudNotificationDetails& Details, class UObject* __WorldContext, bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.CancelNotification");

	UBendLib_UI_FunctionLibrary_C_CancelNotification_Params params;
	params.Details = Details;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayPopupPrompt
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlatePopupDetails      PopupDetails                   (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_PopupMenuWidget_C*   PopUp                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_DisplayPopupPrompt(const struct FSlatePopupDetails& PopupDetails, class UObject* __WorldContext, class UUI_PopupMenuWidget_C** PopUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayPopupPrompt");

	UBendLib_UI_FunctionLibrary_C_DisplayPopupPrompt_Params params;
	params.PopupDetails = PopupDetails;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PopUp != nullptr)
		*PopUp = params.PopUp;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayNotification
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUI_HudNotificationType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FText                   TitleText                      (Parm)
// struct FString                 SubTitle                       (Parm, ZeroConstructor)
// struct FText                   SubtitleText                   (Parm)
// struct FString                 Progress                       (Parm, ZeroConstructor)
// struct FText                   ProgressText                   (Parm)
// TEnumAsByte<Enum_NotifyProgressType> ProgressType                   (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ItemTexture                    (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              PlaySound                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          DisplayTime                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Pause                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           MarkComplete                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveCategories> ObjectiveCategory              (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Enum_BannerType>   BannerType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWeapon                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FBendStoryLinesBasicDataForUI StoryLine                      (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_DisplayNotification(TEnumAsByte<EUI_HudNotificationType> Type, const struct FString& Title, const struct FText& TitleText, const struct FString& SubTitle, const struct FText& SubtitleText, const struct FString& Progress, const struct FText& ProgressText, TEnumAsByte<Enum_NotifyProgressType> ProgressType, class UTexture2D* ItemTexture, class USoundBase* PlaySound, float Value, float DisplayTime, bool Pause, bool MarkComplete, TEnumAsByte<EObjectiveCategories> ObjectiveCategory, TEnumAsByte<Enum_BannerType> BannerType, bool IsWeapon, const struct FBendStoryLinesBasicDataForUI& StoryLine, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayNotification");

	UBendLib_UI_FunctionLibrary_C_DisplayNotification_Params params;
	params.Type = Type;
	params.Title = Title;
	params.TitleText = TitleText;
	params.SubTitle = SubTitle;
	params.SubtitleText = SubtitleText;
	params.Progress = Progress;
	params.ProgressText = ProgressText;
	params.ProgressType = ProgressType;
	params.ItemTexture = ItemTexture;
	params.PlaySound = PlaySound;
	params.Value = Value;
	params.DisplayTime = DisplayTime;
	params.Pause = Pause;
	params.MarkComplete = MarkComplete;
	params.ObjectiveCategory = ObjectiveCategory;
	params.BannerType = BannerType;
	params.IsWeapon = IsWeapon;
	params.StoryLine = StoryLine;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenVectorParameter_DEPRECATED
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTweening                     (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* MaterialInstanceDynamic        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ValueFrom                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ValueTo                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_TweenVectorParameter_DEPRECATED(bool IsTweening, class UMaterialInstanceDynamic* MaterialInstanceDynamic, const struct FName& ParameterName, float Duration, float Progress, const struct FLinearColor& ValueFrom, const struct FLinearColor& ValueTo, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenVectorParameter_DEPRECATED");

	UBendLib_UI_FunctionLibrary_C_TweenVectorParameter_DEPRECATED_Params params;
	params.IsTweening = IsTweening;
	params.MaterialInstanceDynamic = MaterialInstanceDynamic;
	params.ParameterName = ParameterName;
	params.Duration = Duration;
	params.Progress = Progress;
	params.ValueFrom = ValueFrom;
	params.ValueTo = ValueTo;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetWorldTimeFriendly_DEPRECATED
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Time                           (Parm, OutParm)

void UBendLib_UI_FunctionLibrary_C::STATIC_GetWorldTimeFriendly_DEPRECATED(class UObject* __WorldContext, struct FText* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetWorldTimeFriendly_DEPRECATED");

	UBendLib_UI_FunctionLibrary_C_GetWorldTimeFriendly_DEPRECATED_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayMissionInfoPopup
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUI_HudPopupType>  Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// TEnumAsByte<EUI_RewardType>    RewardType                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            RewardValue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   SubTitle                       (Parm)
// struct FActorInteractDetails   InteractDetails                (Parm)
// class UObject*                 UtilityObject                  (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_DisplayMissionInfoPopup(TEnumAsByte<EUI_HudPopupType> Type, const struct FText& Title, TEnumAsByte<EUI_RewardType> RewardType, int RewardValue, const struct FText& SubTitle, const struct FActorInteractDetails& InteractDetails, class UObject* UtilityObject, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayMissionInfoPopup");

	UBendLib_UI_FunctionLibrary_C_DisplayMissionInfoPopup_Params params;
	params.Type = Type;
	params.Title = Title;
	params.RewardType = RewardType;
	params.RewardValue = RewardValue;
	params.SubTitle = SubTitle;
	params.InteractDetails = InteractDetails;
	params.UtilityObject = UtilityObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.CloseTutorial
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_TutorialPanel_C*     TutorialWidget                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_CloseTutorial(class UUI_TutorialPanel_C* TutorialWidget, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.CloseTutorial");

	UBendLib_UI_FunctionLibrary_C_CloseTutorial_Params params;
	params.TutorialWidget = TutorialWidget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetButtonTextureByEnum_DEPRECATED
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EControllerInputButton> Button                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Dimensions                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_GetButtonTextureByEnum_DEPRECATED(TEnumAsByte<EControllerInputButton> Button, class UObject* __WorldContext, class UTexture2D** Texture, struct FVector2D* Dimensions)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetButtonTextureByEnum_DEPRECATED");

	UBendLib_UI_FunctionLibrary_C_GetButtonTextureByEnum_DEPRECATED_Params params;
	params.Button = Button;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;
	if (Dimensions != nullptr)
		*Dimensions = params.Dimensions;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetButtonTextureByMarkup_DEPRECATED
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Markup                         (Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ButtonTexture                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsMashing                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_GetButtonTextureByMarkup_DEPRECATED(const struct FString& Markup, class UObject* __WorldContext, class UTexture2D** ButtonTexture, bool* IsMashing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.GetButtonTextureByMarkup_DEPRECATED");

	UBendLib_UI_FunctionLibrary_C_GetButtonTextureByMarkup_DEPRECATED_Params params;
	params.Markup = Markup;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonTexture != nullptr)
		*ButtonTexture = params.ButtonTexture;
	if (IsMashing != nullptr)
		*IsMashing = params.IsMashing;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayTutorialSimple
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendTutorialSimpleData* DataAsset                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HiddenTutorial                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CloseAction                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinimumTimeForButton           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AutoClose                      (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_TutorialPanel_C*     Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_DisplayTutorialSimple(class UBendTutorialSimpleData* DataAsset, bool HiddenTutorial, const struct FName& CloseAction, float MinimumTimeForButton, bool AutoClose, class UObject* __WorldContext, class UUI_TutorialPanel_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayTutorialSimple");

	UBendLib_UI_FunctionLibrary_C_DisplayTutorialSimple_Params params;
	params.DataAsset = DataAsset;
	params.HiddenTutorial = HiddenTutorial;
	params.CloseAction = CloseAction;
	params.MinimumTimeForButton = MinimumTimeForButton;
	params.AutoClose = AutoClose;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayTutorialMulti
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendTutorialMultiData*  DataAsset                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HiddenTutorial                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_TutorialPanel_C*     Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_DisplayTutorialMulti(class UBendTutorialMultiData* DataAsset, bool HiddenTutorial, class UObject* __WorldContext, class UUI_TutorialPanel_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayTutorialMulti");

	UBendLib_UI_FunctionLibrary_C_DisplayTutorialMulti_Params params;
	params.DataAsset = DataAsset;
	params.HiddenTutorial = HiddenTutorial;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenScalarParameter_DEPRECATED
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Progress                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UMaterialInstanceDynamic* MaterialInstanceDynamic        (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ParameterName                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Start                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          End                            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEasingFunc>       Easing                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_TweenScalarParameter_DEPRECATED(float Duration, class UMaterialInstanceDynamic* MaterialInstanceDynamic, const struct FName& ParameterName, float Start, float End, TEnumAsByte<EEasingFunc> Easing, class UObject* __WorldContext, float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenScalarParameter_DEPRECATED");

	UBendLib_UI_FunctionLibrary_C_TweenScalarParameter_DEPRECATED_Params params;
	params.Duration = Duration;
	params.MaterialInstanceDynamic = MaterialInstanceDynamic;
	params.ParameterName = ParameterName;
	params.Start = Start;
	params.End = End;
	params.Easing = Easing;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenBorderBrushColor
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTweening                     (Parm, ZeroConstructor, IsPlainOldData)
// class UBorder*                 Border                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Frame                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsTweeningOut                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FrameOut                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_TweenBorderBrushColor(bool IsTweening, class UBorder* Border, float Frame, float Speed, const struct FLinearColor& Color, class UObject* __WorldContext, bool* IsTweeningOut, float* FrameOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenBorderBrushColor");

	UBendLib_UI_FunctionLibrary_C_TweenBorderBrushColor_Params params;
	params.IsTweening = IsTweening;
	params.Border = Border;
	params.Frame = Frame;
	params.Speed = Speed;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsTweeningOut != nullptr)
		*IsTweeningOut = params.IsTweeningOut;
	if (FrameOut != nullptr)
		*FrameOut = params.FrameOut;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.UpdateLocationPanel
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_HudLocation>  LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 locationName                   (Parm, ZeroConstructor)
// float                          PercentComplete                (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentTrust                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentMaxTrust                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETrustTier>        TrustTier                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentCredits                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_UpdateLocationPanel(TEnumAsByte<Enum_HudLocation> LocationType, const struct FString& locationName, float PercentComplete, int CurrentTrust, int CurrentMaxTrust, TEnumAsByte<ETrustTier> TrustTier, int CurrentCredits, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.UpdateLocationPanel");

	UBendLib_UI_FunctionLibrary_C_UpdateLocationPanel_Params params;
	params.LocationType = LocationType;
	params.locationName = locationName;
	params.PercentComplete = PercentComplete;
	params.CurrentTrust = CurrentTrust;
	params.CurrentMaxTrust = CurrentMaxTrust;
	params.TrustTier = TrustTier;
	params.CurrentCredits = CurrentCredits;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.CloseLocationPanel
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_CloseLocationPanel(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.CloseLocationPanel");

	UBendLib_UI_FunctionLibrary_C_CloseLocationPanel_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayLocationPanel
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_HudLocation>  LocationType                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   locationName                   (Parm)
// float                          PercentComplete                (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentTrust                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentTrustMax                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETrustTier>        TrustTier                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentCredits                 (Parm, ZeroConstructor, IsPlainOldData)
// class UBendEncampmentData*     EncampmentData                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_DisplayLocationPanel(TEnumAsByte<Enum_HudLocation> LocationType, const struct FText& locationName, float PercentComplete, int CurrentTrust, int CurrentTrustMax, TEnumAsByte<ETrustTier> TrustTier, int CurrentCredits, class UBendEncampmentData* EncampmentData, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.DisplayLocationPanel");

	UBendLib_UI_FunctionLibrary_C_DisplayLocationPanel_Params params;
	params.LocationType = LocationType;
	params.locationName = locationName;
	params.PercentComplete = PercentComplete;
	params.CurrentTrust = CurrentTrust;
	params.CurrentTrustMax = CurrentTrustMax;
	params.TrustTier = TrustTier;
	params.CurrentCredits = CurrentCredits;
	params.EncampmentData = EncampmentData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetObjectiveIcon
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHudNotificationItemWidget* Object                         (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Text                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_SetObjectiveIcon(class UHudNotificationItemWidget* Object, class UTexture2D* Text, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetObjectiveIcon");

	UBendLib_UI_FunctionLibrary_C_SetObjectiveIcon_Params params;
	params.Object = Object;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetObjectiveText
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHudNotificationItemWidget* Object                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_SetObjectiveText(class UHudNotificationItemWidget* Object, const struct FString& Text, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetObjectiveText");

	UBendLib_UI_FunctionLibrary_C_SetObjectiveText_Params params;
	params.Object = Object;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetObjectiveFailed
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHudNotificationItemWidget* Objective                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Failed                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_SetObjectiveFailed(class UHudNotificationItemWidget* Objective, bool Failed, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetObjectiveFailed");

	UBendLib_UI_FunctionLibrary_C_SetObjectiveFailed_Params params;
	params.Objective = Objective;
	params.Failed = Failed;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ClearObjectives
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_ClearObjectives(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ClearObjectives");

	UBendLib_UI_FunctionLibrary_C_ClearObjectives_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.PauseObjectiveMeter
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Paused                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_PauseObjectiveMeter(bool Paused, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.PauseObjectiveMeter");

	UBendLib_UI_FunctionLibrary_C_PauseObjectiveMeter_Params params;
	params.Paused = Paused;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetObjectiveMeterPercent
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_SetObjectiveMeterPercent(float Percent, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetObjectiveMeterPercent");

	UBendLib_UI_FunctionLibrary_C_SetObjectiveMeterPercent_Params params;
	params.Percent = Percent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ClearObjectiveMeter
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_ClearObjectiveMeter(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ClearObjectiveMeter");

	UBendLib_UI_FunctionLibrary_C_ClearObjectiveMeter_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ActivateObjectiveMeter_DEPRECATED
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Inverted                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UHudMissionTimerWidget*  ObjectiveTimer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_ActivateObjectiveMeter_DEPRECATED(class UTexture2D* Icon, float Time, bool Inverted, class UObject* __WorldContext, class UHudMissionTimerWidget** ObjectiveTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.ActivateObjectiveMeter_DEPRECATED");

	UBendLib_UI_FunctionLibrary_C_ActivateObjectiveMeter_DEPRECATED_Params params;
	params.Icon = Icon;
	params.Time = Time;
	params.Inverted = Inverted;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ObjectiveTimer != nullptr)
		*ObjectiveTimer = params.ObjectiveTimer;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetWidgetToActorPosition_DEPRECATED
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Margin                         (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Centered                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenPosition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           WithinViewoport                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_SetWidgetToActorPosition_DEPRECATED(const struct FVector& WorldLocation, float Margin, class UWidget* Widget, bool Centered, class UObject* __WorldContext, struct FVector2D* ScreenPosition, bool* WithinViewoport)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.SetWidgetToActorPosition_DEPRECATED");

	UBendLib_UI_FunctionLibrary_C_SetWidgetToActorPosition_DEPRECATED_Params params;
	params.WorldLocation = WorldLocation;
	params.Margin = Margin;
	params.Widget = Widget;
	params.Centered = Centered;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenPosition != nullptr)
		*ScreenPosition = params.ScreenPosition;
	if (WithinViewoport != nullptr)
		*WithinViewoport = params.WithinViewoport;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenCollapseHeight_DEPRECATED
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTweening                     (Parm, ZeroConstructor, IsPlainOldData)
// class USizeBox*                SizeBox                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Frame                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsTweeningOut                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FrameOut                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_TweenCollapseHeight_DEPRECATED(bool IsTweening, class USizeBox* SizeBox, float Frame, float Speed, float Height, class UObject* __WorldContext, bool* IsTweeningOut, float* FrameOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenCollapseHeight_DEPRECATED");

	UBendLib_UI_FunctionLibrary_C_TweenCollapseHeight_DEPRECATED_Params params;
	params.IsTweening = IsTweening;
	params.SizeBox = SizeBox;
	params.Frame = Frame;
	params.Speed = Speed;
	params.Height = Height;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsTweeningOut != nullptr)
		*IsTweeningOut = params.IsTweeningOut;
	if (FrameOut != nullptr)
		*FrameOut = params.FrameOut;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenTranslation_DEPRECATED
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTweening                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UBorder*                 Border                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Progress                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector2D               From                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               To                             (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_TweenTranslation_DEPRECATED(class UBorder* Border, float Duration, const struct FVector2D& From, const struct FVector2D& To, class UObject* __WorldContext, bool* IsTweening, float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenTranslation_DEPRECATED");

	UBendLib_UI_FunctionLibrary_C_TweenTranslation_DEPRECATED_Params params;
	params.Border = Border;
	params.Duration = Duration;
	params.From = From;
	params.To = To;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsTweening != nullptr)
		*IsTweening = params.IsTweening;
	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.WeaponTypeToSlot_DEPRECATED
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EWeaponType>       Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EHudWeaponWidgetSlot> Slot                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_WeaponTypeToSlot_DEPRECATED(TEnumAsByte<EWeaponType> Type, class UObject* __WorldContext, TEnumAsByte<EHudWeaponWidgetSlot>* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.WeaponTypeToSlot_DEPRECATED");

	UBendLib_UI_FunctionLibrary_C_WeaponTypeToSlot_DEPRECATED_Params params;
	params.Type = Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Slot != nullptr)
		*Slot = params.Slot;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenScale
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTweening                     (Parm, ZeroConstructor, IsPlainOldData)
// class UBorder*                 Border                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Frame                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Delta                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEasingFunc>       Easing                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsTweeningOut                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          FrameOut                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_TweenScale(bool IsTweening, class UBorder* Border, float Frame, float Delta, float Duration, float Height, TEnumAsByte<EEasingFunc> Easing, class UObject* __WorldContext, bool* IsTweeningOut, float* FrameOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenScale");

	UBendLib_UI_FunctionLibrary_C_TweenScale_Params params;
	params.IsTweening = IsTweening;
	params.Border = Border;
	params.Frame = Frame;
	params.Delta = Delta;
	params.Duration = Duration;
	params.Height = Height;
	params.Easing = Easing;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsTweeningOut != nullptr)
		*IsTweeningOut = params.IsTweeningOut;
	if (FrameOut != nullptr)
		*FrameOut = params.FrameOut;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenColor_DEPRECATED
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTweening                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UBorder*                 Border                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Progress                       (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLinearColor            ColorFrom                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ColorTo                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEasingFunc>       EaseType                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_TweenColor_DEPRECATED(class UBorder* Border, float Duration, const struct FLinearColor& ColorFrom, const struct FLinearColor& ColorTo, TEnumAsByte<EEasingFunc> EaseType, class UObject* __WorldContext, bool* IsTweening, float* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.TweenColor_DEPRECATED");

	UBendLib_UI_FunctionLibrary_C_TweenColor_DEPRECATED_Params params;
	params.Border = Border;
	params.Duration = Duration;
	params.ColorFrom = ColorFrom;
	params.ColorTo = ColorTo;
	params.EaseType = EaseType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsTweening != nullptr)
		*IsTweening = params.IsTweening;
	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.EaseLinearColor_DEPRECATED
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEasingFunc>       Function                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            SourceColor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            DestinationColor               (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            EasedColor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_UI_FunctionLibrary_C::STATIC_EaseLinearColor_DEPRECATED(TEnumAsByte<EEasingFunc> Function, float Alpha, const struct FLinearColor& SourceColor, const struct FLinearColor& DestinationColor, class UObject* __WorldContext, struct FLinearColor* EasedColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_UI_FunctionLibrary.BendLib_UI_FunctionLibrary_C.EaseLinearColor_DEPRECATED");

	UBendLib_UI_FunctionLibrary_C_EaseLinearColor_DEPRECATED_Params params;
	params.Function = Function;
	params.Alpha = Alpha;
	params.SourceColor = SourceColor;
	params.DestinationColor = DestinationColor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EasedColor != nullptr)
		*EasedColor = params.EasedColor;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
