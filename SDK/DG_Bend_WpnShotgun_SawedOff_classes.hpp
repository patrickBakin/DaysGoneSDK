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

// BlueprintGeneratedClass Bend_WpnShotgun_SawedOff.Bend_WpnShotgun_SawedOff_C
// 0x0002 (0x2B8A - 0x2B88)
class ABend_WpnShotgun_SawedOff_C : public ABend_Wpn_Shotgun_Base_C
{
public:
	bool                                               isRiding_1;                                               // 0x2B88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FlashlightEnabled;                                        // 0x2B89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_WpnShotgun_SawedOff.Bend_WpnShotgun_SawedOff_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
