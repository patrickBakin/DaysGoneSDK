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

// WidgetBlueprintGeneratedClass DLC_ChallengesMenu.DLC_ChallengesMenu_C
// 0x005C (0x03AC - 0x0350)
class UDLC_ChallengesMenu_C : public UBaseMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            LoadoutToLeaderboard;                                     // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                            ChallengeToLoadout;                                       // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UDLC_ChallengesPage_C*                       Challenges;                                               // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UDLC_LoadoutPage_C*                          Loadout;                                                  // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UDLCMenuPage*                                CurrentMenu;                                              // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SelectedChallenge;                                        // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInputBlocked;                                            // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ChallengeSelected;                                        // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UMaterialInstanceDynamic*                    MI_HeaderImage;                                           // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentChallengeIndex;                                    // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DLC_ChallengesMenu.DLC_ChallengesMenu_C");
		return ptr;
	}


	void BeginTransition(class UWidgetAnimation* InAnimation, TEnumAsByte<EUMGSequencePlayMode> PlayMode);
	void OnChallengeSelected(const struct FName& Key, const struct FGameplayTag& Tag);
	void HandleNavigation();
	void To_Challenges_|_From_Loadout();
	void To_Loadout_|_From_Challenges();
	void To_Weekly_Challenge_Loadout(const struct FName& ChallengeTagName);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void OnCancelPressed();
	void OnConfirmPressed();
	void BndEvt__LoadoutToLeaderboard_K2Node_ComponentBoundEvent_717_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__ChallengeToLoadout_K2Node_ComponentBoundEvent_720_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__DLC_ChallengesPage_K2Node_ComponentBoundEvent_1027_DLCMenuPageAction__DelegateSignature();
	void BndEvt__DLC_ChallengesPage_K2Node_ComponentBoundEvent_1031_DLCMenuPageAction__DelegateSignature();
	void BndEvt__DLC_LoadoutPage_K2Node_ComponentBoundEvent_1042_DLCMenuPageAction__DelegateSignature();
	void BndEvt__Loadout_K2Node_ComponentBoundEvent_1024_DLCMenuPageAction__DelegateSignature();
	void OnWidgetClosed();
	void BndEvt__CurrentMenu_K2Node_ComponentBoundEvent_56_DLCMenuPageAction__DelegateSignature();
	void OnPagePreviousPressed();
	void OnPageNextPressed();
	void OnLeftPressed();
	void OnRightPressed();
	void OnDownPressed();
	void OnUpPressed();
	void ExecuteUbergraph_DLC_ChallengesMenu(int EntryPoint);
	void ChallengeSelected__DelegateSignature(TEnumAsByte<EMissionIDs> ChallengeID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
