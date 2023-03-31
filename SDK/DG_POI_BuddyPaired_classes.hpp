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

// BlueprintGeneratedClass POI_BuddyPaired.POI_BuddyPaired_C
// 0x000B (0x04B8 - 0x04AD)
class APOI_BuddyPaired_C : public AGenericPOI_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x04AD(0x0003) MISSED OFFSET
	class UChildActorComponent*                        Slot;                                                     // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass POI_BuddyPaired.POI_BuddyPaired_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
