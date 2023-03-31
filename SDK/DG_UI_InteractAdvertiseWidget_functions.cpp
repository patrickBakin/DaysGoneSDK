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

// Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.DisplayMaxCapacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InteractAdvertiseWidget_C::DisplayMaxCapacity(bool State)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.DisplayMaxCapacity");

	UUI_InteractAdvertiseWidget_C_DisplayMaxCapacity_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.DisplayWeaponBackground
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InteractAdvertiseWidget_C::DisplayWeaponBackground(bool State, float Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.DisplayWeaponBackground");

	UUI_InteractAdvertiseWidget_C_DisplayWeaponBackground_Params params;
	params.State = State;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.SetTheAdvertiseHidden
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_InteractAdvertiseWidget_C::SetTheAdvertiseHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.SetTheAdvertiseHidden");

	UUI_InteractAdvertiseWidget_C_SetTheAdvertiseHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.SetTheAdvertiseVisible
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          UseWideLayout                  (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryItem**         InventoryItem                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsAmmoPickup                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIconTypes>*       IconType                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Durability                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_InteractAdvertiseWidget_C::SetTheAdvertiseVisible(bool* UseWideLayout, class UInventoryItem** InventoryItem, bool* IsAmmoPickup, TEnumAsByte<EIconTypes>* IconType, float* Durability)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.SetTheAdvertiseVisible");

	UUI_InteractAdvertiseWidget_C_SetTheAdvertiseVisible_Params params;
	params.UseWideLayout = UseWideLayout;
	params.InventoryItem = InventoryItem;
	params.IsAmmoPickup = IsAmmoPickup;
	params.IconType = IconType;
	params.Durability = Durability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.IsPlayerFullOnAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItem*          InventoryItem                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AmmoIsFull                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_InteractAdvertiseWidget_C::IsPlayerFullOnAmmo(class UInventoryItem* InventoryItem, bool* AmmoIsFull)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.IsPlayerFullOnAmmo");

	UUI_InteractAdvertiseWidget_C_IsPlayerFullOnAmmo_Params params;
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoIsFull != nullptr)
		*AmmoIsFull = params.AmmoIsFull;
}


// Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.SetDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           State                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Friendly                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DisplayMaxCapacityIfDiabled    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InteractAdvertiseWidget_C::SetDisabled(bool State, bool Friendly, bool DisplayMaxCapacityIfDiabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.SetDisabled");

	UUI_InteractAdvertiseWidget_C_SetDisabled_Params params;
	params.State = State;
	params.Friendly = Friendly;
	params.DisplayMaxCapacityIfDiabled = DisplayMaxCapacityIfDiabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.SetIconType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UTexture2D>    TextureAsset                   (Parm)
// float                          WeaponDamage                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InteractAdvertiseWidget_C::SetIconType(class UTexture2D* Texture, TAssetPtr<class UTexture2D> TextureAsset, float WeaponDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.SetIconType");

	UUI_InteractAdvertiseWidget_C_SetIconType_Params params;
	params.Texture = Texture;
	params.TextureAsset = TextureAsset;
	params.WeaponDamage = WeaponDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_InteractAdvertiseWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.Construct");

	UUI_InteractAdvertiseWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.ResetAdvertiseForPool
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_InteractAdvertiseWidget_C::ResetAdvertiseForPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.ResetAdvertiseForPool");

	UUI_InteractAdvertiseWidget_C_ResetAdvertiseForPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.ExecuteUbergraph_UI_InteractAdvertiseWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InteractAdvertiseWidget_C::ExecuteUbergraph_UI_InteractAdvertiseWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InteractAdvertiseWidget.UI_InteractAdvertiseWidget_C.ExecuteUbergraph_UI_InteractAdvertiseWidget");

	UUI_InteractAdvertiseWidget_C_ExecuteUbergraph_UI_InteractAdvertiseWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
