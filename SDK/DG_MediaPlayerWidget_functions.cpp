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

// Function MediaPlayerWidget.MediaPlayerWidget_C.SetImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterial*               Image                          (Parm, ZeroConstructor, IsPlainOldData)
// class UMediaPlayer*            Movie                          (Parm, ZeroConstructor, IsPlainOldData)
// class USoundCue*               Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void UMediaPlayerWidget_C::SetImage(class UMaterial* Image, class UMediaPlayer* Movie, class USoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaPlayerWidget.MediaPlayerWidget_C.SetImage");

	UMediaPlayerWidget_C_SetImage_Params params;
	params.Image = Image;
	params.Movie = Movie;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaPlayerWidget.MediaPlayerWidget_C.StopSound
// (BlueprintCallable, BlueprintEvent)

void UMediaPlayerWidget_C::StopSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaPlayerWidget.MediaPlayerWidget_C.StopSound");

	UMediaPlayerWidget_C_StopSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MediaPlayerWidget.MediaPlayerWidget_C.ExecuteUbergraph_MediaPlayerWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMediaPlayerWidget_C::ExecuteUbergraph_MediaPlayerWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MediaPlayerWidget.MediaPlayerWidget_C.ExecuteUbergraph_MediaPlayerWidget");

	UMediaPlayerWidget_C_ExecuteUbergraph_MediaPlayerWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
