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

// BlueprintGeneratedClass CrowPawn.CrowPawn_C
// 0x0021 (0x2D11 - 0x2CF0)
class ACrowPawn_C : public ABendFlyingAnimalPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2CF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPawnNoiseEmitterComponent*                  PawnNoiseEmitter;                                         // 0x2CF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_CalloutType>                      CalloutType;                                              // 0x2D00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2D01(0x0003) MISSED OFFSET
	struct FVector                                     CalloutLocation;                                          // 0x2D04(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Fail;                                                     // 0x2D10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CrowPawn.CrowPawn_C");
		return ptr;
	}


	class AActor* SpawnAndSetupSearchBodyActor(class UAnimSequenceBase** AnimSequence, class UAnimSequenceBase** AnimSequenceCrouched, struct FName* SubClass);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Died(float ActualDamage, class AController* Killer, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum, class UDamageType* DamageType, class AActor* DamageCauser);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void SetupAnimalLootBinds();
	void ExecuteUbergraph_CrowPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
