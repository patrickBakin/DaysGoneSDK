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

// Function ScoreCounter.ScoreCounter_C.DisplayScoreAward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               MotionVector                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UScoreCounter_C::DisplayScoreAward(const struct FVector2D& MotionVector, int Score, const struct FText& Title, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreCounter.ScoreCounter_C.DisplayScoreAward");

	UScoreCounter_C_DisplayScoreAward_Params params;
	params.MotionVector = MotionVector;
	params.Score = Score;
	params.Title = Title;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreCounter.ScoreCounter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScoreCounter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreCounter.ScoreCounter_C.Construct");

	UScoreCounter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreCounter.ScoreCounter_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UScoreCounter_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreCounter.ScoreCounter_C.Tick");

	UScoreCounter_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreCounter.ScoreCounter_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void UScoreCounter_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreCounter.ScoreCounter_C.CustomEvent_1");

	UScoreCounter_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreCounter.ScoreCounter_C.ExecuteUbergraph_ScoreCounter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UScoreCounter_C::ExecuteUbergraph_ScoreCounter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreCounter.ScoreCounter_C.ExecuteUbergraph_ScoreCounter");

	UScoreCounter_C_ExecuteUbergraph_ScoreCounter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
