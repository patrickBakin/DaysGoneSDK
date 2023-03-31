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

// Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.ForceOwnedState
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GridItem_SkillSlot_C::ForceOwnedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.ForceOwnedState");

	UUI_GridItem_SkillSlot_C_ForceOwnedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.HighlightOff
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GridItem_SkillSlot_C::HighlightOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.HighlightOff");

	UUI_GridItem_SkillSlot_C_HighlightOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.HighlightOn
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_GridItem_SkillSlot_C::HighlightOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.HighlightOn");

	UUI_GridItem_SkillSlot_C_HighlightOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.UpdateSkillData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Updated                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_SkillSlot_C::UpdateSkillData(bool* Updated)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.UpdateSkillData");

	UUI_GridItem_SkillSlot_C_UpdateSkillData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Updated != nullptr)
		*Updated = params.Updated;
}


// Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.GetSkillData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   SkillName                      (Parm, OutParm)
// struct FText                   Description                    (Parm, OutParm)
// int                            PointsRequired                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESkillStatus>      CurrentState                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UTexture2D>    IconAsset                      (Parm, OutParm)
// bool                           CanAfford                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            SkillTag                       (Parm, OutParm)
// TEnumAsByte<ESkillTier>        SkillTier                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Image                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UTexture2D>    ImageAsset                     (Parm, OutParm)
// struct FText                   TutorialText                   (Parm, OutParm)

void UUI_GridItem_SkillSlot_C::GetSkillData(struct FText* SkillName, struct FText* Description, int* PointsRequired, TEnumAsByte<ESkillStatus>* CurrentState, class UTexture2D** Icon, TAssetPtr<class UTexture2D>* IconAsset, bool* CanAfford, struct FGameplayTag* SkillTag, TEnumAsByte<ESkillTier>* SkillTier, class UTexture2D** Image, TAssetPtr<class UTexture2D>* ImageAsset, struct FText* TutorialText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.GetSkillData");

	UUI_GridItem_SkillSlot_C_GetSkillData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkillName != nullptr)
		*SkillName = params.SkillName;
	if (Description != nullptr)
		*Description = params.Description;
	if (PointsRequired != nullptr)
		*PointsRequired = params.PointsRequired;
	if (CurrentState != nullptr)
		*CurrentState = params.CurrentState;
	if (Icon != nullptr)
		*Icon = params.Icon;
	if (IconAsset != nullptr)
		*IconAsset = params.IconAsset;
	if (CanAfford != nullptr)
		*CanAfford = params.CanAfford;
	if (SkillTag != nullptr)
		*SkillTag = params.SkillTag;
	if (SkillTier != nullptr)
		*SkillTier = params.SkillTier;
	if (Image != nullptr)
		*Image = params.Image;
	if (ImageAsset != nullptr)
		*ImageAsset = params.ImageAsset;
	if (TutorialText != nullptr)
		*TutorialText = params.TutorialText;
}


// Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.StoreSkill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendSkill              Skill                          (Parm)
// bool                           FOCUSEDSHOT                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_SkillSlot_C::StoreSkill(const struct FBendSkill& Skill, bool FOCUSEDSHOT)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.StoreSkill");

	UUI_GridItem_SkillSlot_C_StoreSkill_Params params;
	params.Skill = Skill;
	params.FOCUSEDSHOT = FOCUSEDSHOT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_SkillSlot_C::SetSelected(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.SetSelected");

	UUI_GridItem_SkillSlot_C_SetSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.BindSKillToUnlock
// (BlueprintCallable, BlueprintEvent)

void UUI_GridItem_SkillSlot_C::BindSKillToUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.BindSKillToUnlock");

	UUI_GridItem_SkillSlot_C_BindSKillToUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.OnSkillModified_Unlocked_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventorySkillID> SkillID                        (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryItemSkill*     SkillItem                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_SkillSlot_C::OnSkillModified_Unlocked_Event_1(TEnumAsByte<EInventorySkillID> SkillID, class UInventoryItemSkill* SkillItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.OnSkillModified_Unlocked_Event_1");

	UUI_GridItem_SkillSlot_C_OnSkillModified_Unlocked_Event_1_Params params;
	params.SkillID = SkillID;
	params.SkillItem = SkillItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_GridItem_SkillSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.Construct");

	UUI_GridItem_SkillSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.ExecuteUbergraph_UI_GridItem_SkillSlot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_GridItem_SkillSlot_C::ExecuteUbergraph_UI_GridItem_SkillSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_GridItem_SkillSlot.UI_GridItem_SkillSlot_C.ExecuteUbergraph_UI_GridItem_SkillSlot");

	UUI_GridItem_SkillSlot_C_ExecuteUbergraph_UI_GridItem_SkillSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
