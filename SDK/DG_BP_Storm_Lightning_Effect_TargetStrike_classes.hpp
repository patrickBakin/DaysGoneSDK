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

// BlueprintGeneratedClass BP_Storm_Lightning_Effect_TargetStrike.BP_Storm_Lightning_Effect_TargetStrike_C
// 0x00A7 (0x0488 - 0x03E1)
class ABP_Storm_Lightning_Effect_TargetStrike_C : public ABP_Storm_Lightning_Effect_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        LightningStrike02_ScatterDome;                            // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        LightningStrike02_Target;                                 // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        Lightning_Ambient_Light;                                  // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Target_Position;                                          // 0x0408(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Target_Direction;                                         // 0x0414(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        LightningAmbientLight;                                    // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBendAmbientLightComponent*                  Ambient_Light_Component;                                  // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Ambient_Light_Scale;                                      // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	class UParticleSystem*                             StrikeTargetParticleEffect;                               // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LightningDirection;                                       // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            LightningMaterials;                                       // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              TargetStrikeFlickerIntensity;                             // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TargetStrikeLightningColor;                               // 0x045C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    SpawnedParticleSystemComponent;                           // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             TargetLightningStrikeSound;                               // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrikeMaxLifetime;                                        // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StrikeActualLifetime;                                     // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Storm_Lightning_Effect_TargetStrike.BP_Storm_Lightning_Effect_TargetStrike_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void Editor_Tick();
	void ReceiveBeginPlay();
	void Start_Lightning();
	void End_Lightning();
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_Storm_Lightning_Effect_TargetStrike(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
