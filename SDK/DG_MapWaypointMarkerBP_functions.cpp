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

// Function MapWaypointMarkerBP.MapWaypointMarkerBP_C.SetWaypointObjectiveType
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_WaypointWidget_C*    Waypoint                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveCategories> ObjectiveCat                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> ObjectiveVisCat                (Parm, ZeroConstructor, IsPlainOldData)

void AMapWaypointMarkerBP_C::SetWaypointObjectiveType(class ABP_WaypointWidget_C* Waypoint, TEnumAsByte<EObjectiveCategories> ObjectiveCat, TEnumAsByte<EObjectiveVisualType> ObjectiveVisCat)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapWaypointMarkerBP.MapWaypointMarkerBP_C.SetWaypointObjectiveType");

	AMapWaypointMarkerBP_C_SetWaypointObjectiveType_Params params;
	params.Waypoint = Waypoint;
	params.ObjectiveCat = ObjectiveCat;
	params.ObjectiveVisCat = ObjectiveVisCat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapWaypointMarkerBP.MapWaypointMarkerBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMapWaypointMarkerBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapWaypointMarkerBP.MapWaypointMarkerBP_C.UserConstructionScript");

	AMapWaypointMarkerBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapWaypointMarkerBP.MapWaypointMarkerBP_C.SetMarkerTexture
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (Parm, ZeroConstructor, IsPlainOldData)

void AMapWaypointMarkerBP_C::SetMarkerTexture(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapWaypointMarkerBP.MapWaypointMarkerBP_C.SetMarkerTexture");

	AMapWaypointMarkerBP_C_SetMarkerTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapWaypointMarkerBP.MapWaypointMarkerBP_C.SetWaypointType
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories>* Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType>* VisualCategory                 (Parm, ZeroConstructor, IsPlainOldData)

void AMapWaypointMarkerBP_C::SetWaypointType(TEnumAsByte<EObjectiveCategories>* Category, TEnumAsByte<EObjectiveVisualType>* VisualCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapWaypointMarkerBP.MapWaypointMarkerBP_C.SetWaypointType");

	AMapWaypointMarkerBP_C_SetWaypointType_Params params;
	params.Category = Category;
	params.VisualCategory = VisualCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapWaypointMarkerBP.MapWaypointMarkerBP_C.SetWaypointMarkerType
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMapWaypointMarker>* Type                           (Parm, ZeroConstructor, IsPlainOldData)

void AMapWaypointMarkerBP_C::SetWaypointMarkerType(TEnumAsByte<EMapWaypointMarker>* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapWaypointMarkerBP.MapWaypointMarkerBP_C.SetWaypointMarkerType");

	AMapWaypointMarkerBP_C_SetWaypointMarkerType_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapWaypointMarkerBP.MapWaypointMarkerBP_C.OnVisibilityChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsVisible                      (Parm, ZeroConstructor, IsPlainOldData)

void AMapWaypointMarkerBP_C::OnVisibilityChanged(bool* IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapWaypointMarkerBP.MapWaypointMarkerBP_C.OnVisibilityChanged");

	AMapWaypointMarkerBP_C_OnVisibilityChanged_Params params;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapWaypointMarkerBP.MapWaypointMarkerBP_C.ExecuteUbergraph_MapWaypointMarkerBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMapWaypointMarkerBP_C::ExecuteUbergraph_MapWaypointMarkerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapWaypointMarkerBP.MapWaypointMarkerBP_C.ExecuteUbergraph_MapWaypointMarkerBP");

	AMapWaypointMarkerBP_C_ExecuteUbergraph_MapWaypointMarkerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
