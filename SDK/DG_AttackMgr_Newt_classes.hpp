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

// BlueprintGeneratedClass AttackMgr_Newt.AttackMgr_Newt_C
// 0x0000 (0x0830 - 0x0830)
class UAttackMgr_Newt_C : public UBendAttackManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AttackMgr_Newt.AttackMgr_Newt_C");
		return ptr;
	}


	float GetCurrentGrapplePercent();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
