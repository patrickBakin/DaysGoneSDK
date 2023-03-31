#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.FilterAmmoID
struct UBendLib_FunctionLibrary_C_FilterAmmoID_Params
{
	TEnumAsByte<EInventoryAmmoID>                      AmmoID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryAmmoID>                      FilteredAmmoID;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.GetDefaultAmmoID
struct UBendLib_FunctionLibrary_C_GetDefaultAmmoID_Params
{
	class ABendWeapon*                                 Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInventoryAmmoID>                      DefaultAmmoID;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.GetAmmoDetails
struct UBendLib_FunctionLibrary_C_GetAmmoDetails_Params
{
	TEnumAsByte<EInventoryAmmoID>                      Ammo;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendWeapon*                                 Optional_Weapon;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                CountToFillWeapon;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                CountToFillInventory;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                InventoryMax;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponMax;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                InventoryCount;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                WeaponCount;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bUsesCombinedAmmo;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.ApplyBikeTheme
struct UBendLib_FunctionLibrary_C_ApplyBikeTheme_Params
{
	struct FGameplayTag                                PaintTag;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                BodyTag;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                TankTag;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.RefreshEquippedBikeTheme
struct UBendLib_FunctionLibrary_C_RefreshEquippedBikeTheme_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.GetEquippedBikeTheme
struct UBendLib_FunctionLibrary_C_GetEquippedBikeTheme_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Paint;                                                    // (Parm, OutParm)
	struct FGameplayTag                                Body;                                                     // (Parm, OutParm)
	struct FGameplayTag                                Tank;                                                     // (Parm, OutParm)
};

// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.DeactivatePointCamWithTransition
struct UBendLib_FunctionLibrary_C_DeactivatePointCamWithTransition_Params
{
	struct FsCamTransitionData                         TransitionData;                                           // (Parm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.ConvertConversationData
struct UBendLib_FunctionLibrary_C_ConvertConversationData_Params
{
	TArray<struct FStruct_ConvLineData>                ConversationLineData;                                     // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FConversationLineArray>              Conversation_Line_Array_List;                             // (Parm, OutParm, ZeroConstructor)
};

// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.DeactivateTrailerCam
struct UBendLib_FunctionLibrary_C_DeactivateTrailerCam_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.ActivateTrailerCam
struct UBendLib_FunctionLibrary_C_ActivateTrailerCam_Params
{
	float                                              PivotX_A;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PivotY_A;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PivotZ_A;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GoalDist_A;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GoalYaw_A;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GoalPitch_A;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PivotX_B;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PivotY_B;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PivotZ_B;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GoalDist_B;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GoalYaw_B;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GoalPitch_B;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.GenerateObjectiveCounterText
struct UBendLib_FunctionLibrary_C_GenerateObjectiveCounterText_Params
{
	struct FText                                       Pre_Text;                                                 // (Parm)
	int                                                CurrentCount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       NewText;                                                  // (Parm, OutParm)
};

// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.DeactivateMerchants
struct UBendLib_FunctionLibrary_C_DeactivateMerchants_Params
{
	bool                                               Despawn_;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.ActivateMerchants
struct UBendLib_FunctionLibrary_C_ActivateMerchants_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.DeactivatePointCam
struct UBendLib_FunctionLibrary_C_DeactivatePointCam_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.ActivatePointCam
struct UBendLib_FunctionLibrary_C_ActivatePointCam_Params
{
	class ACameraActor*                                CameraActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FsCamTransitionData                         TransisitonData;                                          // (Parm)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
