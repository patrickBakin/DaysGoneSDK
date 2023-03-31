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

// Function UI_SubtitleWidget.UI_SubtitleWidget_C.GetCurrentPlaybackTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SubtitleWidget_C::GetCurrentPlaybackTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SubtitleWidget.UI_SubtitleWidget_C.GetCurrentPlaybackTime");

	UUI_SubtitleWidget_C_GetCurrentPlaybackTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Time != nullptr)
		*Time = params.Time;
}


// Function UI_SubtitleWidget.UI_SubtitleWidget_C.ClearCompletedSubtitles
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_SubtitleWidget_C::ClearCompletedSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SubtitleWidget.UI_SubtitleWidget_C.ClearCompletedSubtitles");

	UUI_SubtitleWidget_C_ClearCompletedSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SubtitleWidget.UI_SubtitleWidget_C.FindSubtitleForCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendSubtitleCue        BendSubtitleCue                (ConstParm, Parm, OutParm, ReferenceParm)
// class UUI_Subtitle_C*          SubTitle                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUI_SubtitleWidget_C::FindSubtitleForCharacter(const struct FBendSubtitleCue& BendSubtitleCue, class UUI_Subtitle_C** SubTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SubtitleWidget.UI_SubtitleWidget_C.FindSubtitleForCharacter");

	UUI_SubtitleWidget_C_FindSubtitleForCharacter_Params params;
	params.BendSubtitleCue = BendSubtitleCue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubTitle != nullptr)
		*SubTitle = params.SubTitle;
}


// Function UI_SubtitleWidget.UI_SubtitleWidget_C.JoinString
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FString>         SourceArray                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUI_SubtitleWidget_C::JoinString(TArray<struct FString> SourceArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SubtitleWidget.UI_SubtitleWidget_C.JoinString");

	UUI_SubtitleWidget_C_JoinString_Params params;
	params.SourceArray = SourceArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UI_SubtitleWidget.UI_SubtitleWidget_C.UpdateSubtitles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_SubtitleWidget_C::UpdateSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SubtitleWidget.UI_SubtitleWidget_C.UpdateSubtitles");

	UUI_SubtitleWidget_C_UpdateSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SubtitleWidget.UI_SubtitleWidget_C.SetDebugString
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 String                         (Parm, ZeroConstructor)

void UUI_SubtitleWidget_C::SetDebugString(const struct FString& String)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SubtitleWidget.UI_SubtitleWidget_C.SetDebugString");

	UUI_SubtitleWidget_C_SetDebugString_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SubtitleWidget.UI_SubtitleWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_SubtitleWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SubtitleWidget.UI_SubtitleWidget_C.Construct");

	UUI_SubtitleWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SubtitleWidget.UI_SubtitleWidget_C.ClearSubtitles
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_SubtitleWidget_C::ClearSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SubtitleWidget.UI_SubtitleWidget_C.ClearSubtitles");

	UUI_SubtitleWidget_C_ClearSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SubtitleWidget.UI_SubtitleWidget_C.DisplaySubtitle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                SubTitle                       (Parm, ZeroConstructor)

void UUI_SubtitleWidget_C::DisplaySubtitle(struct FString* SubTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SubtitleWidget.UI_SubtitleWidget_C.DisplaySubtitle");

	UUI_SubtitleWidget_C_DisplaySubtitle_Params params;
	params.SubTitle = SubTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SubtitleWidget.UI_SubtitleWidget_C.DisplaySubtitleCue
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendSubtitleCue*       SubtitleCue                    (ConstParm, Parm, OutParm, ReferenceParm)

void UUI_SubtitleWidget_C::DisplaySubtitleCue(struct FBendSubtitleCue* SubtitleCue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SubtitleWidget.UI_SubtitleWidget_C.DisplaySubtitleCue");

	UUI_SubtitleWidget_C_DisplaySubtitleCue_Params params;
	params.SubtitleCue = SubtitleCue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SubtitleWidget.UI_SubtitleWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SubtitleWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SubtitleWidget.UI_SubtitleWidget_C.Tick");

	UUI_SubtitleWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SubtitleWidget.UI_SubtitleWidget_C.DisplaySubtitleCueArray
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBendSubtitleCue>* SubtitleCueArray               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SubtitleWidget_C::DisplaySubtitleCueArray(TArray<struct FBendSubtitleCue>* SubtitleCueArray, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SubtitleWidget.UI_SubtitleWidget_C.DisplaySubtitleCueArray");

	UUI_SubtitleWidget_C_DisplaySubtitleCueArray_Params params;
	params.SubtitleCueArray = SubtitleCueArray;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SubtitleWidget.UI_SubtitleWidget_C.KillSubtitles
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UUI_SubtitleWidget_C::KillSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SubtitleWidget.UI_SubtitleWidget_C.KillSubtitles");

	UUI_SubtitleWidget_C_KillSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_SubtitleWidget.UI_SubtitleWidget_C.ExecuteUbergraph_UI_SubtitleWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_SubtitleWidget_C::ExecuteUbergraph_UI_SubtitleWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_SubtitleWidget.UI_SubtitleWidget_C.ExecuteUbergraph_UI_SubtitleWidget");

	UUI_SubtitleWidget_C_ExecuteUbergraph_UI_SubtitleWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
