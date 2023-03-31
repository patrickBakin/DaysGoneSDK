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

// BlueprintGeneratedClass Cond_GDB_BoozerIsAlive.Cond_GDB_BoozerIsAlive_C
// 0x000C (0x0044 - 0x0038)
class UCond_GDB_BoozerIsAlive_C : public UBendUseCondition
{
public:
	struct FVector                                     CampLocation;                                             // 0x0038(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Cond_GDB_BoozerIsAlive.Cond_GDB_BoozerIsAlive_C");
		return ptr;
	}


	bool CanUse(class UObject** CondOwner);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
