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

// Function PatchGridItem.PatchGridItem_C.OnFail_AA6ECEC94E6783AB3CA18F9E7C297828
struct UPatchGridItem_C_OnFail_AA6ECEC94E6783AB3CA18F9E7C297828_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PatchGridItem.PatchGridItem_C.OnSuccess_AA6ECEC94E6783AB3CA18F9E7C297828
struct UPatchGridItem_C_OnSuccess_AA6ECEC94E6783AB3CA18F9E7C297828_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PatchGridItem.PatchGridItem_C.Construct
struct UPatchGridItem_C_Construct_Params
{
};

// Function PatchGridItem.PatchGridItem_C.SetSelected
struct UPatchGridItem_C_SetSelected_Params
{
	bool*                                              bIsSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PatchGridItem.PatchGridItem_C.Invalidate
struct UPatchGridItem_C_Invalidate_Params
{
};

// Function PatchGridItem.PatchGridItem_C.FadeIn
struct UPatchGridItem_C_FadeIn_Params
{
};

// Function PatchGridItem.PatchGridItem_C.FadeOut
struct UPatchGridItem_C_FadeOut_Params
{
};

// Function PatchGridItem.PatchGridItem_C.ExecuteUbergraph_PatchGridItem
struct UPatchGridItem_C_ExecuteUbergraph_PatchGridItem_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
