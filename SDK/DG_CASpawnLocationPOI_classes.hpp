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

// BlueprintGeneratedClass CASpawnLocationPOI.CASpawnLocationPOI_C
// 0x0001 (0x0401 - 0x0400)
class ACASpawnLocationPOI_C : public ABendPOI
{
public:
	bool                                               IsUnitInsideSomething;                                    // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CASpawnLocationPOI.CASpawnLocationPOI_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
