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

// Function WBB_MusicManager.WBB_MusicManager_C.PlayInteractiveMusic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Bool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBB_MusicManager_C::PlayInteractiveMusic(bool* Bool)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBB_MusicManager.WBB_MusicManager_C.PlayInteractiveMusic");

	UWBB_MusicManager_C_PlayInteractiveMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bool != nullptr)
		*Bool = params.Bool;
}


// Function WBB_MusicManager.WBB_MusicManager_C.MusicEventUpdate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Event_Name                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Bool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBB_MusicManager_C::MusicEventUpdate(struct FName* Event_Name, bool* Bool)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBB_MusicManager.WBB_MusicManager_C.MusicEventUpdate");

	UWBB_MusicManager_C_MusicEventUpdate_Params params;
	params.Event_Name = Event_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bool != nullptr)
		*Bool = params.Bool;
}


// Function WBB_MusicManager.WBB_MusicManager_C.OnSetAsCurrentMusicManager
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  MusicEventName                 (Parm, ZeroConstructor, IsPlainOldData)

void UWBB_MusicManager_C::OnSetAsCurrentMusicManager(struct FName* MusicEventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBB_MusicManager.WBB_MusicManager_C.OnSetAsCurrentMusicManager");

	UWBB_MusicManager_C_OnSetAsCurrentMusicManager_Params params;
	params.MusicEventName = MusicEventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBB_MusicManager.WBB_MusicManager_C.ExecuteUbergraph_WBB_MusicManager
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWBB_MusicManager_C::ExecuteUbergraph_WBB_MusicManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBB_MusicManager.WBB_MusicManager_C.ExecuteUbergraph_WBB_MusicManager");

	UWBB_MusicManager_C_ExecuteUbergraph_WBB_MusicManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
