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

// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BeginTransition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*        InAnimation                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EUMGSequencePlayMode> PlayMode                       (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_ChallengesMenu_C::BeginTransition(class UWidgetAnimation* InAnimation, TEnumAsByte<EUMGSequencePlayMode> PlayMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BeginTransition");

	UDLC_ChallengesMenu_C_BeginTransition_Params params;
	params.InAnimation = InAnimation;
	params.PlayMode = PlayMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnChallengeSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (Parm)

void UDLC_ChallengesMenu_C::OnChallengeSelected(const struct FName& Key, const struct FGameplayTag& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnChallengeSelected");

	UDLC_ChallengesMenu_C_OnChallengeSelected_Params params;
	params.Key = Key;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.HandleNavigation
// (Public, BlueprintCallable, BlueprintEvent)

void UDLC_ChallengesMenu_C::HandleNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.HandleNavigation");

	UDLC_ChallengesMenu_C_HandleNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.To Challenges | From Loadout
// (BlueprintCallable, BlueprintEvent)

void UDLC_ChallengesMenu_C::To_Challenges_|_From_Loadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.To Challenges | From Loadout");

	UDLC_ChallengesMenu_C_To_Challenges_|_From_Loadout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.To Loadout | From Challenges
// (BlueprintCallable, BlueprintEvent)

void UDLC_ChallengesMenu_C::To_Loadout_|_From_Challenges()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.To Loadout | From Challenges");

	UDLC_ChallengesMenu_C_To_Loadout_|_From_Challenges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.To Weekly Challenge Loadout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ChallengeTagName               (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_ChallengesMenu_C::To_Weekly_Challenge_Loadout(const struct FName& ChallengeTagName)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.To Weekly Challenge Loadout");

	UDLC_ChallengesMenu_C_To_Weekly_Challenge_Loadout_Params params;
	params.ChallengeTagName = ChallengeTagName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDLC_ChallengesMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.Construct");

	UDLC_ChallengesMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_ChallengesMenu_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.Tick");

	UDLC_ChallengesMenu_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnCancelPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_ChallengesMenu_C::OnCancelPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnCancelPressed");

	UDLC_ChallengesMenu_C_OnCancelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnConfirmPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_ChallengesMenu_C::OnConfirmPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnConfirmPressed");

	UDLC_ChallengesMenu_C_OnConfirmPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BndEvt__LoadoutToLeaderboard_K2Node_ComponentBoundEvent_717_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UDLC_ChallengesMenu_C::BndEvt__LoadoutToLeaderboard_K2Node_ComponentBoundEvent_717_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BndEvt__LoadoutToLeaderboard_K2Node_ComponentBoundEvent_717_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UDLC_ChallengesMenu_C_BndEvt__LoadoutToLeaderboard_K2Node_ComponentBoundEvent_717_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BndEvt__ChallengeToLoadout_K2Node_ComponentBoundEvent_720_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UDLC_ChallengesMenu_C::BndEvt__ChallengeToLoadout_K2Node_ComponentBoundEvent_720_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BndEvt__ChallengeToLoadout_K2Node_ComponentBoundEvent_720_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UDLC_ChallengesMenu_C_BndEvt__ChallengeToLoadout_K2Node_ComponentBoundEvent_720_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BndEvt__DLC_ChallengesPage_K2Node_ComponentBoundEvent_1027_DLCMenuPageAction__DelegateSignature
// (BlueprintEvent)

void UDLC_ChallengesMenu_C::BndEvt__DLC_ChallengesPage_K2Node_ComponentBoundEvent_1027_DLCMenuPageAction__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BndEvt__DLC_ChallengesPage_K2Node_ComponentBoundEvent_1027_DLCMenuPageAction__DelegateSignature");

	UDLC_ChallengesMenu_C_BndEvt__DLC_ChallengesPage_K2Node_ComponentBoundEvent_1027_DLCMenuPageAction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BndEvt__DLC_ChallengesPage_K2Node_ComponentBoundEvent_1031_DLCMenuPageAction__DelegateSignature
// (BlueprintEvent)

void UDLC_ChallengesMenu_C::BndEvt__DLC_ChallengesPage_K2Node_ComponentBoundEvent_1031_DLCMenuPageAction__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BndEvt__DLC_ChallengesPage_K2Node_ComponentBoundEvent_1031_DLCMenuPageAction__DelegateSignature");

	UDLC_ChallengesMenu_C_BndEvt__DLC_ChallengesPage_K2Node_ComponentBoundEvent_1031_DLCMenuPageAction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BndEvt__DLC_LoadoutPage_K2Node_ComponentBoundEvent_1042_DLCMenuPageAction__DelegateSignature
// (BlueprintEvent)

void UDLC_ChallengesMenu_C::BndEvt__DLC_LoadoutPage_K2Node_ComponentBoundEvent_1042_DLCMenuPageAction__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BndEvt__DLC_LoadoutPage_K2Node_ComponentBoundEvent_1042_DLCMenuPageAction__DelegateSignature");

	UDLC_ChallengesMenu_C_BndEvt__DLC_LoadoutPage_K2Node_ComponentBoundEvent_1042_DLCMenuPageAction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BndEvt__Loadout_K2Node_ComponentBoundEvent_1024_DLCMenuPageAction__DelegateSignature
// (BlueprintEvent)

void UDLC_ChallengesMenu_C::BndEvt__Loadout_K2Node_ComponentBoundEvent_1024_DLCMenuPageAction__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BndEvt__Loadout_K2Node_ComponentBoundEvent_1024_DLCMenuPageAction__DelegateSignature");

	UDLC_ChallengesMenu_C_BndEvt__Loadout_K2Node_ComponentBoundEvent_1024_DLCMenuPageAction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnWidgetClosed
// (Event, Protected, BlueprintEvent)

void UDLC_ChallengesMenu_C::OnWidgetClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnWidgetClosed");

	UDLC_ChallengesMenu_C_OnWidgetClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BndEvt__CurrentMenu_K2Node_ComponentBoundEvent_56_DLCMenuPageAction__DelegateSignature
// (BlueprintEvent)

void UDLC_ChallengesMenu_C::BndEvt__CurrentMenu_K2Node_ComponentBoundEvent_56_DLCMenuPageAction__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.BndEvt__CurrentMenu_K2Node_ComponentBoundEvent_56_DLCMenuPageAction__DelegateSignature");

	UDLC_ChallengesMenu_C_BndEvt__CurrentMenu_K2Node_ComponentBoundEvent_56_DLCMenuPageAction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnPagePreviousPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_ChallengesMenu_C::OnPagePreviousPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnPagePreviousPressed");

	UDLC_ChallengesMenu_C_OnPagePreviousPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnPageNextPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_ChallengesMenu_C::OnPageNextPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnPageNextPressed");

	UDLC_ChallengesMenu_C_OnPageNextPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnLeftPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_ChallengesMenu_C::OnLeftPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnLeftPressed");

	UDLC_ChallengesMenu_C_OnLeftPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnRightPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_ChallengesMenu_C::OnRightPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnRightPressed");

	UDLC_ChallengesMenu_C_OnRightPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnDownPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_ChallengesMenu_C::OnDownPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnDownPressed");

	UDLC_ChallengesMenu_C_OnDownPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnUpPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UDLC_ChallengesMenu_C::OnUpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.OnUpPressed");

	UDLC_ChallengesMenu_C_OnUpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.ExecuteUbergraph_DLC_ChallengesMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_ChallengesMenu_C::ExecuteUbergraph_DLC_ChallengesMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.ExecuteUbergraph_DLC_ChallengesMenu");

	UDLC_ChallengesMenu_C_ExecuteUbergraph_DLC_ChallengesMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.ChallengeSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMissionIDs>       ChallengeID                    (Parm, ZeroConstructor, IsPlainOldData)

void UDLC_ChallengesMenu_C::ChallengeSelected__DelegateSignature(TEnumAsByte<EMissionIDs> ChallengeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function DLC_ChallengesMenu.DLC_ChallengesMenu_C.ChallengeSelected__DelegateSignature");

	UDLC_ChallengesMenu_C_ChallengeSelected__DelegateSignature_Params params;
	params.ChallengeID = ChallengeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
