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

// WidgetBlueprintGeneratedClass HUD_DebugLoaderBase.HUD_DebugLoaderBase_C
// 0x00F0 (0x0338 - 0x0248)
class UHUD_DebugLoaderBase_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                                  CinematicListScrollBox;                                   // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UTextBlock*                                  TextBlock_583;                                            // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UHUD_Debug_MissionLoad_Button2_C*>    ButtonList;                                               // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Current_Index;                                            // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DontTick;                                                 // 0x0274(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StageTwo;                                                 // 0x0275(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StageThree;                                               // 0x0276(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0277(0x0001) MISSED OFFSET
	struct FText                                       StatisticText;                                            // 0x0278(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       CurrentCin;                                               // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMissionIDs>                           CurrentMission;                                           // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	class AAAA_TimeAndWeatherSettings_C*               ActiveTimeAndWeather;                                     // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EMissionCategories>                    Current_Act;                                              // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02A9(0x0007) MISSED OFFSET
	class UJobClassInfo*                               JobRef;                                                   // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed!;                                                   // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET
	struct FText                                       TitleText;                                                // 0x02C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     CurrentString;                                            // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       OriginalText;                                             // 0x02E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StageTwoText;                                             // 0x0300(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StageThreeText;                                           // 0x0318(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               UseStageThree;                                            // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0331(0x0003) MISSED OFFSET
	int                                                CurrentSpecialIndex;                                      // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_DebugLoaderBase.HUD_DebugLoaderBase_C");
		return ptr;
	}


	struct FText GetText_1();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void Construct();
	void Reset();
	void GoToLast();
	void CirclePressed();
	void XPressed();
	void SetUpDefaults();
	void ExecuteUbergraph_HUD_DebugLoaderBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
