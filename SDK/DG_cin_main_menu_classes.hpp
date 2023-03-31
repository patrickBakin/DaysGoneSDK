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

// BlueprintGeneratedClass cin_main_menu.cin_main_menu_C
// 0x0098 (0x03F0 - 0x0358)
class Acin_main_menu_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUI_MainMenuWidget_C*                        WidgetRef;                                                // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ERegions>                              Region;                                                   // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	class AVehiclePawn*                                VehiclePawn;                                              // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      VehicleClass;                                             // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             Title_screen_sound_loop;                                  // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUserWidget*                                 NewVar_1;                                                 // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      SpawnBelknap_ExecuteUbergraph_cin_main_menu_RefProperty;  // 0x0390(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpawnCascade_ExecuteUbergraph_cin_main_menu_RefProperty;  // 0x0398(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpawnCraterLake_ExecuteUbergraph_cin_main_menu_RefProperty;// 0x03A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpawnLost_ExecuteUbergraph_cin_main_menu_RefProperty;     // 0x03A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpawnIron_ExecuteUbergraph_cin_main_menu_RefProperty;     // 0x03B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpawnHighway_ExecuteUbergraph_cin_main_menu_RefProperty;  // 0x03B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                cin_main_menu_camera_belknap_ExecuteUbergraph_cin_main_menu_RefProperty;// 0x03C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                cin_main_menu_camera_cascade_ExecuteUbergraph_cin_main_menu_RefProperty;// 0x03C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                cin_main_menu_camera_craterlake_ExecuteUbergraph_cin_main_menu_RefProperty;// 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                cin_main_menu_camera_highway97_ExecuteUbergraph_cin_main_menu_RefProperty;// 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                cin_main_menu_camera_ironbutte_ExecuteUbergraph_cin_main_menu_RefProperty;// 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                cin_main_menu_camera_lostlake_ExecuteUbergraph_cin_main_menu_RefProperty;// 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass cin_main_menu.cin_main_menu_C");
		return ptr;
	}


	void SetHeroBike(class UBendSavePlayerProfile* Save_Data, class AVehiclePawn* Vehicle);
	void ReceiveBeginPlay();
	void OptionSelected();
	void DeveloperLoad();
	void UnlockFullMapNav();
	void NewGameLoad();
	void UnlockNewGameMap();
	void OnFadeFromBlackStart_MM_Event_1(const struct FString& Message);
	void FinishedLoading();
	void MainMenuMusicStop();
	void MainMenuMusicStart();
	void OnDisplayCalibrationClosed();
	void ExecuteUbergraph_cin_main_menu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
