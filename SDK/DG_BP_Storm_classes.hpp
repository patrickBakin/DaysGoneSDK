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

// BlueprintGeneratedClass BP_Storm.BP_Storm_C
// 0x0045 (0x038D - 0x0348)
class ABP_Storm_C : public AActor
{
public:
	class UCapsuleComponent*                           Capsule;                                                  // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              LightningClasses;                                         // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EObjectTypeQuery>>              LightningHitTypes;                                        // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class ABP_LightningBase_C*                         Active_Lightning;                                         // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Lightning_Trace_Offset;                                   // 0x0380(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Display_Storm_Bounds;                                     // 0x038C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Storm.BP_Storm_C");
		return ptr;
	}


	void Spawn_Lighting_Blueprint(const struct FVector& Location, class ABP_LightningBase_C** Result);
	void Choose_Location(struct FVector* Location, struct FVector* Center);
	void SpawnLighting(struct FVector* LightningCenter);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
