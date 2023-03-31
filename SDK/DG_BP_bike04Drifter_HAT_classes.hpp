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

// BlueprintGeneratedClass BP_bike04Drifter_HAT.BP_bike04Drifter_HAT_C
// 0x0059 (0x0C71 - 0x0C18)
class ABP_bike04Drifter_HAT_C : public ABP_BikeBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C18(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      DrifterBike_Forks_CBRadio_ub;                             // 0x0C20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMiniMapLocationComponent*                   MiniMapLocation1;                                         // 0x0C28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAB_bike_size>                         BikeSize;                                                 // 0x0C30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C31(0x0007) MISSED OFFSET
	struct FName                                       Emissive_Scale__Headlight_;                               // 0x0C38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EBendVehicleHeadlightBrightnessEnum>   HeadlightBrightness;                                      // 0x0C40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0C41(0x0007) MISSED OFFSET
	struct FName                                       Emissive_Scale__Brakelight_;                              // 0x0C48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BrakelightMaterial_1;                                     // 0x0C50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HeadlightMainMaterial;                                    // 0x0C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    HeadlightSideMaterial;                                    // 0x0C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABendPlayerPawn*                             PlayerPawn;                                               // 0x0C68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               BikeStarted;                                              // 0x0C70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_bike04Drifter_HAT.BP_bike04Drifter_HAT_C");
		return ptr;
	}


	void WhatBikeIsThis(TEnumAsByte<EAB_bike_size>* VehBIkeType);
	void UserConstructionScript();
	void ExecuteUbergraph_BP_bike04Drifter_HAT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
