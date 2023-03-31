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

// Function UI_SkillPage_Category.UI_SkillPage_Category_C.CheckForSurvivalDifficultyLockedSkills
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag            GameplayTag                    (Parm)
// bool                           ShouldLockSkill                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SkillPage_Category_C::CheckForSurvivalDifficultyLockedSkills(const struct FGameplayTag& GameplayTag, bool* ShouldLockSkill)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.CheckForSurvivalDifficultyLockedSkills");

	UUI_SkillPage_Category_C_CheckForSurvivalDifficultyLockedSkills_Params params;
	params.GameplayTag = GameplayTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldLockSkill != nullptr)
		*ShouldLockSkill = params.ShouldLockSkill;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.CheckForUnlock
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bHasUnlock                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            CurrentTier                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SkillPage_Category_C::CheckForUnlock(bool* bHasUnlock, int* CurrentTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.CheckForUnlock");

	UUI_SkillPage_Category_C_CheckForUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasUnlock != nullptr)
		*bHasUnlock = params.bHasUnlock;
	if (CurrentTier != nullptr)
		*CurrentTier = params.CurrentTier;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.SetTutorialReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 WidgetRef                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillPage_Category_C::SetTutorialReference(class UWidget* WidgetRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.SetTutorialReference");

	UUI_SkillPage_Category_C_SetTutorialReference_Params params;
	params.WidgetRef = WidgetRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.CheckTierUnlocked
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SkillPage_Category_C::CheckTierUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.CheckTierUnlocked");

	UUI_SkillPage_Category_C_CheckTierUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.UpdateTrophies
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SkillPage_Category_C::UpdateTrophies()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.UpdateTrophies");

	UUI_SkillPage_Category_C_UpdateTrophies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.CheckFocusedShot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SkillPage_Category_C::CheckFocusedShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.CheckFocusedShot");

	UUI_SkillPage_Category_C_CheckFocusedShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.Sortskills
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    TierSizes                      (Parm, OutParm, ZeroConstructor)

void UUI_SkillPage_Category_C::Sortskills(TArray<int>* TierSizes)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.Sortskills");

	UUI_SkillPage_Category_C_Sortskills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TierSizes != nullptr)
		*TierSizes = params.TierSizes;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.StoreDataByFName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Name                           (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_GridItem_Base_C**    Grid_Item                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SkillPage_Category_C::StoreDataByFName(struct FName* Name, class UUI_GridItem_Base_C** Grid_Item, int* Index, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.StoreDataByFName");

	UUI_SkillPage_Category_C_StoreDataByFName_Params params;
	params.Name = Name;
	params.Grid_Item = Grid_Item;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.UpdateSelectionDetails
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GridItem_Base_C**    GridItem                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SkillPage_Category_C::UpdateSelectionDetails(class UUI_GridItem_Base_C** GridItem, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.UpdateSelectionDetails");

	UUI_SkillPage_Category_C_UpdateSelectionDetails_Params params;
	params.GridItem = GridItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.SetTheMenuHeader
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_Menu_Type>*   Category                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SkillPage_Category_C::SetTheMenuHeader(TEnumAsByte<ENUM_Menu_Type>* Category, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.SetTheMenuHeader");

	UUI_SkillPage_Category_C_SetTheMenuHeader_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.SetSkillTierUnlockedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Tier                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillPage_Category_C::SetSkillTierUnlockedState(int Tier, bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.SetSkillTierUnlockedState");

	UUI_SkillPage_Category_C_SetSkillTierUnlockedState_Params params;
	params.Tier = Tier;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.CircleSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SkillPage_Category_C::CircleSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.CircleSelectionInputGiven");

	UUI_SkillPage_Category_C_CircleSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SkillPage_Category_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.Construct");

	UUI_SkillPage_Category_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.CrossSelectionHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         HoldTime                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          NeverReset                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillPage_Category_C::CrossSelectionHold(float* HoldTime, bool* NeverReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.CrossSelectionHold");

	UUI_SkillPage_Category_C_CrossSelectionHold_Params params;
	params.HoldTime = HoldTime;
	params.NeverReset = NeverReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.UpdateSkillTierStates
// (BlueprintCallable, BlueprintEvent)

void UUI_SkillPage_Category_C::UpdateSkillTierStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.UpdateSkillTierStates");

	UUI_SkillPage_Category_C_UpdateSkillTierStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.ResetHoldInput
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SkillPage_Category_C::ResetHoldInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.ResetHoldInput");

	UUI_SkillPage_Category_C_ResetHoldInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.CrossSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SkillPage_Category_C::CrossSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.CrossSelectionInputGiven");

	UUI_SkillPage_Category_C_CrossSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.MenuSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillPage_Category_C::MenuSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.MenuSelected");

	UUI_SkillPage_Category_C_MenuSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.R1orL1SelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          R2                             (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillPage_Category_C::R1orL1SelectionInputGiven(bool* R2)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.R1orL1SelectionInputGiven");

	UUI_SkillPage_Category_C_R1orL1SelectionInputGiven_Params params;
	params.R2 = R2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.RecreateAllGrids
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          DontDestroyCurrentGrids        (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OverrideDestoryIndex           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillPage_Category_C::RecreateAllGrids(bool* DontDestroyCurrentGrids, int* OverrideDestoryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.RecreateAllGrids");

	UUI_SkillPage_Category_C_RecreateAllGrids_Params params;
	params.DontDestroyCurrentGrids = DontDestroyCurrentGrids;
	params.OverrideDestoryIndex = OverrideDestoryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.SkillAsyncLoadTextureAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    TextureAsset                   (Parm)

void UUI_SkillPage_Category_C::SkillAsyncLoadTextureAsset(TAssetPtr<class UTexture2D> TextureAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.SkillAsyncLoadTextureAsset");

	UUI_SkillPage_Category_C_SkillAsyncLoadTextureAsset_Params params;
	params.TextureAsset = TextureAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.FlushStaticImages
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SkillPage_Category_C::FlushStaticImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.FlushStaticImages");

	UUI_SkillPage_Category_C_FlushStaticImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_1357_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SkillPage_Category_C::BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_1357_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_1357_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_SkillPage_Category_C_BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_1357_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.BndEvt__MenuInteract_Melee_K2Node_ComponentBoundEvent_7098_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SkillPage_Category_C::BndEvt__MenuInteract_Melee_K2Node_ComponentBoundEvent_7098_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.BndEvt__MenuInteract_Melee_K2Node_ComponentBoundEvent_7098_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_SkillPage_Category_C_BndEvt__MenuInteract_Melee_K2Node_ComponentBoundEvent_7098_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.BndEvt__MenuInteract_Ranged_K2Node_ComponentBoundEvent_7101_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SkillPage_Category_C::BndEvt__MenuInteract_Ranged_K2Node_ComponentBoundEvent_7101_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.BndEvt__MenuInteract_Ranged_K2Node_ComponentBoundEvent_7101_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_SkillPage_Category_C_BndEvt__MenuInteract_Ranged_K2Node_ComponentBoundEvent_7101_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.BndEvt__MenuInteract_Survival_K2Node_ComponentBoundEvent_7105_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_SkillPage_Category_C::BndEvt__MenuInteract_Survival_K2Node_ComponentBoundEvent_7105_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.BndEvt__MenuInteract_Survival_K2Node_ComponentBoundEvent_7105_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_SkillPage_Category_C_BndEvt__MenuInteract_Survival_K2Node_ComponentBoundEvent_7105_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.HandleMousePress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillPage_Category_C::HandleMousePress(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.HandleMousePress");

	UUI_SkillPage_Category_C_HandleMousePress_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.OnClick
// (BlueprintCallable, BlueprintEvent)

void UUI_SkillPage_Category_C::OnClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.OnClick");

	UUI_SkillPage_Category_C_OnClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.OnHoldStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESkillStatus>      CurrentState                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            SkillTag                       (Parm)

void UUI_SkillPage_Category_C::OnHoldStart(TEnumAsByte<ESkillStatus> CurrentState, const struct FGameplayTag& SkillTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.OnHoldStart");

	UUI_SkillPage_Category_C_OnHoldStart_Params params;
	params.CurrentState = CurrentState;
	params.SkillTag = SkillTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SkillPage_Category.UI_SkillPage_Category_C.ExecuteUbergraph_UI_SkillPage_Category
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SkillPage_Category_C::ExecuteUbergraph_UI_SkillPage_Category(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SkillPage_Category.UI_SkillPage_Category_C.ExecuteUbergraph_UI_SkillPage_Category");

	UUI_SkillPage_Category_C_ExecuteUbergraph_UI_SkillPage_Category_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
