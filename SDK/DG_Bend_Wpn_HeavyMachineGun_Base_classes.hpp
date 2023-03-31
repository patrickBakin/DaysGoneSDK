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

// BlueprintGeneratedClass Bend_Wpn_HeavyMachineGun_Base.Bend_Wpn_HeavyMachineGun_Base_C
// 0x000F (0x2B48 - 0x2B39)
class ABend_Wpn_HeavyMachineGun_Base_C : public ABend_Wpn_Gun_Base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2B39(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2B40(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_Wpn_HeavyMachineGun_Base.Bend_Wpn_HeavyMachineGun_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnDrawFinished();
	void OnHolsterFinished();
	void OnFired();
	void OnOutOfAmmo();
	void ExecuteUbergraph_Bend_Wpn_HeavyMachineGun_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
