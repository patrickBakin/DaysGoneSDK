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

// Function PhotoMode_FuncLibrary.PhotoMode_FuncLibrary_C.GetPhotoModeWidget
struct UPhotoMode_FuncLibrary_C_GetPhotoModeWidget_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UUI_PhotoMode_C*                             PhotoModeWidget;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PhotoMode_FuncLibrary.PhotoMode_FuncLibrary_C.GetPhotoModeCameraModifier
struct UPhotoMode_FuncLibrary_C_GetPhotoModeCameraModifier_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UBendCamModifier_Post*                       PhotoModeCamModifier;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PhotoMode_FuncLibrary.PhotoMode_FuncLibrary_C.GetPhotoModeCamera
struct UPhotoMode_FuncLibrary_C_GetPhotoModeCamera_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UBendPhotoModeFollowCam_C*                   PhotoModeCamera;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
