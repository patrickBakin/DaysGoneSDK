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

// BlueprintGeneratedClass Bend_Wpn_Remington700.Bend_Wpn_Remington700_C
// 0x0008 (0x2B78 - 0x2B70)
class ABend_Wpn_Remington700_C : public ABend_Wpn_Rifle_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2B70(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_Wpn_Remington700.Bend_Wpn_Remington700_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnClipLoaded(int* MaterialIndex);
	void OnOutOfAmmo();
	void OnFireOnEmpty();
	void OnReloadStarted();
	void OnFired();
	void OnClipRemoved(int* MaterialIndex);
	void ExecuteUbergraph_Bend_Wpn_Remington700(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
