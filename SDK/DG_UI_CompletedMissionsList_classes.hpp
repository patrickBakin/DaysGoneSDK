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

// WidgetBlueprintGeneratedClass UI_CompletedMissionsList.UI_CompletedMissionsList_C
// 0x00F0 (0x0338 - 0x0248)
class UUI_CompletedMissionsList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                                  CompletedMissionScrollbox;                                // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGridPanel*                                  EmptyListNotification;                                    // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UUI_CompletedMissionsStorylineGroup_C*       UI_CompletedMissionsStorylineGroup;                       // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FJournalEntryData>                   Story_Missions_Data;                                      // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FJournalEntryData>                   Optional_Missions_Data;                                   // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UJournalListItem*>                    List_Items;                                               // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UJournalListItem*                            Selected_Item;                                            // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Selected_Index;                                           // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Item_Count;                                               // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UObject*>                             Missions_Data;                                            // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UObject*>                             Optional_Missions;                                        // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnItemSelected;                                           // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                Storylines_Count;                                         // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Optional_Count;                                           // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FBendStoryLinesForScripting>         Storylines_Data;                                          // 0x02E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UUI_CompletedMissionsStorylineGroup_C*> Storyline_Groups;                                         // 0x02F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        StorylineGroupLookup;                                     // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        StorylineFirstIndexLookup;                                // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UUI_CompletedMissionsStorylineGroup_C*       Selected_Storyline;                                       // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FBendStoryLinesForScripting>         ActiveStorylinesData;                                     // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CompletedMissionsList.UI_CompletedMissionsList_C");
		return ptr;
	}


	void SelectMission(class UObject* MissionOrJob);
	void Highlight_Group(class UUI_CompletedMissionsStorylineGroup_C* Group, bool Should_Highlight);
	void Collapse_Storyline(bool* Did_Collapse);
	void Expand_Storyline(bool* Did_Expand_);
	void Get_Storyline_Group_At_Index(int Index, class UUI_CompletedMissionsStorylineGroup_C** Storyline_Group, int* Storyline_Group_Index);
	void Toggle_Expansion(bool* Was_Expanded_);
	void Section_Down();
	void Section_Up();
	void Get_Data_By_Index(int Index, class UObject** Mission, struct FBendStoryLinesForScripting* StoryLine, bool* Is_Storyline_Header_);
	void Is_Empty(bool* Is_List_Empty_);
	void Set_Selected_Index(int Value);
	void Cursor_Down();
	void Cursor_Up();
	void Invalidate();
	void Set_Data(TArray<struct FBendStoryLinesForScripting>* Storylines_Data);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void FreeWidgets();
	void HandleGroupClicked(class UJournalListItem* Item);
	void HandleItemHovered(int Index, class UJournalListItem* Group);
	void HandleGroupHovered(class UJournalListItem* Item);
	void ExecuteUbergraph_UI_CompletedMissionsList(int EntryPoint);
	void OnItemSelected__DelegateSignature(bool Is_Mission, class UObject* Mission, const struct FBendStoryLinesForScripting& StoryLine, int Index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
