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

// BlueprintGeneratedClass BendLevelSoundManagerInterface.BendLevelSoundManagerInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBendLevelSoundManagerInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendLevelSoundManagerInterface.BendLevelSoundManagerInterface_C");
		return ptr;
	}


	void EventUpdate(const struct FName& Event_Name, class AActor* Actor_Making_Sound, const struct FVector& Sound_Location);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
