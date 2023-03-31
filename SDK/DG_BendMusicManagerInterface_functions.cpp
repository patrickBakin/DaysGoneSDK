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

// Function BendMusicManagerInterface.BendMusicManagerInterface_C.EventUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Event_Name                     (Parm, ZeroConstructor, IsPlainOldData)

void UBendMusicManagerInterface_C::EventUpdate(const struct FName& Event_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendMusicManagerInterface.BendMusicManagerInterface_C.EventUpdate");

	UBendMusicManagerInterface_C_EventUpdate_Params params;
	params.Event_Name = Event_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendMusicManagerInterface.BendMusicManagerInterface_C.PlayOverlayMusicRequested
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Overlay_Music                  (Parm, ZeroConstructor, IsPlainOldData)
// class USoundCue*               Overlay_Sound_Cue              (Parm, ZeroConstructor, IsPlainOldData)

void UBendMusicManagerInterface_C::PlayOverlayMusicRequested(class UClass* Overlay_Music, class USoundCue* Overlay_Sound_Cue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendMusicManagerInterface.BendMusicManagerInterface_C.PlayOverlayMusicRequested");

	UBendMusicManagerInterface_C_PlayOverlayMusicRequested_Params params;
	params.Overlay_Music = Overlay_Music;
	params.Overlay_Sound_Cue = Overlay_Sound_Cue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendMusicManagerInterface.BendMusicManagerInterface_C.PlayEventMusicRequested
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Event_Music                    (Parm, ZeroConstructor, IsPlainOldData)
// class USoundCue*               Event_Sound_Cue                (Parm, ZeroConstructor, IsPlainOldData)

void UBendMusicManagerInterface_C::PlayEventMusicRequested(class UClass* Event_Music, class USoundCue* Event_Sound_Cue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendMusicManagerInterface.BendMusicManagerInterface_C.PlayEventMusicRequested");

	UBendMusicManagerInterface_C_PlayEventMusicRequested_Params params;
	params.Event_Music = Event_Music;
	params.Event_Sound_Cue = Event_Sound_Cue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
