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

// BlueprintGeneratedClass XPEC_ScenarioInstance_CPPRM.XPEC_ScenarioInstance_CPPRM_C
// 0x0009 (0x0571 - 0x0568)
class AXPEC_ScenarioInstance_CPPRM_C : public AXpecScenarioInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0568(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               ForceHighLOD;                                             // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass XPEC_ScenarioInstance_CPPRM.XPEC_ScenarioInstance_CPPRM_C");
		return ptr;
	}


	bool IIsForceHighLOD(int* iSN);
	void UserConstructionScript();
	void OnGetPriority(float* defaultPriority, TEnumAsByte<EePOIUserType>* userType, class AController** User);
	void OnRequestUsePOI(TEnumAsByte<EePOIUserType>* userType, class AController** User, class ABendPOISlot** closestOpenSlot);
	void ExecuteUbergraph_XPEC_ScenarioInstance_CPPRM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
