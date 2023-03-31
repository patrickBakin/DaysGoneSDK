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

// WidgetBlueprintGeneratedClass UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C
// 0x0058 (0x03A8 - 0x0350)
class UUI_PhotoModeMenuBase_C : public UBaseMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUI_PhotoModeRowBase_C*                      SelectedRow;                                              // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MenuIndexSelected;                                        // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxIndex;                                                 // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UUI_PhotoModeRowBase_C*>              AllRows;                                                  // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       MenuTitle;                                                // 0x0378(0x0018) (Edit, BlueprintVisible)
	TArray<class UWidget*>                             MainVBoxArray;                                            // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsMenuActive;                                             // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A1(0x0003) MISSED OFFSET
	int                                                MenuDirection;                                            // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PhotoModeMenuBase.UI_PhotoModeMenuBase_C");
		return ptr;
	}


	void SetSelectedRow(class UUI_PhotoModeRowBase_C* NewSelectedRow, int SubIndex);
	void SetSubRowSelection(int Index);
	void HandleSubRowSelection(int dir, bool* Handled, int* Index);
	void SetSelection(int Position, bool Positive);
	void HandleRowSelection(int dir, bool* MainIndexInputHandled, int* Index, bool* Positive);
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void Construct();
	void MenuActive(bool Active);
	void ExecuteUbergraph_UI_PhotoModeMenuBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
