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

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.AreItemsInQueue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_World_Collectable_Viewer_C::AreItemsInQueue(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.AreItemsInQueue");

	UUI_World_Collectable_Viewer_C_AreItemsInQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.AddCollectible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryItemCollectible* New_Collectible                (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Category                       (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_World_Collectable_Viewer_C::AddCollectible(class UInventoryItemCollectible* New_Collectible, const struct FText& Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.AddCollectible");

	UUI_World_Collectable_Viewer_C_AddCollectible_Params params;
	params.New_Collectible = New_Collectible;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.SetDataFromCollectible
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_World_Collectable_Viewer_C::SetDataFromCollectible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.SetDataFromCollectible");

	UUI_World_Collectable_Viewer_C_SetDataFromCollectible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.WasInputPressed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUI_World_Collectable_Viewer_C::WasInputPressed(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.WasInputPressed");

	UUI_World_Collectable_Viewer_C_WasInputPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.TickInput
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_World_Collectable_Viewer_C::TickInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.TickInput");

	UUI_World_Collectable_Viewer_C_TickInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.IsAudioAvailable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Has_Audio                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_World_Collectable_Viewer_C::IsAudioAvailable(bool* Has_Audio)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.IsAudioAvailable");

	UUI_World_Collectable_Viewer_C_IsAudioAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Has_Audio != nullptr)
		*Has_Audio = params.Has_Audio;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.PlayAudio
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_World_Collectable_Viewer_C::PlayAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.PlayAudio");

	UUI_World_Collectable_Viewer_C_PlayAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.IsAudioPlaying
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           Is_Playing                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_World_Collectable_Viewer_C::IsAudioPlaying(bool* Is_Playing)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.IsAudioPlaying");

	UUI_World_Collectable_Viewer_C_IsAudioPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_Playing != nullptr)
		*Is_Playing = params.Is_Playing;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.StopAudio
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_World_Collectable_Viewer_C::StopAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.StopAudio");

	UUI_World_Collectable_Viewer_C_StopAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.ToggleAudio
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_World_Collectable_Viewer_C::ToggleAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.ToggleAudio");

	UUI_World_Collectable_Viewer_C_ToggleAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.SwapLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHorizontal                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_World_Collectable_Viewer_C::SwapLayout(bool IsHorizontal)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.SwapLayout");

	UUI_World_Collectable_Viewer_C_SwapLayout_Params params;
	params.IsHorizontal = IsHorizontal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.Scroll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Direction                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_World_Collectable_Viewer_C::Scroll(float Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.Scroll");

	UUI_World_Collectable_Viewer_C_Scroll_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.ToggleMore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_World_Collectable_Viewer_C::ToggleMore(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.ToggleMore");

	UUI_World_Collectable_Viewer_C_ToggleMore_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.CheckAudioAvailable
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_World_Collectable_Viewer_C::CheckAudioAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.CheckAudioAvailable");

	UUI_World_Collectable_Viewer_C_CheckAudioAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.SetCollectableData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Image                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// struct FText                   Description                    (Parm)
// struct FText                   FullDesc                       (Parm)

void UUI_World_Collectable_Viewer_C::SetCollectableData(class UTexture2D* Image, const struct FText& Title, const struct FText& Description, const struct FText& FullDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.SetCollectableData");

	UUI_World_Collectable_Viewer_C_SetCollectableData_Params params;
	params.Image = Image;
	params.Title = Title;
	params.Description = Description;
	params.FullDesc = FullDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_World_Collectable_Viewer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.Construct");

	UUI_World_Collectable_Viewer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.CollectibleAsyncLoadTextureAsset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    TextureAsset                   (Parm)
// bool                           MatchSize                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_World_Collectable_Viewer_C::CollectibleAsyncLoadTextureAsset(TAssetPtr<class UTexture2D> TextureAsset, bool MatchSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.CollectibleAsyncLoadTextureAsset");

	UUI_World_Collectable_Viewer_C_CollectibleAsyncLoadTextureAsset_Params params;
	params.TextureAsset = TextureAsset;
	params.MatchSize = MatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.CustomEvent_0_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       ObjectAssetPtr                 (Parm)

void UUI_World_Collectable_Viewer_C::CustomEvent_0_Copy(TAssetPtr<class UObject> ObjectAssetPtr)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.CustomEvent_0_Copy");

	UUI_World_Collectable_Viewer_C_CustomEvent_0_Copy_Params params;
	params.ObjectAssetPtr = ObjectAssetPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.OnSoundFinishedPlaying_Event_1
// (BlueprintCallable, BlueprintEvent)

void UUI_World_Collectable_Viewer_C::OnSoundFinishedPlaying_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.OnSoundFinishedPlaying_Event_1");

	UUI_World_Collectable_Viewer_C_OnSoundFinishedPlaying_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.OnCancelPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_World_Collectable_Viewer_C::OnCancelPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.OnCancelPressed");

	UUI_World_Collectable_Viewer_C_OnCancelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_World_Collectable_Viewer_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.Tick");

	UUI_World_Collectable_Viewer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.On Triangle Pressed
// (BlueprintCallable, BlueprintEvent)

void UUI_World_Collectable_Viewer_C::On_Triangle_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.On Triangle Pressed");

	UUI_World_Collectable_Viewer_C_On_Triangle_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.On Up Pressed
// (BlueprintCallable, BlueprintEvent)

void UUI_World_Collectable_Viewer_C::On_Up_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.On Up Pressed");

	UUI_World_Collectable_Viewer_C_On_Up_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.On Down Pressed
// (BlueprintCallable, BlueprintEvent)

void UUI_World_Collectable_Viewer_C::On_Down_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.On Down Pressed");

	UUI_World_Collectable_Viewer_C_On_Down_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.OnConfirmPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_World_Collectable_Viewer_C::OnConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.OnConfirmPressed");

	UUI_World_Collectable_Viewer_C_OnConfirmPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.Close Widget
// (BlueprintCallable, BlueprintEvent)

void UUI_World_Collectable_Viewer_C::Close_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.Close Widget");

	UUI_World_Collectable_Viewer_C_Close_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__Appear_K2Node_ComponentBoundEvent_479_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_World_Collectable_Viewer_C::BndEvt__Appear_K2Node_ComponentBoundEvent_479_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__Appear_K2Node_ComponentBoundEvent_479_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_World_Collectable_Viewer_C_BndEvt__Appear_K2Node_ComponentBoundEvent_479_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__Disappear_K2Node_ComponentBoundEvent_486_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_World_Collectable_Viewer_C::BndEvt__Disappear_K2Node_ComponentBoundEvent_486_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__Disappear_K2Node_ComponentBoundEvent_486_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_World_Collectable_Viewer_C_BndEvt__Disappear_K2Node_ComponentBoundEvent_486_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.Show Next Collectible
// (BlueprintCallable, BlueprintEvent)

void UUI_World_Collectable_Viewer_C::Show_Next_Collectible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.Show Next Collectible");

	UUI_World_Collectable_Viewer_C_Show_Next_Collectible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__ContentHide_K2Node_ComponentBoundEvent_563_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_World_Collectable_Viewer_C::BndEvt__ContentHide_K2Node_ComponentBoundEvent_563_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__ContentHide_K2Node_ComponentBoundEvent_563_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_World_Collectable_Viewer_C_BndEvt__ContentHide_K2Node_ComponentBoundEvent_563_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__ContentShow_K2Node_ComponentBoundEvent_567_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UUI_World_Collectable_Viewer_C::BndEvt__ContentShow_K2Node_ComponentBoundEvent_567_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__ContentShow_K2Node_ComponentBoundEvent_567_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UUI_World_Collectable_Viewer_C_BndEvt__ContentShow_K2Node_ComponentBoundEvent_567_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_1683_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_World_Collectable_Viewer_C::BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_1683_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_1683_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_World_Collectable_Viewer_C_BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_1683_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__MenuInteract_CloseMore_K2Node_ComponentBoundEvent_1689_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_World_Collectable_Viewer_C::BndEvt__MenuInteract_CloseMore_K2Node_ComponentBoundEvent_1689_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__MenuInteract_CloseMore_K2Node_ComponentBoundEvent_1689_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_World_Collectable_Viewer_C_BndEvt__MenuInteract_CloseMore_K2Node_ComponentBoundEvent_1689_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__MenuInteract_PlayAudio_K2Node_ComponentBoundEvent_1708_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_World_Collectable_Viewer_C::BndEvt__MenuInteract_PlayAudio_K2Node_ComponentBoundEvent_1708_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__MenuInteract_PlayAudio_K2Node_ComponentBoundEvent_1708_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_World_Collectable_Viewer_C_BndEvt__MenuInteract_PlayAudio_K2Node_ComponentBoundEvent_1708_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__MenuInteract_More_K2Node_ComponentBoundEvent_1723_OnMenuInteractClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_World_Collectable_Viewer_C::BndEvt__MenuInteract_More_K2Node_ComponentBoundEvent_1723_OnMenuInteractClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__MenuInteract_More_K2Node_ComponentBoundEvent_1723_OnMenuInteractClickedEvent__DelegateSignature");

	UUI_World_Collectable_Viewer_C_BndEvt__MenuInteract_More_K2Node_ComponentBoundEvent_1723_OnMenuInteractClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.ExecuteUbergraph_UI_World_Collectable_Viewer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_World_Collectable_Viewer_C::ExecuteUbergraph_UI_World_Collectable_Viewer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.ExecuteUbergraph_UI_World_Collectable_Viewer");

	UUI_World_Collectable_Viewer_C_ExecuteUbergraph_UI_World_Collectable_Viewer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_World_Collectable_Viewer_C::OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.OnClosed__DelegateSignature");

	UUI_World_Collectable_Viewer_C_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
