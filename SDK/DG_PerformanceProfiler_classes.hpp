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

// WidgetBlueprintGeneratedClass PerformanceProfiler.PerformanceProfiler_C
// 0x00C0 (0x03D8 - 0x0318)
class UPerformanceProfiler_C : public UBendPerformanceMonitor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                             AutoDetectionState;                                       // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Backdrop;                                                 // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UProgressBar*                                ProgressBar_1;                                            // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class URetainerBox*                                RetainerBox_1;                                            // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FPerfTest                                   Q;                                                        // 0x0340(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPerfTest                                   B;                                                        // 0x0360(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPerfTest                                   P;                                                        // 0x0380(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UPerformanceProfiler_AutodetectItem_C*> Items;                                                    // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentSelection;                                         // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                State;                                                    // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FPerfTest                                   Optimized;                                                // 0x03B8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PerformanceProfiler.PerformanceProfiler_C");
		return ptr;
	}


	void SetState(int Index);
	void SetSelection(int Index);
	float GetPercent_1();
	void MakeText(const struct FPerfTest& PerfTest, struct FText* Text);
	struct FSlateColor Get_FPSCurrent_ColorAndOpacity_1();
	struct FSlateColor Get_FPSMedian_ColorAndOpacity_1();
	struct FText Get_FPSMedian_Text_1();
	struct FText Get_FPSCurrent_Text_1();
	struct FText Get_GPUUsageMedian_Text_1();
	struct FText Get_GPUUsageCurrent_Text_1();
	struct FText Get_FrameMedian_Text_1();
	struct FText Get_GPUMedian_Text_1();
	struct FText Get_FrameCurrent_Text_1();
	struct FText Get_GPUCurrent_Text_1();
	void End_Autodetect();
	void PreAutodetect();
	void PostAutodetect(struct FPerfTest* Optimized);
	void OnAutodetectCancelled();
	void Construct();
	void OnPopupInteract(class UPopupMenuWidget* PopupMenu, TEnumAsByte<ESlatePopupButton> SelectedButton);
	void Cancel();
	void ExecuteUbergraph_PerformanceProfiler(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
