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

// Function Interface_NPCCallout.Interface_NPCCallout_C.ActivateObjectiveCallout
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EObjectiveCategories> Category                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EObjectiveVisualType> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Failed                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_NPCCallout_C::ActivateObjectiveCallout(TEnumAsByte<EObjectiveCategories> Category, TEnumAsByte<EObjectiveVisualType> Type, bool* Failed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_NPCCallout.Interface_NPCCallout_C.ActivateObjectiveCallout");

	UInterface_NPCCallout_C_ActivateObjectiveCallout_Params params;
	params.Category = Category;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Failed != nullptr)
		*Failed = params.Failed;
}


// Function Interface_NPCCallout.Interface_NPCCallout_C.IsCalloutActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_NPCCallout_C::IsCalloutActive(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_NPCCallout.Interface_NPCCallout_C.IsCalloutActive");

	UInterface_NPCCallout_C_IsCalloutActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Active != nullptr)
		*Active = params.Active;
}


// Function Interface_NPCCallout.Interface_NPCCallout_C.GetAwareness
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EAIAwareState>     Awareness                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_NPCCallout_C::GetAwareness(TEnumAsByte<EAIAwareState>* Awareness)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_NPCCallout.Interface_NPCCallout_C.GetAwareness");

	UInterface_NPCCallout_C_GetAwareness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Awareness != nullptr)
		*Awareness = params.Awareness;
}


// Function Interface_NPCCallout.Interface_NPCCallout_C.DeactivateCallout
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Failed                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_NPCCallout_C::DeactivateCallout(bool* Failed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_NPCCallout.Interface_NPCCallout_C.DeactivateCallout");

	UInterface_NPCCallout_C_DeactivateCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Failed != nullptr)
		*Failed = params.Failed;
}


// Function Interface_NPCCallout.Interface_NPCCallout_C.ActivateCallout
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_CalloutType>  CalloutType                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CalloutOverride                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Failed                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInterface_NPCCallout_C::ActivateCallout(TEnumAsByte<Enum_CalloutType> CalloutType, bool CalloutOverride, bool* Failed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interface_NPCCallout.Interface_NPCCallout_C.ActivateCallout");

	UInterface_NPCCallout_C_ActivateCallout_Params params;
	params.CalloutType = CalloutType;
	params.CalloutOverride = CalloutOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Failed != nullptr)
		*Failed = params.Failed;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
