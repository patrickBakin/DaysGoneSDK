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

// Function SurvivalBarPreview.SurvivalBarPreview_C.MakeData
struct USurvivalBarPreview_C_MakeData_Params
{
	TArray<struct FName>                               OutActions;                                               // (Parm, OutParm, ZeroConstructor)
	TArray<TAssetPtr<class UTexture2D>>                OutImages;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function SurvivalBarPreview.SurvivalBarPreview_C.UpdateIcons
struct USurvivalBarPreview_C_UpdateIcons_Params
{
};

// Function SurvivalBarPreview.SurvivalBarPreview_C.Construct
struct USurvivalBarPreview_C_Construct_Params
{
};

// Function SurvivalBarPreview.SurvivalBarPreview_C.OnShow
struct USurvivalBarPreview_C_OnShow_Params
{
};

// Function SurvivalBarPreview.SurvivalBarPreview_C.OnHide
struct USurvivalBarPreview_C_OnHide_Params
{
};

// Function SurvivalBarPreview.SurvivalBarPreview_C.ExecuteUbergraph_SurvivalBarPreview
struct USurvivalBarPreview_C_ExecuteUbergraph_SurvivalBarPreview_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
