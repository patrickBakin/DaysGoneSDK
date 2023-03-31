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

// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.GetRankTag
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Rank                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (Parm, OutParm)

void UUI_HUD_ChallengeReward_Item_C::GetRankTag(int Rank, struct FGameplayTag* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.GetRankTag");

	UUI_HUD_ChallengeReward_Item_C_GetRankTag_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tag != nullptr)
		*Tag = params.Tag;
}


// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.GetRepPatchTagByChallenge
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Rank                           (Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UTexture2D>    PatchImage                     (Parm, OutParm)

void UUI_HUD_ChallengeReward_Item_C::GetRepPatchTagByChallenge(int Rank, TAssetPtr<class UTexture2D>* PatchImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.GetRepPatchTagByChallenge");

	UUI_HUD_ChallengeReward_Item_C_GetRepPatchTagByChallenge_Params params;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PatchImage != nullptr)
		*PatchImage = params.PatchImage;
}


// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.SetRepDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUD_ChallengeReward_Item_C::SetRepDetails(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.SetRepDetails");

	UUI_HUD_ChallengeReward_Item_C_SetRepDetails_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.GetPatchTagByChallenge
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            CHALLENGE                      (Parm)
// struct FGameplayTag            Patch_Tag                      (Parm, OutParm)
// struct FText                   Patch_Name                     (Parm, OutParm)
// TEnumAsByte<EDLCValueDisplayType> Patch_Type                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_HUD_ChallengeReward_Item_C::GetPatchTagByChallenge(const struct FGameplayTag& CHALLENGE, struct FGameplayTag* Patch_Tag, struct FText* Patch_Name, TEnumAsByte<EDLCValueDisplayType>* Patch_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.GetPatchTagByChallenge");

	UUI_HUD_ChallengeReward_Item_C_GetPatchTagByChallenge_Params params;
	params.CHALLENGE = CHALLENGE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Patch_Tag != nullptr)
		*Patch_Tag = params.Patch_Tag;
	if (Patch_Name != nullptr)
		*Patch_Name = params.Patch_Name;
	if (Patch_Type != nullptr)
		*Patch_Type = params.Patch_Type;
}


// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.SetPatchDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            ChallengeType                  (Parm)
// struct FLinearColor            RewardColor                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDLCChallengeRank> Rank                           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUD_ChallengeReward_Item_C::SetPatchDetails(const struct FGameplayTag& ChallengeType, const struct FLinearColor& RewardColor, TEnumAsByte<EDLCChallengeRank> Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.SetPatchDetails");

	UUI_HUD_ChallengeReward_Item_C_SetPatchDetails_Params params;
	params.ChallengeType = ChallengeType;
	params.RewardColor = RewardColor;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.OnFail_2D6A96AE4B565344B5AC71AC56C7A36E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUD_ChallengeReward_Item_C::OnFail_2D6A96AE4B565344B5AC71AC56C7A36E(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.OnFail_2D6A96AE4B565344B5AC71AC56C7A36E");

	UUI_HUD_ChallengeReward_Item_C_OnFail_2D6A96AE4B565344B5AC71AC56C7A36E_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.OnSuccess_2D6A96AE4B565344B5AC71AC56C7A36E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUD_ChallengeReward_Item_C::OnSuccess_2D6A96AE4B565344B5AC71AC56C7A36E(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.OnSuccess_2D6A96AE4B565344B5AC71AC56C7A36E");

	UUI_HUD_ChallengeReward_Item_C_OnSuccess_2D6A96AE4B565344B5AC71AC56C7A36E_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.OnFail_8EC0E0394064DA46E1B2948AAF6A1117
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUD_ChallengeReward_Item_C::OnFail_8EC0E0394064DA46E1B2948AAF6A1117(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.OnFail_8EC0E0394064DA46E1B2948AAF6A1117");

	UUI_HUD_ChallengeReward_Item_C_OnFail_8EC0E0394064DA46E1B2948AAF6A1117_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.OnSuccess_8EC0E0394064DA46E1B2948AAF6A1117
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUD_ChallengeReward_Item_C::OnSuccess_8EC0E0394064DA46E1B2948AAF6A1117(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.OnSuccess_8EC0E0394064DA46E1B2948AAF6A1117");

	UUI_HUD_ChallengeReward_Item_C_OnSuccess_8EC0E0394064DA46E1B2948AAF6A1117_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HUD_ChallengeReward_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.Construct");

	UUI_HUD_ChallengeReward_Item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.LoadPatch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    Texture                        (Parm)

void UUI_HUD_ChallengeReward_Item_C::LoadPatch(TAssetPtr<class UTexture2D> Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.LoadPatch");

	UUI_HUD_ChallengeReward_Item_C_LoadPatch_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.LoadRepPatch
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    Texture                        (Parm)

void UUI_HUD_ChallengeReward_Item_C::LoadRepPatch(TAssetPtr<class UTexture2D> Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.LoadRepPatch");

	UUI_HUD_ChallengeReward_Item_C_LoadRepPatch_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.ExecuteUbergraph_UI_HUD_ChallengeReward_Item
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HUD_ChallengeReward_Item_C::ExecuteUbergraph_UI_HUD_ChallengeReward_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HUD_ChallengeReward_Item.UI_HUD_ChallengeReward_Item_C.ExecuteUbergraph_UI_HUD_ChallengeReward_Item");

	UUI_HUD_ChallengeReward_Item_C_ExecuteUbergraph_UI_HUD_ChallengeReward_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
