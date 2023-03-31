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

// WidgetBlueprintGeneratedClass Debug_ScoreManagerWidget.Debug_ScoreManagerWidget_C
// 0x00A8 (0x02F0 - 0x0248)
class UDebug_ScoreManagerWidget_C : public UUserWidget
{
public:
	struct FText                                       ScoreText;                                                // 0x0248(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       ScoreFinalText;                                           // 0x0260(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       RankText;                                                 // 0x0278(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SubObjectiveText1;                                        // 0x0290(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SubObjectiveText2;                                        // 0x02A8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SubObjectiveText3;                                        // 0x02C0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SubObjectiveText4;                                        // 0x02D8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Debug_ScoreManagerWidget.Debug_ScoreManagerWidget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
