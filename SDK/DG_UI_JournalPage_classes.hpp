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

// WidgetBlueprintGeneratedClass UI_JournalPage.UI_JournalPage_C
// 0x000F (0x0358 - 0x0349)
class UUI_JournalPage_C : public UUI_MenuPage_Base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_JournalPage.UI_JournalPage_C");
		return ptr;
	}


	void CircleSelectionInputGiven();
	void Construct();
	void CrossSelectionInputGiven();
	void R1orL1SelectionInputGiven(bool* R2);
	void ExecuteUbergraph_UI_JournalPage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
