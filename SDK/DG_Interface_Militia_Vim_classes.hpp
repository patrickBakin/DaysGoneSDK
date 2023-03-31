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

// BlueprintGeneratedClass Interface_Militia_Vim.Interface_Militia_Vim_C
// 0x0000 (0x0028 - 0x0028)
class UInterface_Militia_Vim_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interface_Militia_Vim.Interface_Militia_Vim_C");
		return ptr;
	}


	void IEnableSaggyMesh(bool enable);
	void IGetCurrentFootState(TEnumAsByte<EFootStateEnum>* CurrentFootState);
	void IEnableMoveToIdle(bool enable);
	void IEnableFootLocking(bool enable);
	void IEnableMoveToIdleAnchor(bool enable);
	void IEnableTurnToIdleInMovement(bool enable);
	void ISetIKPosAndCurve(TEnumAsByte<EXPEC_EnumIK> IKType, const struct FVector& targetPos, const struct FName& CurveName, const struct FTransform& TargetTransform);
	void ISetCharacterType(TEnumAsByte<EHumanBaseCharacterTypeEnum> CharacterType);
	void ISetCanTurnInMovement(bool enable);
	void ISetLookAimTarget_OnlyTurnHead(const struct FVector& Target, float MaxYaw, float MaxPitch);
	void IIsTurnInPlaceFinished(bool* Finished);
	void ISetLookAimTarget(const struct FVector& Target, float Max_Yaw, float Max_Pitch);
	void IResetLookAimTarget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
