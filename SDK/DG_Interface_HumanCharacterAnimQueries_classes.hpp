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

// BlueprintGeneratedClass Interface_HumanCharacterAnimQueries.Interface_HumanCharacterAnimQueries_C
// 0x0000 (0x0028 - 0x0028)
class UInterface_HumanCharacterAnimQueries_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interface_HumanCharacterAnimQueries.Interface_HumanCharacterAnimQueries_C");
		return ptr;
	}


	void GetAnimSet_Character(TEnumAsByte<ECharacterAnimSetEnum>* AnimSet);
	void GetAnimSet_RideVehicle(TEnumAsByte<Enum_AnimSet_RideVehicle>* AnimSet);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
