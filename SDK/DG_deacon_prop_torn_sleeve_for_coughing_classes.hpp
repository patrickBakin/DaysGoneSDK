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

// BlueprintGeneratedClass deacon_prop_torn_sleeve_for_coughing.deacon_prop_torn_sleeve_for_coughing_C
// 0x0010 (0x0358 - 0x0348)
class Adeacon_prop_torn_sleeve_for_coughing_C : public AActor
{
public:
	class USkeletalMeshComponent*                      deacon_prop_torn_sleeve_rig;                              // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass deacon_prop_torn_sleeve_for_coughing.deacon_prop_torn_sleeve_for_coughing_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
