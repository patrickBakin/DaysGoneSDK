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

// BlueprintGeneratedClass Interface_GroundMovement.Interface_GroundMovement_C
// 0x0000 (0x0028 - 0x0028)
class UInterface_GroundMovement_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interface_GroundMovement.Interface_GroundMovement_C");
		return ptr;
	}


	void UseTurretRequestTempHack(bool UseTurret);
	void GetDesiredGroundIdleState(TEnumAsByte<Enum_DesiredGroundIdleState>* DesiredGroundIdleState);
	void SetDesiredGroundIdleState(TEnumAsByte<Enum_DesiredGroundIdleState> DesiredGroundIldeState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
