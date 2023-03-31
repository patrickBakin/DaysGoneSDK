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

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.OnCurrentTextureLoaded
struct UUI_Journal_Collectable_Viewer_C_OnCurrentTextureLoaded_Params
{
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.IsAudioAvailable
struct UUI_Journal_Collectable_Viewer_C_IsAudioAvailable_Params
{
	bool                                               Has_Audio;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.PlayAudio
struct UUI_Journal_Collectable_Viewer_C_PlayAudio_Params
{
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.IsAudioPlaying
struct UUI_Journal_Collectable_Viewer_C_IsAudioPlaying_Params
{
	bool                                               Is_Playing;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.StopAudio
struct UUI_Journal_Collectable_Viewer_C_StopAudio_Params
{
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.ToggleAudio
struct UUI_Journal_Collectable_Viewer_C_ToggleAudio_Params
{
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.SwapLayout
struct UUI_Journal_Collectable_Viewer_C_SwapLayout_Params
{
	bool                                               IsHorizontal;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.Scroll
struct UUI_Journal_Collectable_Viewer_C_Scroll_Params
{
	float                                              Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.ToggleMore
struct UUI_Journal_Collectable_Viewer_C_ToggleMore_Params
{
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.CheckAudioAvailable
struct UUI_Journal_Collectable_Viewer_C_CheckAudioAvailable_Params
{
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.CheckArrows
struct UUI_Journal_Collectable_Viewer_C_CheckArrows_Params
{
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.GetNextAvailableCollectible
struct UUI_Journal_Collectable_Viewer_C_GetNextAvailableCollectible_Params
{
	float                                              Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FoundNewItem;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NewIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TheGridValue;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.SetItemDataFromLoc
struct UUI_Journal_Collectable_Viewer_C_SetItemDataFromLoc_Params
{
	int                                                loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.SetCollectableData
struct UUI_Journal_Collectable_Viewer_C_SetCollectableData_Params
{
	class UTexture2D*                                  Image;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	struct FText                                       Description;                                              // (Parm)
	struct FText                                       FullDesc;                                                 // (Parm)
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.Construct
struct UUI_Journal_Collectable_Viewer_C_Construct_Params
{
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.ButtonHoldComplete
struct UUI_Journal_Collectable_Viewer_C_ButtonHoldComplete_Params
{
	class UUI_GridItem_Base_C**                        GridItemSelected;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.CircleSelectionInputGiven
struct UUI_Journal_Collectable_Viewer_C_CircleSelectionInputGiven_Params
{
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.DirectionalInputGiven
struct UUI_Journal_Collectable_Viewer_C_DirectionalInputGiven_Params
{
	struct FVector2D*                                  DirectionalInput;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.CrossSelectionInputGiven
struct UUI_Journal_Collectable_Viewer_C_CrossSelectionInputGiven_Params
{
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.TriangleSelectionInputGiven
struct UUI_Journal_Collectable_Viewer_C_TriangleSelectionInputGiven_Params
{
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.SquareSelectionInputGiven
struct UUI_Journal_Collectable_Viewer_C_SquareSelectionInputGiven_Params
{
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.CollectibleAsyncLoadTextureAsset
struct UUI_Journal_Collectable_Viewer_C_CollectibleAsyncLoadTextureAsset_Params
{
	TAssetPtr<class UTexture2D>                        TextureAsset;                                             // (Parm)
	bool                                               MatchSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.CustomEvent_0_Copy
struct UUI_Journal_Collectable_Viewer_C_CustomEvent_0_Copy_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.OnSoundFinishedPlaying_Event_1
struct UUI_Journal_Collectable_Viewer_C_OnSoundFinishedPlaying_Event_1_Params
{
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_2201_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_Journal_Collectable_Viewer_C_BndEvt__MenuInteract_Triangle_K2Node_ComponentBoundEvent_2201_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2203_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_Journal_Collectable_Viewer_C_BndEvt__MenuInteract_Confirm_K2Node_ComponentBoundEvent_2203_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2206_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_Journal_Collectable_Viewer_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_2206_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.BndEvt__MenuInteract_Right_K2Node_ComponentBoundEvent_15143_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_Journal_Collectable_Viewer_C_BndEvt__MenuInteract_Right_K2Node_ComponentBoundEvent_15143_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.BndEvt__MenuInteract_Left_K2Node_ComponentBoundEvent_15148_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_Journal_Collectable_Viewer_C_BndEvt__MenuInteract_Left_K2Node_ComponentBoundEvent_15148_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.GetCollectibleInDirection
struct UUI_Journal_Collectable_Viewer_C_GetCollectibleInDirection_Params
{
	float                                              Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.BndEvt__MenuInteract_CancelMore_K2Node_ComponentBoundEvent_15463_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_Journal_Collectable_Viewer_C_BndEvt__MenuInteract_CancelMore_K2Node_ComponentBoundEvent_15463_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_Journal_Collectable_Viewer.UI_Journal_Collectable_Viewer_C.ExecuteUbergraph_UI_Journal_Collectable_Viewer
struct UUI_Journal_Collectable_Viewer_C_ExecuteUbergraph_UI_Journal_Collectable_Viewer_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
