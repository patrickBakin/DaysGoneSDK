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

// BlueprintGeneratedClass Interface_PickupableObject.Interface_PickupableObject_C
// 0x0000 (0x0028 - 0x0028)
class UInterface_PickupableObject_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interface_PickupableObject.Interface_PickupableObject_C");
		return ptr;
	}


	void MomentOfDrop();
	void MomentOfPickup();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
