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

// BlueprintGeneratedClass staticMeshActor_ParkingLots.staticMeshActor_ParkingLots_C
// 0x0038 (0x0390 - 0x0358)
class AstaticMeshActor_ParkingLots_C : public AStaticMeshActorSMP
{
public:
	struct FString                                     RegionName;                                               // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     regionNumber;                                             // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       Sector;                                                   // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstance*>                   regionalVariantMats;                                      // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass staticMeshActor_ParkingLots.staticMeshActor_ParkingLots_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
