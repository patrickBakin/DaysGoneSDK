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

// Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetSubtitleColor
struct UUI_HudMissionPopup_C_SetSubtitleColor_Params
{
	TEnumAsByte<EUI_HudPopupType>                      InByte;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetImage
struct UUI_HudMissionPopup_C_SetImage_Params
{
	TEnumAsByte<EUI_HudPopupType>                      PopUpType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudMissionPopup.UI_HudMissionPopup_C.GetMissionPopupQueue
struct UUI_HudMissionPopup_C_GetMissionPopupQueue_Params
{
	TArray<struct FUI_HudMissionPopupDetails>          PopupQueue;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetInteractHoldProgress
struct UUI_HudMissionPopup_C_SetInteractHoldProgress_Params
{
	float                                              Progress;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudMissionPopup.UI_HudMissionPopup_C.ProcessQueue
struct UUI_HudMissionPopup_C_ProcessQueue_Params
{
};

// Function UI_HudMissionPopup.UI_HudMissionPopup_C.AddPopup
struct UUI_HudMissionPopup_C_AddPopup_Params
{
	TEnumAsByte<EUI_HudPopupType>                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	TEnumAsByte<EUI_RewardType>                        RewardType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RewardValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       SubTitle;                                                 // (Parm)
	struct FActorInteractDetails                       InteractDetails;                                          // (Parm)
	class UObject*                                     UtilityObject;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetSubtitle
struct UUI_HudMissionPopup_C_SetSubtitle_Params
{
	struct FText                                       Text;                                                     // (Parm)
};

// Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetRewardValue
struct UUI_HudMissionPopup_C_SetRewardValue_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetRewardIcon
struct UUI_HudMissionPopup_C_SetRewardIcon_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetDetails
struct UUI_HudMissionPopup_C_SetDetails_Params
{
	TEnumAsByte<EUI_HudPopupType>                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (Parm)
	TEnumAsByte<EUI_RewardType>                        RewardType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RewardValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       SubTitle;                                                 // (Parm)
	struct FActorInteractDetails                       Interact;                                                 // (Parm)
};

// Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetInvisible
struct UUI_HudMissionPopup_C_SetInvisible_Params
{
};

// Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetVisible
struct UUI_HudMissionPopup_C_SetVisible_Params
{
};

// Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetPopupTitle
struct UUI_HudMissionPopup_C_SetPopupTitle_Params
{
	struct FText                                       Text;                                                     // (Parm)
};

// Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetTitle
struct UUI_HudMissionPopup_C_SetTitle_Params
{
	struct FText                                       Text;                                                     // (Parm)
};

// Function UI_HudMissionPopup.UI_HudMissionPopup_C.Construct
struct UUI_HudMissionPopup_C_Construct_Params
{
};

// Function UI_HudMissionPopup.UI_HudMissionPopup_C.PopupAdded_Event
struct UUI_HudMissionPopup_C_PopupAdded_Event_Params
{
};

// Function UI_HudMissionPopup.UI_HudMissionPopup_C.PopupComplete_Event
struct UUI_HudMissionPopup_C_PopupComplete_Event_Params
{
};

// Function UI_HudMissionPopup.UI_HudMissionPopup_C.OnAnimationFinished
struct UUI_HudMissionPopup_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudMissionPopup.UI_HudMissionPopup_C.ExecuteUbergraph_UI_HudMissionPopup
struct UUI_HudMissionPopup_C_ExecuteUbergraph_UI_HudMissionPopup_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_HudMissionPopup.UI_HudMissionPopup_C.PopupComplete__DelegateSignature
struct UUI_HudMissionPopup_C_PopupComplete__DelegateSignature_Params
{
};

// Function UI_HudMissionPopup.UI_HudMissionPopup_C.PopupAdded__DelegateSignature
struct UUI_HudMissionPopup_C_PopupAdded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
