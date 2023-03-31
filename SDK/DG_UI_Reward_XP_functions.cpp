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

// Function UI_Reward_XP.UI_Reward_XP_C.SetTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reward_XP_C::SetTexture(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reward_XP.UI_Reward_XP_C.SetTexture");

	UUI_Reward_XP_C_SetTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reward_XP.UI_Reward_XP_C.UpdatePercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reward_XP_C::UpdatePercent(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reward_XP.UI_Reward_XP_C.UpdatePercent");

	UUI_Reward_XP_C_UpdatePercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reward_XP.UI_Reward_XP_C.SetDetails
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor             DetailsColorSlate              (Parm)
// int                            Next_Level                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            XPAfterAward                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            XPGained                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            DetailsColorLinear             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLevelUp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            XpCount                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            XPTotal                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_Reward_XP_C::SetDetails(const struct FSlateColor& DetailsColorSlate, int Next_Level, int XPAfterAward, int XPGained, const struct FLinearColor& DetailsColorLinear, bool IsLevelUp, int* XpCount, int* XPTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reward_XP.UI_Reward_XP_C.SetDetails");

	UUI_Reward_XP_C_SetDetails_Params params;
	params.DetailsColorSlate = DetailsColorSlate;
	params.Next_Level = Next_Level;
	params.XPAfterAward = XPAfterAward;
	params.XPGained = XPGained;
	params.DetailsColorLinear = DetailsColorLinear;
	params.IsLevelUp = IsLevelUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (XpCount != nullptr)
		*XpCount = params.XpCount;
	if (XPTotal != nullptr)
		*XPTotal = params.XPTotal;
}


// Function UI_Reward_XP.UI_Reward_XP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Reward_XP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reward_XP.UI_Reward_XP_C.Construct");

	UUI_Reward_XP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reward_XP.UI_Reward_XP_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reward_XP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reward_XP.UI_Reward_XP_C.Tick");

	UUI_Reward_XP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reward_XP.UI_Reward_XP_C.ExecuteUbergraph_UI_Reward_XP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Reward_XP_C::ExecuteUbergraph_UI_Reward_XP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reward_XP.UI_Reward_XP_C.ExecuteUbergraph_UI_Reward_XP");

	UUI_Reward_XP_C_ExecuteUbergraph_UI_Reward_XP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reward_XP.UI_Reward_XP_C.FinishedAnimatingPercent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Reward_XP_C::FinishedAnimatingPercent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reward_XP.UI_Reward_XP_C.FinishedAnimatingPercent__DelegateSignature");

	UUI_Reward_XP_C_FinishedAnimatingPercent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
