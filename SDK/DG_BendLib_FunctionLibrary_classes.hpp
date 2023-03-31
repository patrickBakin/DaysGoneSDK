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

// BlueprintGeneratedClass BendLib_FunctionLibrary.BendLib_FunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBendLib_FunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendLib_FunctionLibrary.BendLib_FunctionLibrary_C");
		return ptr;
	}


	void STATIC_FilterAmmoID(TEnumAsByte<EInventoryAmmoID> AmmoID, class UObject* __WorldContext, TEnumAsByte<EInventoryAmmoID>* FilteredAmmoID);
	void STATIC_GetDefaultAmmoID(class ABendWeapon* Weapon, class UObject* __WorldContext, TEnumAsByte<EInventoryAmmoID>* DefaultAmmoID);
	void STATIC_GetAmmoDetails(TEnumAsByte<EInventoryAmmoID> Ammo, class ABendWeapon* Optional_Weapon, class UObject* __WorldContext, int* CountToFillWeapon, int* CountToFillInventory, int* InventoryMax, int* WeaponMax, int* InventoryCount, int* WeaponCount, bool* bUsesCombinedAmmo);
	void STATIC_ApplyBikeTheme(const struct FGameplayTag& PaintTag, const struct FGameplayTag& BodyTag, const struct FGameplayTag& TankTag, class UObject* __WorldContext);
	void STATIC_RefreshEquippedBikeTheme(class UObject* __WorldContext);
	void STATIC_GetEquippedBikeTheme(class UObject* __WorldContext, struct FGameplayTag* Paint, struct FGameplayTag* Body, struct FGameplayTag* Tank);
	void STATIC_DeactivatePointCamWithTransition(const struct FsCamTransitionData& TransitionData, class UObject* __WorldContext);
	void STATIC_ConvertConversationData(class UObject* __WorldContext, TArray<struct FStruct_ConvLineData>* ConversationLineData, TArray<struct FConversationLineArray>* Conversation_Line_Array_List);
	void STATIC_DeactivateTrailerCam(class UObject* __WorldContext);
	void STATIC_ActivateTrailerCam(float PivotX_A, float PivotY_A, float PivotZ_A, float GoalDist_A, float GoalYaw_A, float GoalPitch_A, float PivotX_B, float PivotY_B, float PivotZ_B, float GoalDist_B, float GoalYaw_B, float GoalPitch_B, class UObject* __WorldContext);
	void STATIC_GenerateObjectiveCounterText(const struct FText& Pre_Text, int CurrentCount, int MaxCount, class UObject* __WorldContext, struct FText* NewText);
	void STATIC_DeactivateMerchants(bool Despawn_, class UObject* __WorldContext);
	void STATIC_ActivateMerchants(class UObject* __WorldContext);
	void STATIC_DeactivatePointCam(class UObject* __WorldContext);
	void STATIC_ActivatePointCam(class ACameraActor* CameraActor, const struct FsCamTransitionData& TransisitonData, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
