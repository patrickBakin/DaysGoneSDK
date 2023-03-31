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

// BlueprintGeneratedClass BendPhysicsSurfaceConditionsManagerBP.BendPhysicsSurfaceConditionsManagerBP_C
// 0x0008 (0x03A8 - 0x03A0)
class ABendPhysicsSurfaceConditionsManagerBP_C : public ABendPhysicsSurfaceConditionsManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendPhysicsSurfaceConditionsManagerBP.BendPhysicsSurfaceConditionsManagerBP_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
