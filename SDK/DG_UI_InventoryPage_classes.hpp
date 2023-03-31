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

// WidgetBlueprintGeneratedClass UI_InventoryPage.UI_InventoryPage_C
// 0x002F (0x0378 - 0x0349)
class UUI_InventoryPage_C : public UUI_MenuPage_Base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnGoToNextPage;                                           // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGoToPrevPage;                                           // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_InventoryPage.UI_InventoryPage_C");
		return ptr;
	}


	void CircleSelectionInputGiven();
	void Construct();
	void CrossSelectionInputGiven();
	void R1orL1SelectionInputGiven(bool* R2);
	void ResetHoldInput();
	void CrossSelectionHold(float* HoldTime, bool* NeverReset);
	void ExecuteUbergraph_UI_InventoryPage(int EntryPoint);
	void OnGoToPrevPage__DelegateSignature(TEnumAsByte<ENUM_Menu_Type> CurrentMenu);
	void OnGoToNextPage__DelegateSignature(TEnumAsByte<ENUM_Menu_Type> CurrentMenu);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
