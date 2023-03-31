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

// BlueprintGeneratedClass Bend_SearchAnimalBody_Pickup.Bend_SearchAnimalBody_Pickup_C
// 0x000C (0x06E0 - 0x06D4)
class ABend_SearchAnimalBody_Pickup_C : public ABend_SearchBody_Pickup_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06D4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_SearchAnimalBody_Pickup.Bend_SearchAnimalBody_Pickup_C");
		return ptr;
	}


	void GetNumDrops(const struct FName& AnimalSubclass, int* NumItem);
	void UserConstructionScript();
	void HandlePickupLogic();
	void InitInteract();
	void OnInputSucceeded();
	void ExecuteUbergraph_Bend_SearchAnimalBody_Pickup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
