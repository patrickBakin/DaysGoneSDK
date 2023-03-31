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

// BlueprintGeneratedClass WolfController.WolfController_C
// 0x0008 (0x0FE8 - 0x0FE0)
class AWolfController_C : public ABendWolfController
{
public:
	class UBendAnimalWarningGroupComponent*            BendAnimalWarningGroup;                                   // 0x0FE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WolfController.WolfController_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
