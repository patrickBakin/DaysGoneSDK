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

// BlueprintGeneratedClass HumanLootBehaviorPOI.HumanLootBehaviorPOI_C
// 0x0010 (0x0410 - 0x0400)
class AHumanLootBehaviorPOI_C : public ABendPOI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        Slot;                                                     // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HumanLootBehaviorPOI.HumanLootBehaviorPOI_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnGetPriority(float* defaultPriority, TEnumAsByte<EePOIUserType>* userType, class AController** User);
	void ExecuteUbergraph_HumanLootBehaviorPOI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
