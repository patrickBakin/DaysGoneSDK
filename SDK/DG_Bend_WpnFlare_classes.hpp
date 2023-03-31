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

// BlueprintGeneratedClass Bend_WpnFlare.Bend_WpnFlare_C
// 0x0024 (0x2AA4 - 0x2A80)
class ABend_WpnFlare_C : public ABendWeapon_Projectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2A80(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       ThrowVOExert;                                             // 0x2A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ThrowVOVerbal;                                            // 0x2A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ThrowVOStealth;                                           // 0x2A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerbalVOChance;                                           // 0x2AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_WpnFlare.Bend_WpnFlare_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnThrowWeapon();
	void ExecuteUbergraph_Bend_WpnFlare(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
