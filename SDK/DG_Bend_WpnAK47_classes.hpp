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

// BlueprintGeneratedClass Bend_WpnAK47.Bend_WpnAK47_C
// 0x0006 (0x2B90 - 0x2B8A)
class ABend_WpnAK47_C : public ABend_Wpn_AssaultRifle_Base_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x2B8A(0x0002) MISSED OFFSET
	int                                                Local_Material_Index_1;                                   // 0x2B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_WpnAK47.Bend_WpnAK47_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
