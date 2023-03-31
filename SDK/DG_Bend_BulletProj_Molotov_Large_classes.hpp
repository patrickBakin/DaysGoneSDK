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

// BlueprintGeneratedClass Bend_BulletProj_Molotov_Large.Bend_BulletProj_Molotov_Large_C
// 0x0000 (0x2258 - 0x2258)
class ABend_BulletProj_Molotov_Large_C : public ABend_BulletProj_Molotov_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_BulletProj_Molotov_Large.Bend_BulletProj_Molotov_Large_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
