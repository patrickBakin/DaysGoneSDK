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

// BlueprintGeneratedClass BP_BendInventoryPickup_Bolt_Fire.BP_BendInventoryPickup_Bolt_Fire_C
// 0x0008 (0x08D8 - 0x08D0)
class ABP_BendInventoryPickup_Bolt_Fire_C : public ABP_BendInventoryPickup_Bolt_Physics_C
{
public:
	class UStaticMeshComponent*                        wpnCrossbow_bolt_flame;                                   // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BendInventoryPickup_Bolt_Fire.BP_BendInventoryPickup_Bolt_Fire_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
