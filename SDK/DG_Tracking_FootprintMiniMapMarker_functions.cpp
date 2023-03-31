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

// Function Tracking_FootprintMiniMapMarker.Tracking_FootprintMiniMapMarker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATracking_FootprintMiniMapMarker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracking_FootprintMiniMapMarker.Tracking_FootprintMiniMapMarker_C.UserConstructionScript");

	ATracking_FootprintMiniMapMarker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tracking_FootprintMiniMapMarker.Tracking_FootprintMiniMapMarker_C.DisableMarker
// (BlueprintCallable, BlueprintEvent)

void ATracking_FootprintMiniMapMarker_C::DisableMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracking_FootprintMiniMapMarker.Tracking_FootprintMiniMapMarker_C.DisableMarker");

	ATracking_FootprintMiniMapMarker_C_DisableMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tracking_FootprintMiniMapMarker.Tracking_FootprintMiniMapMarker_C.ExecuteUbergraph_Tracking_FootprintMiniMapMarker
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATracking_FootprintMiniMapMarker_C::ExecuteUbergraph_Tracking_FootprintMiniMapMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracking_FootprintMiniMapMarker.Tracking_FootprintMiniMapMarker_C.ExecuteUbergraph_Tracking_FootprintMiniMapMarker");

	ATracking_FootprintMiniMapMarker_C_ExecuteUbergraph_Tracking_FootprintMiniMapMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
