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

// Function BP_Menu3D.BP_Menu3D_C.GetStorylinesMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Storylines_Menu_C*   StorylinesMenu                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::GetStorylinesMenu(class UUI_Storylines_Menu_C** StorylinesMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.GetStorylinesMenu");

	ABP_Menu3D_C_GetStorylinesMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StorylinesMenu != nullptr)
		*StorylinesMenu = params.StorylinesMenu;
}


// Function BP_Menu3D.BP_Menu3D_C.DisplayMenu_For3D
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        MenuTypes                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NoAnimation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::DisplayMenu_For3D(TEnumAsByte<EMenuTypes> MenuTypes, bool NoAnimation, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.DisplayMenu_For3D");

	ABP_Menu3D_C_DisplayMenu_For3D_Params params;
	params.MenuTypes = MenuTypes;
	params.NoAnimation = NoAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found != nullptr)
		*Found = params.Found;
}


// Function BP_Menu3D.BP_Menu3D_C.IsMenuClosing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsClosing                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::IsMenuClosing(bool* IsClosing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.IsMenuClosing");

	ABP_Menu3D_C_IsMenuClosing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsClosing != nullptr)
		*IsClosing = params.IsClosing;
}


// Function BP_Menu3D.BP_Menu3D_C.PlayMenuSounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SkipAnimation                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMenuTypes>        TargetMenu                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromSwipe                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::PlayMenuSounds(bool SkipAnimation, TEnumAsByte<EMenuTypes> TargetMenu, bool FromSwipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.PlayMenuSounds");

	ABP_Menu3D_C_PlayMenuSounds_Params params;
	params.SkipAnimation = SkipAnimation;
	params.TargetMenu = TargetMenu;
	params.FromSwipe = FromSwipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.SetOverrideMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::SetOverrideMenu(TEnumAsByte<EMenuTypes> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.SetOverrideMenu");

	ABP_Menu3D_C_SetOverrideMenu_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.FlushMaterialImages
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::FlushMaterialImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.FlushMaterialImages");

	ABP_Menu3D_C_FlushMaterialImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.InitMaterialImages
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::InitMaterialImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.InitMaterialImages");

	ABP_Menu3D_C_InitMaterialImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.GetDragSelectedMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               EndLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          DistanceSquared                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::GetDragSelectedMenu(const struct FVector2D& EndLocation, float* DistanceSquared, float* angle, TEnumAsByte<EMenuTypes>* Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.GetDragSelectedMenu");

	ABP_Menu3D_C_GetDragSelectedMenu_Params params;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DistanceSquared != nullptr)
		*DistanceSquared = params.DistanceSquared;
	if (angle != nullptr)
		*angle = params.angle;
	if (Menu != nullptr)
		*Menu = params.Menu;
}


// Function BP_Menu3D.BP_Menu3D_C.IsTopLevelMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsTopLevelMenu                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::IsTopLevelMenu(TEnumAsByte<EMenuTypes> Menu, bool* IsTopLevelMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.IsTopLevelMenu");

	ABP_Menu3D_C_IsTopLevelMenu_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsTopLevelMenu != nullptr)
		*IsTopLevelMenu = params.IsTopLevelMenu;
}


// Function BP_Menu3D.BP_Menu3D_C.DisplayLastMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::DisplayLastMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.DisplayLastMenu");

	ABP_Menu3D_C_DisplayLastMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.TouchInputMove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Location                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETouchIndex>       TouchIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::TouchInputMove(const struct FVector2D& Location, TEnumAsByte<ETouchIndex> TouchIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.TouchInputMove");

	ABP_Menu3D_C_TouchInputMove_Params params;
	params.Location = Location;
	params.TouchIndex = TouchIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.ClearAllowedMenus
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::ClearAllowedMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.ClearAllowedMenus");

	ABP_Menu3D_C_ClearAllowedMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.IsMenuAllowed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Desired_Menu                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Is_Menu_Allowed_               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::IsMenuAllowed(TEnumAsByte<EMenuTypes> Desired_Menu, bool* Is_Menu_Allowed_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.IsMenuAllowed");

	ABP_Menu3D_C_IsMenuAllowed_Params params;
	params.Desired_Menu = Desired_Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_Menu_Allowed_ != nullptr)
		*Is_Menu_Allowed_ = params.Is_Menu_Allowed_;
}


// Function BP_Menu3D.BP_Menu3D_C.SetAllowedMenus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TEnumAsByte<EMenuTypes>> Allowed_Menus                  (Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_Menu3D_C::SetAllowedMenus(TArray<TEnumAsByte<EMenuTypes>>* Allowed_Menus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.SetAllowedMenus");

	ABP_Menu3D_C_SetAllowedMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allowed_Menus != nullptr)
		*Allowed_Menus = params.Allowed_Menus;
}


// Function BP_Menu3D.BP_Menu3D_C.SetBlockClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Should_Block_Close_            (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::SetBlockClose(bool Should_Block_Close_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.SetBlockClose");

	ABP_Menu3D_C_SetBlockClose_Params params;
	params.Should_Block_Close_ = Should_Block_Close_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.GetMenu2DPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EMenuTypes>        MenuType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Position                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::GetMenu2DPosition(TEnumAsByte<EMenuTypes> MenuType, struct FVector2D* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.GetMenu2DPosition");

	ABP_Menu3D_C_GetMenu2DPosition_Params params;
	params.MenuType = MenuType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
}


// Function BP_Menu3D.BP_Menu3D_C.HideSmallImages
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::HideSmallImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.HideSmallImages");

	ABP_Menu3D_C_HideSmallImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.GoToPrevMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::GoToPrevMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.GoToPrevMenu");

	ABP_Menu3D_C_GoToPrevMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.GoToNextMenu
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::GoToNextMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.GoToNextMenu");

	ABP_Menu3D_C_GoToNextMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.NewFunction_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               TouchStartVector               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::NewFunction_1(struct FVector2D* TouchStartVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.NewFunction_1");

	ABP_Menu3D_C_NewFunction_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TouchStartVector != nullptr)
		*TouchStartVector = params.TouchStartVector;
}


// Function BP_Menu3D.BP_Menu3D_C.DisplayMenuAtLastTouchLocation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::DisplayMenuAtLastTouchLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.DisplayMenuAtLastTouchLocation");

	ABP_Menu3D_C_DisplayMenuAtLastTouchLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.IsTouchInCenter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector2D               Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InCenter                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::IsTouchInCenter(const struct FVector2D& Location, bool* InCenter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.IsTouchInCenter");

	ABP_Menu3D_C_IsTouchInCenter_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InCenter != nullptr)
		*InCenter = params.InCenter;
}


// Function BP_Menu3D.BP_Menu3D_C.DisableInactiveMenus
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::DisableInactiveMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.DisableInactiveMenus");

	ABP_Menu3D_C_DisableInactiveMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.ResetMenusToMain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::ResetMenusToMain(TEnumAsByte<EMenuTypes> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.ResetMenusToMain");

	ABP_Menu3D_C_ResetMenusToMain_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.SetMenuImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Mesh                           (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture2D                      (Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UTexture2D>    Texture_Asset                  (Parm)
// float                          Opacity                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Tint                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SingleChannel                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FadeInWhenLoaded               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::SetMenuImage(class UPrimitiveComponent* Mesh, class UTexture2D* Texture2D, TAssetPtr<class UTexture2D> Texture_Asset, float Opacity, const struct FLinearColor& Tint, bool SingleChannel, bool FadeInWhenLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.SetMenuImage");

	ABP_Menu3D_C_SetMenuImage_Params params;
	params.Mesh = Mesh;
	params.Texture2D = Texture2D;
	params.Texture_Asset = Texture_Asset;
	params.Opacity = Opacity;
	params.Tint = Tint;
	params.SingleChannel = SingleChannel;
	params.FadeInWhenLoaded = FadeInWhenLoaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.UpdateHudData
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::UpdateHudData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.UpdateHudData");

	ABP_Menu3D_C_UpdateHudData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.GetMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)
// class UBendWidgetComponent*    BendWidget                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             UserWidget                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               TargetTranslation              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::GetMenu(TEnumAsByte<EMenuTypes> Menu, class UBendWidgetComponent** BendWidget, class UUserWidget** UserWidget, struct FVector* TargetLocation, bool* Success, struct FVector2D* TargetTranslation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.GetMenu");

	ABP_Menu3D_C_GetMenu_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BendWidget != nullptr)
		*BendWidget = params.BendWidget;
	if (UserWidget != nullptr)
		*UserWidget = params.UserWidget;
	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
	if (Success != nullptr)
		*Success = params.Success;
	if (TargetTranslation != nullptr)
		*TargetTranslation = params.TargetTranslation;
}


// Function BP_Menu3D.BP_Menu3D_C.DisplayMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NoAnimation                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromSwipe                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::DisplayMenu(TEnumAsByte<EMenuTypes> Menu, bool NoAnimation, bool FromSwipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.DisplayMenu");

	ABP_Menu3D_C_DisplayMenu_Params params;
	params.Menu = Menu;
	params.NoAnimation = NoAnimation;
	params.FromSwipe = FromSwipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.IsMapInputEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::IsMapInputEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.IsMapInputEnabled");

	ABP_Menu3D_C_IsMapInputEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function BP_Menu3D.BP_Menu3D_C.ResetInputs
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::ResetInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.ResetInputs");

	ABP_Menu3D_C_ResetInputs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.TouchInputEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               TouchLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETouchIndex>       TouchIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::TouchInputEnd(const struct FVector2D& TouchLocation, TEnumAsByte<ETouchIndex> TouchIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.TouchInputEnd");

	ABP_Menu3D_C_TouchInputEnd_Params params;
	params.TouchLocation = TouchLocation;
	params.TouchIndex = TouchIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.TouchInputStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               TouchLocation                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETouchIndex>       TouchIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::TouchInputStart(const struct FVector2D& TouchLocation, TEnumAsByte<ETouchIndex> TouchIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.TouchInputStart");

	ABP_Menu3D_C_TouchInputStart_Params params;
	params.TouchLocation = TouchLocation;
	params.TouchIndex = TouchIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.ExitSelector
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::ExitSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.ExitSelector");

	ABP_Menu3D_C_ExitSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.EnterSelector
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::EnterSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.EnterSelector");

	ABP_Menu3D_C_EnterSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.UserConstructionScript");

	ABP_Menu3D_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.TimelineMain__FinishedFunc
// (BlueprintEvent)

void ABP_Menu3D_C::TimelineMain__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.TimelineMain__FinishedFunc");

	ABP_Menu3D_C_TimelineMain__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.TimelineMain__UpdateFunc
// (BlueprintEvent)

void ABP_Menu3D_C::TimelineMain__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.TimelineMain__UpdateFunc");

	ABP_Menu3D_C_TimelineMain__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.TimelineFade__FinishedFunc
// (BlueprintEvent)

void ABP_Menu3D_C::TimelineFade__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.TimelineFade__FinishedFunc");

	ABP_Menu3D_C_TimelineFade__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.TimelineFade__UpdateFunc
// (BlueprintEvent)

void ABP_Menu3D_C::TimelineFade__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.TimelineFade__UpdateFunc");

	ABP_Menu3D_C_TimelineFade__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.InpTchEvt_UniqueObjectNameForCooking_18318174
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::InpTchEvt_UniqueObjectNameForCooking_18318174(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.InpTchEvt_UniqueObjectNameForCooking_18318174");

	ABP_Menu3D_C_InpTchEvt_UniqueObjectNameForCooking_18318174_Params params;
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.InpTchEvt_UniqueObjectNameForCooking_18318173
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::InpTchEvt_UniqueObjectNameForCooking_18318173(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.InpTchEvt_UniqueObjectNameForCooking_18318173");

	ABP_Menu3D_C_InpTchEvt_UniqueObjectNameForCooking_18318173_Params params;
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.InpTchEvt_UniqueObjectNameForCooking_18318172
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::InpTchEvt_UniqueObjectNameForCooking_18318172(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.InpTchEvt_UniqueObjectNameForCooking_18318172");

	ABP_Menu3D_C_InpTchEvt_UniqueObjectNameForCooking_18318172_Params params;
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.InpActEvt_TogglePauseMenu_Map_UniqueObjectNameForCooking_832
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_Menu3D_C::InpActEvt_TogglePauseMenu_Map_UniqueObjectNameForCooking_832(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.InpActEvt_TogglePauseMenu_Map_UniqueObjectNameForCooking_832");

	ABP_Menu3D_C_InpActEvt_TogglePauseMenu_Map_UniqueObjectNameForCooking_832_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.InpActEvt_TogglePauseMenu_Skills_UniqueObjectNameForCooking_831
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_Menu3D_C::InpActEvt_TogglePauseMenu_Skills_UniqueObjectNameForCooking_831(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.InpActEvt_TogglePauseMenu_Skills_UniqueObjectNameForCooking_831");

	ABP_Menu3D_C_InpActEvt_TogglePauseMenu_Skills_UniqueObjectNameForCooking_831_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.InpActEvt_TogglePauseMenu_Inventory_UniqueObjectNameForCooking_830
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_Menu3D_C::InpActEvt_TogglePauseMenu_Inventory_UniqueObjectNameForCooking_830(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.InpActEvt_TogglePauseMenu_Inventory_UniqueObjectNameForCooking_830");

	ABP_Menu3D_C_InpActEvt_TogglePauseMenu_Inventory_UniqueObjectNameForCooking_830_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.InpActEvt_TogglePauseMenu_Storylines_UniqueObjectNameForCooking_829
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_Menu3D_C::InpActEvt_TogglePauseMenu_Storylines_UniqueObjectNameForCooking_829(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.InpActEvt_TogglePauseMenu_Storylines_UniqueObjectNameForCooking_829");

	ABP_Menu3D_C_InpActEvt_TogglePauseMenu_Storylines_UniqueObjectNameForCooking_829_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.InpActEvt_TogglePauseMenu_MapPC_UniqueObjectNameForCooking_828
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_Menu3D_C::InpActEvt_TogglePauseMenu_MapPC_UniqueObjectNameForCooking_828(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.InpActEvt_TogglePauseMenu_MapPC_UniqueObjectNameForCooking_828");

	ABP_Menu3D_C_InpActEvt_TogglePauseMenu_MapPC_UniqueObjectNameForCooking_828_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.InpActEvt_Debug_MapTeleport_UniqueObjectNameForCooking_827
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void ABP_Menu3D_C::InpActEvt_Debug_MapTeleport_UniqueObjectNameForCooking_827(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.InpActEvt_Debug_MapTeleport_UniqueObjectNameForCooking_827");

	ABP_Menu3D_C_InpActEvt_Debug_MapTeleport_UniqueObjectNameForCooking_827_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OnLoaded_1E5A22304C941CB4DAA34197B6B13F13
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::OnLoaded_1E5A22304C941CB4DAA34197B6B13F13(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OnLoaded_1E5A22304C941CB4DAA34197B6B13F13");

	ABP_Menu3D_C_OnLoaded_1E5A22304C941CB4DAA34197B6B13F13_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_Menu3D_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.ReceiveBeginPlay");

	ABP_Menu3D_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.ReceiveTick");

	ABP_Menu3D_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.TweenToMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         SceneComponent                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Current                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Target                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMenuTypes>        NextMenu                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reverse                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NoAnimation                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::TweenToMenu(class USceneComponent* SceneComponent, const struct FVector& Current, const struct FVector& Target, TEnumAsByte<EMenuTypes> NextMenu, bool Reverse, bool NoAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.TweenToMenu");

	ABP_Menu3D_C_TweenToMenu_Params params;
	params.SceneComponent = SceneComponent;
	params.Current = Current;
	params.Target = Target;
	params.NextMenu = NextMenu;
	params.Reverse = Reverse;
	params.NoAnimation = NoAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.FadeMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Forward                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::FadeMenu(bool Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.FadeMenu");

	ABP_Menu3D_C_FadeMenu_Params params;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.CustomEvent_1");

	ABP_Menu3D_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OnMenuOpened
// (Event, Public, BlueprintEvent)

void ABP_Menu3D_C::OnMenuOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OnMenuOpened");

	ABP_Menu3D_C_OnMenuOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OnMenuClosed
// (Event, Public, BlueprintEvent)

void ABP_Menu3D_C::OnMenuClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OnMenuClosed");

	ABP_Menu3D_C_OnMenuClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.FinishClosing
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::FinishClosing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.FinishClosing");

	ABP_Menu3D_C_FinishClosing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.InputFlickUp
// (Event, Public, BlueprintEvent)

void ABP_Menu3D_C::InputFlickUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.InputFlickUp");

	ABP_Menu3D_C_InputFlickUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.InputFlickDown
// (Event, Public, BlueprintEvent)

void ABP_Menu3D_C::InputFlickDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.InputFlickDown");

	ABP_Menu3D_C_InputFlickDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.InputFlickRight
// (Event, Public, BlueprintEvent)

void ABP_Menu3D_C::InputFlickRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.InputFlickRight");

	ABP_Menu3D_C_InputFlickRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.InputFlickLeft
// (Event, Public, BlueprintEvent)

void ABP_Menu3D_C::InputFlickLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.InputFlickLeft");

	ABP_Menu3D_C_InputFlickLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.TouchBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETouchIndex>       Index                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::TouchBegin(const struct FVector& Location, TEnumAsByte<ETouchIndex> Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.TouchBegin");

	ABP_Menu3D_C_TouchBegin_Params params;
	params.Location = Location;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.TouchEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETouchIndex>       Index                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::TouchEnd(const struct FVector& Location, TEnumAsByte<ETouchIndex> Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.TouchEnd");

	ABP_Menu3D_C_TouchEnd_Params params;
	params.Location = Location;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.TogglePauseMenu_Map
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::TogglePauseMenu_Map(TEnumAsByte<EMenuTypes> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.TogglePauseMenu_Map");

	ABP_Menu3D_C_TogglePauseMenu_Map_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.Initialize");

	ABP_Menu3D_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OnMapClose
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::OnMapClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OnMapClose");

	ABP_Menu3D_C_OnMapClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.TouchMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETouchIndex>       Index                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::TouchMove(const struct FVector& Location, TEnumAsByte<ETouchIndex> Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.TouchMove");

	ABP_Menu3D_C_TouchMove_Params params;
	params.Location = Location;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NoAnimation                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::CustomEvent_2(TEnumAsByte<EMenuTypes> Menu, bool NoAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.CustomEvent_2");

	ABP_Menu3D_C_CustomEvent_2_Params params;
	params.Menu = Menu;
	params.NoAnimation = NoAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          angle                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::CustomEvent_3(TEnumAsByte<EMenuTypes> Menu, float angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.CustomEvent_3");

	ABP_Menu3D_C_CustomEvent_3_Params params;
	params.Menu = Menu;
	params.angle = angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::CustomEvent_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.CustomEvent_4");

	ABP_Menu3D_C_CustomEvent_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.CustomEvent_5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        OpenedMenu                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::CustomEvent_5(TEnumAsByte<EMenuTypes> OpenedMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.CustomEvent_5");

	ABP_Menu3D_C_CustomEvent_5_Params params;
	params.OpenedMenu = OpenedMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.FlushStaticImages
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::FlushStaticImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.FlushStaticImages");

	ABP_Menu3D_C_FlushStaticImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.InitStaticImages
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::InitStaticImages()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.InitStaticImages");

	ABP_Menu3D_C_InitStaticImages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.CustomEvent_6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        MenuType                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::CustomEvent_6(TEnumAsByte<EMenuTypes> MenuType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.CustomEvent_6");

	ABP_Menu3D_C_CustomEvent_6_Params params;
	params.MenuType = MenuType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.SetMenuImageAsync
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    TextureAsset                   (Parm)
// class UPrimitiveComponent*     Mesh                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Opacity                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Tint                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           SingleChannel                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FadeInWhenLoaded               (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::SetMenuImageAsync(TAssetPtr<class UTexture2D> TextureAsset, class UPrimitiveComponent* Mesh, float Opacity, const struct FLinearColor& Tint, bool SingleChannel, bool FadeInWhenLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.SetMenuImageAsync");

	ABP_Menu3D_C_SetMenuImageAsync_Params params;
	params.TextureAsset = TextureAsset;
	params.Mesh = Mesh;
	params.Opacity = Opacity;
	params.Tint = Tint;
	params.SingleChannel = SingleChannel;
	params.FadeInWhenLoaded = FadeInWhenLoaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.CustomEvent_7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void ABP_Menu3D_C::CustomEvent_7(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.CustomEvent_7");

	ABP_Menu3D_C_CustomEvent_7_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.FadeFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Forward                        (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::FadeFinished(bool Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.FadeFinished");

	ABP_Menu3D_C_FadeFinished_Params params;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OnMenuClicked_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::OnMenuClicked_Event_1(TEnumAsByte<EMenuTypes> Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OnMenuClicked_Event_1");

	ABP_Menu3D_C_OnMenuClicked_Event_1_Params params;
	params.Menu = Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OpenMegaMenuWidget
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::OpenMegaMenuWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OpenMegaMenuWidget");

	ABP_Menu3D_C_OpenMegaMenuWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.CloseMegaMenuWidget
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::CloseMegaMenuWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.CloseMegaMenuWidget");

	ABP_Menu3D_C_CloseMegaMenuWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.Map_MenuConfirm
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::Map_MenuConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.Map_MenuConfirm");

	ABP_Menu3D_C_Map_MenuConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.UI_MenuCancel
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::UI_MenuCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.UI_MenuCancel");

	ABP_Menu3D_C_UI_MenuCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OnRequestClose_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::OnRequestClose_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OnRequestClose_Event_1");

	ABP_Menu3D_C_OnRequestClose_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.UI_MenuTabNext
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::UI_MenuTabNext()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.UI_MenuTabNext");

	ABP_Menu3D_C_UI_MenuTabNext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.UI_MenuTabPrevious
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::UI_MenuTabPrevious()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.UI_MenuTabPrevious");

	ABP_Menu3D_C_UI_MenuTabPrevious_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.InpAxisEvt_UI_Map_MoveUp_K2Node_InputAxisEvent_60
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::InpAxisEvt_UI_Map_MoveUp_K2Node_InputAxisEvent_60(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.InpAxisEvt_UI_Map_MoveUp_K2Node_InputAxisEvent_60");

	ABP_Menu3D_C_InpAxisEvt_UI_Map_MoveUp_K2Node_InputAxisEvent_60_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.InpAxisEvt_UI_Map_MoveRight_K2Node_InputAxisEvent_68
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::InpAxisEvt_UI_Map_MoveRight_K2Node_InputAxisEvent_68(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.InpAxisEvt_UI_Map_MoveRight_K2Node_InputAxisEvent_68");

	ABP_Menu3D_C_InpAxisEvt_UI_Map_MoveRight_K2Node_InputAxisEvent_68_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.Map_FastTravel
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::Map_FastTravel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.Map_FastTravel");

	ABP_Menu3D_C_Map_FastTravel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OnDragStart_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::OnDragStart_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OnDragStart_Event_1");

	ABP_Menu3D_C_OnDragStart_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OnDragEnd_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::OnDragEnd_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OnDragEnd_Event_1");

	ABP_Menu3D_C_OnDragEnd_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OnCenter_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::OnCenter_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OnCenter_Event_1");

	ABP_Menu3D_C_OnCenter_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OnTerrainVisibility
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::OnTerrainVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OnTerrainVisibility");

	ABP_Menu3D_C_OnTerrainVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.Map_Zoom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::Map_Zoom(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.Map_Zoom");

	ABP_Menu3D_C_Map_Zoom_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OnZoom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::OnZoom(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OnZoom");

	ABP_Menu3D_C_OnZoom_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.RightThumbStickButton
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::RightThumbStickButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.RightThumbStickButton");

	ABP_Menu3D_C_RightThumbStickButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.LeftThumbStickButton
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::LeftThumbStickButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.LeftThumbStickButton");

	ABP_Menu3D_C_LeftThumbStickButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OnClosingFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        OpenedMenu                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::OnClosingFinished(TEnumAsByte<EMenuTypes> OpenedMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OnClosingFinished");

	ABP_Menu3D_C_OnClosingFinished_Params params;
	params.OpenedMenu = OpenedMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.MouseMoveAbs_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::MouseMoveAbs_Event_1(const struct FVector2D& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.MouseMoveAbs_Event_1");

	ABP_Menu3D_C_MouseMoveAbs_Event_1_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.MouseHoverAbs_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Location                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::MouseHoverAbs_Event_1(const struct FVector2D& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.MouseHoverAbs_Event_1");

	ABP_Menu3D_C_MouseHoverAbs_Event_1_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.MouseUpAbs_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    Key                            (Parm)

void ABP_Menu3D_C::MouseUpAbs_Event_1(const struct FVector2D& Location, const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.MouseUpAbs_Event_1");

	ABP_Menu3D_C_MouseUpAbs_Event_1_Params params;
	params.Location = Location;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.InpAxisEvt_UI_Map_MoveUpKey_K2Node_InputAxisEvent_55
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::InpAxisEvt_UI_Map_MoveUpKey_K2Node_InputAxisEvent_55(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.InpAxisEvt_UI_Map_MoveUpKey_K2Node_InputAxisEvent_55");

	ABP_Menu3D_C_InpAxisEvt_UI_Map_MoveUpKey_K2Node_InputAxisEvent_55_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.InpAxisEvt_UI_Map_MoveDownKey_K2Node_InputAxisEvent_59
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::InpAxisEvt_UI_Map_MoveDownKey_K2Node_InputAxisEvent_59(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.InpAxisEvt_UI_Map_MoveDownKey_K2Node_InputAxisEvent_59");

	ABP_Menu3D_C_InpAxisEvt_UI_Map_MoveDownKey_K2Node_InputAxisEvent_59_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.InpAxisEvt_UI_Map_MoveLeftKey_K2Node_InputAxisEvent_64
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::InpAxisEvt_UI_Map_MoveLeftKey_K2Node_InputAxisEvent_64(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.InpAxisEvt_UI_Map_MoveLeftKey_K2Node_InputAxisEvent_64");

	ABP_Menu3D_C_InpAxisEvt_UI_Map_MoveLeftKey_K2Node_InputAxisEvent_64_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.InpAxisEvt_UI_Map_MoveRightKey_K2Node_InputAxisEvent_70
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::InpAxisEvt_UI_Map_MoveRightKey_K2Node_InputAxisEvent_70(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.InpAxisEvt_UI_Map_MoveRightKey_K2Node_InputAxisEvent_70");

	ABP_Menu3D_C_InpAxisEvt_UI_Map_MoveRightKey_K2Node_InputAxisEvent_70_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.Map_Zoom_In
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::Map_Zoom_In(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.Map_Zoom_In");

	ABP_Menu3D_C_Map_Zoom_In_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.Map_Zoom_Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::Map_Zoom_Out(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.Map_Zoom_Out");

	ABP_Menu3D_C_Map_Zoom_Out_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OnZoomIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::OnZoomIn(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OnZoomIn");

	ABP_Menu3D_C_OnZoomIn_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OnZoomOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::OnZoomOut(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OnZoomOut");

	ABP_Menu3D_C_OnZoomOut_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.ClickedZoom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::ClickedZoom(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.ClickedZoom");

	ABP_Menu3D_C_ClickedZoom_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.MapClickedZoom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::MapClickedZoom(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.MapClickedZoom");

	ABP_Menu3D_C_MapClickedZoom_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OnTutorialStep
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Step                           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::OnTutorialStep(int Step)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OnTutorialStep");

	ABP_Menu3D_C_OnTutorialStep_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OnTutorialComplete
// (BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::OnTutorialComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OnTutorialComplete");

	ABP_Menu3D_C_OnTutorialComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.ExecuteUbergraph_BP_Menu3D
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::ExecuteUbergraph_BP_Menu3D(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.ExecuteUbergraph_BP_Menu3D");

	ABP_Menu3D_C_ExecuteUbergraph_BP_Menu3D_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OnFadeOutFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::OnFadeOutFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OnFadeOutFinished__DelegateSignature");

	ABP_Menu3D_C_OnFadeOutFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OnFadeInFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Menu3D_C::OnFadeInFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OnFadeInFinished__DelegateSignature");

	ABP_Menu3D_C_OnFadeInFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OnFinishedDisplayingMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        MenuType                       (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::OnFinishedDisplayingMenu__DelegateSignature(TEnumAsByte<EMenuTypes> MenuType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OnFinishedDisplayingMenu__DelegateSignature");

	ABP_Menu3D_C_OnFinishedDisplayingMenu__DelegateSignature_Params params;
	params.MenuType = MenuType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OnDragMenuHighlighted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          angle                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::OnDragMenuHighlighted__DelegateSignature(TEnumAsByte<EMenuTypes> Menu, float angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OnDragMenuHighlighted__DelegateSignature");

	ABP_Menu3D_C_OnDragMenuHighlighted__DelegateSignature_Params params;
	params.Menu = Menu;
	params.angle = angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OnDragMenuSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Menu                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NoAnimation                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::OnDragMenuSelected__DelegateSignature(TEnumAsByte<EMenuTypes> Menu, bool NoAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OnDragMenuSelected__DelegateSignature");

	ABP_Menu3D_C_OnDragMenuSelected__DelegateSignature_Params params;
	params.Menu = Menu;
	params.NoAnimation = NoAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.OnMenuRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        Displayed_Menu                 (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::OnMenuRequested__DelegateSignature(TEnumAsByte<EMenuTypes> Displayed_Menu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.OnMenuRequested__DelegateSignature");

	ABP_Menu3D_C_OnMenuRequested__DelegateSignature_Params params;
	params.Displayed_Menu = Displayed_Menu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Menu3D.BP_Menu3D_C.MenuOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenuTypes>        OpenedMenu                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Menu3D_C::MenuOpened__DelegateSignature(TEnumAsByte<EMenuTypes> OpenedMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Menu3D.BP_Menu3D_C.MenuOpened__DelegateSignature");

	ABP_Menu3D_C_MenuOpened__DelegateSignature_Params params;
	params.OpenedMenu = OpenedMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
