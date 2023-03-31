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

// Function UI_BikeAdvertise.UI_BikeAdvertise_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_BikeAdvertise_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BikeAdvertise.UI_BikeAdvertise_C.Construct");

	UUI_BikeAdvertise_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BikeAdvertise.UI_BikeAdvertise_C.SetState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Available                      (Parm, ZeroConstructor, IsPlainOldData)

void UUI_BikeAdvertise_C::SetState(bool Available)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BikeAdvertise.UI_BikeAdvertise_C.SetState");

	UUI_BikeAdvertise_C_SetState_Params params;
	params.Available = Available;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_BikeAdvertise.UI_BikeAdvertise_C.ExecuteUbergraph_UI_BikeAdvertise
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_BikeAdvertise_C::ExecuteUbergraph_UI_BikeAdvertise(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_BikeAdvertise.UI_BikeAdvertise_C.ExecuteUbergraph_UI_BikeAdvertise");

	UUI_BikeAdvertise_C_ExecuteUbergraph_UI_BikeAdvertise_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
