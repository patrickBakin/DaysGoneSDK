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

// BlueprintGeneratedClass BP_Spotlight.BP_Spotlight_C
// 0x005B (0x059B - 0x0540)
class ABP_Spotlight_C : public ABendPropLightRigBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0540(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             LightBuzz;                                                // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Material_Instance;                                        // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    TurnOnPower;                                              // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TurnOffPower;                                             // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               PoweredByGenerator;                                       // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               overridePowerGrid;                                        // 0x0581(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPowerGrid_Enum>                       PowerGrid;                                                // 0x0582(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IronMike_sCampAfterLBL2;                                  // 0x0583(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0584(0x0004) MISSED OFFSET
	struct FName                                       Sector;                                                   // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       DynMatVarName;                                            // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WizardIslandONAfterAWI1;                                  // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               WizardIslandOFFAfterAWI1;                                 // 0x0599(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PowerIsOn;                                                // 0x059A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Spotlight.BP_Spotlight_C");
		return ptr;
	}


	void UpdateNightimeTOD();
	void UpdateDaytimeTOD();
	void InitializeRig();
	void GetMaterialReferences();
	void CheckRigState();
	void HandleMidMission(const struct FString& CustomMessage, TEnumAsByte<EMissionIDs> MissionID);
	void CheckWorldState(bool* PowerOn);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void TurnOnPower_Event();
	void TurnOffPower_Event();
	void OnMissionComplete(TEnumAsByte<EMissionIDs> MissionID);
	void MissionSpecial(const struct FString& CustomMessage, TEnumAsByte<EMissionIDs> MissionID);
	void TurnOnRig();
	void TurnOffRig();
	void CinematicStart(const struct FName& CinematicLevel);
	void CinematicEnd(const struct FName& CinematicLevel);
	void EditorTicker(float Delta_Seconds, const struct FVector& CameraLocation);
	void CheckWorldPowerSettings();
	void ExecuteUbergraph_BP_Spotlight(int EntryPoint);
	void TurnOffPower__DelegateSignature();
	void TurnOnPower__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
