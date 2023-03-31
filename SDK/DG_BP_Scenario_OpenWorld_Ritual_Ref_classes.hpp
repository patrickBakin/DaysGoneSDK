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

// BlueprintGeneratedClass BP_Scenario_OpenWorld_Ritual_Ref.BP_Scenario_OpenWorld_Ritual_Ref_C
// 0x0008 (0x0350 - 0x0348)
class ABP_Scenario_OpenWorld_Ritual_Ref_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Scenario_OpenWorld_Ritual_Ref.BP_Scenario_OpenWorld_Ritual_Ref_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
