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

// BlueprintGeneratedClass BendDefaultGameMode.BendDefaultGameMode_C
// 0x0074 (0x0D54 - 0x0CE0)
class ABendDefaultGameMode_C : public ABendGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0CE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               Current_Fading_Type;                                      // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               GotOffBike;                                               // 0x0CF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0CF9(0x0007) MISSED OFFSET
	class UBendVehicleClassRef*                        PlayerBikeRef;                                            // 0x0D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               Levels;                                                   // 0x0D08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               BPStreamedHATLevels;                                      // 0x0D18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               ProloguePreLoadLevels;                                    // 0x0D28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FTransform>                          EncampmentPointsForResetting;                             // 0x0D38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     StartPointForResetting;                                   // 0x0D48(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendDefaultGameMode.BendDefaultGameMode_C");
		return ptr;
	}


	void GetClosestEncampmentPointFromOriginalLocation(struct FTransform* Closest);
	struct FString GetLocalizedDifficultyString();
	bool BeginFastTravel(struct FTransform* PlayerTransform, struct FTransform* BikeTransform);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PlayerDeathStartFadeToBlack();
	void PlayerRespawned(class ABendPlayerController* PlayerController);
	void RequestFastTravel(struct FTransform* PlayerTransform, struct FTransform* BikeTransform, struct FName* TravelDestination);
	void OnFadedToBlack_FastTravel(const struct FString& Message);
	void OnFadingFinished_FastTravel(const struct FString& Message);
	void ORWorldLoadedIn();
	void GoToMainMenu();
	void GoToMainMenuForceDLC();
	void GoToMainMenuForceNGP();
	void ResetJobCategory(TEnumAsByte<EJobResetTypes>* TypeToReset, bool* ResetAll);
	void OnFadedToBlack_FastTravel_Copy(const struct FString& Message);
	void OnFadingFinished_MM_Event_1(const struct FString& Message);
	void OnLoadFailure(const struct FText& Message);
	void OnSaveFailure(const struct FText& Message);
	void ExecuteUbergraph_BendDefaultGameMode(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
