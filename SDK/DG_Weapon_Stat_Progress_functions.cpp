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

// Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.SetPercentNoTween
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UWeapon_Stat_Progress_C::SetPercentNoTween(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.SetPercentNoTween");

	UWeapon_Stat_Progress_C_SetPercentNoTween_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UWeapon_Stat_Progress_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.Init");

	UWeapon_Stat_Progress_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.SetMainPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UWeapon_Stat_Progress_C::SetMainPercent(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.SetMainPercent");

	UWeapon_Stat_Progress_C_SetMainPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.SetNewPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UWeapon_Stat_Progress_C::SetNewPercent(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.SetNewPercent");

	UWeapon_Stat_Progress_C_SetNewPercent_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.TweenNewPercent
// (Public, BlueprintCallable, BlueprintEvent)

void UWeapon_Stat_Progress_C::TweenNewPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.TweenNewPercent");

	UWeapon_Stat_Progress_C_TweenNewPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.TweenMainPercent
// (Public, BlueprintCallable, BlueprintEvent)

void UWeapon_Stat_Progress_C::TweenMainPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.TweenMainPercent");

	UWeapon_Stat_Progress_C_TweenMainPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewPercent                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeapon_Stat_Progress_C::SetPercent(float Percent, float NewPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.SetPercent");

	UWeapon_Stat_Progress_C_SetPercent_Params params;
	params.Percent = Percent;
	params.NewPercent = NewPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeapon_Stat_Progress_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.Construct");

	UWeapon_Stat_Progress_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.FirstPercentComplete_Event
// (BlueprintCallable, BlueprintEvent)

void UWeapon_Stat_Progress_C::FirstPercentComplete_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.FirstPercentComplete_Event");

	UWeapon_Stat_Progress_C_FirstPercentComplete_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.ExecuteUbergraph_Weapon_Stat_Progress
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeapon_Stat_Progress_C::ExecuteUbergraph_Weapon_Stat_Progress(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.ExecuteUbergraph_Weapon_Stat_Progress");

	UWeapon_Stat_Progress_C_ExecuteUbergraph_Weapon_Stat_Progress_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.FirstPercentComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWeapon_Stat_Progress_C::FirstPercentComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Stat_Progress.Weapon_Stat_Progress_C.FirstPercentComplete__DelegateSignature");

	UWeapon_Stat_Progress_C_FirstPercentComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
