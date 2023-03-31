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

// Function BendLib_LevelSoundFunctions.BendLib_LevelSoundFunctions_C.RemoveLevelSoundManager
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UClass>        LevelSoundManager              (Parm)
// struct FName                   LevelSoundEventUpdate          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_LevelSoundFunctions_C::STATIC_RemoveLevelSoundManager(TAssetPtr<class UClass> LevelSoundManager, const struct FName& LevelSoundEventUpdate, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_LevelSoundFunctions.BendLib_LevelSoundFunctions_C.RemoveLevelSoundManager");

	UBendLib_LevelSoundFunctions_C_RemoveLevelSoundManager_Params params;
	params.LevelSoundManager = LevelSoundManager;
	params.LevelSoundEventUpdate = LevelSoundEventUpdate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_LevelSoundFunctions.BendLib_LevelSoundFunctions_C.SetLevelSoundManager
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UClass>        LevelSoundManager              (Parm)
// struct FName                   LevelSoundEventUpdate          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_LevelSoundFunctions_C::STATIC_SetLevelSoundManager(TAssetPtr<class UClass> LevelSoundManager, const struct FName& LevelSoundEventUpdate, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_LevelSoundFunctions.BendLib_LevelSoundFunctions_C.SetLevelSoundManager");

	UBendLib_LevelSoundFunctions_C_SetLevelSoundManager_Params params;
	params.LevelSoundManager = LevelSoundManager;
	params.LevelSoundEventUpdate = LevelSoundEventUpdate;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_LevelSoundFunctions.BendLib_LevelSoundFunctions_C.LevelSoundEventUpdate
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Event_Name                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor_Making_Sound             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Sound_Location                 (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_LevelSoundFunctions_C::STATIC_LevelSoundEventUpdate(const struct FName& Event_Name, class AActor* Actor_Making_Sound, const struct FVector& Sound_Location, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_LevelSoundFunctions.BendLib_LevelSoundFunctions_C.LevelSoundEventUpdate");

	UBendLib_LevelSoundFunctions_C_LevelSoundEventUpdate_Params params;
	params.Event_Name = Event_Name;
	params.Actor_Making_Sound = Actor_Making_Sound;
	params.Sound_Location = Sound_Location;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
