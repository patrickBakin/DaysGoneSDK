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

// Function OW_MusicManager.OW_MusicManager_C.OW_Restart_Logic
// (Public, BlueprintCallable, BlueprintEvent)

void UOW_MusicManager_C::OW_Restart_Logic()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_MusicManager.OW_MusicManager_C.OW_Restart_Logic");

	UOW_MusicManager_C_OW_Restart_Logic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_MusicManager.OW_MusicManager_C.OW_Start_Logic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOW_MusicManager_C::OW_Start_Logic()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_MusicManager.OW_MusicManager_C.OW_Start_Logic");

	UOW_MusicManager_C_OW_Start_Logic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_MusicManager.OW_MusicManager_C.PlayInteractiveMusic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Bool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOW_MusicManager_C::PlayInteractiveMusic(bool* Bool)
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_MusicManager.OW_MusicManager_C.PlayInteractiveMusic");

	UOW_MusicManager_C_PlayInteractiveMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bool != nullptr)
		*Bool = params.Bool;
}


// Function OW_MusicManager.OW_MusicManager_C.MusicEventUpdate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Event_Name                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Bool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UOW_MusicManager_C::MusicEventUpdate(struct FName* Event_Name, bool* Bool)
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_MusicManager.OW_MusicManager_C.MusicEventUpdate");

	UOW_MusicManager_C_MusicEventUpdate_Params params;
	params.Event_Name = Event_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bool != nullptr)
		*Bool = params.Bool;
}


// Function OW_MusicManager.OW_MusicManager_C.OnSetAsCurrentMusicManager
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  MusicEventName                 (Parm, ZeroConstructor, IsPlainOldData)

void UOW_MusicManager_C::OnSetAsCurrentMusicManager(struct FName* MusicEventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_MusicManager.OW_MusicManager_C.OnSetAsCurrentMusicManager");

	UOW_MusicManager_C_OnSetAsCurrentMusicManager_Params params;
	params.MusicEventName = MusicEventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_MusicManager.OW_MusicManager_C.OnSaveGameLoadedFromCheckpoint
// (Event, Public, BlueprintEvent)

void UOW_MusicManager_C::OnSaveGameLoadedFromCheckpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_MusicManager.OW_MusicManager_C.OnSaveGameLoadedFromCheckpoint");

	UOW_MusicManager_C_OnSaveGameLoadedFromCheckpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_MusicManager.OW_MusicManager_C.OnPostSaveGameLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void UOW_MusicManager_C::OnPostSaveGameLoaded_Event_1(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_MusicManager.OW_MusicManager_C.OnPostSaveGameLoaded_Event_1");

	UOW_MusicManager_C_OnPostSaveGameLoaded_Event_1_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OW_MusicManager.OW_MusicManager_C.ExecuteUbergraph_OW_MusicManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UOW_MusicManager_C::ExecuteUbergraph_OW_MusicManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OW_MusicManager.OW_MusicManager_C.ExecuteUbergraph_OW_MusicManager");

	UOW_MusicManager_C_ExecuteUbergraph_OW_MusicManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
