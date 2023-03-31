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

// BlueprintGeneratedClass Map_Controls.Map_Controls_C
// 0x0011 (0x0361 - 0x0350)
class AMap_Controls_C : public ABendMapControls
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0350(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMenuTypes>                            MenuToOpen;                                               // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Map_Controls.Map_Controls_C");
		return ptr;
	}


	void IsInPhotoMode(bool* Photo_Mode_Active);
	void ForceCloseWeaponWheel();
	void UserConstructionScript();
	void InpTchEvt_UniqueObjectNameForCooking_1069601(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpTchEvt_UniqueObjectNameForCooking_1069600(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpTchEvt_UniqueObjectNameForCooking_1069599(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location);
	void InpActEvt_TogglePauseMenu_Map_UniqueObjectNameForCooking_220(const struct FKey& Key);
	void InpActEvt_TogglePauseMenu_Map_UniqueObjectNameForCooking_219(const struct FKey& Key);
	void InpActEvt_TogglePauseMenu_Skills_UniqueObjectNameForCooking_218(const struct FKey& Key);
	void InpActEvt_TogglePauseMenu_Inventory_UniqueObjectNameForCooking_217(const struct FKey& Key);
	void InpActEvt_TogglePauseMenu_Storylines_UniqueObjectNameForCooking_216(const struct FKey& Key);
	void InpActEvt_TogglePauseMenu_MapPC_UniqueObjectNameForCooking_215(const struct FKey& Key);
	void InpActEvt_DLC_QuickMenu_UniqueObjectNameForCooking_214(const struct FKey& Key);
	void InpActEvt_DLC_QuickMenu_UniqueObjectNameForCooking_213(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveActorOnInputEnabled();
	void ReceiveActorOnInputDisabled();
	void InputFlickUp();
	void InputFlickLeft();
	void InputFlickRight();
	void InputFlickDown();
	void Toggle_DLC_Dashboard(bool bVisible);
	void ExecuteUbergraph_Map_Controls(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
