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

// BlueprintGeneratedClass BendVocalFX_femaleSwarmer.BendVocalFX_femaleSwarmer_C
// 0x0008 (0x0378 - 0x0370)
class ABendVocalFX_femaleSwarmer_C : public ABendVocalFXType
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendVocalFX_femaleSwarmer.BendVocalFX_femaleSwarmer_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
