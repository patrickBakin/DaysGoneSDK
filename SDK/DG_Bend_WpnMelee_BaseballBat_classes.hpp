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

// BlueprintGeneratedClass Bend_WpnMelee_BaseballBat.Bend_WpnMelee_BaseballBat_C
// 0x0018 (0x2B18 - 0x2B00)
class ABend_WpnMelee_BaseballBat_C : public ABend_WpnMelee_Blunt_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2B00(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*                    BatMaterial;                                              // 0x2B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RecentlyHitEnemy;                                         // 0x2B10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2B11(0x0003) MISSED OFFSET
	float                                              TimeSinceLastHit;                                         // 0x2B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_WpnMelee_BaseballBat.Bend_WpnMelee_BaseballBat_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDamaged(bool* OwnerIsPlayer, float* WeaponsHealthPercentage);
	void ExecuteUbergraph_Bend_WpnMelee_BaseballBat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
