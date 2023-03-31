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

// Function Base_LevelSoundManager.Base_LevelSoundManager_C.ExitedVehicle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor_Making_Sound             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Sound_Location                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBase_LevelSoundManager_C::ExitedVehicle(class AActor* Actor_Making_Sound, const struct FVector& Sound_Location, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_LevelSoundManager.Base_LevelSoundManager_C.ExitedVehicle");

	UBase_LevelSoundManager_C_ExitedVehicle_Params params;
	params.Actor_Making_Sound = Actor_Making_Sound;
	params.Sound_Location = Sound_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Base_LevelSoundManager.Base_LevelSoundManager_C.EnteredVehicle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor_Making_Sound             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Sound_Location                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBase_LevelSoundManager_C::EnteredVehicle(class AActor* Actor_Making_Sound, const struct FVector& Sound_Location, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_LevelSoundManager.Base_LevelSoundManager_C.EnteredVehicle");

	UBase_LevelSoundManager_C_EnteredVehicle_Params params;
	params.Actor_Making_Sound = Actor_Making_Sound;
	params.Sound_Location = Sound_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Base_LevelSoundManager.Base_LevelSoundManager_C.InteractionEnded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor_Making_Sound             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Sound_Location                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBase_LevelSoundManager_C::InteractionEnded(class AActor* Actor_Making_Sound, const struct FVector& Sound_Location, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_LevelSoundManager.Base_LevelSoundManager_C.InteractionEnded");

	UBase_LevelSoundManager_C_InteractionEnded_Params params;
	params.Actor_Making_Sound = Actor_Making_Sound;
	params.Sound_Location = Sound_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Base_LevelSoundManager.Base_LevelSoundManager_C.InteractionStarted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor_Making_Sound             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Sound_Location                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBase_LevelSoundManager_C::InteractionStarted(class AActor* Actor_Making_Sound, const struct FVector& Sound_Location, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_LevelSoundManager.Base_LevelSoundManager_C.InteractionStarted");

	UBase_LevelSoundManager_C_InteractionStarted_Params params;
	params.Actor_Making_Sound = Actor_Making_Sound;
	params.Sound_Location = Sound_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Base_LevelSoundManager.Base_LevelSoundManager_C.ConversationEnded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor_Making_Sound             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Sound_Location                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBase_LevelSoundManager_C::ConversationEnded(class AActor* Actor_Making_Sound, const struct FVector& Sound_Location, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_LevelSoundManager.Base_LevelSoundManager_C.ConversationEnded");

	UBase_LevelSoundManager_C_ConversationEnded_Params params;
	params.Actor_Making_Sound = Actor_Making_Sound;
	params.Sound_Location = Sound_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Base_LevelSoundManager.Base_LevelSoundManager_C.ConversationStarted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor_Making_Sound             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Sound_Location                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBase_LevelSoundManager_C::ConversationStarted(class AActor* Actor_Making_Sound, const struct FVector& Sound_Location, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_LevelSoundManager.Base_LevelSoundManager_C.ConversationStarted");

	UBase_LevelSoundManager_C_ConversationStarted_Params params;
	params.Actor_Making_Sound = Actor_Making_Sound;
	params.Sound_Location = Sound_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Base_LevelSoundManager.Base_LevelSoundManager_C.MeleeCriticalHitSuccessful
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor_Making_Sound             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Sound_Location                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBase_LevelSoundManager_C::MeleeCriticalHitSuccessful(class AActor* Actor_Making_Sound, const struct FVector& Sound_Location, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_LevelSoundManager.Base_LevelSoundManager_C.MeleeCriticalHitSuccessful");

	UBase_LevelSoundManager_C_MeleeCriticalHitSuccessful_Params params;
	params.Actor_Making_Sound = Actor_Making_Sound;
	params.Sound_Location = Sound_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Base_LevelSoundManager.Base_LevelSoundManager_C.SetAsCurrentManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBase_LevelSoundManager_C::SetAsCurrentManager(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_LevelSoundManager.Base_LevelSoundManager_C.SetAsCurrentManager");

	UBase_LevelSoundManager_C_SetAsCurrentManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Base_LevelSoundManager.Base_LevelSoundManager_C.Tick
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBase_LevelSoundManager_C::Tick(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_LevelSoundManager.Base_LevelSoundManager_C.Tick");

	UBase_LevelSoundManager_C_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Base_LevelSoundManager.Base_LevelSoundManager_C.SoundLevelEventUpdate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Event_Name                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor_Making_Sound             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Sound_Location                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBase_LevelSoundManager_C::SoundLevelEventUpdate(const struct FName& Event_Name, class AActor* Actor_Making_Sound, const struct FVector& Sound_Location, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_LevelSoundManager.Base_LevelSoundManager_C.SoundLevelEventUpdate");

	UBase_LevelSoundManager_C_SoundLevelEventUpdate_Params params;
	params.Event_Name = Event_Name;
	params.Actor_Making_Sound = Actor_Making_Sound;
	params.Sound_Location = Sound_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function Base_LevelSoundManager.Base_LevelSoundManager_C.EventUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Event_Name                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor_Making_Sound             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Sound_Location                 (Parm, ZeroConstructor, IsPlainOldData)

void UBase_LevelSoundManager_C::EventUpdate(const struct FName& Event_Name, class AActor* Actor_Making_Sound, const struct FVector& Sound_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_LevelSoundManager.Base_LevelSoundManager_C.EventUpdate");

	UBase_LevelSoundManager_C_EventUpdate_Params params;
	params.Event_Name = Event_Name;
	params.Actor_Making_Sound = Actor_Making_Sound;
	params.Sound_Location = Sound_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_LevelSoundManager.Base_LevelSoundManager_C.OnSetAsCurrentLevelSoundManager
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  LevelSoundEventName            (Parm, ZeroConstructor, IsPlainOldData)

void UBase_LevelSoundManager_C::OnSetAsCurrentLevelSoundManager(struct FName* LevelSoundEventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_LevelSoundManager.Base_LevelSoundManager_C.OnSetAsCurrentLevelSoundManager");

	UBase_LevelSoundManager_C_OnSetAsCurrentLevelSoundManager_Params params;
	params.LevelSoundEventName = LevelSoundEventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_LevelSoundManager.Base_LevelSoundManager_C.ExecuteUbergraph_Base_LevelSoundManager
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBase_LevelSoundManager_C::ExecuteUbergraph_Base_LevelSoundManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_LevelSoundManager.Base_LevelSoundManager_C.ExecuteUbergraph_Base_LevelSoundManager");

	UBase_LevelSoundManager_C_ExecuteUbergraph_Base_LevelSoundManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
