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

// BlueprintGeneratedClass BendSurfaceType_Flesh.BendSurfaceType_Flesh_C
// 0x0008 (0x0550 - 0x0548)
class ABendSurfaceType_Flesh_C : public ABendSurfaceType
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendSurfaceType_Flesh.BendSurfaceType_Flesh_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
