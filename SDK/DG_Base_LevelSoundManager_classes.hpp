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

// BlueprintGeneratedClass Base_LevelSoundManager.Base_LevelSoundManager_C
// 0x000A (0x003A - 0x0030)
class UBase_LevelSoundManager_C : public UBendLevelSoundManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               ConversationAudioDucked;                                  // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InteractionAudioDucked;                                   // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_LevelSoundManager.Base_LevelSoundManager_C");
		return ptr;
	}


	void ExitedVehicle(class AActor* Actor_Making_Sound, const struct FVector& Sound_Location, bool* Return);
	void EnteredVehicle(class AActor* Actor_Making_Sound, const struct FVector& Sound_Location, bool* Return);
	void InteractionEnded(class AActor* Actor_Making_Sound, const struct FVector& Sound_Location, bool* Return);
	void InteractionStarted(class AActor* Actor_Making_Sound, const struct FVector& Sound_Location, bool* Return);
	void ConversationEnded(class AActor* Actor_Making_Sound, const struct FVector& Sound_Location, bool* Return);
	void ConversationStarted(class AActor* Actor_Making_Sound, const struct FVector& Sound_Location, bool* Return);
	void MeleeCriticalHitSuccessful(class AActor* Actor_Making_Sound, const struct FVector& Sound_Location, bool* Return);
	void SetAsCurrentManager(bool* Return);
	void Tick(bool* Return);
	void SoundLevelEventUpdate(const struct FName& Event_Name, class AActor* Actor_Making_Sound, const struct FVector& Sound_Location, bool* Return);
	void EventUpdate(const struct FName& Event_Name, class AActor* Actor_Making_Sound, const struct FVector& Sound_Location);
	void OnSetAsCurrentLevelSoundManager(struct FName* LevelSoundEventName);
	void ExecuteUbergraph_Base_LevelSoundManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
