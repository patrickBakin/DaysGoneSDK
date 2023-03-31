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

// BlueprintGeneratedClass BendMusicManagerBP.BendMusicManagerBP_C
// 0x002D (0x0075 - 0x0048)
class UBendMusicManagerBP_C : public UBendMusicManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0048(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              NumBulletBys;                                             // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsCurrentMusicManager;                                    // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	TArray<struct FName>                               QueuedEvents;                                             // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       MX_IntensityOverride;                                     // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NeroSpeakerState;                                         // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               KilledByHuman;                                            // 0x0071(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               KilledByHorde;                                            // 0x0072(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               KilledByHorde_1;                                          // 0x0073(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDeathBlowAnimation;                                     // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendMusicManagerBP.BendMusicManagerBP_C");
		return ptr;
	}


	void StartOW_PostMissionEnd();
	void SetStealthIntensityHigh();
	void SetStealthIntensityLow();
	void NeroSpeakerOff();
	void NeroSpeakerOn();
	void EndJobMusic();
	void SetIntensityClampMinHigh();
	void SetIntensityClampMaxHigh();
	void SetIntensityOverrideHorde();
	void SetIntensityClampMaxLow2();
	void SetIntensityClampMaxMedium();
	void SetIntensityClampMinMedium();
	void SetIntensityClampMinLow2();
	void SetIntensityClampMinLow1();
	void SetIntensityOverrideDisable();
	void SetIntensityOverrideIdle();
	void SetIntensityOverrideLow1();
	void SetIntensityOverrideLow2();
	void SetIntensityOverrideMedium();
	void SetIntensityOverrideHigh();
	void OnCinematicInterrupted();
	void OnCinematicStarted();
	void PassQueuedEventsToNewManager();
	void OnPlayerDeath();
	void EndEventMusic();
	void PlayEventOverlaySync();
	void MusicEventUpdate(const struct FName& Event_Name, bool* Bool);
	void TickInteractiveMusic();
	void PlayInteractiveMusic(bool* Bool);
	void BulletNearPlayer();
	void PlayOverlayMusic(class UClass* Event_Music, class USoundCue* Sound_Cue, bool Play_During_Pause);
	void PlayEventMusic(class UClass* Event_Music, class USoundCue* Sound_Cue);
	void PlayEventMusicRequested(class UClass* Event_Music, class USoundCue* Event_Sound_Cue);
	void PlayOverlayMusicRequested(class UClass* Overlay_Music, class USoundCue* Overlay_Sound_Cue);
	void OnBulletPassedByNearPlayer();
	void EventUpdate(const struct FName& Event_Name);
	void OnSetAsCurrentMusicManager(struct FName* MusicEventName);
	void OnRemovedAsCurrentMusicManager();
	void OnCinematicAudioStarted();
	void OnPlayerDied(TEnumAsByte<EAIFactionType>* KilledByFaction, TEnumAsByte<ETypeOfBaseDamage>* BaseDamageType, TEnumAsByte<ETypeOfDamage>* DamageType, float* AmountOfDamage);
	void OnMeleeDeathBlow(class ABendPawn* Attacker, class ABendPawn* Victim);
	void OWMusicHasStarted();
	void ExecuteUbergraph_BendMusicManagerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
