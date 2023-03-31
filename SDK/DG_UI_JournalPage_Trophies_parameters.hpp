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

// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.StoreDataByFName
struct UUI_JournalPage_Trophies_C_StoreDataByFName_Params
{
	struct FName*                                      Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_GridItem_Base_C**                        Grid_Item;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.Construct
struct UUI_JournalPage_Trophies_C_Construct_Params
{
};

// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.MenuSelected
struct UUI_JournalPage_Trophies_C_MenuSelected_Params
{
	bool*                                              Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.RecreateAllGrids
struct UUI_JournalPage_Trophies_C_RecreateAllGrids_Params
{
	bool*                                              DontDestroyCurrentGrids;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OverrideDestoryIndex;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.CircleSelectionInputGiven
struct UUI_JournalPage_Trophies_C_CircleSelectionInputGiven_Params
{
};

// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.DirectionalInputGiven
struct UUI_JournalPage_Trophies_C_DirectionalInputGiven_Params
{
	struct FVector2D*                                  DirectionalInput;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.R2orL2SelectionInputGiven
struct UUI_JournalPage_Trophies_C_R2orL2SelectionInputGiven_Params
{
	bool*                                              R2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6718_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_JournalPage_Trophies_C_BndEvt__MenuInteract_Cancel_K2Node_ComponentBoundEvent_6718_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.BndEvt__MenuInteract_PageNext_K2Node_ComponentBoundEvent_6720_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_JournalPage_Trophies_C_BndEvt__MenuInteract_PageNext_K2Node_ComponentBoundEvent_6720_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.BndEvt__MenuInteract_PagePrev_K2Node_ComponentBoundEvent_6723_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_JournalPage_Trophies_C_BndEvt__MenuInteract_PagePrev_K2Node_ComponentBoundEvent_6723_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.BndEvt__MenuInteract_Active_K2Node_ComponentBoundEvent_6806_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_JournalPage_Trophies_C_BndEvt__MenuInteract_Active_K2Node_ComponentBoundEvent_6806_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.BndEvt__MenuInteract_Progress_K2Node_ComponentBoundEvent_6811_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_JournalPage_Trophies_C_BndEvt__MenuInteract_Progress_K2Node_ComponentBoundEvent_6811_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.BndEvt__MenuInteract_Collectibles_K2Node_ComponentBoundEvent_6817_OnMenuInteractClickedEvent__DelegateSignature
struct UUI_JournalPage_Trophies_C_BndEvt__MenuInteract_Collectibles_K2Node_ComponentBoundEvent_6817_OnMenuInteractClickedEvent__DelegateSignature_Params
{
};

// Function UI_JournalPage_Trophies.UI_JournalPage_Trophies_C.ExecuteUbergraph_UI_JournalPage_Trophies
struct UUI_JournalPage_Trophies_C_ExecuteUbergraph_UI_JournalPage_Trophies_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
