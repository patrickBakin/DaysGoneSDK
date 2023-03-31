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

// Function UI_InputInteract.UI_InputInteract_C.SetAmmoCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendInventoryPickup*    PickupRef                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InputInteract_C::SetAmmoCount(class ABendInventoryPickup* PickupRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.SetAmmoCount");

	UUI_InputInteract_C_SetAmmoCount_Params params;
	params.PickupRef = PickupRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.GetDurability
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendInventoryPickup*    Pickup                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Durability                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_InputInteract_C::GetDurability(class ABendInventoryPickup* Pickup, float* Durability)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.GetDurability");

	UUI_InputInteract_C_GetDurability_Params params;
	params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Durability != nullptr)
		*Durability = params.Durability;
}


// Function UI_InputInteract.UI_InputInteract_C.SetTrackingState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Advertising                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLocked                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InputInteract_C::SetTrackingState(bool Visible, bool Advertising, bool bLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.SetTrackingState");

	UUI_InputInteract_C_SetTrackingState_Params params;
	params.Visible = Visible;
	params.Advertising = Advertising;
	params.bLocked = bLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.GetWeaponComparison
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendInventoryPickup*    Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBetter                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_InputInteract_C::GetWeaponComparison(class ABendInventoryPickup* Target, bool* IsBetter)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.GetWeaponComparison");

	UUI_InputInteract_C_GetWeaponComparison_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsBetter != nullptr)
		*IsBetter = params.IsBetter;
}


// Function UI_InputInteract.UI_InputInteract_C.SetWeaponIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UTexture2D>    TextureAsset                   (Parm)
// float                          WeaponDamage                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InputInteract_C::SetWeaponIcon(class UTexture2D* Texture, TAssetPtr<class UTexture2D> TextureAsset, float WeaponDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.SetWeaponIcon");

	UUI_InputInteract_C_SetWeaponIcon_Params params;
	params.Texture = Texture;
	params.TextureAsset = TextureAsset;
	params.WeaponDamage = WeaponDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.SetAdvertiseTextVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (Parm, ZeroConstructor)

void UUI_InputInteract_C::SetAdvertiseTextVisible(bool State, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.SetAdvertiseTextVisible");

	UUI_InputInteract_C_SetAdvertiseTextVisible_Params params;
	params.State = State;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.UpdateProgressData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InputInteract_C::UpdateProgressData(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.UpdateProgressData");

	UUI_InputInteract_C_UpdateProgressData_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.SetBikePromptVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InputInteract_C::SetBikePromptVisible(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.SetBikePromptVisible");

	UUI_InputInteract_C_SetBikePromptVisible_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.UpdateAdvertiseData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Interact_Types> Interact_Type                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   OverrideText                   (Parm)

void UUI_InputInteract_C::UpdateAdvertiseData(TEnumAsByte<Enum_Interact_Types> Interact_Type, float Progress, const struct FText& OverrideText)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.UpdateAdvertiseData");

	UUI_InputInteract_C_UpdateAdvertiseData_Params params;
	params.Interact_Type = Interact_Type;
	params.Progress = Progress;
	params.OverrideText = OverrideText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.SetPromptVisible
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (Parm, ZeroConstructor)

void UUI_InputInteract_C::SetPromptVisible(bool State, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.SetPromptVisible");

	UUI_InputInteract_C_SetPromptVisible_Params params;
	params.State = State;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.SetAdvertiseType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EIconTypes>        IconType                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InputInteract_C::SetAdvertiseType(TEnumAsByte<EIconTypes> IconType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.SetAdvertiseType");

	UUI_InputInteract_C_SetAdvertiseType_Params params;
	params.IconType = IconType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.SetButtonType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInteractButton>   Button_Type                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InputInteract_C::SetButtonType(TEnumAsByte<EInteractButton> Button_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.SetButtonType");

	UUI_InputInteract_C_SetButtonType_Params params;
	params.Button_Type = Button_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.SetWeaponCardVisible
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (Parm, ZeroConstructor)

void UUI_InputInteract_C::SetWeaponCardVisible(bool State, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.SetWeaponCardVisible");

	UUI_InputInteract_C_SetWeaponCardVisible_Params params;
	params.State = State;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.SetInteractLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Interact_Types> Interact_Type                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InputInteract_C::SetInteractLayout(TEnumAsByte<Enum_Interact_Types> Interact_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.SetInteractLayout");

	UUI_InputInteract_C_SetInteractLayout_Params params;
	params.Interact_Type = Interact_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.SetProgressVisible
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (Parm, ZeroConstructor)

void UUI_InputInteract_C::SetProgressVisible(bool State, const struct FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.SetProgressVisible");

	UUI_InputInteract_C_SetProgressVisible_Params params;
	params.State = State;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.CheckWeapon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendInventoryPickup*    InventoryPickup                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWeapon                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_InputInteract_C::CheckWeapon(class ABendInventoryPickup* InventoryPickup, bool* IsWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.CheckWeapon");

	UUI_InputInteract_C_CheckWeapon_Params params;
	params.InventoryPickup = InventoryPickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsWeapon != nullptr)
		*IsWeapon = params.IsWeapon;
}


// Function UI_InputInteract.UI_InputInteract_C.HackAmmoInteractToNotification
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActorInteractDetails   ActorInteractDetails           (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_InputInteract_C::HackAmmoInteractToNotification(const struct FActorInteractDetails& ActorInteractDetails)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.HackAmmoInteractToNotification");

	UUI_InputInteract_C_HackAmmoInteractToNotification_Params params;
	params.ActorInteractDetails = ActorInteractDetails;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.SetDetails
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActorInteractDetails   ActorInteractDetails           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<Enum_Interact_Types> interact_type                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InputInteract_C::SetDetails(const struct FActorInteractDetails& ActorInteractDetails, TEnumAsByte<Enum_Interact_Types> interact_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.SetDetails");

	UUI_InputInteract_C_SetDetails_Params params;
	params.ActorInteractDetails = ActorInteractDetails;
	params.interact_type = interact_type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InputInteract_C::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.SetVisible");

	UUI_InputInteract_C_SetVisible_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.SetButtonDisabled
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_InputInteract_C::SetButtonDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.SetButtonDisabled");

	UUI_InputInteract_C_SetButtonDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.SetHoldVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InputInteract_C::SetHoldVisible(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.SetHoldVisible");

	UUI_InputInteract_C_SetHoldVisible_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.UpdateButtonProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InputInteract_C::UpdateButtonProgress(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.UpdateButtonProgress");

	UUI_InputInteract_C_UpdateButtonProgress_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UUI_InputInteract_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.OnKeyDown");

	UUI_InputInteract_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_InputInteract.UI_InputInteract_C.SetInteractDetails
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActorInteractDetails*  Details                        (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_InputInteract_C::SetInteractDetails(struct FActorInteractDetails* Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.SetInteractDetails");

	UUI_InputInteract_C_SetInteractDetails_Params params;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.SetProgressPercent
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InputInteract_C::SetProgressPercent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.SetProgressPercent");

	UUI_InputInteract_C_SetProgressPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.AsyncLoadTextureAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    TextureAsset                   (Parm)
// class UImage*                  Image                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           MatchSize                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InputInteract_C::AsyncLoadTextureAsset(TAssetPtr<class UTexture2D> TextureAsset, class UImage* Image, bool MatchSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.AsyncLoadTextureAsset");

	UUI_InputInteract_C_AsyncLoadTextureAsset_Params params;
	params.TextureAsset = TextureAsset;
	params.Image = Image;
	params.MatchSize = MatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void UUI_InputInteract_C::CustomEvent_1(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.CustomEvent_1");

	UUI_InputInteract_C_CustomEvent_1_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.BndEvt__PromptIcon_K2Node_ComponentBoundEvent_1023_OnColorEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InputInteract_C::BndEvt__PromptIcon_K2Node_ComponentBoundEvent_1023_OnColorEvent__DelegateSignature(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.BndEvt__PromptIcon_K2Node_ComponentBoundEvent_1023_OnColorEvent__DelegateSignature");

	UUI_InputInteract_C_BndEvt__PromptIcon_K2Node_ComponentBoundEvent_1023_OnColorEvent__DelegateSignature_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InputInteract.UI_InputInteract_C.ExecuteUbergraph_UI_InputInteract
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InputInteract_C::ExecuteUbergraph_UI_InputInteract(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InputInteract.UI_InputInteract_C.ExecuteUbergraph_UI_InputInteract");

	UUI_InputInteract_C_ExecuteUbergraph_UI_InputInteract_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
