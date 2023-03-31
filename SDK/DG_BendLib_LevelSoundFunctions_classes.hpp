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

// BlueprintGeneratedClass BendLib_LevelSoundFunctions.BendLib_LevelSoundFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UBendLib_LevelSoundFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendLib_LevelSoundFunctions.BendLib_LevelSoundFunctions_C");
		return ptr;
	}


	void STATIC_RemoveLevelSoundManager(TAssetPtr<class UClass> LevelSoundManager, const struct FName& LevelSoundEventUpdate, class UObject* __WorldContext);
	void STATIC_SetLevelSoundManager(TAssetPtr<class UClass> LevelSoundManager, const struct FName& LevelSoundEventUpdate, class UObject* __WorldContext);
	void STATIC_LevelSoundEventUpdate(const struct FName& Event_Name, class AActor* Actor_Making_Sound, const struct FVector& Sound_Location, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
