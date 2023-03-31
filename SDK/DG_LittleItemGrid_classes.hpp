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

// WidgetBlueprintGeneratedClass LittleItemGrid.LittleItemGrid_C
// 0x0040 (0x0288 - 0x0248)
class ULittleItemGrid_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDLCGridWidget*                              GridWidget;                                               // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnItemHovered;                                            // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemClicked;                                            // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LittleItemGrid.LittleItemGrid_C");
		return ptr;
	}


	void BindMouseEvents();
	void OnHover(int Index);
	void OnClick(int Index);
	void BndEvt__GridWidget_K2Node_ComponentBoundEvent_1878_DLCGridSelectionChangedDelegate__DelegateSignature(const struct FName& Key, const struct FGameplayTag& Tag);
	void BndEvt__GridWidget_K2Node_ComponentBoundEvent_6_DLCGridDataChangedDelegate__DelegateSignature();
	void ExecuteUbergraph_LittleItemGrid(int EntryPoint);
	void OnSelectionChanged__DelegateSignature(const struct FName& Key, const struct FGameplayTag& Tag);
	void OnItemClicked__DelegateSignature(int Index);
	void OnItemHovered__DelegateSignature(int Index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
