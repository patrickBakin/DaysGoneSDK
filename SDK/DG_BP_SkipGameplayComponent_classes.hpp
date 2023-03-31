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

// BlueprintGeneratedClass BP_SkipGameplayComponent.BP_SkipGameplayComponent_C
// 0x0010 (0x0120 - 0x0110)
class UBP_SkipGameplayComponent_C : public UBendSkipGamePlaySectionComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0110(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHudWidget*                                  HUD_Ref;                                                  // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SkipGameplayComponent.BP_SkipGameplayComponent_C");
		return ptr;
	}


	void DisplayMissionSkipButton();
	void RemoveMissionSkipButton(bool* Hide);
	void UpdatePercent(float* Percent);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_BP_SkipGameplayComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
