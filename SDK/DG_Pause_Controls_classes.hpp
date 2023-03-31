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

// BlueprintGeneratedClass Pause_Controls.Pause_Controls_C
// 0x0028 (0x0370 - 0x0348)
class APause_Controls_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Menu_Pause_Sound;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             stop_menu_sound;                                          // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBaseMenuWidget*                             PauseMenuWidget;                                          // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Pause_Controls.Pause_Controls_C");
		return ptr;
	}


	void DLCCanOpenOptionsMenu(bool* bLocked);
	void ForceCloseWeaponWheel();
	void UserConstructionScript();
	void InpActEvt_TogglePauseMenu_options_UniqueObjectNameForCooking_222(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveActorOnInputEnabled();
	void ReceiveActorOnInputDisabled();
	void ExecuteUbergraph_Pause_Controls(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
