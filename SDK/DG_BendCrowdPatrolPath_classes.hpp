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

// BlueprintGeneratedClass BendCrowdPatrolPath.BendCrowdPatrolPath_C
// 0x0001 (0x0369 - 0x0368)
class ABendCrowdPatrolPath_C : public ABendAIWaypointSequence
{
public:
	bool                                               FillWaypointsFromChildren;                                // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendCrowdPatrolPath.BendCrowdPatrolPath_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
