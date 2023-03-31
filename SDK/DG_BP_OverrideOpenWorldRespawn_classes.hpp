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

// BlueprintGeneratedClass BP_OverrideOpenWorldRespawn.BP_OverrideOpenWorldRespawn_C
// 0x0025 (0x036D - 0x0348)
class ABP_OverrideOpenWorldRespawn_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             Arrow;                                                    // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendSphereComponent*                        BendSphere;                                               // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SphereRadius;                                             // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ForceImmediateSave;                                       // 0x0364(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	int                                                RespawnID;                                                // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               ShouldAlwaysClearAllRespawns;                             // 0x036C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OverrideOpenWorldRespawn.BP_OverrideOpenWorldRespawn_C");
		return ptr;
	}


	void SavePlayerAndVehicleLocation(int* RespawnID);
	void SetSphereRadius();
	void UserConstructionScript();
	void BndEvt__BendSphere_K2Node_ComponentBoundEvent_495_BeginOverlapSig__DelegateSignature();
	void BndEvt__BendSphere_K2Node_ComponentBoundEvent_16_EndOverlapSig__DelegateSignature();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_OverrideOpenWorldRespawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
