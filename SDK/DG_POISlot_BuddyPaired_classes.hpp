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

// BlueprintGeneratedClass POISlot_BuddyPaired.POISlot_BuddyPaired_C
// 0x000C (0x096C - 0x0960)
class APOISlot_BuddyPaired_C : public AGenericPOISlot_C
{
public:
	struct FVector                                     OverrideLocation;                                         // 0x0960(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass POISlot_BuddyPaired.POISlot_BuddyPaired_C");
		return ptr;
	}


	struct FVector GetAutoNavGoal();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
