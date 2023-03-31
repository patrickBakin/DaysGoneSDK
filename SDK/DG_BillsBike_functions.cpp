// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BillsBike.BillsBike_C.I_GetGasValues
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Gas_Current                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Gas_Max                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::I_GetGasValues(float* Gas_Current, float* Gas_Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.I_GetGasValues");

	ABillsBike_C_I_GetGasValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Gas_Current != nullptr)
		*Gas_Current = params.Gas_Current;
	if (Gas_Max != nullptr)
		*Gas_Max = params.Gas_Max;
}


// Function BillsBike.BillsBike_C.GetEngineSoundAsset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              EngineSoundAsset               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::GetEngineSoundAsset(class USoundBase** EngineSoundAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.GetEngineSoundAsset");

	ABillsBike_C_GetEngineSoundAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EngineSoundAsset != nullptr)
		*EngineSoundAsset = params.EngineSoundAsset;
}


// Function BillsBike.BillsBike_C.I_SetVehicleHeadLightBrightness
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBendVehicleHeadlightBrightnessEnum> Setting                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::I_SetVehicleHeadLightBrightness(TEnumAsByte<EBendVehicleHeadlightBrightnessEnum> Setting, bool* Success_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.I_SetVehicleHeadLightBrightness");

	ABillsBike_C_I_SetVehicleHeadLightBrightness_Params params;
	params.Setting = Setting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success_ != nullptr)
		*Success_ = params.Success_;
}


// Function BillsBike.BillsBike_C.I_SetBikeInCinematicMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ON_                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::I_SetBikeInCinematicMode(bool ON_, bool* Success_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.I_SetBikeInCinematicMode");

	ABillsBike_C_I_SetBikeInCinematicMode_Params params;
	params.ON_ = ON_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success_ != nullptr)
		*Success_ = params.Success_;
}


// Function BillsBike.BillsBike_C.SetIsSoundKilled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isSoundKilled                  (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::SetIsSoundKilled(bool isSoundKilled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.SetIsSoundKilled");

	ABillsBike_C_SetIsSoundKilled_Params params;
	params.isSoundKilled = isSoundKilled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.SetPlayerOnBikeTags
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlayerOnBike                 (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::SetPlayerOnBikeTags(bool IsPlayerOnBike)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.SetPlayerOnBikeTags");

	ABillsBike_C_SetPlayerOnBikeTags_Params params;
	params.IsPlayerOnBike = IsPlayerOnBike;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.UpdateDynamicMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::UpdateDynamicMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.UpdateDynamicMaterials");

	ABillsBike_C_UpdateDynamicMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.CollidedWithEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCurveFloat*             EnemyDMGCurve                  (Parm, ZeroConstructor, IsPlainOldData)
// class UForceFeedbackEffect*    ControllerFeedback             (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::CollidedWithEnemy(class UCurveFloat* EnemyDMGCurve, class UForceFeedbackEffect* ControllerFeedback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.CollidedWithEnemy");

	ABillsBike_C_CollidedWithEnemy_Params params;
	params.EnemyDMGCurve = EnemyDMGCurve;
	params.ControllerFeedback = ControllerFeedback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.SetFocusLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            SkillTagToCheck                (Parm)

void ABillsBike_C::SetFocusLevel(const struct FGameplayTag& SkillTagToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.SetFocusLevel");

	ABillsBike_C_SetFocusLevel_Params params;
	params.SkillTagToCheck = SkillTagToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.ControlNPCJumpCollider
// (Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::ControlNPCJumpCollider()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.ControlNPCJumpCollider");

	ABillsBike_C_ControlNPCJumpCollider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.FixRagdollColliderAttachment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::FixRagdollColliderAttachment()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.FixRagdollColliderAttachment");

	ABillsBike_C_FixRagdollColliderAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.ArtFuncs_SetGrunge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> Dynamic_Materials              (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Grunge_Offset                  (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::ArtFuncs_SetGrunge(float Grunge_Offset, TArray<class UMaterialInstanceDynamic*>* Dynamic_Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.ArtFuncs_SetGrunge");

	ABillsBike_C_ArtFuncs_SetGrunge_Params params;
	params.Grunge_Offset = Grunge_Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dynamic_Materials != nullptr)
		*Dynamic_Materials = params.Dynamic_Materials;
}


// Function BillsBike.BillsBike_C.ArtFuncs_MakeDynamicMaterials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> Dynamic_Material_Instances     (Parm, OutParm, ZeroConstructor)

void ABillsBike_C::ArtFuncs_MakeDynamicMaterials(TArray<class UMaterialInstanceDynamic*>* Dynamic_Material_Instances)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.ArtFuncs_MakeDynamicMaterials");

	ABillsBike_C_ArtFuncs_MakeDynamicMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dynamic_Material_Instances != nullptr)
		*Dynamic_Material_Instances = params.Dynamic_Material_Instances;
}


// Function BillsBike.BillsBike_C.ArtFunctions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Grunge_Offset                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UMaterialInstanceDynamic*> Bike_Materials                 (Parm, OutParm, ZeroConstructor)

void ABillsBike_C::ArtFunctions(float Grunge_Offset, TArray<class UMaterialInstanceDynamic*>* Bike_Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.ArtFunctions");

	ABillsBike_C_ArtFunctions_Params params;
	params.Grunge_Offset = Grunge_Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Bike_Materials != nullptr)
		*Bike_Materials = params.Bike_Materials;
}


// Function BillsBike.BillsBike_C.SetOutline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutlineOn                      (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::SetOutline(bool OutlineOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.SetOutline");

	ABillsBike_C_SetOutline_Params params;
	params.OutlineOn = OutlineOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.SetBikeNoiseReduction
// (Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::SetBikeNoiseReduction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.SetBikeNoiseReduction");

	ABillsBike_C_SetBikeNoiseReduction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.SetBikeDamageReduction
// (Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::SetBikeDamageReduction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.SetBikeDamageReduction");

	ABillsBike_C_SetBikeDamageReduction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.DealMiscellaneousDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             DamageInstigator               (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::DealMiscellaneousDamage(float Damage, class AController* DamageInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.DealMiscellaneousDamage");

	ABillsBike_C_DealMiscellaneousDamage_Params params;
	params.Damage = Damage;
	params.DamageInstigator = DamageInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Sound-ForceBoostSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceBoost                     (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::Sound_ForceBoostSound(bool ForceBoost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Sound-ForceBoostSound");

	ABillsBike_C_Sound_ForceBoostSound_Params params;
	params.ForceBoost = ForceBoost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Sound-EndStall
// (Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::Sound_EndStall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Sound-EndStall");

	ABillsBike_C_Sound_EndStall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Sound-StartStall
// (Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::Sound_StartStall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Sound-StartStall");

	ABillsBike_C_Sound_StartStall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Sound-StartStallWithTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HowLongToStall                 (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::Sound_StartStallWithTime(float HowLongToStall)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Sound-StartStallWithTime");

	ABillsBike_C_Sound_StartStallWithTime_Params params;
	params.HowLongToStall = HowLongToStall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.CalculateCumulativeDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFireBikeDmgVO                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CumulativeDmg                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::CalculateCumulativeDamage(float IncomingDamage, bool* bFireBikeDmgVO, float* CumulativeDmg)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.CalculateCumulativeDamage");

	ABillsBike_C_CalculateCumulativeDamage_Params params;
	params.IncomingDamage = IncomingDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bFireBikeDmgVO != nullptr)
		*bFireBikeDmgVO = params.bFireBikeDmgVO;
	if (CumulativeDmg != nullptr)
		*CumulativeDmg = params.CumulativeDmg;
}


// Function BillsBike.BillsBike_C.CinematicModeToggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ON_                            (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::CinematicModeToggle(bool ON_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.CinematicModeToggle");

	ABillsBike_C_CinematicModeToggle_Params params;
	params.ON_ = ON_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.FlipVehicleForwardAndDumpRidersHack
// (Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::FlipVehicleForwardAndDumpRidersHack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.FlipVehicleForwardAndDumpRidersHack");

	ABillsBike_C_FlipVehicleForwardAndDumpRidersHack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.PlayHitSounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBendVehicleDamageType> DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          damageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          HealthPercentageRemain         (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::PlayHitSounds(TEnumAsByte<EBendVehicleDamageType> DamageType, float damageTaken, float HealthPercentageRemain)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.PlayHitSounds");

	ABillsBike_C_PlayHitSounds_Params params;
	params.DamageType = DamageType;
	params.damageTaken = damageTaken;
	params.HealthPercentageRemain = HealthPercentageRemain;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Sound-KillBikeSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KillSound                      (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::Sound_KillBikeSound(bool KillSound)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Sound-KillBikeSound");

	ABillsBike_C_Sound_KillBikeSound_Params params;
	params.KillSound = KillSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Sound-StopRpmSuppression
// (Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::Sound_StopRpmSuppression()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Sound-StopRpmSuppression");

	ABillsBike_C_Sound_StopRpmSuppression_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Sound-StopThrottleSuppression
// (Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::Sound_StopThrottleSuppression()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Sound-StopThrottleSuppression");

	ABillsBike_C_Sound_StopThrottleSuppression_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Force180
// (Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::Force180()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Force180");

	ABillsBike_C_Force180_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.StopAttractRev
// (Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::StopAttractRev()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.StopAttractRev");

	ABillsBike_C_StopAttractRev_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Sound-OutofGas
// (Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::Sound_OutofGas()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Sound-OutofGas");

	ABillsBike_C_Sound_OutofGas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Sound-AttractEngineRev
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::Sound_AttractEngineRev()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Sound-AttractEngineRev");

	ABillsBike_C_Sound_AttractEngineRev_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Sound-StopAttractorEmitter
// (Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::Sound_StopAttractorEmitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Sound-StopAttractorEmitter");

	ABillsBike_C_Sound_StopAttractorEmitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Sound-DrawDebug
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Name                           (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::Sound_DrawDebug(const struct FString& Name, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Sound-DrawDebug");

	ABillsBike_C_Sound_DrawDebug_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Sound-SetupGearAndShift
// (Private, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::Sound_SetupGearAndShift()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Sound-SetupGearAndShift");

	ABillsBike_C_Sound_SetupGearAndShift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Sound-Shift
// (Private, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::Sound_Shift()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Sound-Shift");

	ABillsBike_C_Sound_Shift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Sound-Gear
// (Private, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::Sound_Gear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Sound-Gear");

	ABillsBike_C_Sound_Gear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Sound-Boost
// (Private, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::Sound_Boost()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Sound-Boost");

	ABillsBike_C_Sound_Boost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Sound-ThrottleAutoShift
// (Private, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::Sound_ThrottleAutoShift()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Sound-ThrottleAutoShift");

	ABillsBike_C_Sound_ThrottleAutoShift_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Sound-IsStopped
// (Private, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::Sound_IsStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Sound-IsStopped");

	ABillsBike_C_Sound_IsStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Sound-IsBraking
// (Private, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::Sound_IsBraking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Sound-IsBraking");

	ABillsBike_C_Sound_IsBraking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Sound-SetBurnout
// (Private, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::Sound_SetBurnout()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Sound-SetBurnout");

	ABillsBike_C_Sound_SetBurnout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Sound-IsThrottlePressed
// (Private, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::Sound_IsThrottlePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Sound-IsThrottlePressed");

	ABillsBike_C_Sound_IsThrottlePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Sound-SetRPM
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NormalizedRPM                  (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::Sound_SetRPM(float NormalizedRPM)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Sound-SetRPM");

	ABillsBike_C_Sound_SetRPM_Params params;
	params.NormalizedRPM = NormalizedRPM;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Sound-CalculateNormalizedRPM
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NormalizedRPM                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::Sound_CalculateNormalizedRPM(float* NormalizedRPM)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Sound-CalculateNormalizedRPM");

	ABillsBike_C_Sound_CalculateNormalizedRPM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NormalizedRPM != nullptr)
		*NormalizedRPM = params.NormalizedRPM;
}


// Function BillsBike.BillsBike_C.ChangeHeadlightBrightness
// (Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::ChangeHeadlightBrightness()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.ChangeHeadlightBrightness");

	ABillsBike_C_ChangeHeadlightBrightness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.SetHeadlightBrightness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBendVehicleHeadlightBrightnessEnum> HeadlightBrightness            (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::SetHeadlightBrightness(TEnumAsByte<EBendVehicleHeadlightBrightnessEnum> HeadlightBrightness)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.SetHeadlightBrightness");

	ABillsBike_C_SetHeadlightBrightness_Params params;
	params.HeadlightBrightness = HeadlightBrightness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.IsOnGravel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOnGravel                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::IsOnGravel(int WheelIndex, bool* IsOnGravel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.IsOnGravel");

	ABillsBike_C_IsOnGravel_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOnGravel != nullptr)
		*IsOnGravel = params.IsOnGravel;
}


// Function BillsBike.BillsBike_C.IsOnDirt
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOnDirt                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::IsOnDirt(int WheelIndex, bool* IsOnDirt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.IsOnDirt");

	ABillsBike_C_IsOnDirt_Params params;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOnDirt != nullptr)
		*IsOnDirt = params.IsOnDirt;
}


// Function BillsBike.BillsBike_C.ApplyTireDrag
// (Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::ApplyTireDrag()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.ApplyTireDrag");

	ABillsBike_C_ApplyTireDrag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.Debug_Sound-Bikes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         SND_Bike_CC                    (Parm, ZeroConstructor, IsPlainOldData)
// class UWheeledVehicleMovementComponent* VehicleMovementComponent       (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::Debug_Sound_Bikes(class UAudioComponent* SND_Bike_CC, class UWheeledVehicleMovementComponent* VehicleMovementComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.Debug_Sound-Bikes");

	ABillsBike_C_Debug_Sound_Bikes_Params params;
	params.SND_Bike_CC = SND_Bike_CC;
	params.VehicleMovementComponent = VehicleMovementComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.UserConstructionScript");

	ABillsBike_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.I_GasCanDropped
// (Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::I_GasCanDropped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.I_GasCanDropped");

	ABillsBike_C_I_GasCanDropped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.I_RefuelingFinished
// (Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::I_RefuelingFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.I_RefuelingFinished");

	ABillsBike_C_I_RefuelingFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.I_SetGasCanHasControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasControl                     (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::I_SetGasCanHasControl(bool HasControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.I_SetGasCanHasControl");

	ABillsBike_C_I_SetGasCanHasControl_Params params;
	params.HasControl = HasControl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.CheckGasRemaining
// (BlueprintCallable, BlueprintEvent)

void ABillsBike_C::CheckGasRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.CheckGasRemaining");

	ABillsBike_C_CheckGasRemaining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.StopCheckGasRemaining
// (BlueprintCallable, BlueprintEvent)

void ABillsBike_C::StopCheckGasRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.StopCheckGasRemaining");

	ABillsBike_C_StopCheckGasRemaining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.StartCheckGasRemaining
// (BlueprintCallable, BlueprintEvent)

void ABillsBike_C::StartCheckGasRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.StartCheckGasRemaining");

	ABillsBike_C_StartCheckGasRemaining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.SuppressBikeStartupSound
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::SuppressBikeStartupSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.SuppressBikeStartupSound");

	ABillsBike_C_SuppressBikeStartupSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnDriverEnteredVehicle
// (Event, Public, BlueprintEvent)

void ABillsBike_C::OnDriverEnteredVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnDriverEnteredVehicle");

	ABillsBike_C_OnDriverEnteredVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnDriverExitedVehicle
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBendVehicleExitReason>* InExitReason                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::OnDriverExitedVehicle(TEnumAsByte<EBendVehicleExitReason>* InExitReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnDriverExitedVehicle");

	ABillsBike_C_OnDriverExitedVehicle_Params params;
	params.InExitReason = InExitReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnDriverFinishedEnteringVehicle
// (Event, Public, BlueprintEvent)

void ABillsBike_C::OnDriverFinishedEnteringVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnDriverFinishedEnteringVehicle");

	ABillsBike_C_OnDriverFinishedEnteringVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnDriverFinishedExitingVehicle
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBendVehicleExitReason>* InExitReason                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::OnDriverFinishedExitingVehicle(TEnumAsByte<EBendVehicleExitReason>* InExitReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnDriverFinishedExitingVehicle");

	ABillsBike_C_OnDriverFinishedExitingVehicle_Params params;
	params.InExitReason = InExitReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.I_GasPumpFinished
// (Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::I_GasPumpFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.I_GasPumpFinished");

	ABillsBike_C_I_GasPumpFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnSwitchedOffLights
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::OnSwitchedOffLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnSwitchedOffLights");

	ABillsBike_C_OnSwitchedOffLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnSwitchedOnLights
// (Event, Public, BlueprintEvent)

void ABillsBike_C::OnSwitchedOnLights()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnSwitchedOnLights");

	ABillsBike_C_OnSwitchedOnLights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnChangeTailLightState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBendVehicleTailLightState>* NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::OnChangeTailLightState(TEnumAsByte<EBendVehicleTailLightState>* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnChangeTailLightState");

	ABillsBike_C_OnChangeTailLightState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.SwitchHeadlightBrightness
// (Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::SwitchHeadlightBrightness()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.SwitchHeadlightBrightness");

	ABillsBike_C_SwitchHeadlightBrightness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnReceivedDamage
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBendVehicleDamageType>* DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         damageTaken                    (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::OnReceivedDamage(TEnumAsByte<EBendVehicleDamageType>* DamageType, float* damageTaken)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnReceivedDamage");

	ABillsBike_C_OnReceivedDamage_Params params;
	params.DamageType = DamageType;
	params.damageTaken = damageTaken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnHealthRestored
// (Event, Public, BlueprintEvent)

void ABillsBike_C::OnHealthRestored()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnHealthRestored");

	ABillsBike_C_OnHealthRestored_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.ForceDamageUpdate
// (BlueprintCallable, BlueprintEvent)

void ABillsBike_C::ForceDamageUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.ForceDamageUpdate");

	ABillsBike_C_ForceDamageUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.MakeBikeDirtyByDamage
// (BlueprintCallable, BlueprintEvent)

void ABillsBike_C::MakeBikeDirtyByDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.MakeBikeDirtyByDamage");

	ABillsBike_C_MakeBikeDirtyByDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.DebugPrintDamage
// (BlueprintCallable, BlueprintEvent)

void ABillsBike_C::DebugPrintDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.DebugPrintDamage");

	ABillsBike_C_DebugPrintDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.SetSmokeParticles
// (BlueprintCallable, BlueprintEvent)

void ABillsBike_C::SetSmokeParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.SetSmokeParticles");

	ABillsBike_C_SetSmokeParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.ApplyDamageFX
// (BlueprintCallable, BlueprintEvent)

void ABillsBike_C::ApplyDamageFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.ApplyDamageFX");

	ABillsBike_C_ApplyDamageFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.SetBikeDamageSound
// (BlueprintCallable, BlueprintEvent)

void ABillsBike_C::SetBikeDamageSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.SetBikeDamageSound");

	ABillsBike_C_SetBikeDamageSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.PlayImpactSounds
// (BlueprintCallable, BlueprintEvent)

void ABillsBike_C::PlayImpactSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.PlayImpactSounds");

	ABillsBike_C_PlayImpactSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.PrintDamageDebug
// (BlueprintCallable, BlueprintEvent)

void ABillsBike_C::PrintDamageDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.PrintDamageDebug");

	ABillsBike_C_PrintDamageDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.PlayVOForDamage
// (BlueprintCallable, BlueprintEvent)

void ABillsBike_C::PlayVOForDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.PlayVOForDamage");

	ABillsBike_C_PlayVOForDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.ForceVehicleDamageUpdate
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::ForceVehicleDamageUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.ForceVehicleDamageUpdate");

	ABillsBike_C_ForceVehicleDamageUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnLanded
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           NumTiresOnGround               (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::OnLanded(int* NumTiresOnGround)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnLanded");

	ABillsBike_C_OnLanded_Params params;
	params.NumTiresOnGround = NumTiresOnGround;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Other                          (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSelfMoved                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitNormal                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, Parm, OutParm, ReferenceParm)

void ABillsBike_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.ReceiveHit");

	ABillsBike_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_557_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABillsBike_C::BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_557_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_557_ComponentBeginOverlapSignature__DelegateSignature");

	ABillsBike_C_BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_557_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_565_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_565_ComponentEndOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_565_ComponentEndOverlapSignature__DelegateSignature");

	ABillsBike_C_BndEvt__VehicleEnterExitTrigger_K2Node_ComponentBoundEvent_565_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.ReceiveEndPlay");

	ABillsBike_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.BndEvt__EnemyDamageTrigger2_K2Node_ComponentBoundEvent_401_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, Parm, OutParm, ReferenceParm)

void ABillsBike_C::BndEvt__EnemyDamageTrigger2_K2Node_ComponentBoundEvent_401_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.BndEvt__EnemyDamageTrigger2_K2Node_ComponentBoundEvent_401_ComponentBeginOverlapSignature__DelegateSignature");

	ABillsBike_C_BndEvt__EnemyDamageTrigger2_K2Node_ComponentBoundEvent_401_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnImpactedEnemy
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABendPawn**              OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Impulse                        (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::OnImpactedEnemy(class ABendPawn** OtherActor, struct FVector* Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnImpactedEnemy");

	ABillsBike_C_OnImpactedEnemy_Params params;
	params.OtherActor = OtherActor;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.DisableBikeDetection
// (BlueprintCallable, BlueprintEvent)

void ABillsBike_C::DisableBikeDetection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.DisableBikeDetection");

	ABillsBike_C_DisableBikeDetection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.EnableBikeDetection
// (BlueprintCallable, BlueprintEvent)

void ABillsBike_C::EnableBikeDetection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.EnableBikeDetection");

	ABillsBike_C_EnableBikeDetection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABillsBike_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.ReceiveBeginPlay");

	ABillsBike_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnSimulateEngineRevSound
// (Event, Public, BlueprintEvent)

void ABillsBike_C::OnSimulateEngineRevSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnSimulateEngineRevSound");

	ABillsBike_C_OnSimulateEngineRevSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.On180Finished
// (Event, Public, BlueprintEvent)

void ABillsBike_C::On180Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.On180Finished");

	ABillsBike_C_On180Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.PlayBikeSound
// (BlueprintCallable, BlueprintEvent)

void ABillsBike_C::PlayBikeSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.PlayBikeSound");

	ABillsBike_C_PlayBikeSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.BikeDamageDebug_TogglePlayerFalling
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable_Falling                 (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::BikeDamageDebug_TogglePlayerFalling(bool Enable_Falling)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.BikeDamageDebug_TogglePlayerFalling");

	ABillsBike_C_BikeDamageDebug_TogglePlayerFalling_Params params;
	params.Enable_Falling = Enable_Falling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnVehiclePartUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMotorcyclePartType>* PartType                       (Parm, ZeroConstructor, IsPlainOldData)
// class UMeshComponent**         Mesh                           (Parm, ZeroConstructor, IsPlainOldData)
// class UBendVehicleMeshAttachmentSpecs** Specs                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::OnVehiclePartUpdated(TEnumAsByte<EMotorcyclePartType>* PartType, class UMeshComponent** Mesh, class UBendVehicleMeshAttachmentSpecs** Specs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnVehiclePartUpdated");

	ABillsBike_C_OnVehiclePartUpdated_Params params;
	params.PartType = PartType;
	params.Mesh = Mesh;
	params.Specs = Specs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.I_SetGasAmounts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewGas                         (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::I_SetGasAmounts(float NewGas)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.I_SetGasAmounts");

	ABillsBike_C_I_SetGasAmounts_Params params;
	params.NewGas = NewGas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.SabotageOrRepairComplete_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ScrapCount                     (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::SabotageOrRepairComplete_Event_1(int ScrapCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.SabotageOrRepairComplete_Event_1");

	ABillsBike_C_SabotageOrRepairComplete_Event_1_Params params;
	params.ScrapCount = ScrapCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnStartEngine
// (Event, Public, BlueprintEvent)

void ABillsBike_C::OnStartEngine()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnStartEngine");

	ABillsBike_C_OnStartEngine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnStopEngine
// (Event, Public, BlueprintEvent)

void ABillsBike_C::OnStopEngine()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnStopEngine");

	ABillsBike_C_OnStopEngine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnDiedOrDestroyed_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPawn*               Pawn                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDied                          (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::OnDiedOrDestroyed_Event_1(class ABendPawn* Pawn, bool bDied)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnDiedOrDestroyed_Event_1");

	ABillsBike_C_OnDiedOrDestroyed_Event_1_Params params;
	params.Pawn = Pawn;
	params.bDied = bDied;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnBikeManualAimSlowdownStarted
// (BlueprintCallable, BlueprintEvent)

void ABillsBike_C::OnBikeManualAimSlowdownStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnBikeManualAimSlowdownStarted");

	ABillsBike_C_OnBikeManualAimSlowdownStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnBikeManualAimSlowdownStopped
// (BlueprintCallable, BlueprintEvent)

void ABillsBike_C::OnBikeManualAimSlowdownStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnBikeManualAimSlowdownStopped");

	ABillsBike_C_OnBikeManualAimSlowdownStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnNotifyBrokenNPCVehicleTutorial
// (Event, Public, BlueprintEvent)

void ABillsBike_C::OnNotifyBrokenNPCVehicleTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnNotifyBrokenNPCVehicleTutorial");

	ABillsBike_C_OnNotifyBrokenNPCVehicleTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnNotifyEngineDestroyed
// (Event, Public, BlueprintEvent)

void ABillsBike_C::OnNotifyEngineDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnNotifyEngineDestroyed");

	ABillsBike_C_OnNotifyEngineDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnNotifyRepairEngine
// (Event, Public, BlueprintEvent)

void ABillsBike_C::OnNotifyRepairEngine()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnNotifyRepairEngine");

	ABillsBike_C_OnNotifyRepairEngine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnFullyDamaged
// (Event, Public, BlueprintEvent)

void ABillsBike_C::OnFullyDamaged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnFullyDamaged");

	ABillsBike_C_OnFullyDamaged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.OnWheelieStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  PreviousState                  (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  CurrentState                   (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::OnWheelieStateChanged(unsigned char PreviousState, unsigned char CurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.OnWheelieStateChanged");

	ABillsBike_C_OnWheelieStateChanged_Params params;
	params.PreviousState = PreviousState;
	params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.ReceivePostSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::ReceivePostSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.ReceivePostSaveGameLoaded");

	ABillsBike_C_ReceivePostSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.ExecuteUbergraph_BillsBike
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::ExecuteUbergraph_BillsBike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.ExecuteUbergraph_BillsBike");

	ABillsBike_C_ExecuteUbergraph_BillsBike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.BikeFullyDamaged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::BikeFullyDamaged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.BikeFullyDamaged__DelegateSignature");

	ABillsBike_C_BikeFullyDamaged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.TelemetryEvent_BS_OutOfGas__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::TelemetryEvent_BS_OutOfGas__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.TelemetryEvent_BS_OutOfGas__DelegateSignature");

	ABillsBike_C_TelemetryEvent_BS_OutOfGas__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.SabotageOrRepairComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABillsBike_C*            BikeRef                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Sabotaged                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            ScrapCount                     (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::SabotageOrRepairComplete__DelegateSignature(class ABillsBike_C* BikeRef, bool Sabotaged, int ScrapCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.SabotageOrRepairComplete__DelegateSignature");

	ABillsBike_C_SabotageOrRepairComplete__DelegateSignature_Params params;
	params.BikeRef = BikeRef;
	params.Sabotaged = Sabotaged;
	params.ScrapCount = ScrapCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.TelemetryEvent_BS_BikeImpact__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 BikeVelocity                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          HitIntensity                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  CollidedActor                  (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::TelemetryEvent_BS_BikeImpact__DelegateSignature(const struct FVector& BikeVelocity, float HitIntensity, class AActor* CollidedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.TelemetryEvent_BS_BikeImpact__DelegateSignature");

	ABillsBike_C_TelemetryEvent_BS_BikeImpact__DelegateSignature_Params params;
	params.BikeVelocity = BikeVelocity;
	params.HitIntensity = HitIntensity;
	params.CollidedActor = CollidedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.BikeDmgVO__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::BikeDmgVO__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.BikeDmgVO__DelegateSignature");

	ABillsBike_C_BikeDmgVO__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.DriverEnteredVehicle__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AVehiclePawn*            Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)

void ABillsBike_C::DriverEnteredVehicle__DelegateSignature(class AVehiclePawn* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.DriverEnteredVehicle__DelegateSignature");

	ABillsBike_C_DriverEnteredVehicle__DelegateSignature_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BillsBike.BillsBike_C.180Complete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABillsBike_C::_180Complete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BillsBike.BillsBike_C.180Complete__DelegateSignature");

	ABillsBike_C__180Complete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
