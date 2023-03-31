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

// BlueprintGeneratedClass Bend_Wpn_CarryThrowBase.Bend_Wpn_CarryThrowBase_C
// 0x0034 (0x2AB4 - 0x2A80)
class ABend_Wpn_CarryThrowBase_C : public ABendWeapon_Projectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2A80(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDropWeaponComponent_C*                      DropWeaponComponent;                                      // 0x2A88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ObjectOriginalPickup;                                     // 0x2A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ThrowVOExert;                                             // 0x2A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ThrowVOVerbal;                                            // 0x2AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ThrowVOStealth;                                           // 0x2AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerbalVOChance;                                           // 0x2AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_Wpn_CarryThrowBase.Bend_Wpn_CarryThrowBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_Player_Climb_UniqueObjectNameForCooking_508(const struct FKey& Key);
	void InpActEvt_Player_Climb_UniqueObjectNameForCooking_507(const struct FKey& Key);
	void InpActEvt_Player_Climb_UniqueObjectNameForCooking_506(const struct FKey& Key);
	void ReceiveBeginPlay();
	void WeaponRelease();
	void OnThrowWeapon();
	void ExecuteUbergraph_Bend_Wpn_CarryThrowBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
