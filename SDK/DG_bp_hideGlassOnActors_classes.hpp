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

// BlueprintGeneratedClass bp_hideGlassOnActors.bp_hideGlassOnActors_C
// 0x0038 (0x0380 - 0x0348)
class Abp_hideGlassOnActors_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Actors;                                                   // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class UMaterialInterface*                          HiddenMaterial;                                           // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  GlassMaterialParents;                                     // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UPhysicalMaterial*                           GlassPhysicalMaterial;                                    // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bp_hideGlassOnActors.bp_hideGlassOnActors_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
