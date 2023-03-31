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

// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.StopSounds
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudXpMeterWidget2_C::StopSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.StopSounds");

	UUI_HudXpMeterWidget2_C_StopSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.HandleTick
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudXpMeterWidget2_C::HandleTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.HandleTick");

	UUI_HudXpMeterWidget2_C_HandleTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.FadeOut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudXpMeterWidget2_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.FadeOut");

	UUI_HudXpMeterWidget2_C_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.UpdateTrust
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TrustGained                    (Parm, ZeroConstructor, IsPlainOldData)
// class UBendEncampmentData*     Encampment                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            TrustUpdate                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudXpMeterWidget2_C::UpdateTrust(int TrustGained, class UBendEncampmentData* Encampment, int TrustUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.UpdateTrust");

	UUI_HudXpMeterWidget2_C_UpdateTrust_Params params;
	params.TrustGained = TrustGained;
	params.Encampment = Encampment;
	params.TrustUpdate = TrustUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.DisplayTrust
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TrustGained                    (Parm, ZeroConstructor, IsPlainOldData)
// class UBendEncampmentData*     Encampment                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudXpMeterWidget2_C::DisplayTrust(int TrustGained, class UBendEncampmentData* Encampment)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.DisplayTrust");

	UUI_HudXpMeterWidget2_C_DisplayTrust_Params params;
	params.TrustGained = TrustGained;
	params.Encampment = Encampment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.SetInvisible
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudXpMeterWidget2_C::SetInvisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.SetInvisible");

	UUI_HudXpMeterWidget2_C_SetInvisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudXpMeterWidget2_C::SetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.SetVisible");

	UUI_HudXpMeterWidget2_C_SetVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.DisplayXP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            xp                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsLeftOverXP                   (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudXpMeterWidget2_C::DisplayXP(int xp, bool IsLeftOverXP)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.DisplayXP");

	UUI_HudXpMeterWidget2_C_DisplayXP_Params params;
	params.xp = xp;
	params.IsLeftOverXP = IsLeftOverXP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.UpdateXP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          XPadded                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudXpMeterWidget2_C::UpdateXP(float Percent, float XPadded)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.UpdateXP");

	UUI_HudXpMeterWidget2_C_UpdateXP_Params params;
	params.Percent = Percent;
	params.XPadded = XPadded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HudXpMeterWidget2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.Construct");

	UUI_HudXpMeterWidget2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudXpMeterWidget2_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.Tick");

	UUI_HudXpMeterWidget2_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.OnPreSaveGameLoaded_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudXpMeterWidget2_C::OnPreSaveGameLoaded_Event_1(bool bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.OnPreSaveGameLoaded_Event_1");

	UUI_HudXpMeterWidget2_C_OnPreSaveGameLoaded_Event_1_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.CinematicStarted
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UUI_HudXpMeterWidget2_C::CinematicStarted(const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.CinematicStarted");

	UUI_HudXpMeterWidget2_C_CinematicStarted_Params params;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.ExecuteUbergraph_UI_HudXpMeterWidget2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudXpMeterWidget2_C::ExecuteUbergraph_UI_HudXpMeterWidget2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.ExecuteUbergraph_UI_HudXpMeterWidget2");

	UUI_HudXpMeterWidget2_C_ExecuteUbergraph_UI_HudXpMeterWidget2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_HudXpMeterWidget2_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudXpMeterWidget2.UI_HudXpMeterWidget2_C.NewEventDispatcher_0__DelegateSignature");

	UUI_HudXpMeterWidget2_C_NewEventDispatcher_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
