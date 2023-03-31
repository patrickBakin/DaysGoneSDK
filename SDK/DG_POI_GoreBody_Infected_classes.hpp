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

// BlueprintGeneratedClass POI_GoreBody_Infected.POI_GoreBody_Infected_C
// 0x0000 (0x0418 - 0x0418)
class APOI_GoreBody_Infected_C : public APOI_GoreBody_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass POI_GoreBody_Infected.POI_GoreBody_Infected_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
