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

// Function UI_MapMenuPlayerPingWidget.UI_MapMenuPlayerPingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_MapMenuPlayerPingWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuPlayerPingWidget.UI_MapMenuPlayerPingWidget_C.Construct");

	UUI_MapMenuPlayerPingWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_MapMenuPlayerPingWidget.UI_MapMenuPlayerPingWidget_C.ExecuteUbergraph_UI_MapMenuPlayerPingWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UUI_MapMenuPlayerPingWidget_C::ExecuteUbergraph_UI_MapMenuPlayerPingWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_MapMenuPlayerPingWidget.UI_MapMenuPlayerPingWidget_C.ExecuteUbergraph_UI_MapMenuPlayerPingWidget");

	UUI_MapMenuPlayerPingWidget_C_ExecuteUbergraph_UI_MapMenuPlayerPingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
