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

// BlueprintGeneratedClass DebugZenModeInterface.DebugZenModeInterface_C
// 0x0000 (0x0028 - 0x0028)
class UDebugZenModeInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DebugZenModeInterface.DebugZenModeInterface_C");
		return ptr;
	}


	void DisableZenMode();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
