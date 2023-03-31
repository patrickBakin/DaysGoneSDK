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

// Function AWI_MusicManager.AWI_MusicManager_C.PlayInteractiveMusic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Bool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAWI_MusicManager_C::PlayInteractiveMusic(bool* Bool)
{
	static auto fn = UObject::FindObject<UFunction>("Function AWI_MusicManager.AWI_MusicManager_C.PlayInteractiveMusic");

	UAWI_MusicManager_C_PlayInteractiveMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bool != nullptr)
		*Bool = params.Bool;
}


// Function AWI_MusicManager.AWI_MusicManager_C.MusicEventUpdate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Event_Name                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Bool                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAWI_MusicManager_C::MusicEventUpdate(struct FName* Event_Name, bool* Bool)
{
	static auto fn = UObject::FindObject<UFunction>("Function AWI_MusicManager.AWI_MusicManager_C.MusicEventUpdate");

	UAWI_MusicManager_C_MusicEventUpdate_Params params;
	params.Event_Name = Event_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bool != nullptr)
		*Bool = params.Bool;
}


// Function AWI_MusicManager.AWI_MusicManager_C.OnSetAsCurrentMusicManager
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  MusicEventName                 (Parm, ZeroConstructor, IsPlainOldData)

void UAWI_MusicManager_C::OnSetAsCurrentMusicManager(struct FName* MusicEventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AWI_MusicManager.AWI_MusicManager_C.OnSetAsCurrentMusicManager");

	UAWI_MusicManager_C_OnSetAsCurrentMusicManager_Params params;
	params.MusicEventName = MusicEventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AWI_MusicManager.AWI_MusicManager_C.OnPlayerDied
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAIFactionType>*   KilledByFaction                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETypeOfBaseDamage>* BaseDamageType                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETypeOfDamage>*    DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         AmountOfDamage                 (Parm, ZeroConstructor, IsPlainOldData)

void UAWI_MusicManager_C::OnPlayerDied(TEnumAsByte<EAIFactionType>* KilledByFaction, TEnumAsByte<ETypeOfBaseDamage>* BaseDamageType, TEnumAsByte<ETypeOfDamage>* DamageType, float* AmountOfDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AWI_MusicManager.AWI_MusicManager_C.OnPlayerDied");

	UAWI_MusicManager_C_OnPlayerDied_Params params;
	params.KilledByFaction = KilledByFaction;
	params.BaseDamageType = BaseDamageType;
	params.DamageType = DamageType;
	params.AmountOfDamage = AmountOfDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AWI_MusicManager.AWI_MusicManager_C.ExecuteUbergraph_AWI_MusicManager
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAWI_MusicManager_C::ExecuteUbergraph_AWI_MusicManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AWI_MusicManager.AWI_MusicManager_C.ExecuteUbergraph_AWI_MusicManager");

	UAWI_MusicManager_C_ExecuteUbergraph_AWI_MusicManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
