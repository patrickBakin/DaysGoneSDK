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

// BlueprintGeneratedClass BendPlayerCamMeleeKill.BendPlayerCamMeleeKill_C
// 0x0018 (0x0430 - 0x0418)
class UBendPlayerCamMeleeKill_C : public UBendPlayerCamMelee_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              TimeDilation;                                             // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActiveTime;                                               // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TimeDID;                                                  // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                Timer;                                                    // 0x042C(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendPlayerCamMeleeKill.BendPlayerCamMeleeKill_C");
		return ptr;
	}


	void OnActivate();
	void OnDeactivate();
	void DeactivateAfterTime();
	void ExecuteUbergraph_BendPlayerCamMeleeKill(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
