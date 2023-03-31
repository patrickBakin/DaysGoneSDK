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

// Function BikeSkinGridItem.BikeSkinGridItem_C.OnFail_3DF4DC0846E069F43C6A298FDFAED1B4
struct UBikeSkinGridItem_C_OnFail_3DF4DC0846E069F43C6A298FDFAED1B4_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeSkinGridItem.BikeSkinGridItem_C.OnSuccess_3DF4DC0846E069F43C6A298FDFAED1B4
struct UBikeSkinGridItem_C_OnSuccess_3DF4DC0846E069F43C6A298FDFAED1B4_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BikeSkinGridItem.BikeSkinGridItem_C.Invalidate
struct UBikeSkinGridItem_C_Invalidate_Params
{
};

// Function BikeSkinGridItem.BikeSkinGridItem_C.FadeIn
struct UBikeSkinGridItem_C_FadeIn_Params
{
};

// Function BikeSkinGridItem.BikeSkinGridItem_C.FadeOut
struct UBikeSkinGridItem_C_FadeOut_Params
{
};

// Function BikeSkinGridItem.BikeSkinGridItem_C.Update Image
struct UBikeSkinGridItem_C_Update_Image_Params
{
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function BikeSkinGridItem.BikeSkinGridItem_C.ExecuteUbergraph_BikeSkinGridItem
struct UBikeSkinGridItem_C_ExecuteUbergraph_BikeSkinGridItem_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
