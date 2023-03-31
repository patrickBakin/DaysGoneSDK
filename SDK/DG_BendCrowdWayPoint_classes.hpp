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

// BlueprintGeneratedClass BendCrowdWayPoint.BendCrowdWaypoint_C
// 0x0008 (0x0360 - 0x0358)
class ABendCrowdWaypoint_C : public ABendAIWaypoint
{
public:
	class UBoxComponent*                               Box1;                                                     // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendCrowdWayPoint.BendCrowdWaypoint_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
