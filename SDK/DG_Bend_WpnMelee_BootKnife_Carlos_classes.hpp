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

// BlueprintGeneratedClass Bend_WpnMelee_BootKnife_Carlos.Bend_WpnMelee_BootKnife_Carlos_C
// 0x0010 (0x2B10 - 0x2B00)
class ABend_WpnMelee_BootKnife_Carlos_C : public ABend_WpnMelee_Knife_Base_C
{
public:
	class UMaterialInstanceDynamic*                    BatMaterial;                                              // 0x2B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RecentlyHitEnemy;                                         // 0x2B08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2B09(0x0003) MISSED OFFSET
	float                                              TimeSinceLastHit;                                         // 0x2B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_WpnMelee_BootKnife_Carlos.Bend_WpnMelee_BootKnife_Carlos_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
