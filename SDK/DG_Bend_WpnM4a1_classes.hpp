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

// BlueprintGeneratedClass Bend_WpnM4a1.Bend_WpnM4a1_C
// 0x000E (0x2B98 - 0x2B8A)
class ABend_WpnM4a1_C : public ABend_Wpn_AssaultRifle_Base_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x2B8A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2B90(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_WpnM4a1.Bend_WpnM4a1_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnOutOfAmmo();
	void OnFired();
	void ExecuteUbergraph_Bend_WpnM4a1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
