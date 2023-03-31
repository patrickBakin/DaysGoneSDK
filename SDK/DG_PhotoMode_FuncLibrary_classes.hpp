#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PhotoMode_FuncLibrary.PhotoMode_FuncLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UPhotoMode_FuncLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PhotoMode_FuncLibrary.PhotoMode_FuncLibrary_C");
		return ptr;
	}


	void STATIC_GetPhotoModeWidget(class UObject* __WorldContext, class UUI_PhotoMode_C** PhotoModeWidget);
	void STATIC_GetPhotoModeCameraModifier(class UObject* __WorldContext, class UBendCamModifier_Post** PhotoModeCamModifier);
	void STATIC_GetPhotoModeCamera(class UObject* __WorldContext, class UBendPhotoModeFollowCam_C** PhotoModeCamera);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
