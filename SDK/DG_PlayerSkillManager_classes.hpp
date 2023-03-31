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

// BlueprintGeneratedClass PlayerSkillManager.PlayerSkillManager_C
// 0x0021 (0x00C1 - 0x00A0)
class UPlayerSkillManager_C : public UBendSkillManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<TEnumAsByte<EInventoryAmmoID>>              AmmoTypesToIncrease;                                      // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                NewAmmoCount;                                             // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HealthWithoutUnderArmor;                                  // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESkillStatus>                          NewVar_1;                                                 // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerSkillManager.PlayerSkillManager_C");
		return ptr;
	}


	void ResetMeleeSkills();
	void ResetGeoffsSkills();
	void OnSkillAcquired(TEnumAsByte<EInventorySkillID>* SkillID, class UInventoryItemSkill** Skill);
	void OnSkillsModified();
	void ExecuteUbergraph_PlayerSkillManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
