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

// WidgetBlueprintGeneratedClass UI_ActiveMissionsList.UI_ActiveMissionsList_C
// 0x00A0 (0x02E8 - 0x0248)
class UUI_ActiveMissionsList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                                  ActiveMissionScrollbox;                                   // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UGridPanel*                                  EmptyListNotification;                                    // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FJournalEntryData>                   Data;                                                     // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UUI_ActiveMissionsListItem_C*>        List_Items;                                               // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UJournalListItem*                            Selected_Item;                                            // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Selected_Index;                                           // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Item_Count;                                               // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UObject*>                             Missions;                                                 // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnItemSelected;                                           // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class UUI_CompletedMissionsStorylineGroup_C*> Storyline_Groups;                                         // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        Storyline_Indices;                                        // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UObject*                                     Currently_Tracked_Mission;                                // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnItemClicked;                                            // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ActiveMissionsList.UI_ActiveMissionsList_C");
		return ptr;
	}


	void Update_Tracked_Mission(class UObject* Currently_Tracked_Mission);
	void Select_Storyline_Group(int Index);
	void Get_Storyline_ID_by_Mission(class UObject* Mission, TEnumAsByte<EStoryLines>* Primary_Storyline_ID);
	void Section_Down();
	void Section_Up();
	void Get_Data_By_Index(int Index, class UObject** Mission, struct FJournalEntryData* Mission_Data);
	void Is_Empty(bool* Is_List_Empty_);
	void Set_Selected_Index(int Value);
	void Cursor_Down();
	void Cursor_Up();
	void Invalidate();
	void Set_Data(TArray<class UObject*>* Missions, TArray<struct FJournalEntryData>* Data);
	void FreeWidgets();
	void HandleItemHovered(int Index, class UJournalListItem* Group);
	void HandleItemClicked(int Index, class UJournalListItem* Group);
	void ExecuteUbergraph_UI_ActiveMissionsList(int EntryPoint);
	void OnItemClicked__DelegateSignature();
	void OnItemSelected__DelegateSignature(class UObject* Mission, const struct FJournalEntryData& Data, int Index, const struct FBendStoryLinesForScripting& StoryLine);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
