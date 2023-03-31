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

// Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetSubtitleColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUI_HudPopupType>  InByte                         (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudMissionPopup_C::SetSubtitleColor(TEnumAsByte<EUI_HudPopupType> InByte)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetSubtitleColor");

	UUI_HudMissionPopup_C_SetSubtitleColor_Params params;
	params.InByte = InByte;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUI_HudPopupType>  PopUpType                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudMissionPopup_C::SetImage(TEnumAsByte<EUI_HudPopupType> PopUpType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetImage");

	UUI_HudMissionPopup_C_SetImage_Params params;
	params.PopUpType = PopUpType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionPopup.UI_HudMissionPopup_C.GetMissionPopupQueue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FUI_HudMissionPopupDetails> PopupQueue                     (Parm, OutParm, ZeroConstructor)

void UUI_HudMissionPopup_C::GetMissionPopupQueue(TArray<struct FUI_HudMissionPopupDetails>* PopupQueue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionPopup.UI_HudMissionPopup_C.GetMissionPopupQueue");

	UUI_HudMissionPopup_C_GetMissionPopupQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PopupQueue != nullptr)
		*PopupQueue = params.PopupQueue;
}


// Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetInteractHoldProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Progress                       (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudMissionPopup_C::SetInteractHoldProgress(float Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetInteractHoldProgress");

	UUI_HudMissionPopup_C_SetInteractHoldProgress_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionPopup.UI_HudMissionPopup_C.ProcessQueue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_HudMissionPopup_C::ProcessQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionPopup.UI_HudMissionPopup_C.ProcessQueue");

	UUI_HudMissionPopup_C_ProcessQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionPopup.UI_HudMissionPopup_C.AddPopup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUI_HudPopupType>  Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// TEnumAsByte<EUI_RewardType>    RewardType                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            RewardValue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   SubTitle                       (Parm)
// struct FActorInteractDetails   InteractDetails                (Parm)
// class UObject*                 UtilityObject                  (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudMissionPopup_C::AddPopup(TEnumAsByte<EUI_HudPopupType> Type, const struct FText& Title, TEnumAsByte<EUI_RewardType> RewardType, int RewardValue, const struct FText& SubTitle, const struct FActorInteractDetails& InteractDetails, class UObject* UtilityObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionPopup.UI_HudMissionPopup_C.AddPopup");

	UUI_HudMissionPopup_C_AddPopup_Params params;
	params.Type = Type;
	params.Title = Title;
	params.RewardType = RewardType;
	params.RewardValue = RewardValue;
	params.SubTitle = SubTitle;
	params.InteractDetails = InteractDetails;
	params.UtilityObject = UtilityObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetSubtitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm)

void UUI_HudMissionPopup_C::SetSubtitle(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetSubtitle");

	UUI_HudMissionPopup_C_SetSubtitle_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetRewardValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudMissionPopup_C::SetRewardValue(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetRewardValue");

	UUI_HudMissionPopup_C_SetRewardValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetRewardIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudMissionPopup_C::SetRewardIcon(class UTexture2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetRewardIcon");

	UUI_HudMissionPopup_C_SetRewardIcon_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EUI_HudPopupType>  Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// TEnumAsByte<EUI_RewardType>    RewardType                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            RewardValue                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   SubTitle                       (Parm)
// struct FActorInteractDetails   Interact                       (Parm)

void UUI_HudMissionPopup_C::SetDetails(TEnumAsByte<EUI_HudPopupType> Type, const struct FText& Title, TEnumAsByte<EUI_RewardType> RewardType, int RewardValue, const struct FText& SubTitle, const struct FActorInteractDetails& Interact)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetDetails");

	UUI_HudMissionPopup_C_SetDetails_Params params;
	params.Type = Type;
	params.Title = Title;
	params.RewardType = RewardType;
	params.RewardValue = RewardValue;
	params.SubTitle = SubTitle;
	params.Interact = Interact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetInvisible
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudMissionPopup_C::SetInvisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetInvisible");

	UUI_HudMissionPopup_C_SetInvisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetVisible
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_HudMissionPopup_C::SetVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetVisible");

	UUI_HudMissionPopup_C_SetVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetPopupTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm)

void UUI_HudMissionPopup_C::SetPopupTitle(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetPopupTitle");

	UUI_HudMissionPopup_C_SetPopupTitle_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (Parm)

void UUI_HudMissionPopup_C::SetTitle(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionPopup.UI_HudMissionPopup_C.SetTitle");

	UUI_HudMissionPopup_C_SetTitle_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionPopup.UI_HudMissionPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_HudMissionPopup_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionPopup.UI_HudMissionPopup_C.Construct");

	UUI_HudMissionPopup_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionPopup.UI_HudMissionPopup_C.PopupAdded_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_HudMissionPopup_C::PopupAdded_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionPopup.UI_HudMissionPopup_C.PopupAdded_Event");

	UUI_HudMissionPopup_C_PopupAdded_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionPopup.UI_HudMissionPopup_C.PopupComplete_Event
// (BlueprintCallable, BlueprintEvent)

void UUI_HudMissionPopup_C::PopupComplete_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionPopup.UI_HudMissionPopup_C.PopupComplete_Event");

	UUI_HudMissionPopup_C_PopupComplete_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionPopup.UI_HudMissionPopup_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudMissionPopup_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionPopup.UI_HudMissionPopup_C.OnAnimationFinished");

	UUI_HudMissionPopup_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionPopup.UI_HudMissionPopup_C.ExecuteUbergraph_UI_HudMissionPopup
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_HudMissionPopup_C::ExecuteUbergraph_UI_HudMissionPopup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionPopup.UI_HudMissionPopup_C.ExecuteUbergraph_UI_HudMissionPopup");

	UUI_HudMissionPopup_C_ExecuteUbergraph_UI_HudMissionPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionPopup.UI_HudMissionPopup_C.PopupComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_HudMissionPopup_C::PopupComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionPopup.UI_HudMissionPopup_C.PopupComplete__DelegateSignature");

	UUI_HudMissionPopup_C_PopupComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_HudMissionPopup.UI_HudMissionPopup_C.PopupAdded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_HudMissionPopup_C::PopupAdded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_HudMissionPopup.UI_HudMissionPopup_C.PopupAdded__DelegateSignature");

	UUI_HudMissionPopup_C_PopupAdded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
