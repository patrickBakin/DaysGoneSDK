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

// Function CharacterGridItem.CharacterGridItem_C.OnFail_F6417D0549A492CABE7EBFB283E8DFAA
struct UCharacterGridItem_C_OnFail_F6417D0549A492CABE7EBFB283E8DFAA_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterGridItem.CharacterGridItem_C.OnSuccess_F6417D0549A492CABE7EBFB283E8DFAA
struct UCharacterGridItem_C_OnSuccess_F6417D0549A492CABE7EBFB283E8DFAA_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CharacterGridItem.CharacterGridItem_C.Invalidate
struct UCharacterGridItem_C_Invalidate_Params
{
};

// Function CharacterGridItem.CharacterGridItem_C.FadeIn
struct UCharacterGridItem_C_FadeIn_Params
{
};

// Function CharacterGridItem.CharacterGridItem_C.FadeOut
struct UCharacterGridItem_C_FadeOut_Params
{
};

// Function CharacterGridItem.CharacterGridItem_C.Update Image
struct UCharacterGridItem_C_Update_Image_Params
{
	struct FGameplayTag                                Tag;                                                      // (Parm)
};

// Function CharacterGridItem.CharacterGridItem_C.ExecuteUbergraph_CharacterGridItem
struct UCharacterGridItem_C_ExecuteUbergraph_CharacterGridItem_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
