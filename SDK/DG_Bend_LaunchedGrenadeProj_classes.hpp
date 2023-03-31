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

// BlueprintGeneratedClass Bend_LaunchedGrenadeProj.Bend_LaunchedGrenadeProj_C
// 0x0008 (0x21E8 - 0x21E0)
class ABend_LaunchedGrenadeProj_C : public ABendProjectile
{
public:
	class UStaticMeshComponent*                        GrenadeMesh;                                              // 0x21E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_LaunchedGrenadeProj.Bend_LaunchedGrenadeProj_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
