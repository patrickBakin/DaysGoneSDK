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

// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.FilterAmmoID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EInventoryAmmoID>  AmmoID                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryAmmoID>  FilteredAmmoID                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_FunctionLibrary_C::STATIC_FilterAmmoID(TEnumAsByte<EInventoryAmmoID> AmmoID, class UObject* __WorldContext, TEnumAsByte<EInventoryAmmoID>* FilteredAmmoID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.FilterAmmoID");

	UBendLib_FunctionLibrary_C_FilterAmmoID_Params params;
	params.AmmoID = AmmoID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FilteredAmmoID != nullptr)
		*FilteredAmmoID = params.FilteredAmmoID;
}


// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.GetDefaultAmmoID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ABendWeapon*             Weapon                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInventoryAmmoID>  DefaultAmmoID                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_FunctionLibrary_C::STATIC_GetDefaultAmmoID(class ABendWeapon* Weapon, class UObject* __WorldContext, TEnumAsByte<EInventoryAmmoID>* DefaultAmmoID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.GetDefaultAmmoID");

	UBendLib_FunctionLibrary_C_GetDefaultAmmoID_Params params;
	params.Weapon = Weapon;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefaultAmmoID != nullptr)
		*DefaultAmmoID = params.DefaultAmmoID;
}


// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.GetAmmoDetails
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EInventoryAmmoID>  Ammo                           (Parm, ZeroConstructor, IsPlainOldData)
// class ABendWeapon*             Optional_Weapon                (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            CountToFillWeapon              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            CountToFillInventory           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            InventoryMax                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            WeaponMax                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            InventoryCount                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            WeaponCount                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bUsesCombinedAmmo              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBendLib_FunctionLibrary_C::STATIC_GetAmmoDetails(TEnumAsByte<EInventoryAmmoID> Ammo, class ABendWeapon* Optional_Weapon, class UObject* __WorldContext, int* CountToFillWeapon, int* CountToFillInventory, int* InventoryMax, int* WeaponMax, int* InventoryCount, int* WeaponCount, bool* bUsesCombinedAmmo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.GetAmmoDetails");

	UBendLib_FunctionLibrary_C_GetAmmoDetails_Params params;
	params.Ammo = Ammo;
	params.Optional_Weapon = Optional_Weapon;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CountToFillWeapon != nullptr)
		*CountToFillWeapon = params.CountToFillWeapon;
	if (CountToFillInventory != nullptr)
		*CountToFillInventory = params.CountToFillInventory;
	if (InventoryMax != nullptr)
		*InventoryMax = params.InventoryMax;
	if (WeaponMax != nullptr)
		*WeaponMax = params.WeaponMax;
	if (InventoryCount != nullptr)
		*InventoryCount = params.InventoryCount;
	if (WeaponCount != nullptr)
		*WeaponCount = params.WeaponCount;
	if (bUsesCombinedAmmo != nullptr)
		*bUsesCombinedAmmo = params.bUsesCombinedAmmo;
}


// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.ApplyBikeTheme
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            PaintTag                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            BodyTag                        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            TankTag                        (ConstParm, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_FunctionLibrary_C::STATIC_ApplyBikeTheme(const struct FGameplayTag& PaintTag, const struct FGameplayTag& BodyTag, const struct FGameplayTag& TankTag, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.ApplyBikeTheme");

	UBendLib_FunctionLibrary_C_ApplyBikeTheme_Params params;
	params.PaintTag = PaintTag;
	params.BodyTag = BodyTag;
	params.TankTag = TankTag;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.RefreshEquippedBikeTheme
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_FunctionLibrary_C::STATIC_RefreshEquippedBikeTheme(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.RefreshEquippedBikeTheme");

	UBendLib_FunctionLibrary_C_RefreshEquippedBikeTheme_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.GetEquippedBikeTheme
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Paint                          (Parm, OutParm)
// struct FGameplayTag            Body                           (Parm, OutParm)
// struct FGameplayTag            Tank                           (Parm, OutParm)

void UBendLib_FunctionLibrary_C::STATIC_GetEquippedBikeTheme(class UObject* __WorldContext, struct FGameplayTag* Paint, struct FGameplayTag* Body, struct FGameplayTag* Tank)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.GetEquippedBikeTheme");

	UBendLib_FunctionLibrary_C_GetEquippedBikeTheme_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Paint != nullptr)
		*Paint = params.Paint;
	if (Body != nullptr)
		*Body = params.Body;
	if (Tank != nullptr)
		*Tank = params.Tank;
}


// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.DeactivatePointCamWithTransition
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FsCamTransitionData     TransitionData                 (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_FunctionLibrary_C::STATIC_DeactivatePointCamWithTransition(const struct FsCamTransitionData& TransitionData, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.DeactivatePointCamWithTransition");

	UBendLib_FunctionLibrary_C_DeactivatePointCamWithTransition_Params params;
	params.TransitionData = TransitionData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.ConvertConversationData
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStruct_ConvLineData> ConversationLineData           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FConversationLineArray> Conversation_Line_Array_List   (Parm, OutParm, ZeroConstructor)

void UBendLib_FunctionLibrary_C::STATIC_ConvertConversationData(class UObject* __WorldContext, TArray<struct FStruct_ConvLineData>* ConversationLineData, TArray<struct FConversationLineArray>* Conversation_Line_Array_List)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.ConvertConversationData");

	UBendLib_FunctionLibrary_C_ConvertConversationData_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConversationLineData != nullptr)
		*ConversationLineData = params.ConversationLineData;
	if (Conversation_Line_Array_List != nullptr)
		*Conversation_Line_Array_List = params.Conversation_Line_Array_List;
}


// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.DeactivateTrailerCam
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_FunctionLibrary_C::STATIC_DeactivateTrailerCam(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.DeactivateTrailerCam");

	UBendLib_FunctionLibrary_C_DeactivateTrailerCam_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.ActivateTrailerCam
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PivotX_A                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          PivotY_A                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          PivotZ_A                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          GoalDist_A                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GoalYaw_A                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          GoalPitch_A                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          PivotX_B                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          PivotY_B                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          PivotZ_B                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          GoalDist_B                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          GoalYaw_B                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          GoalPitch_B                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_FunctionLibrary_C::STATIC_ActivateTrailerCam(float PivotX_A, float PivotY_A, float PivotZ_A, float GoalDist_A, float GoalYaw_A, float GoalPitch_A, float PivotX_B, float PivotY_B, float PivotZ_B, float GoalDist_B, float GoalYaw_B, float GoalPitch_B, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.ActivateTrailerCam");

	UBendLib_FunctionLibrary_C_ActivateTrailerCam_Params params;
	params.PivotX_A = PivotX_A;
	params.PivotY_A = PivotY_A;
	params.PivotZ_A = PivotZ_A;
	params.GoalDist_A = GoalDist_A;
	params.GoalYaw_A = GoalYaw_A;
	params.GoalPitch_A = GoalPitch_A;
	params.PivotX_B = PivotX_B;
	params.PivotY_B = PivotY_B;
	params.PivotZ_B = PivotZ_B;
	params.GoalDist_B = GoalDist_B;
	params.GoalYaw_B = GoalYaw_B;
	params.GoalPitch_B = GoalPitch_B;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.GenerateObjectiveCounterText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Pre_Text                       (Parm)
// int                            CurrentCount                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxCount                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   NewText                        (Parm, OutParm)

void UBendLib_FunctionLibrary_C::STATIC_GenerateObjectiveCounterText(const struct FText& Pre_Text, int CurrentCount, int MaxCount, class UObject* __WorldContext, struct FText* NewText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.GenerateObjectiveCounterText");

	UBendLib_FunctionLibrary_C_GenerateObjectiveCounterText_Params params;
	params.Pre_Text = Pre_Text;
	params.CurrentCount = CurrentCount;
	params.MaxCount = MaxCount;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewText != nullptr)
		*NewText = params.NewText;
}


// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.DeactivateMerchants
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Despawn_                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_FunctionLibrary_C::STATIC_DeactivateMerchants(bool Despawn_, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.DeactivateMerchants");

	UBendLib_FunctionLibrary_C_DeactivateMerchants_Params params;
	params.Despawn_ = Despawn_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.ActivateMerchants
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_FunctionLibrary_C::STATIC_ActivateMerchants(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.ActivateMerchants");

	UBendLib_FunctionLibrary_C_ActivateMerchants_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.DeactivatePointCam
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_FunctionLibrary_C::STATIC_DeactivatePointCam(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.DeactivatePointCam");

	UBendLib_FunctionLibrary_C_DeactivatePointCam_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.ActivatePointCam
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACameraActor*            CameraActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FsCamTransitionData     TransisitonData                (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_FunctionLibrary_C::STATIC_ActivatePointCam(class ACameraActor* CameraActor, const struct FsCamTransitionData& TransisitonData, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_FunctionLibrary.BendLib_FunctionLibrary_C.ActivatePointCam");

	UBendLib_FunctionLibrary_C_ActivatePointCam_Params params;
	params.CameraActor = CameraActor;
	params.TransisitonData = TransisitonData;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
