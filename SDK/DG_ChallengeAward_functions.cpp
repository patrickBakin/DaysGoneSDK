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

// Function ChallengeAward.ChallengeAward_C.GetParentKey
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag            Key                            (Parm)
// struct FGameplayTag            ParentKey                      (Parm, OutParm)

void UChallengeAward_C::GetParentKey(const struct FGameplayTag& Key, struct FGameplayTag* ParentKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeAward.ChallengeAward_C.GetParentKey");

	UChallengeAward_C_GetParentKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParentKey != nullptr)
		*ParentKey = params.ParentKey;
}


// Function ChallengeAward.ChallengeAward_C.SetAwardValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSubChallenge                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDLCChallengeRank> Rank                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDLCChallengeType> Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UChallengeAward_C::SetAwardValues(class UTexture2D* Icon, bool bIsSubChallenge, TEnumAsByte<EDLCChallengeRank> Rank, TEnumAsByte<EDLCChallengeType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeAward.ChallengeAward_C.SetAwardValues");

	UChallengeAward_C_SetAwardValues_Params params;
	params.Icon = Icon;
	params.bIsSubChallenge = bIsSubChallenge;
	params.Rank = Rank;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeAward.ChallengeAward_C.SetAward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsSubChallenge                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDLCChallengeRank> Rank                           (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDLCChallengeType> Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UChallengeAward_C::SetAward(const struct FName& Key, bool bIsSubChallenge, TEnumAsByte<EDLCChallengeRank> Rank, TEnumAsByte<EDLCChallengeType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeAward.ChallengeAward_C.SetAward");

	UChallengeAward_C_SetAward_Params params;
	params.Key = Key;
	params.bIsSubChallenge = bIsSubChallenge;
	params.Rank = Rank;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeAward.ChallengeAward_C.OnFail_516F99A54A68B3E029DB76AA48944DF9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UChallengeAward_C::OnFail_516F99A54A68B3E029DB76AA48944DF9(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeAward.ChallengeAward_C.OnFail_516F99A54A68B3E029DB76AA48944DF9");

	UChallengeAward_C_OnFail_516F99A54A68B3E029DB76AA48944DF9_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeAward.ChallengeAward_C.OnSuccess_516F99A54A68B3E029DB76AA48944DF9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UChallengeAward_C::OnSuccess_516F99A54A68B3E029DB76AA48944DF9(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeAward.ChallengeAward_C.OnSuccess_516F99A54A68B3E029DB76AA48944DF9");

	UChallengeAward_C_OnSuccess_516F99A54A68B3E029DB76AA48944DF9_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeAward.ChallengeAward_C.OnFail_5019D13A4F6D8D4FA102E8A8CA114B52
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UChallengeAward_C::OnFail_5019D13A4F6D8D4FA102E8A8CA114B52(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeAward.ChallengeAward_C.OnFail_5019D13A4F6D8D4FA102E8A8CA114B52");

	UChallengeAward_C_OnFail_5019D13A4F6D8D4FA102E8A8CA114B52_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeAward.ChallengeAward_C.OnSuccess_5019D13A4F6D8D4FA102E8A8CA114B52
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UChallengeAward_C::OnSuccess_5019D13A4F6D8D4FA102E8A8CA114B52(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeAward.ChallengeAward_C.OnSuccess_5019D13A4F6D8D4FA102E8A8CA114B52");

	UChallengeAward_C_OnSuccess_5019D13A4F6D8D4FA102E8A8CA114B52_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeAward.ChallengeAward_C.Set Challenge From Save
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Key                            (Parm)

void UChallengeAward_C::Set_Challenge_From_Save(const struct FGameplayTag& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeAward.ChallengeAward_C.Set Challenge From Save");

	UChallengeAward_C_Set_Challenge_From_Save_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeAward.ChallengeAward_C.Set Subchallenge From Save
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Key                            (Parm)

void UChallengeAward_C::Set_Subchallenge_From_Save(const struct FGameplayTag& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeAward.ChallengeAward_C.Set Subchallenge From Save");

	UChallengeAward_C_Set_Subchallenge_From_Save_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeAward.ChallengeAward_C.ExecuteUbergraph_ChallengeAward
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UChallengeAward_C::ExecuteUbergraph_ChallengeAward(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeAward.ChallengeAward_C.ExecuteUbergraph_ChallengeAward");

	UChallengeAward_C_ExecuteUbergraph_ChallengeAward_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
