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

// Function UI_Menu_Base.UI_Menu_Base_C.FlushStaticImages
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Menu_Base_C::FlushStaticImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.FlushStaticImages");

	UUI_Menu_Base_C_FlushStaticImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.InitStaticImages
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Menu_Base_C::InitStaticImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.InitStaticImages");

	UUI_Menu_Base_C_InitStaticImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.SetNavigationState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Menu_Base_C::SetNavigationState(TEnumAsByte<EMenuTypes> Menu, float angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.SetNavigationState");

	UUI_Menu_Base_C_SetNavigationState_Params params;
	params.Menu = Menu;
	params.angle = angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.DisplayAlternateNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Menu_Base_C::DisplayAlternateNavigation(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.DisplayAlternateNavigation");

	UUI_Menu_Base_C_DisplayAlternateNavigation_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.Set3DMenuReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMenu3D*                 Menu3dCode                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Menu_Base_C::Set3DMenuReference(class AMenu3D* Menu3dCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.Set3DMenuReference");

	UUI_Menu_Base_C_Set3DMenuReference_Params params;
	params.Menu3dCode = Menu3dCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.SetInputActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Menu_Base_C::SetInputActive(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.SetInputActive");

	UUI_Menu_Base_C_SetInputActive_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.GoToPageByType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ENUM_Menu_Type>    MenuType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Menu_Base_C::GoToPageByType(TEnumAsByte<ENUM_Menu_Type> MenuType, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.GoToPageByType");

	UUI_Menu_Base_C_GoToPageByType_Params params;
	params.MenuType = MenuType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function UI_Menu_Base.UI_Menu_Base_C.GetAllThatArentActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUI_MenuPage_Base_C*> SkillPages                     (Parm, OutParm, ZeroConstructor)

void UUI_Menu_Base_C::GetAllThatArentActive(TArray<class UUI_MenuPage_Base_C*>* SkillPages)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.GetAllThatArentActive");

	UUI_Menu_Base_C_GetAllThatArentActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkillPages != nullptr)
		*SkillPages = params.SkillPages;
}


// Function UI_Menu_Base.UI_Menu_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Menu_Base_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.Construct");

	UUI_Menu_Base_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Menu_Base_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.Tick");

	UUI_Menu_Base_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.DirectionalInputCooldown
// (BlueprintCallable, BlueprintEvent)

void UUI_Menu_Base_C::DirectionalInputCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.DirectionalInputCooldown");

	UUI_Menu_Base_C_DirectionalInputCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.RequestClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ClosedByPhotoMode              (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Menu_Base_C::RequestClose(bool* ClosedByPhotoMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.RequestClose");

	UUI_Menu_Base_C_RequestClose_Params params;
	params.ClosedByPhotoMode = ClosedByPhotoMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.ToggleMenuHidden
// (BlueprintCallable, BlueprintEvent)

void UUI_Menu_Base_C::ToggleMenuHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.ToggleMenuHidden");

	UUI_Menu_Base_C_ToggleMenuHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.OnCancelPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Menu_Base_C::OnCancelPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.OnCancelPressed");

	UUI_Menu_Base_C_OnCancelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.OnConfirmPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Menu_Base_C::OnConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.OnConfirmPressed");

	UUI_Menu_Base_C_OnConfirmPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.OnCancelReleased
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Menu_Base_C::OnCancelReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.OnCancelReleased");

	UUI_Menu_Base_C_OnCancelReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.OnConfirmReleased
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Menu_Base_C::OnConfirmReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.OnConfirmReleased");

	UUI_Menu_Base_C_OnConfirmReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.AsyncLoadTextureAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    TextureAsset                   (Parm)
// class UImage*                  Image                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           MatchSize                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Menu_Base_C::AsyncLoadTextureAsset(TAssetPtr<class UTexture2D> TextureAsset, class UImage* Image, bool MatchSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.AsyncLoadTextureAsset");

	UUI_Menu_Base_C_AsyncLoadTextureAsset_Params params;
	params.TextureAsset = TextureAsset;
	params.Image = Image;
	params.MatchSize = MatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.CustomEvent_0_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void UUI_Menu_Base_C::CustomEvent_0_Copy(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.CustomEvent_0_Copy");

	UUI_Menu_Base_C_CustomEvent_0_Copy_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.AsyncLoadTextureAsset_Material
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    TextureAsset                   (Parm)
// class UMaterialInstanceDynamic* Mid                            (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Menu_Base_C::AsyncLoadTextureAsset_Material(TAssetPtr<class UTexture2D> TextureAsset, class UMaterialInstanceDynamic* Mid)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.AsyncLoadTextureAsset_Material");

	UUI_Menu_Base_C_AsyncLoadTextureAsset_Material_Params params;
	params.TextureAsset = TextureAsset;
	params.Mid = Mid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void UUI_Menu_Base_C::CustomEvent_2(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.CustomEvent_2");

	UUI_Menu_Base_C_CustomEvent_2_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.UnloadTextureAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    TextureAsset                   (Parm)

void UUI_Menu_Base_C::UnloadTextureAsset(TAssetPtr<class UTexture2D> TextureAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.UnloadTextureAsset");

	UUI_Menu_Base_C_UnloadTextureAsset_Params params;
	params.TextureAsset = TextureAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.OnSelect2Pressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Menu_Base_C::OnSelect2Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.OnSelect2Pressed");

	UUI_Menu_Base_C_OnSelect2Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.OnSelect1Pressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Menu_Base_C::OnSelect1Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.OnSelect1Pressed");

	UUI_Menu_Base_C_OnSelect1Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.OnTabNextPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Menu_Base_C::OnTabNextPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.OnTabNextPressed");

	UUI_Menu_Base_C_OnTabNextPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.OnTabPreviousPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Menu_Base_C::OnTabPreviousPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.OnTabPreviousPressed");

	UUI_Menu_Base_C_OnTabPreviousPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.OnPageNextPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Menu_Base_C::OnPageNextPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.OnPageNextPressed");

	UUI_Menu_Base_C_OnPageNextPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.OnPagePreviousPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Menu_Base_C::OnPagePreviousPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.OnPagePreviousPressed");

	UUI_Menu_Base_C_OnPagePreviousPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.OnSelect1Released
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Menu_Base_C::OnSelect1Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.OnSelect1Released");

	UUI_Menu_Base_C_OnSelect1Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.OnSelect2Released
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Menu_Base_C::OnSelect2Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.OnSelect2Released");

	UUI_Menu_Base_C_OnSelect2Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.OnUpPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Menu_Base_C::OnUpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.OnUpPressed");

	UUI_Menu_Base_C_OnUpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.OnDownPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Menu_Base_C::OnDownPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.OnDownPressed");

	UUI_Menu_Base_C_OnDownPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.OnLeftPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Menu_Base_C::OnLeftPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.OnLeftPressed");

	UUI_Menu_Base_C_OnLeftPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.OnRightPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_Menu_Base_C::OnRightPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.OnRightPressed");

	UUI_Menu_Base_C_OnRightPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.ExecuteUbergraph_UI_Menu_Base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Menu_Base_C::ExecuteUbergraph_UI_Menu_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.ExecuteUbergraph_UI_Menu_Base");

	UUI_Menu_Base_C_ExecuteUbergraph_UI_Menu_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.WeaponFromLocker__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (Parm)

void UUI_Menu_Base_C::WeaponFromLocker__DelegateSignature(const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.WeaponFromLocker__DelegateSignature");

	UUI_Menu_Base_C_WeaponFromLocker__DelegateSignature_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.ItemPurchased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            ItemTag                        (Parm)

void UUI_Menu_Base_C::ItemPurchased__DelegateSignature(const struct FGameplayTag& ItemTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.ItemPurchased__DelegateSignature");

	UUI_Menu_Base_C_ItemPurchased__DelegateSignature_Params params;
	params.ItemTag = ItemTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Menu_Base.UI_Menu_Base_C.MenuClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Menu_Base_C::MenuClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Menu_Base.UI_Menu_Base_C.MenuClosed__DelegateSignature");

	UUI_Menu_Base_C_MenuClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
