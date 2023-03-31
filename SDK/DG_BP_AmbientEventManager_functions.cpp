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

// Function BP_AmbientEventManager.BP_AmbientEventManager_C.DebugUpdateResetTimeTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventManager_C::DebugUpdateResetTimeTable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.DebugUpdateResetTimeTable");

	ABP_AmbientEventManager_C_DebugUpdateResetTimeTable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.CreateEventResetTimeHUD
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventManager_C::CreateEventResetTimeHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.CreateEventResetTimeHUD");

	ABP_AmbientEventManager_C_CreateEventResetTimeHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.ToggleEventResetTimesHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventManager_C::ToggleEventResetTimesHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.ToggleEventResetTimesHUD");

	ABP_AmbientEventManager_C_ToggleEventResetTimesHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.AddEventToRunningList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAmbientEventMarker* AmbientEventMarker             (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventManager_C::AddEventToRunningList(class ABendAmbientEventMarker* AmbientEventMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.AddEventToRunningList");

	ABP_AmbientEventManager_C_AddEventToRunningList_Params params;
	params.AmbientEventMarker = AmbientEventMarker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.RemoveEventFromRunningList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAmbientEventMarker* AmbientEventMarker             (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventManager_C::RemoveEventFromRunningList(class ABendAmbientEventMarker* AmbientEventMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.RemoveEventFromRunningList");

	ABP_AmbientEventManager_C_RemoveEventFromRunningList_Params params;
	params.AmbientEventMarker = AmbientEventMarker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.ToggleRunningEventListHUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventManager_C::ToggleRunningEventListHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.ToggleRunningEventListHUD");

	ABP_AmbientEventManager_C_ToggleRunningEventListHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.CreateRunning_AE_List
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventManager_C::CreateRunning_AE_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.CreateRunning_AE_List");

	ABP_AmbientEventManager_C_CreateRunning_AE_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.RefreshScoreDebugButtons
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventManager_C::RefreshScoreDebugButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.RefreshScoreDebugButtons");

	ABP_AmbientEventManager_C_RefreshScoreDebugButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.DebugFillInGradeUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructAmbientEventDebugData Data                           (Parm)

void ABP_AmbientEventManager_C::DebugFillInGradeUI(const struct FStructAmbientEventDebugData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.DebugFillInGradeUI");

	ABP_AmbientEventManager_C_DebugFillInGradeUI_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.CreateScoreDebugButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventManager_C::CreateScoreDebugButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.CreateScoreDebugButtons");

	ABP_AmbientEventManager_C_CreateScoreDebugButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.CleanDebugUI
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventManager_C::CleanDebugUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.CleanDebugUI");

	ABP_AmbientEventManager_C_CleanDebugUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.DebugHudButtonPressed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonName                     (Parm)

void ABP_AmbientEventManager_C::DebugHudButtonPressed(const struct FText& ButtonName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.DebugHudButtonPressed");

	ABP_AmbientEventManager_C_DebugHudButtonPressed_Params params;
	params.ButtonName = ButtonName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.Toggle Debug HUD
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventManager_C::Toggle_Debug_HUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.Toggle Debug HUD");

	ABP_AmbientEventManager_C_Toggle_Debug_HUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.SetupValues
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventManager_C::SetupValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.SetupValues");

	ABP_AmbientEventManager_C_SetupValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.ToggleMarkerCollision
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventManager_C::ToggleMarkerCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.ToggleMarkerCollision");

	ABP_AmbientEventManager_C_ToggleMarkerCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.CachePlayerController
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventManager_C::CachePlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.CachePlayerController");

	ABP_AmbientEventManager_C_CachePlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.DebugTest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventManager_C::DebugTest()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.DebugTest");

	ABP_AmbientEventManager_C_DebugTest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.CheckIfDebugUnloadSelectedEvent
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventManager_C::CheckIfDebugUnloadSelectedEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.CheckIfDebugUnloadSelectedEvent");

	ABP_AmbientEventManager_C_CheckIfDebugUnloadSelectedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.CheckIfDebugLoadSelectedEvent
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Loaded                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventManager_C::CheckIfDebugLoadSelectedEvent(bool* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.CheckIfDebugLoadSelectedEvent");

	ABP_AmbientEventManager_C_CheckIfDebugLoadSelectedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loaded != nullptr)
		*Loaded = params.Loaded;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.ToggleDebugMode
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventManager_C::ToggleDebugMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.ToggleDebugMode");

	ABP_AmbientEventManager_C_ToggleDebugMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.ToggleMarkerIcons
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventManager_C::ToggleMarkerIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.ToggleMarkerIcons");

	ABP_AmbientEventManager_C_ToggleMarkerIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.UserConstructionScript");

	ABP_AmbientEventManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.ReceiveTick");

	ABP_AmbientEventManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_AmbientEventManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.ReceiveBeginPlay");

	ABP_AmbientEventManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.OnEventLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABendAmbientEventMarker** AmbientEventMarker             (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventManager_C::OnEventLoaded(class ABendAmbientEventMarker** AmbientEventMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.OnEventLoaded");

	ABP_AmbientEventManager_C_OnEventLoaded_Params params;
	params.AmbientEventMarker = AmbientEventMarker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.OnEventUnloaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABendAmbientEventMarker** AmbientEventMarker             (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventManager_C::OnEventUnloaded(class ABendAmbientEventMarker** AmbientEventMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.OnEventUnloaded");

	ABP_AmbientEventManager_C_OnEventUnloaded_Params params;
	params.AmbientEventMarker = AmbientEventMarker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.OnAmbientEventChosen_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// TEnumAsByte<EAmbientEventClass> EventClass                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AlwaysLoaded                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PlayerLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AmbientEventLocation           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventManager_C::OnAmbientEventChosen_Event_1(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, bool AlwaysLoaded, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.OnAmbientEventChosen_Event_1");

	ABP_AmbientEventManager_C_OnAmbientEventChosen_Event_1_Params params;
	params.EventName = EventName;
	params.EventClass = EventClass;
	params.AlwaysLoaded = AlwaysLoaded;
	params.PlayerLocation = PlayerLocation;
	params.AmbientEventLocation = AmbientEventLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.OnAmbientEventLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventName                      (Parm, ZeroConstructor)
// TEnumAsByte<EAmbientEventClass> EventClass                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeToLoad                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PlayerLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AmbientEventLocation           (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventManager_C::OnAmbientEventLoaded_Event_1(const struct FString& EventName, TEnumAsByte<EAmbientEventClass> EventClass, float TimeToLoad, const struct FVector& PlayerLocation, const struct FVector& AmbientEventLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.OnAmbientEventLoaded_Event_1");

	ABP_AmbientEventManager_C_OnAmbientEventLoaded_Event_1_Params params;
	params.EventName = EventName;
	params.EventClass = EventClass;
	params.TimeToLoad = TimeToLoad;
	params.PlayerLocation = PlayerLocation;
	params.AmbientEventLocation = AmbientEventLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.OnAmbientEventManagerBlocked_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAmbientEventManagerBlockMsg> BlockReason                    (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventManager_C::OnAmbientEventManagerBlocked_Event_1(TEnumAsByte<EAmbientEventManagerBlockMsg> BlockReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.OnAmbientEventManagerBlocked_Event_1");

	ABP_AmbientEventManager_C_OnAmbientEventManagerBlocked_Event_1_Params params;
	params.BlockReason = BlockReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.Remove Block
// (BlueprintCallable, BlueprintEvent)

void ABP_AmbientEventManager_C::Remove_Block()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.Remove Block");

	ABP_AmbientEventManager_C_Remove_Block_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AmbientEventManager.BP_AmbientEventManager_C.ExecuteUbergraph_BP_AmbientEventManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_AmbientEventManager_C::ExecuteUbergraph_BP_AmbientEventManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AmbientEventManager.BP_AmbientEventManager_C.ExecuteUbergraph_BP_AmbientEventManager");

	ABP_AmbientEventManager_C_ExecuteUbergraph_BP_AmbientEventManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
