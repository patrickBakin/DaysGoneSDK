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

// BlueprintGeneratedClass Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C
// 0x0038 (0x2B71 - 0x2B39)
class ABend_Wpn_Pistol_Base_C : public ABend_Wpn_Gun_Base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2B39(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2B40(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UForceFeedbackEffect*                        Fired_ForceFeedback;                                      // 0x2B48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceRadius;                                              // 0x2B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceRadiusMultiplier;                                    // 0x2B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBendCamFollow*                              FollowCam;                                                // 0x2B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      NormalManualAimOverrideCam;                               // 0x2B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      NoScopeZoomManualAimOverrideCam;                          // 0x2B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RunLine1;                                                 // 0x2B70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_Wpn_Pistol_Base.Bend_Wpn_Pistol_Base_C");
		return ptr;
	}


	void IsFiring(class ABendWeapon_Projectile* Gun, bool* IsFiring);
	void UserConstructionScript();
	void OnReloadStarted();
	void OnFired();
	void OnOutOfAmmo();
	void OnFireOnEmpty();
	void OnHolsterFinished();
	void OnDrawStarted();
	void ExecuteUbergraph_Bend_Wpn_Pistol_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
