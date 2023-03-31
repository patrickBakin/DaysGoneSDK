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

// Function PreviewItem.PreviewItem_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Selected                       (Parm, ZeroConstructor, IsPlainOldData)

void UPreviewItem_C::SetIcon(class UTexture2D* Icon, bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function PreviewItem.PreviewItem_C.SetIcon");

	UPreviewItem_C_SetIcon_Params params;
	params.Icon = Icon;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PreviewItem.PreviewItem_C.OnLoaded_820CFFD24FE2638F66FFF781A99F368B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (Parm, ZeroConstructor, IsPlainOldData)

void UPreviewItem_C::OnLoaded_820CFFD24FE2638F66FFF781A99F368B(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function PreviewItem.PreviewItem_C.OnLoaded_820CFFD24FE2638F66FFF781A99F368B");

	UPreviewItem_C_OnLoaded_820CFFD24FE2638F66FFF781A99F368B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PreviewItem.PreviewItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPreviewItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PreviewItem.PreviewItem_C.Construct");

	UPreviewItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PreviewItem.PreviewItem_C.LoadIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    AssetID                        (Parm)
// bool                           bSelected                      (Parm, ZeroConstructor, IsPlainOldData)

void UPreviewItem_C::LoadIcon(TAssetPtr<class UTexture2D> AssetID, bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function PreviewItem.PreviewItem_C.LoadIcon");

	UPreviewItem_C_LoadIcon_Params params;
	params.AssetID = AssetID;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PreviewItem.PreviewItem_C.OnAsyncLoadComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void UPreviewItem_C::OnAsyncLoadComplete(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function PreviewItem.PreviewItem_C.OnAsyncLoadComplete");

	UPreviewItem_C_OnAsyncLoadComplete_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PreviewItem.PreviewItem_C.ExecuteUbergraph_PreviewItem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPreviewItem_C::ExecuteUbergraph_PreviewItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PreviewItem.PreviewItem_C.ExecuteUbergraph_PreviewItem");

	UPreviewItem_C_ExecuteUbergraph_PreviewItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
