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

// Function Job_MiniMapMarker.Job_MiniMapMarker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AJob_MiniMapMarker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Job_MiniMapMarker.Job_MiniMapMarker_C.UserConstructionScript");

	AJob_MiniMapMarker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Job_MiniMapMarker.Job_MiniMapMarker_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AJob_MiniMapMarker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Job_MiniMapMarker.Job_MiniMapMarker_C.ReceiveBeginPlay");

	AJob_MiniMapMarker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Job_MiniMapMarker.Job_MiniMapMarker_C.UpdateFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasFocus                       (Parm, ZeroConstructor, IsPlainOldData)

void AJob_MiniMapMarker_C::UpdateFocus(bool HasFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function Job_MiniMapMarker.Job_MiniMapMarker_C.UpdateFocus");

	AJob_MiniMapMarker_C_UpdateFocus_Params params;
	params.HasFocus = HasFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Job_MiniMapMarker.Job_MiniMapMarker_C.UpdateActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsActive                       (Parm, ZeroConstructor, IsPlainOldData)

void AJob_MiniMapMarker_C::UpdateActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Job_MiniMapMarker.Job_MiniMapMarker_C.UpdateActive");

	AJob_MiniMapMarker_C_UpdateActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Job_MiniMapMarker.Job_MiniMapMarker_C.HandleObjectiveJobIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Activate                       (Parm, ZeroConstructor, IsPlainOldData)

void AJob_MiniMapMarker_C::HandleObjectiveJobIcon(bool Activate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Job_MiniMapMarker.Job_MiniMapMarker_C.HandleObjectiveJobIcon");

	AJob_MiniMapMarker_C_HandleObjectiveJobIcon_Params params;
	params.Activate = Activate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Job_MiniMapMarker.Job_MiniMapMarker_C.StoreMarkerSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldHaveMarker               (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxDist                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinDist                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveCategories> ObjCaqtegory                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> ObjType                        (Parm, ZeroConstructor, IsPlainOldData)
// class UJobClassInfo*           JobData                        (Parm, ZeroConstructor, IsPlainOldData)

void AJob_MiniMapMarker_C::StoreMarkerSettings(bool ShouldHaveMarker, float MaxDist, float MinDist, TEnumAsByte<EObjectiveCategories> ObjCaqtegory, TEnumAsByte<EObjectiveVisualType> ObjType, class UJobClassInfo* JobData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Job_MiniMapMarker.Job_MiniMapMarker_C.StoreMarkerSettings");

	AJob_MiniMapMarker_C_StoreMarkerSettings_Params params;
	params.ShouldHaveMarker = ShouldHaveMarker;
	params.MaxDist = MaxDist;
	params.MinDist = MinDist;
	params.ObjCaqtegory = ObjCaqtegory;
	params.ObjType = ObjType;
	params.JobData = JobData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Job_MiniMapMarker.Job_MiniMapMarker_C.IOnSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AJob_MiniMapMarker_C::IOnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function Job_MiniMapMarker.Job_MiniMapMarker_C.IOnSelected");

	AJob_MiniMapMarker_C_IOnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Job_MiniMapMarker.Job_MiniMapMarker_C.BndEvt__AutoTrackSphere_K2Node_ComponentBoundEvent_120_BeginOverlapSig__DelegateSignature
// (BlueprintEvent)

void AJob_MiniMapMarker_C::BndEvt__AutoTrackSphere_K2Node_ComponentBoundEvent_120_BeginOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Job_MiniMapMarker.Job_MiniMapMarker_C.BndEvt__AutoTrackSphere_K2Node_ComponentBoundEvent_120_BeginOverlapSig__DelegateSignature");

	AJob_MiniMapMarker_C_BndEvt__AutoTrackSphere_K2Node_ComponentBoundEvent_120_BeginOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Job_MiniMapMarker.Job_MiniMapMarker_C.BndEvt__AutoTrackSphere_K2Node_ComponentBoundEvent_63_EndOverlapSig__DelegateSignature
// (BlueprintEvent)

void AJob_MiniMapMarker_C::BndEvt__AutoTrackSphere_K2Node_ComponentBoundEvent_63_EndOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Job_MiniMapMarker.Job_MiniMapMarker_C.BndEvt__AutoTrackSphere_K2Node_ComponentBoundEvent_63_EndOverlapSig__DelegateSignature");

	AJob_MiniMapMarker_C_BndEvt__AutoTrackSphere_K2Node_ComponentBoundEvent_63_EndOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Job_MiniMapMarker.Job_MiniMapMarker_C.ExecuteUbergraph_Job_MiniMapMarker
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AJob_MiniMapMarker_C::ExecuteUbergraph_Job_MiniMapMarker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Job_MiniMapMarker.Job_MiniMapMarker_C.ExecuteUbergraph_Job_MiniMapMarker");

	AJob_MiniMapMarker_C_ExecuteUbergraph_Job_MiniMapMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
