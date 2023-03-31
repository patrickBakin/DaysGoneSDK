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

// BlueprintGeneratedClass XPEC_EventManager_CPPRM.XPEC_EventManager_CPPRM_C
// 0x0030 (0x0630 - 0x0600)
class AXPEC_EventManager_CPPRM_C : public AXpecEventManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0600(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<EXpecPOIUserGender>>            BeatworkerSexRatio;                                       // 0x0610(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EXpecPOIUserGender>>            m_BeatworkerSexRatioDeck;                                 // 0x0620(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass XPEC_EventManager_CPPRM.XPEC_EventManager_CPPRM_C");
		return ptr;
	}


	class AXpecPOISlot* SpawnScenarioActorSlot();
	class AXpecScenarioInstance* SpawnScenarioInstance();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void FadeFinishRequestSpawn(const struct FString& Message);
	void ExecuteUbergraph_XPEC_EventManager_CPPRM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
