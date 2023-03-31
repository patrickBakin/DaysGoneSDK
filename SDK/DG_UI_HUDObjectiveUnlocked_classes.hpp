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

// WidgetBlueprintGeneratedClass UI_HUDObjectiveUnlocked.UI_HUDObjectiveUnlocked_C
// 0x0010 (0x0258 - 0x0248)
class UUI_HUDObjectiveUnlocked_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUI_subtitle_bg_C*                           ObjectiveTitle;                                           // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDObjectiveUnlocked.UI_HUDObjectiveUnlocked_C");
		return ptr;
	}


	void SetDetails(const struct FText& Title, const struct FLinearColor& AccentColor);
	void Construct();
	void ExecuteUbergraph_UI_HUDObjectiveUnlocked(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
