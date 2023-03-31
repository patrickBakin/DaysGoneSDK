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

// BlueprintGeneratedClass Bend_WpnMG45.Bend_WpnMG45_C
// 0x0020 (0x2B68 - 0x2B48)
class ABend_WpnMG45_C : public ABend_Wpn_HeavyMachineGun_Base_C
{
public:
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterialArray;                                     // 0x2B48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          ClipMaterial;                                             // 0x2B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          InvisMaterial;                                            // 0x2B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_WpnMG45.Bend_WpnMG45_C");
		return ptr;
	}


	void SetBulletsVisibility();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
