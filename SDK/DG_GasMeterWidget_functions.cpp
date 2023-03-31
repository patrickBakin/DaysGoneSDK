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

// Function GasMeterWidget.GasMeterWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGasMeterWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasMeterWidget.GasMeterWidget_C.Construct");

	UGasMeterWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasMeterWidget.GasMeterWidget_C.UpdateMeter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UGasMeterWidget_C::UpdateMeter(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasMeterWidget.GasMeterWidget_C.UpdateMeter");

	UGasMeterWidget_C_UpdateMeter_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasMeterWidget.GasMeterWidget_C.ExecuteUbergraph_GasMeterWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGasMeterWidget_C::ExecuteUbergraph_GasMeterWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasMeterWidget.GasMeterWidget_C.ExecuteUbergraph_GasMeterWidget");

	UGasMeterWidget_C_ExecuteUbergraph_GasMeterWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
