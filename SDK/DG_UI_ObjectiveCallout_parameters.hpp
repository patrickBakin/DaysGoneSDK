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

// Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.SetDistanceTextVisibility
struct UUI_ObjectiveCallout_C_SetDistanceTextVisibility_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.SetTextColor
struct UUI_ObjectiveCallout_C_SetTextColor_Params
{
	struct FSlateColor                                 SlateColor;                                               // (Parm)
	class UTextBlock*                                  Text;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.UpdateScreenPosition
struct UUI_ObjectiveCallout_C_UpdateScreenPosition_Params
{
};

// Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.Init
struct UUI_ObjectiveCallout_C_Init_Params
{
	struct FTransform                                  TransformToFollow;                                        // (Parm, IsPlainOldData)
	bool                                               IsHudWidget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveCategories>                  ObjectiveCategory;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EObjectiveVisualType>                  ObjectiveType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.SetVisible
struct UUI_ObjectiveCallout_C_SetVisible_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.Construct
struct UUI_ObjectiveCallout_C_Construct_Params
{
};

// Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.StoreIconsInBlueprint
struct UUI_ObjectiveCallout_C_StoreIconsInBlueprint_Params
{
};

// Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.SetIconVisibility
struct UUI_ObjectiveCallout_C_SetIconVisibility_Params
{
	bool*                                              Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_ObjectiveCallout.UI_ObjectiveCallout_C.ExecuteUbergraph_UI_ObjectiveCallout
struct UUI_ObjectiveCallout_C_ExecuteUbergraph_UI_ObjectiveCallout_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
