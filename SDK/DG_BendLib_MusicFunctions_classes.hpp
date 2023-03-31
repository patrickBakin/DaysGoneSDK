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

// BlueprintGeneratedClass BendLib_MusicFunctions.BendLib_MusicFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UBendLib_MusicFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendLib_MusicFunctions.BendLib_MusicFunctions_C");
		return ptr;
	}


	void STATIC_RemoveMusicManager(TAssetPtr<class UClass> MusicManager, const struct FName& MusicEventUpdate, class UObject* __WorldContext);
	void STATIC_SetMusicManager(TAssetPtr<class UClass> MusicManager, const struct FName& MusicEventUpdate, class UObject* __WorldContext);
	void STATIC_MusicEventUpdate(const struct FName& Event_Name, class UObject* __WorldContext);
	void STATIC_StopOverlayMusic(float FadeTime, class UObject* __WorldContext);
	void STATIC_StopAllMusic(float FadeTime, class UObject* __WorldContext);
	void STATIC_PlayOverlayMusic(class UClass* EventMusic, class USoundCue* SoundCue, class UObject* __WorldContext);
	void STATIC_StopEventMusic(float FadeTime, class UObject* __WorldContext);
	void STATIC_PlayEventMusic(class UClass* EventMusic, class USoundCue* SoundCue, class UObject* __WorldContext);
	void STATIC_StopMusic_2ndTrack(class APawn* PlayerPawn, class UObject* __WorldContext);
	void STATIC_PlayMusic_2ndTrack(class APawn* PlayerPawn, class USoundBase* Sound, class UObject* __WorldContext);
	void STATIC_StopMusic(class APawn* PlayerPawn, class UObject* __WorldContext);
	void STATIC_PlayMusic(class APawn* PlayerPawn, class USoundBase* Sound, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
