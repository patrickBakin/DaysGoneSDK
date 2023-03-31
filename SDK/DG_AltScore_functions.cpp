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

// Function AltScore.AltScore_C.SetAltScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)

void UAltScore_C::SetAltScore(int Score, const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function AltScore.AltScore_C.SetAltScore");

	UAltScore_C_SetAltScore_Params params;
	params.Score = Score;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
