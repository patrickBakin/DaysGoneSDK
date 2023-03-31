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

// BlueprintGeneratedClass IM_BC_01_TargetDespawned.IM_BC_01_TargetDespawned_C
// 0x0000 (0x0040 - 0x0040)
class UIM_BC_01_TargetDespawned_C : public UBikeChaseTargetDespawned_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IM_BC_01_TargetDespawned.IM_BC_01_TargetDespawned_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
