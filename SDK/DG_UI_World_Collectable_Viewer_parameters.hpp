#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.AreItemsInQueue
struct UUI_World_Collectable_Viewer_C_AreItemsInQueue_Params
{
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.AddCollectible
struct UUI_World_Collectable_Viewer_C_AddCollectible_Params
{
	class UInventoryItemCollectible*                   New_Collectible;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Category;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.SetDataFromCollectible
struct UUI_World_Collectable_Viewer_C_SetDataFromCollectible_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.WasInputPressed
struct UUI_World_Collectable_Viewer_C_WasInputPressed_Params
{
	struct FKey                                        Key;                                                      // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.TickInput
struct UUI_World_Collectable_Viewer_C_TickInput_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.IsAudioAvailable
struct UUI_World_Collectable_Viewer_C_IsAudioAvailable_Params
{
	bool                                               Has_Audio;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.PlayAudio
struct UUI_World_Collectable_Viewer_C_PlayAudio_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.IsAudioPlaying
struct UUI_World_Collectable_Viewer_C_IsAudioPlaying_Params
{
	bool                                               Is_Playing;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.StopAudio
struct UUI_World_Collectable_Viewer_C_StopAudio_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.ToggleAudio
struct UUI_World_Collectable_Viewer_C_ToggleAudio_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.SwapLayout
struct UUI_World_Collectable_Viewer_C_SwapLayout_Params
{
	bool                                               IsHorizontal;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.Scroll
struct UUI_World_Collectable_Viewer_C_Scroll_Params
{
	float                                              Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.ToggleMore
struct UUI_World_Collectable_Viewer_C_ToggleMore_Params
{
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.CheckAudioAvailable
struct UUI_World_Collectable_Viewer_C_CheckAudioAvailable_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.SetCollectableData
struct UUI_World_Collectable_Viewer_C_SetCollectableData_Params
{
	class UTexture2D*                                  Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       Description;                                              // (Parm)
	struct FText                                       FullDesc;                                                 // (Parm)
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.Construct
struct UUI_World_Collectable_Viewer_C_Construct_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.CollectibleAsyncLoadTextureAsset
struct UUI_World_Collectable_Viewer_C_CollectibleAsyncLoadTextureAsset_Params
{
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
	bool                                               MatchSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.CustomEvent_0_Copy
struct UUI_World_Collectable_Viewer_C_CustomEvent_0_Copy_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.OnSoundFinishedPlaying_Event_1
struct UUI_World_Collectable_Viewer_C_OnSoundFinishedPlaying_Event_1_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.OnCancelPressed
struct UUI_World_Collectable_Viewer_C_OnCancelPressed_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.Tick
struct UUI_World_Collectable_Viewer_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.On Triangle Pressed
struct UUI_World_Collectable_Viewer_C_On_Triangle_Pressed_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.On Up Pressed
struct UUI_World_Collectable_Viewer_C_On_Up_Pressed_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.On Down Pressed
struct UUI_World_Collectable_Viewer_C_On_Down_Pressed_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.OnConfirmPressed
struct UUI_World_Collectable_Viewer_C_OnConfirmPressed_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.Close Widget
struct UUI_World_Collectable_Viewer_C_Close_Widget_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__Appear_K2Node_ComponentBoundEvent_479_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_World_Collectable_Viewer_C_BndEvt__Appear_K2Node_ComponentBoundEvent_479_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__Disappear_K2Node_ComponentBoundEvent_486_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_World_Collectable_Viewer_C_BndEvt__Disappear_K2Node_ComponentBoundEvent_486_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.Show Next Collectible
struct UUI_World_Collectable_Viewer_C_Show_Next_Collectible_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__ContentHide_K2Node_ComponentBoundEvent_563_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_World_Collectable_Viewer_C_BndEvt__ContentHide_K2Node_ComponentBoundEvent_563_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__ContentShow_K2Node_ComponentBoundEvent_567_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UUI_World_Collectable_Viewer_C_BndEvt__ContentShow_K2Node_ComponentBoundEvent_567_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_1683_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_World_Collectable_Viewer_C_BndEvt__MenuInteract_Close_K2Node_ComponentBoundEvent_1683_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__MenuInteract_CloseMore_K2Node_ComponentBoundEvent_1689_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_World_Collectable_Viewer_C_BndEvt__MenuInteract_CloseMore_K2Node_ComponentBoundEvent_1689_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__MenuInteract_PlayAudio_K2Node_ComponentBoundEvent_1708_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_World_Collectable_Viewer_C_BndEvt__MenuInteract_PlayAudio_K2Node_ComponentBoundEvent_1708_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.BndEvt__MenuInteract_More_K2Node_ComponentBoundEvent_1723_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_World_Collectable_Viewer_C_BndEvt__MenuInteract_More_K2Node_ComponentBoundEvent_1723_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.ExecuteUbergraph_UI_World_Collectable_Viewer
struct UUI_World_Collectable_Viewer_C_ExecuteUbergraph_UI_World_Collectable_Viewer_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_World_Collectable_Viewer.UI_World_Collectable_Viewer_C.OnClosed__DelegateSignature
struct UUI_World_Collectable_Viewer_C_OnClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
