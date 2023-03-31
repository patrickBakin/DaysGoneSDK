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

// BlueprintGeneratedClass Bend_WpnRock.Bend_WpnRock_C
// 0x0038 (0x2AB8 - 0x2A80)
class ABend_WpnRock_C : public ABendWeapon_Rock
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2A80(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       Tutorial1Key;                                             // 0x2A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBendTutorialSimpleData*                     Tutorial1Data;                                            // 0x2A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_TutorialPanel_C*                         Tutorial1Ref;                                             // 0x2A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Tutorial2Key;                                             // 0x2AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBendTutorialSimpleData*                     Tutorial2Data;                                            // 0x2AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_TutorialPanel_C*                         Tutorial2Ref;                                             // 0x2AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_WpnRock.Bend_WpnRock_C");
		return ptr;
	}


	void ShowTutorial2();
	void ShowTutorial1();
	void UserConstructionScript();
	void OnThrowWeapon();
	void ReceiveBeginPlay();
	void ReenableAim();
	void OnDrawFinished();
	void HideTutorial1();
	void OnHolsterStarted();
	void ExecuteUbergraph_Bend_WpnRock(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
