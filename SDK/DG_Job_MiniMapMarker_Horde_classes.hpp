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

// BlueprintGeneratedClass Job_MiniMapMarker_Horde.Job_MiniMapMarker_Horde_C
// 0x0000 (0x03A9 - 0x03A9)
class AJob_MiniMapMarker_Horde_C : public AJob_MiniMapMarker_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Job_MiniMapMarker_Horde.Job_MiniMapMarker_Horde_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
