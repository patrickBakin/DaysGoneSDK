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

// Function PreviewItem.PreviewItem_C.SetIcon
struct UPreviewItem_C_SetIcon_Params
{
	class UTexture2D*                                  Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PreviewItem.PreviewItem_C.OnLoaded_820CFFD24FE2638F66FFF781A99F368B
struct UPreviewItem_C_OnLoaded_820CFFD24FE2638F66FFF781A99F368B_Params
{
	class UObject*                                     Loaded;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PreviewItem.PreviewItem_C.Construct
struct UPreviewItem_C_Construct_Params
{
};

// Function PreviewItem.PreviewItem_C.LoadIcon
struct UPreviewItem_C_LoadIcon_Params
{
	TAssetPtr<class UTexture2D>                        AssetID;                                                  // (Parm)
	bool                                               bSelected;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PreviewItem.PreviewItem_C.OnAsyncLoadComplete
struct UPreviewItem_C_OnAsyncLoadComplete_Params
{
	TAssetPtr<class UObject>                           ObjectAssetPtr;                                           // (Parm)
};

// Function PreviewItem.PreviewItem_C.ExecuteUbergraph_PreviewItem
struct UPreviewItem_C_ExecuteUbergraph_PreviewItem_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
