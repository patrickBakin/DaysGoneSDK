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

// Function HUD_Debug_MissionLoad_Button2.HUD_Debug_MissionLoad_Button2_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected_                      (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Debug_MissionLoad_Button2_C::SetSelected(bool Selected_)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Debug_MissionLoad_Button2.HUD_Debug_MissionLoad_Button2_C.SetSelected");

	UHUD_Debug_MissionLoad_Button2_C_SetSelected_Params params;
	params.Selected_ = Selected_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Debug_MissionLoad_Button2.HUD_Debug_MissionLoad_Button2_C.SetButtonText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHUD_Debug_MissionLoad_Button2_C::SetButtonText()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Debug_MissionLoad_Button2.HUD_Debug_MissionLoad_Button2_C.SetButtonText");

	UHUD_Debug_MissionLoad_Button2_C_SetButtonText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HUD_Debug_MissionLoad_Button2.HUD_Debug_MissionLoad_Button2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHUD_Debug_MissionLoad_Button2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Debug_MissionLoad_Button2.HUD_Debug_MissionLoad_Button2_C.Construct");

	UHUD_Debug_MissionLoad_Button2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Debug_MissionLoad_Button2.HUD_Debug_MissionLoad_Button2_C.ExecuteUbergraph_HUD_Debug_MissionLoad_Button2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Debug_MissionLoad_Button2_C::ExecuteUbergraph_HUD_Debug_MissionLoad_Button2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Debug_MissionLoad_Button2.HUD_Debug_MissionLoad_Button2_C.ExecuteUbergraph_HUD_Debug_MissionLoad_Button2");

	UHUD_Debug_MissionLoad_Button2_C_ExecuteUbergraph_HUD_Debug_MissionLoad_Button2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
