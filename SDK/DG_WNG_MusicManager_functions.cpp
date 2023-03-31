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

// Function WNG_MusicManager.WNG_MusicManager_C.PlayInteractiveMusic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Bool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWNG_MusicManager_C::PlayInteractiveMusic(bool* Bool)
{
	static auto fn = UObject::FindObject<UFunction>("Function WNG_MusicManager.WNG_MusicManager_C.PlayInteractiveMusic");

	UWNG_MusicManager_C_PlayInteractiveMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bool != nullptr)
		*Bool = params.Bool;
}


// Function WNG_MusicManager.WNG_MusicManager_C.MusicEventUpdate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Event_Name                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Bool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWNG_MusicManager_C::MusicEventUpdate(struct FName* Event_Name, bool* Bool)
{
	static auto fn = UObject::FindObject<UFunction>("Function WNG_MusicManager.WNG_MusicManager_C.MusicEventUpdate");

	UWNG_MusicManager_C_MusicEventUpdate_Params params;
	params.Event_Name = Event_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bool != nullptr)
		*Bool = params.Bool;
}


// Function WNG_MusicManager.WNG_MusicManager_C.OnSetAsCurrentMusicManager
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  MusicEventName                 (Parm, ZeroConstructor, IsPlainOldData)

void UWNG_MusicManager_C::OnSetAsCurrentMusicManager(struct FName* MusicEventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WNG_MusicManager.WNG_MusicManager_C.OnSetAsCurrentMusicManager");

	UWNG_MusicManager_C_OnSetAsCurrentMusicManager_Params params;
	params.MusicEventName = MusicEventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WNG_MusicManager.WNG_MusicManager_C.ExecuteUbergraph_WNG_MusicManager
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWNG_MusicManager_C::ExecuteUbergraph_WNG_MusicManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WNG_MusicManager.WNG_MusicManager_C.ExecuteUbergraph_WNG_MusicManager");

	UWNG_MusicManager_C_ExecuteUbergraph_WNG_MusicManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
