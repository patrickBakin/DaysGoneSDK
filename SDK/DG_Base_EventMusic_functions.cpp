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

// Function Base_EventMusic.Base_EventMusic_C.SetEndingState
// (Public, BlueprintCallable, BlueprintEvent)

void UBase_EventMusic_C::SetEndingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_EventMusic.Base_EventMusic_C.SetEndingState");

	UBase_EventMusic_C_SetEndingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_EventMusic.Base_EventMusic_C.OnSetAsPrimary
// (Event, Public, BlueprintEvent)

void UBase_EventMusic_C::OnSetAsPrimary()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_EventMusic.Base_EventMusic_C.OnSetAsPrimary");

	UBase_EventMusic_C_OnSetAsPrimary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_EventMusic.Base_EventMusic_C.OnSetAsSecondary
// (Event, Public, BlueprintEvent)

void UBase_EventMusic_C::OnSetAsSecondary()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_EventMusic.Base_EventMusic_C.OnSetAsSecondary");

	UBase_EventMusic_C_OnSetAsSecondary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_EventMusic.Base_EventMusic_C.OnSetAsLast
// (Event, Public, BlueprintEvent)

void UBase_EventMusic_C::OnSetAsLast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_EventMusic.Base_EventMusic_C.OnSetAsLast");

	UBase_EventMusic_C_OnSetAsLast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Base_EventMusic.Base_EventMusic_C.ExecuteUbergraph_Base_EventMusic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBase_EventMusic_C::ExecuteUbergraph_Base_EventMusic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Base_EventMusic.Base_EventMusic_C.ExecuteUbergraph_Base_EventMusic");

	UBase_EventMusic_C_ExecuteUbergraph_Base_EventMusic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
