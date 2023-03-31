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

// BlueprintGeneratedClass BendMusicManagerInterface.BendMusicManagerInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBendMusicManagerInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendMusicManagerInterface.BendMusicManagerInterface_C");
		return ptr;
	}


	void EventUpdate(const struct FName& Event_Name);
	void PlayOverlayMusicRequested(class UClass* Overlay_Music, class USoundCue* Overlay_Sound_Cue);
	void PlayEventMusicRequested(class UClass* Event_Music, class USoundCue* Event_Sound_Cue);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
