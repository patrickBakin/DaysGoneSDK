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

// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.RemoveMusicManager
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UClass>        MusicManager                   (Parm)
// struct FName                   MusicEventUpdate               (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_MusicFunctions_C::STATIC_RemoveMusicManager(TAssetPtr<class UClass> MusicManager, const struct FName& MusicEventUpdate, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.RemoveMusicManager");

	UBendLib_MusicFunctions_C_RemoveMusicManager_Params params;
	params.MusicManager = MusicManager;
	params.MusicEventUpdate = MusicEventUpdate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.SetMusicManager
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UClass>        MusicManager                   (Parm)
// struct FName                   MusicEventUpdate               (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_MusicFunctions_C::STATIC_SetMusicManager(TAssetPtr<class UClass> MusicManager, const struct FName& MusicEventUpdate, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.SetMusicManager");

	UBendLib_MusicFunctions_C_SetMusicManager_Params params;
	params.MusicManager = MusicManager;
	params.MusicEventUpdate = MusicEventUpdate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.MusicEventUpdate
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Event_Name                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_MusicFunctions_C::STATIC_MusicEventUpdate(const struct FName& Event_Name, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.MusicEventUpdate");

	UBendLib_MusicFunctions_C_MusicEventUpdate_Params params;
	params.Event_Name = Event_Name;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.StopOverlayMusic
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_MusicFunctions_C::STATIC_StopOverlayMusic(float FadeTime, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.StopOverlayMusic");

	UBendLib_MusicFunctions_C_StopOverlayMusic_Params params;
	params.FadeTime = FadeTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.StopAllMusic
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_MusicFunctions_C::STATIC_StopAllMusic(float FadeTime, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.StopAllMusic");

	UBendLib_MusicFunctions_C_StopAllMusic_Params params;
	params.FadeTime = FadeTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.PlayOverlayMusic
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  EventMusic                     (Parm, ZeroConstructor, IsPlainOldData)
// class USoundCue*               SoundCue                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_MusicFunctions_C::STATIC_PlayOverlayMusic(class UClass* EventMusic, class USoundCue* SoundCue, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.PlayOverlayMusic");

	UBendLib_MusicFunctions_C_PlayOverlayMusic_Params params;
	params.EventMusic = EventMusic;
	params.SoundCue = SoundCue;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.StopEventMusic
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_MusicFunctions_C::STATIC_StopEventMusic(float FadeTime, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.StopEventMusic");

	UBendLib_MusicFunctions_C_StopEventMusic_Params params;
	params.FadeTime = FadeTime;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.PlayEventMusic
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  EventMusic                     (Parm, ZeroConstructor, IsPlainOldData)
// class USoundCue*               SoundCue                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_MusicFunctions_C::STATIC_PlayEventMusic(class UClass* EventMusic, class USoundCue* SoundCue, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.PlayEventMusic");

	UBendLib_MusicFunctions_C_PlayEventMusic_Params params;
	params.EventMusic = EventMusic;
	params.SoundCue = SoundCue;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.StopMusic_2ndTrack
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_MusicFunctions_C::STATIC_StopMusic_2ndTrack(class APawn* PlayerPawn, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.StopMusic_2ndTrack");

	UBendLib_MusicFunctions_C_StopMusic_2ndTrack_Params params;
	params.PlayerPawn = PlayerPawn;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.PlayMusic_2ndTrack
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_MusicFunctions_C::STATIC_PlayMusic_2ndTrack(class APawn* PlayerPawn, class USoundBase* Sound, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.PlayMusic_2ndTrack");

	UBendLib_MusicFunctions_C_PlayMusic_2ndTrack_Params params;
	params.PlayerPawn = PlayerPawn;
	params.Sound = Sound;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.StopMusic
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_MusicFunctions_C::STATIC_StopMusic(class APawn* PlayerPawn, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.StopMusic");

	UBendLib_MusicFunctions_C_StopMusic_Params params;
	params.PlayerPawn = PlayerPawn;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.PlayMusic
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   PlayerPawn                     (Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_MusicFunctions_C::STATIC_PlayMusic(class APawn* PlayerPawn, class USoundBase* Sound, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_MusicFunctions.BendLib_MusicFunctions_C.PlayMusic");

	UBendLib_MusicFunctions_C_PlayMusic_Params params;
	params.PlayerPawn = PlayerPawn;
	params.Sound = Sound;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
