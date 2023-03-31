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

// Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.SetDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Desc                           (Parm)

void UUI_InventoryPage_Tutorial_C::SetDescription(const struct FText& Desc)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.SetDescription");

	UUI_InventoryPage_Tutorial_C_SetDescription_Params params;
	params.Desc = Desc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_InventoryPage_Tutorial_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.Construct");

	UUI_InventoryPage_Tutorial_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.ButtonHoldComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GridItem_Base_C**    GridItemSelected               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Tutorial_C::ButtonHoldComplete(class UUI_GridItem_Base_C** GridItemSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.ButtonHoldComplete");

	UUI_InventoryPage_Tutorial_C_ButtonHoldComplete_Params params;
	params.GridItemSelected = GridItemSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.TutorialAsyncLoadTextureAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    TextureAsset                   (Parm)
// class UImage*                  Image                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           MatchSize                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSupplies                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Tutorial_C::TutorialAsyncLoadTextureAsset(TAssetPtr<class UTexture2D> TextureAsset, class UImage* Image, bool MatchSize, bool IsSupplies)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.TutorialAsyncLoadTextureAsset");

	UUI_InventoryPage_Tutorial_C_TutorialAsyncLoadTextureAsset_Params params;
	params.TextureAsset = TextureAsset;
	params.Image = Image;
	params.MatchSize = MatchSize;
	params.IsSupplies = IsSupplies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.CustomEvent_0_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void UUI_InventoryPage_Tutorial_C::CustomEvent_0_Copy(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.CustomEvent_0_Copy");

	UUI_InventoryPage_Tutorial_C_CustomEvent_0_Copy_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6644_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_InventoryPage_Tutorial_C::BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6644_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6644_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_InventoryPage_Tutorial_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6644_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.CrossSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_InventoryPage_Tutorial_C::CrossSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.CrossSelectionInputGiven");

	UUI_InventoryPage_Tutorial_C_CrossSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.ExecuteUbergraph_UI_InventoryPage_Tutorial
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_InventoryPage_Tutorial_C::ExecuteUbergraph_UI_InventoryPage_Tutorial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_InventoryPage_Tutorial.UI_InventoryPage_Tutorial_C.ExecuteUbergraph_UI_InventoryPage_Tutorial");

	UUI_InventoryPage_Tutorial_C_ExecuteUbergraph_UI_InventoryPage_Tutorial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
