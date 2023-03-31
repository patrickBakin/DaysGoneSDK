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

// Function UI_Subtitle.UI_Subtitle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_Subtitle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Subtitle.UI_Subtitle_C.Construct");

	UUI_Subtitle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Subtitle.UI_Subtitle_C.Display Cue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBendSubtitleCue        Cue                            (Parm)

void UUI_Subtitle_C::Display_Cue(const struct FBendSubtitleCue& Cue)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Subtitle.UI_Subtitle_C.Display Cue");

	UUI_Subtitle_C_Display_Cue_Params params;
	params.Cue = Cue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Subtitle.UI_Subtitle_C.Subtitle Complete
// (BlueprintCallable, BlueprintEvent)

void UUI_Subtitle_C::Subtitle_Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Subtitle.UI_Subtitle_C.Subtitle Complete");

	UUI_Subtitle_C_Subtitle_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Subtitle.UI_Subtitle_C.Hide Subtitle
// (BlueprintCallable, BlueprintEvent)

void UUI_Subtitle_C::Hide_Subtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Subtitle.UI_Subtitle_C.Hide Subtitle");

	UUI_Subtitle_C_Hide_Subtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Subtitle.UI_Subtitle_C.Destroy
// (BlueprintCallable, BlueprintEvent)

void UUI_Subtitle_C::Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Subtitle.UI_Subtitle_C.Destroy");

	UUI_Subtitle_C_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Subtitle.UI_Subtitle_C.ExecuteUbergraph_UI_Subtitle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_Subtitle_C::ExecuteUbergraph_UI_Subtitle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Subtitle.UI_Subtitle_C.ExecuteUbergraph_UI_Subtitle");

	UUI_Subtitle_C_ExecuteUbergraph_UI_Subtitle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
