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

// BlueprintGeneratedClass BikeStatePackage.BikeStatePackage_C
// 0x0010 (0x03C0 - 0x03B0)
class ABikeStatePackage_C : public ABP_TelemetryPackageBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FTimespan                                   WheelieStartTime;                                         // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BikeStatePackage.BikeStatePackage_C");
		return ptr;
	}


	void UserConstructionScript();
	void WaitForNextImpact();
	void BikeImpactCall(const struct FVector& BikeVelocity, float HitIntensity, class AActor* CollidedActor);
	void OutOfGasCall();
	void BikeDamagedCall(TEnumAsByte<EBendVehicleDamageType> DamageType, float damageTaken);
	void RepairBike(int Scrap);
	void FullyDamaged();
	void WheelieStateChange(unsigned char PrevState, unsigned char NewState);
	void ReceiveBeginPlay();
	void RecheckPlayerPawn();
	void RecheckBike();
	void PlayerEnteredBike(class ABendAIController* Controller, class ABendPawn* Pawn, class AVehiclePawn* VehiclePawn);
	void ReceivePostSaveGameLoaded(bool* bIsCheckpoint);
	void BikeImpact(const struct FVector& BikeVelocity, float HitIntensity, class AActor* CollidedActor);
	void OutOfGas();
	void BikeDamaged(TEnumAsByte<EBendVehicleDamageType> DamageType, float damageTaken);
	void BikeRepaired(class ABillsBike_C* BikeRef, bool Sabotaged, int ScrapCount);
	void PlayerRespawned(class ABendPlayerController* PlayerController);
	void BikeFullyDamaged();
	void OnWheelieStateChanged(unsigned char PreviousState, unsigned char CurrentState);
	void ExecuteUbergraph_BikeStatePackage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
