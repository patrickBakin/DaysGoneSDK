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

// BlueprintGeneratedClass POI_GorePile_Slot.POI_GorePile_Slot_C
// 0x0018 (0x0930 - 0x0918)
class APOI_GorePile_Slot_C : public ABendPOIGoreSlot
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0918(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    AtLocation;                                               // 0x0920(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass POI_GorePile_Slot.POI_GorePile_Slot_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnPathComplete(TEnumAsByte<EPathFollowingResult>* Result);
	void ExecuteUbergraph_POI_GorePile_Slot(int EntryPoint);
	void AtLocation__DelegateSignature(class ABendAIController* SlotUser, class ABendPOISlot* Slot);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
