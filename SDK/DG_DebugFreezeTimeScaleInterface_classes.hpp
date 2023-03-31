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

// BlueprintGeneratedClass DebugFreezeTimeScaleInterface.DebugFreezeTimeScaleInterface_C
// 0x0000 (0x0028 - 0x0028)
class UDebugFreezeTimeScaleInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DebugFreezeTimeScaleInterface.DebugFreezeTimeScaleInterface_C");
		return ptr;
	}


	void DebugFreezeTimeScale();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
