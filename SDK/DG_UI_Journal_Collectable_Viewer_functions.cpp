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

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.OnCurrentTextureLoaded
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Journal_Collectable_Viewer_C::OnCurrentTextureLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.OnCurrentTextureLoaded");

	UUI_Journal_Collectable_Viewer_C_OnCurrentTextureLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.IsAudioAvailable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Has_Audio                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Journal_Collectable_Viewer_C::IsAudioAvailable(bool* Has_Audio)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.IsAudioAvailable");

	UUI_Journal_Collectable_Viewer_C_IsAudioAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Has_Audio != nullptr)
		*Has_Audio = params.Has_Audio;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.PlayAudio
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Journal_Collectable_Viewer_C::PlayAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.PlayAudio");

	UUI_Journal_Collectable_Viewer_C_PlayAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.IsAudioPlaying
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Is_Playing                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Journal_Collectable_Viewer_C::IsAudioPlaying(bool* Is_Playing)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.IsAudioPlaying");

	UUI_Journal_Collectable_Viewer_C_IsAudioPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_Playing != nullptr)
		*Is_Playing = params.Is_Playing;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.StopAudio
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Journal_Collectable_Viewer_C::StopAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.StopAudio");

	UUI_Journal_Collectable_Viewer_C_StopAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.ToggleAudio
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Journal_Collectable_Viewer_C::ToggleAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.ToggleAudio");

	UUI_Journal_Collectable_Viewer_C_ToggleAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.SwapLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHorizontal                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Journal_Collectable_Viewer_C::SwapLayout(bool IsHorizontal)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.SwapLayout");

	UUI_Journal_Collectable_Viewer_C_SwapLayout_Params params;
	params.IsHorizontal = IsHorizontal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.Scroll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Journal_Collectable_Viewer_C::Scroll(float Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.Scroll");

	UUI_Journal_Collectable_Viewer_C_Scroll_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.ToggleMore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Journal_Collectable_Viewer_C::ToggleMore(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.ToggleMore");

	UUI_Journal_Collectable_Viewer_C_ToggleMore_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.CheckAudioAvailable
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Journal_Collectable_Viewer_C::CheckAudioAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.CheckAudioAvailable");

	UUI_Journal_Collectable_Viewer_C_CheckAudioAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.CheckArrows
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Journal_Collectable_Viewer_C::CheckArrows()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.CheckArrows");

	UUI_Journal_Collectable_Viewer_C_CheckArrows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.GetNextAvailableCollectible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           FoundNewItem                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NewIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               TheGridValue                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Journal_Collectable_Viewer_C::GetNextAvailableCollectible(float Direction, bool* FoundNewItem, int* NewIndex, struct FVector2D* TheGridValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.GetNextAvailableCollectible");

	UUI_Journal_Collectable_Viewer_C_GetNextAvailableCollectible_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundNewItem != nullptr)
		*FoundNewItem = params.FoundNewItem;
	if (NewIndex != nullptr)
		*NewIndex = params.NewIndex;
	if (TheGridValue != nullptr)
		*TheGridValue = params.TheGridValue;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.SetItemDataFromLoc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            loc                            (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Journal_Collectable_Viewer_C::SetItemDataFromLoc(int loc)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.SetItemDataFromLoc");

	UUI_Journal_Collectable_Viewer_C_SetItemDataFromLoc_Params params;
	params.loc = loc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.SetCollectableData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Image                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// struct FText                   Description                    (Parm)
// struct FText                   FullDesc                       (Parm)

void UUI_Journal_Collectable_Viewer_C::SetCollectableData(class UTexture2D* Image, const struct FText& Title, const struct FText& Description, const struct FText& FullDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.SetCollectableData");

	UUI_Journal_Collectable_Viewer_C_SetCollectableData_Params params;
	params.Image = Image;
	params.Title = Title;
	params.Description = Description;
	params.FullDesc = FullDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Journal_Collectable_Viewer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.Construct");

	UUI_Journal_Collectable_Viewer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.ButtonHoldComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GridItem_Base_C**    GridItemSelected               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Journal_Collectable_Viewer_C::ButtonHoldComplete(class UUI_GridItem_Base_C** GridItemSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.ButtonHoldComplete");

	UUI_Journal_Collectable_Viewer_C_ButtonHoldComplete_Params params;
	params.GridItemSelected = GridItemSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.CircleSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Journal_Collectable_Viewer_C::CircleSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.CircleSelectionInputGiven");

	UUI_Journal_Collectable_Viewer_C_CircleSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.DirectionalInputGiven
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              DirectionalInput               (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Journal_Collectable_Viewer_C::DirectionalInputGiven(struct FVector2D* DirectionalInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.DirectionalInputGiven");

	UUI_Journal_Collectable_Viewer_C_DirectionalInputGiven_Params params;
	params.DirectionalInput = DirectionalInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.CrossSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Journal_Collectable_Viewer_C::CrossSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.CrossSelectionInputGiven");

	UUI_Journal_Collectable_Viewer_C_CrossSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.TriangleSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Journal_Collectable_Viewer_C::TriangleSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.TriangleSelectionInputGiven");

	UUI_Journal_Collectable_Viewer_C_TriangleSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.SquareSelectionInputGiven
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Journal_Collectable_Viewer_C::SquareSelectionInputGiven()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.SquareSelectionInputGiven");

	UUI_Journal_Collectable_Viewer_C_SquareSelectionInputGiven_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.CollectibleAsyncLoadTextureAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    TextureAsset                   (Parm)
// bool                           MatchSize                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Journal_Collectable_Viewer_C::CollectibleAsyncLoadTextureAsset(TAssetPtr<class UTexture2D> TextureAsset, bool MatchSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.CollectibleAsyncLoadTextureAsset");

	UUI_Journal_Collectable_Viewer_C_CollectibleAsyncLoadTextureAsset_Params params;
	params.TextureAsset = TextureAsset;
	params.MatchSize = MatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.CustomEvent_0_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void UUI_Journal_Collectable_Viewer_C::CustomEvent_0_Copy(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.CustomEvent_0_Copy");

	UUI_Journal_Collectable_Viewer_C_CustomEvent_0_Copy_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.OnSoundFinishedPlaying_Event_1
// (BlueprintCallable, BlueprintEvent)

void UUI_Journal_Collectable_Viewer_C::OnSoundFinishedPlaying_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.OnSoundFinishedPlaying_Event_1");

	UUI_Journal_Collectable_Viewer_C_OnSoundFinishedPlaying_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_2201_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Journal_Collectable_Viewer_C::BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_2201_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_2201_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_Journal_Collectable_Viewer_C_BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_2201_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2203_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Journal_Collectable_Viewer_C::BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2203_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2203_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_Journal_Collectable_Viewer_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2203_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2206_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Journal_Collectable_Viewer_C::BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2206_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2206_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_Journal_Collectable_Viewer_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2206_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.BndEvt__MenuInteract_Right_K2Node_ComponentBoundEvent_15143_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Journal_Collectable_Viewer_C::BndEvt__MenuInteract_Right_K2Node_ComponentBoundEvent_15143_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.BndEvt__MenuInteract_Right_K2Node_ComponentBoundEvent_15143_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_Journal_Collectable_Viewer_C_BndEvt__MenuInteract_Right_K2Node_ComponentBoundEvent_15143_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.BndEvt__MenuInteract_Left_K2Node_ComponentBoundEvent_15148_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Journal_Collectable_Viewer_C::BndEvt__MenuInteract_Left_K2Node_ComponentBoundEvent_15148_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.BndEvt__MenuInteract_Left_K2Node_ComponentBoundEvent_15148_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_Journal_Collectable_Viewer_C_BndEvt__MenuInteract_Left_K2Node_ComponentBoundEvent_15148_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.GetCollectibleInDirection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Journal_Collectable_Viewer_C::GetCollectibleInDirection(float Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.GetCollectibleInDirection");

	UUI_Journal_Collectable_Viewer_C_GetCollectibleInDirection_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.BndEvt__MenuInteract_CancelMore_K2Node_ComponentBoundEvent_15463_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_Journal_Collectable_Viewer_C::BndEvt__MenuInteract_CancelMore_K2Node_ComponentBoundEvent_15463_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.BndEvt__MenuInteract_CancelMore_K2Node_ComponentBoundEvent_15463_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_Journal_Collectable_Viewer_C_BndEvt__MenuInteract_CancelMore_K2Node_ComponentBoundEvent_15463_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.ExecuteUbergraph_UI_Journal_Collectable_Viewer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Journal_Collectable_Viewer_C::ExecuteUbergraph_UI_Journal_Collectable_Viewer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.ExecuteUbergraph_UI_Journal_Collectable_Viewer");

	UUI_Journal_Collectable_Viewer_C_ExecuteUbergraph_UI_Journal_Collectable_Viewer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
