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

// Function CombatHitCounter.CombatHitCounter_C.DisplayXLScoreAward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   XPBonus                        (Parm)
// int                            XPValue                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               MotionVector                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Combo                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UCombatHitCounter_C::DisplayXLScoreAward(const struct FText& XPBonus, int XPValue, const struct FVector2D& MotionVector, int Combo, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatHitCounter.CombatHitCounter_C.DisplayXLScoreAward");

	UCombatHitCounter_C_DisplayXLScoreAward_Params params;
	params.XPBonus = XPBonus;
	params.XPValue = XPValue;
	params.MotionVector = MotionVector;
	params.Combo = Combo;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CombatHitCounter.CombatHitCounter_C.Reset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCombatHitCounter_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatHitCounter.CombatHitCounter_C.Reset");

	UCombatHitCounter_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CombatHitCounter.CombatHitCounter_C.DisplayScoreAward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   XPBonus                        (Parm)
// int                            XPValue                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               MotionVector                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Combo                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UCombatHitCounter_C::DisplayScoreAward(const struct FText& XPBonus, int XPValue, const struct FVector2D& MotionVector, int Combo, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatHitCounter.CombatHitCounter_C.DisplayScoreAward");

	UCombatHitCounter_C_DisplayScoreAward_Params params;
	params.XPBonus = XPBonus;
	params.XPValue = XPValue;
	params.MotionVector = MotionVector;
	params.Combo = Combo;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CombatHitCounter.CombatHitCounter_C.DisplayXPBonusAward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Motion_Vector                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   BonusXP                        (Parm)
// int                            XPValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UCombatHitCounter_C::DisplayXPBonusAward(const struct FVector2D& Motion_Vector, const struct FText& BonusXP, int XPValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatHitCounter.CombatHitCounter_C.DisplayXPBonusAward");

	UCombatHitCounter_C_DisplayXPBonusAward_Params params;
	params.Motion_Vector = Motion_Vector;
	params.BonusXP = BonusXP;
	params.XPValue = XPValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CombatHitCounter.CombatHitCounter_C.DisplayXPAward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               MotionVector                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            XPValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UCombatHitCounter_C::DisplayXPAward(const struct FVector2D& MotionVector, int XPValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatHitCounter.CombatHitCounter_C.DisplayXPAward");

	UCombatHitCounter_C_DisplayXPAward_Params params;
	params.MotionVector = MotionVector;
	params.XPValue = XPValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CombatHitCounter.CombatHitCounter_C.DisplayHitCounter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Combat_Award_Types> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               MotionVector                   (Parm, ZeroConstructor, IsPlainOldData)

void UCombatHitCounter_C::DisplayHitCounter(TEnumAsByte<Enum_Combat_Award_Types> Type, int Count, const struct FVector2D& MotionVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatHitCounter.CombatHitCounter_C.DisplayHitCounter");

	UCombatHitCounter_C_DisplayHitCounter_Params params;
	params.Type = Type;
	params.Count = Count;
	params.MotionVector = MotionVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CombatHitCounter.CombatHitCounter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCombatHitCounter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatHitCounter.CombatHitCounter_C.Construct");

	UCombatHitCounter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CombatHitCounter.CombatHitCounter_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UCombatHitCounter_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatHitCounter.CombatHitCounter_C.Tick");

	UCombatHitCounter_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CombatHitCounter.CombatHitCounter_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UCombatHitCounter_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatHitCounter.CombatHitCounter_C.CustomEvent_1");

	UCombatHitCounter_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CombatHitCounter.CombatHitCounter_C.ExecuteUbergraph_CombatHitCounter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCombatHitCounter_C::ExecuteUbergraph_CombatHitCounter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatHitCounter.CombatHitCounter_C.ExecuteUbergraph_CombatHitCounter");

	UCombatHitCounter_C_ExecuteUbergraph_CombatHitCounter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CombatHitCounter.CombatHitCounter_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCombatHitCounter_C::OnClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CombatHitCounter.CombatHitCounter_C.OnClose__DelegateSignature");

	UCombatHitCounter_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
