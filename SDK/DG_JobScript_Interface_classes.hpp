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

// BlueprintGeneratedClass JobScript_Interface.JobScript_Interface_C
// 0x0000 (0x0028 - 0x0028)
class UJobScript_Interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass JobScript_Interface.JobScript_Interface_C");
		return ptr;
	}


	void I_InitializeJobScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
