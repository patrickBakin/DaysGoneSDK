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

// WidgetBlueprintGeneratedClass HUD_Debug_MissionLoad_Button2.HUD_Debug_MissionLoad_Button2_C
// 0x035C (0x05A4 - 0x0248)
class UHUD_Debug_MissionLoad_Button2_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Bullet;                                                   // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UButton*                                     TheButton;                                                // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       ButtonText;                                               // 0x0260(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ButtonText2;                                              // 0x0278(0x0018) (Edit, BlueprintVisible)
	struct FName                                       CinematicLevel;                                           // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendMissionData*                            TimeAndWEather;                                           // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionCategories>                    MissionAct;                                               // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMissionIDs>                           MissionID;                                                // 0x02A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x02A2(0x0006) MISSED OFFSET
	class UJobClassInfo*                               JobID;                                                    // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02B8(0x0008) MISSED OFFSET
	struct FBendDemoJumpPoints                         DemoPointsStruct;                                         // 0x02C0(0x01A0) (Edit, BlueprintVisible)
	struct FStruct_DebugStringLocation                 LocationStruc;                                            // 0x0460(0x0040) (Edit, BlueprintVisible)
	TEnumAsByte<EInventoryWeaponID>                    Weapon;                                                   // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x04A1(0x0007) MISSED OFFSET
	TArray<class UBendMissionData*>                    MissionData;                                              // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FGameplayTag                                WeaponTag;                                                // 0x04B8(0x0008) (Edit, BlueprintVisible)
	class UClass*                                      BikePart;                                                 // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBendCinematicLevelData                     CinematicData;                                            // 0x04C8(0x00D8) (Edit, BlueprintVisible)
	int                                                SpecialIndex;                                             // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Debug_MissionLoad_Button2.HUD_Debug_MissionLoad_Button2_C");
		return ptr;
	}


	void SetSelected(bool Selected_);
	struct FText SetButtonText();
	void Construct();
	void ExecuteUbergraph_HUD_Debug_MissionLoad_Button2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
