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

// BlueprintGeneratedClass BendLib_GameplayFunctions.BendLib_GameplayFunctions_C
// 0x0000 (0x0028 - 0x0028)
class UBendLib_GameplayFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendLib_GameplayFunctions.BendLib_GameplayFunctions_C");
		return ptr;
	}


	void STATIC_RepairBike(bool Max, float Health, int Cost, class UObject* __WorldContext);
	void STATIC_RefuelBike(bool Max, float FuelRemainingGallons, int Cost, class UObject* __WorldContext);
	void STATIC_PointCameraAtAndFollow(class AActor* ActorToFollow, float TransitionTime, float TimeToFollow, bool AllowInput, class UObject* __WorldContext);
	void STATIC_PointCameraAt(const struct FVector& LocationToPointAt, float Time, bool interruptable, bool AllowInput, class UObject* __WorldContext);
	void STATIC_IsWeaponEquippedInHands(TEnumAsByte<EInventoryWeaponID> WeaponID, class ABendPawn* Pawn, class UObject* __WorldContext, bool* Equipped_, class ABendWeapon** Weapon);
	void STATIC_SetHUDWeaponsVisibility(TEnumAsByte<EScriptVisibility> Visibility, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
