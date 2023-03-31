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

// BlueprintGeneratedClass Interface_UpdateAnchor.Interface_UpdateAnchor_C
// 0x0000 (0x0028 - 0x0028)
class UInterface_UpdateAnchor_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interface_UpdateAnchor.Interface_UpdateAnchor_C");
		return ptr;
	}


	void UpdateAnchor(TEnumAsByte<EAnimNotify_UpdateAnchor_Enum_Type> UpdateAnchorType);
	void UpdateAnchor_DodgeAttack();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
