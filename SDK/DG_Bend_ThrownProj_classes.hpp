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

// BlueprintGeneratedClass Bend_ThrownProj.Bend_ThrownProj_C
// 0x0078 (0x2258 - 0x21E0)
class ABend_ThrownProj_C : public ABendProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x21E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             ThrowSound;                                               // 0x21E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ProjectileMesh;                                           // 0x21F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ThrowTorque;                                              // 0x21F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionLoudness;                                        // 0x2204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EBendSoundEventType>                   ExplosionSndEvent;                                        // 0x2208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x2209(0x0007) MISSED OFFSET
	class UClass*                                      ExplosionShake;                                           // 0x2210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShakeRadiusScale;                                         // 0x2218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShakeFalloffRate;                                         // 0x221C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VibrationDuration;                                        // 0x2220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2224(0x0004) MISSED OFFSET
	struct FName                                       MissedVO;                                                 // 0x2228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceExploding;                                           // 0x2230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2231(0x0003) MISSED OFFSET
	struct FTimerHandle                                DamagedTimer;                                             // 0x2234(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TEnumAsByte<ETypeOfDamage>>                 IgnoreDmgTypes;                                           // 0x2238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TEnumAsByte<ETypeOfBaseDamage>>             AllowBaseDmgTypes;                                        // 0x2248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bend_ThrownProj.Bend_ThrownProj_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void ForceExplodeManual(class AController* Instigator);
	void OnExploded();
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void ForceExplodeDelayed();
	void StopVibration();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_Bend_ThrownProj(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
