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

// WidgetBlueprintGeneratedClass CategoryItemGrid.CategoryItemGrid_C
// 0x0050 (0x0298 - 0x0248)
class UCategoryItemGrid_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDLCGridWidget*                              GridWidget;                                               // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnItemHovered;                                            // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemClicked;                                            // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemHold;                                               // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CategoryItemGrid.CategoryItemGrid_C");
		return ptr;
	}


	void BindMouseEvents();
	void OnHover(int Index);
	void OnClick(int Index);
	void BndEvt__GridWidget_K2Node_ComponentBoundEvent_1956_DLCGridSelectionChangedDelegate__DelegateSignature(const struct FName& Key, const struct FGameplayTag& Tag);
	void BndEvt__GridWidget_K2Node_ComponentBoundEvent_1367_DLCGridDataChangedDelegate__DelegateSignature();
	void OnHold(int Index, float Time);
	void ExecuteUbergraph_CategoryItemGrid(int EntryPoint);
	void OnItemHold__DelegateSignature(int Index, float Time);
	void OnSelectionChanged__DelegateSignature(const struct FName& Key, const struct FGameplayTag& Tag);
	void OnItemClicked__DelegateSignature(int Index);
	void OnItemHovered__DelegateSignature(int Index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
