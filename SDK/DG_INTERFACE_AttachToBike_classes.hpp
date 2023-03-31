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

// BlueprintGeneratedClass INTERFACE_AttachToBike.INTERFACE_AttachToBike_C
// 0x0000 (0x0028 - 0x0028)
class UINTERFACE_AttachToBike_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass INTERFACE_AttachToBike.INTERFACE_AttachToBike_C");
		return ptr;
	}


	void I_DeathStrandingForceUpdate(bool forcereset);
	void I_InteractRangeUpdate(bool InRange);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
