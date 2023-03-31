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

// BlueprintGeneratedClass Bend_WpnMolotov_Small.Bend_WpnMolotov_Small_C
// 0x0064 (0x2AE4 - 0x2A80)
class ABend_WpnMolotov_Small_C : public ABendWeapon_Projectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2A80(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ASkeletalMeshActor*                          LighterRef;                                               // 0x2A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   LighterSound;                                             // 0x2A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Tutorial1Key;                                             // 0x2A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBendTutorialSimpleData*                     Tutorial1Data;                                            // 0x2AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_TutorialPanel_C*                         Tutorial1Ref;                                             // 0x2AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Tutorial2Key;                                             // 0x2AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBendTutorialSimpleData*                     Tutorial2Data;                                            // 0x2AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUI_TutorialPanel_C*                         Tutorial2Ref;                                             // 0x2AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ThrowVOExert;                                             // 0x2AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ThrowVOVerbal;                                            // 0x2AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ThrowVOStealth;                                           // 0x2AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerbalVOChance;                                           // 0x2AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_WpnMolotov_Small.Bend_WpnMolotov_Small_C");
		return ptr;
	}


	void CheckForLighterSpawn(bool* ShouldSpawn);
	void ShowTutorial2();
	void ShowTutorial1();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnThrowWeapon();
	void OnDrawFinished();
	void ReceiveDestroyed();
	void OnFired();
	void OnHolsterFinished();
	void OnWeaponPinRemoved();
	void HideTutorial1();
	void OnHolsterStarted();
	void ExecuteUbergraph_Bend_WpnMolotov_Small(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
