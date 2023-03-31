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

// Function BP_WaypointWidget.BP_WaypointWidget_C.Configure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsVisible                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_WaypointWidget_C::Configure(bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaypointWidget.BP_WaypointWidget_C.Configure");

	ABP_WaypointWidget_C_Configure_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaypointWidget.BP_WaypointWidget_C.SetMarkerTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              InTex                          (Parm, ZeroConstructor, IsPlainOldData)

void ABP_WaypointWidget_C::SetMarkerTexture(class UTexture2D* InTex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaypointWidget.BP_WaypointWidget_C.SetMarkerTexture");

	ABP_WaypointWidget_C_SetMarkerTexture_Params params;
	params.InTex = InTex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaypointWidget.BP_WaypointWidget_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WaypointWidget_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaypointWidget.BP_WaypointWidget_C.UserConstructionScript");

	ABP_WaypointWidget_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaypointWidget.BP_WaypointWidget_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABP_WaypointWidget_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaypointWidget.BP_WaypointWidget_C.ReceiveBeginPlay");

	ABP_WaypointWidget_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaypointWidget.BP_WaypointWidget_C.OnDistanceChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  DistanceText                   (ConstParm, Parm, OutParm, ReferenceParm)

void ABP_WaypointWidget_C::OnDistanceChanged(struct FText* DistanceText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaypointWidget.BP_WaypointWidget_C.OnDistanceChanged");

	ABP_WaypointWidget_C_OnDistanceChanged_Params params;
	params.DistanceText = DistanceText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WaypointWidget.BP_WaypointWidget_C.ExecuteUbergraph_BP_WaypointWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_WaypointWidget_C::ExecuteUbergraph_BP_WaypointWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaypointWidget.BP_WaypointWidget_C.ExecuteUbergraph_BP_WaypointWidget");

	ABP_WaypointWidget_C_ExecuteUbergraph_BP_WaypointWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
