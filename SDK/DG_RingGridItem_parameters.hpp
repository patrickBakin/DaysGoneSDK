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

// Function RingGridItem.RingGridItem_C.UpdateByTag
struct URingGridItem_C_UpdateByTag_Params
{
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function RingGridItem.RingGridItem_C.OnFail_2560A53E453D3924C8CF928094E16490
struct URingGridItem_C_OnFail_2560A53E453D3924C8CF928094E16490_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RingGridItem.RingGridItem_C.OnSuccess_2560A53E453D3924C8CF928094E16490
struct URingGridItem_C_OnSuccess_2560A53E453D3924C8CF928094E16490_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function RingGridItem.RingGridItem_C.Construct
struct URingGridItem_C_Construct_Params
{
};

// Function RingGridItem.RingGridItem_C.Invalidate
struct URingGridItem_C_Invalidate_Params
{
};

// Function RingGridItem.RingGridItem_C.FadeIn
struct URingGridItem_C_FadeIn_Params
{
};

// Function RingGridItem.RingGridItem_C.FadeOut
struct URingGridItem_C_FadeOut_Params
{
};

// Function RingGridItem.RingGridItem_C.Update Image
struct URingGridItem_C_Update_Image_Params
{
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function RingGridItem.RingGridItem_C.ExecuteUbergraph_RingGridItem
struct URingGridItem_C_ExecuteUbergraph_RingGridItem_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
