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

// BlueprintGeneratedClass GameEventManagerBP.GameEventManagerBP_C
// 0x0000 (0x01A8 - 0x01A8)
class UGameEventManagerBP_C : public UBendGameEventManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GameEventManagerBP.GameEventManagerBP_C");
		return ptr;
	}


	void OnGameEvent(struct FBendGameEventBase* Event);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
