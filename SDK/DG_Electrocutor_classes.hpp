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

// BlueprintGeneratedClass Electrocutor.Electrocutor_C
// 0x0068 (0x03B0 - 0x0348)
class AElectrocutor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        ProngRight;                                               // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ProngLeft;                                                // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               CableCollider;                                            // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCableComponent*                             CableRight;                                               // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCableComponent*                             CableLeft;                                                // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_wire_arc;                                               // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             amb_elec_arcing_lp_01;                                    // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABendDefaultPlayerController_C*              PlayerController;                                         // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABendPawn*                                   ElectrocutingPawn;                                        // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      ActorAttachedTo;                                          // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABend_BulletProj_AirTaser_C*                 FiredProjectile;                                          // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Electrocutor.Electrocutor_C");
		return ptr;
	}


	void SetFiringProjectile(class ABend_BulletProj_AirTaser_C* FiringProj);
	void SetProngVisbility(bool ProngVisibility);
	void SetActorAttachedTo(class AActor* ActorAttachedTo);
	void RemoveStatusEffect();
	void CauseStatusEffect(class AActor* ActorToEffect);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void BndEvt__CableCollider_K2Node_ComponentBoundEvent_374_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BreakCable();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void ExecuteUbergraph_Electrocutor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
