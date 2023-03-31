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

// BlueprintGeneratedClass NavFilter_MapWaypoint.NavFilter_MapWaypoint_C
// 0x0000 (0x0058 - 0x0058)
class UNavFilter_MapWaypoint_C : public UBendNavigationQueryFilter_Human_Default
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NavFilter_MapWaypoint.NavFilter_MapWaypoint_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
