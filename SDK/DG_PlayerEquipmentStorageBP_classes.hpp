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

// BlueprintGeneratedClass PlayerEquipmentStorageBP.PlayerEquipmentStorageBP_C
// 0x0000 (0x00D8 - 0x00D8)
class UPlayerEquipmentStorageBP_C : public UInventoryEquipmentStorage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerEquipmentStorageBP.PlayerEquipmentStorageBP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
