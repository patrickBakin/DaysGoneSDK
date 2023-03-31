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

// Function UI_TutorialSimple.UI_TutorialSimple_C.DisplayQueuedContent
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TutorialSimple_C::DisplayQueuedContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialSimple.UI_TutorialSimple_C.DisplayQueuedContent");

	UUI_TutorialSimple_C_DisplayQueuedContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialSimple.UI_TutorialSimple_C.IsQueueEmpty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEmpty                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_TutorialSimple_C::IsQueueEmpty(bool* IsEmpty)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialSimple.UI_TutorialSimple_C.IsQueueEmpty");

	UUI_TutorialSimple_C_IsQueueEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEmpty != nullptr)
		*IsEmpty = params.IsEmpty;
}


// Function UI_TutorialSimple.UI_TutorialSimple_C.QueueEntryComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_TutorialSimple_C::QueueEntryComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialSimple.UI_TutorialSimple_C.QueueEntryComplete");

	UUI_TutorialSimple_C_QueueEntryComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialSimple.UI_TutorialSimple_C.ProcessQueue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AutoClose                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TutorialSimple_C::ProcessQueue(bool AutoClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialSimple.UI_TutorialSimple_C.ProcessQueue");

	UUI_TutorialSimple_C_ProcessQueue_Params params;
	params.AutoClose = AutoClose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialSimple.UI_TutorialSimple_C.AddToQueue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Content                        (Parm)
// bool                           AutoClose                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CloseAction                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinimumTimeForButton           (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TutorialSimple_C::AddToQueue(const struct FText& Content, bool AutoClose, const struct FName& CloseAction, float MinimumTimeForButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialSimple.UI_TutorialSimple_C.AddToQueue");

	UUI_TutorialSimple_C_AddToQueue_Params params;
	params.Content = Content;
	params.AutoClose = AutoClose;
	params.CloseAction = CloseAction;
	params.MinimumTimeForButton = MinimumTimeForButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialSimple.UI_TutorialSimple_C.SetContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Content                        (Parm)

void UUI_TutorialSimple_C::SetContent(const struct FText& Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialSimple.UI_TutorialSimple_C.SetContent");

	UUI_TutorialSimple_C_SetContent_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialSimple.UI_TutorialSimple_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TutorialSimple_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialSimple.UI_TutorialSimple_C.Tick");

	UUI_TutorialSimple_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialSimple.UI_TutorialSimple_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_TutorialSimple_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialSimple.UI_TutorialSimple_C.Construct");

	UUI_TutorialSimple_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialSimple.UI_TutorialSimple_C.RequestClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ClosedByPhotoMode              (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TutorialSimple_C::RequestClose(bool* ClosedByPhotoMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialSimple.UI_TutorialSimple_C.RequestClose");

	UUI_TutorialSimple_C_RequestClose_Params params;
	params.ClosedByPhotoMode = ClosedByPhotoMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialSimple.UI_TutorialSimple_C.OnExitAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UUI_TutorialSimple_C::OnExitAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialSimple.UI_TutorialSimple_C.OnExitAnimationFinished");

	UUI_TutorialSimple_C_OnExitAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialSimple.UI_TutorialSimple_C.ExecuteUbergraph_UI_TutorialSimple
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_TutorialSimple_C::ExecuteUbergraph_UI_TutorialSimple(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialSimple.UI_TutorialSimple_C.ExecuteUbergraph_UI_TutorialSimple");

	UUI_TutorialSimple_C_ExecuteUbergraph_UI_TutorialSimple_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_TutorialSimple.UI_TutorialSimple_C.OnButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_TutorialSimple_C::OnButtonPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_TutorialSimple.UI_TutorialSimple_C.OnButtonPressed__DelegateSignature");

	UUI_TutorialSimple_C_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
