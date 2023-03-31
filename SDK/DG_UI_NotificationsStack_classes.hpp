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

// WidgetBlueprintGeneratedClass UI_NotificationsStack.UI_NotificationsStack_C
// 0x0234 (0x047C - 0x0248)
class UUI_NotificationsStack_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Fade;                                                     // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                Container;                                                // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     Wrapper;                                                  // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FUI_HudNotificationDetails>          Queue;                                                    // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MultipleNum;                                              // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxDisplayNum;                                            // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    SingleNotificationComplete;                               // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class UUI_HudNotificationItemNew_C*>        Widgets;                                                  // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    SingleNotificationAdded;                                  // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FUI_HudNotificationDetails                  Current;                                                  // 0x02B0(0x01B0) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                StackDirection;                                           // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StackUp;                                                  // 0x0464(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0465(0x0003) MISSED OFFSET
	TArray<class UUI_HudNotificationItemNew_C*>        UnusedWidgets;                                            // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                StackOffset;                                              // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_NotificationsStack.UI_NotificationsStack_C");
		return ptr;
	}


	void ClearNotifications();
	void ResetQueue();
	void GetFreeNotifyWidget(class UUI_HudNotificationItemNew_C** Widget);
	void HandleDuplicate(const struct FUI_HudNotificationDetails& NewDetails, bool* Unique);
	void SetVisible(bool Visible);
	void CancelNotification(const struct FUI_HudNotificationDetails& Details, bool* Removed);
	void UpdatePositions(const struct FUI_HudNotificationDetails& Details);
	void ProcessQueue(class UUI_HudNotificationItemNew_C** Widget);
	void DisplayNotification(const struct FUI_HudNotificationDetails& Details, class UUI_HudNotificationItemNew_C** Widget);
	void AddNotificationToQueue(const struct FUI_HudNotificationDetails& Details);
	void Construct();
	void SingleNotificationAdded_Event();
	void SingleNotificationComplete_Event(class UUI_HudNotificationItemNew_C* Widget);
	void ExecuteUbergraph_UI_NotificationsStack(int EntryPoint);
	void SingleNotificationAdded__DelegateSignature();
	void SingleNotificationComplete__DelegateSignature(class UUI_HudNotificationItemNew_C* Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
