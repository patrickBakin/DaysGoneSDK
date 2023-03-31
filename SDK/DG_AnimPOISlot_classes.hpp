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

// BlueprintGeneratedClass AnimPOISlot.AnimPOISlot_C
// 0x0010 (0x0910 - 0x0900)
class AAnimPOISlot_C : public ABendPOIAnimSlot
{
public:
	struct FBendLocationReference                      AutoNavGoal;                                              // 0x0900(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimPOISlot.AnimPOISlot_C");
		return ptr;
	}


	struct FVector GetAutoNavGoal();
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
