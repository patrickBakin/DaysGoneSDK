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

// BlueprintGeneratedClass IDimmableWidget.IDimmableWidget_C
// 0x0000 (0x0028 - 0x0028)
class UIDimmableWidget_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IDimmableWidget.IDimmableWidget_C");
		return ptr;
	}


	void FadeIn();
	void FadeOut();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
