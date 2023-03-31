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

// BlueprintGeneratedClass Interface_NPCCallout.Interface_NPCCallout_C
// 0x0000 (0x0028 - 0x0028)
class UInterface_NPCCallout_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interface_NPCCallout.Interface_NPCCallout_C");
		return ptr;
	}


	void ActivateObjectiveCallout(TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, bool* Failed);
	void IsCalloutActive(bool* Active);
	void GetAwareness(TEnumAsByte<EAIAwareState>* Awareness);
	void DeactivateCallout(bool* Failed);
	void ActivateCallout(TEnumAsByte<Enum_CalloutType> CalloutType, bool CalloutOverride, bool* Failed);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
