// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PhotoMode_FuncLibrary.PhotoMode_FuncLibrary_C.GetPhotoModeWidget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UUI_PhotoMode_C*         PhotoModeWidget                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPhotoMode_FuncLibrary_C::STATIC_GetPhotoModeWidget(class UObject* __WorldContext, class UUI_PhotoMode_C** PhotoModeWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhotoMode_FuncLibrary.PhotoMode_FuncLibrary_C.GetPhotoModeWidget");

	UPhotoMode_FuncLibrary_C_GetPhotoModeWidget_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PhotoModeWidget != nullptr)
		*PhotoModeWidget = params.PhotoModeWidget;
}


// Function PhotoMode_FuncLibrary.PhotoMode_FuncLibrary_C.GetPhotoModeCameraModifier
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UBendCamModifier_Post*   PhotoModeCamModifier           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPhotoMode_FuncLibrary_C::STATIC_GetPhotoModeCameraModifier(class UObject* __WorldContext, class UBendCamModifier_Post** PhotoModeCamModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhotoMode_FuncLibrary.PhotoMode_FuncLibrary_C.GetPhotoModeCameraModifier");

	UPhotoMode_FuncLibrary_C_GetPhotoModeCameraModifier_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PhotoModeCamModifier != nullptr)
		*PhotoModeCamModifier = params.PhotoModeCamModifier;
}


// Function PhotoMode_FuncLibrary.PhotoMode_FuncLibrary_C.GetPhotoModeCamera
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UBendPhotoModeFollowCam_C* PhotoModeCamera                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPhotoMode_FuncLibrary_C::STATIC_GetPhotoModeCamera(class UObject* __WorldContext, class UBendPhotoModeFollowCam_C** PhotoModeCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhotoMode_FuncLibrary.PhotoMode_FuncLibrary_C.GetPhotoModeCamera");

	UPhotoMode_FuncLibrary_C_GetPhotoModeCamera_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PhotoModeCamera != nullptr)
		*PhotoModeCamera = params.PhotoModeCamera;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
