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

// Function POI_GorePile_Slot.POI_GorePile_Slot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APOI_GorePile_Slot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_GorePile_Slot.POI_GorePile_Slot_C.UserConstructionScript");

	APOI_GorePile_Slot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POI_GorePile_Slot.POI_GorePile_Slot_C.OnPathComplete
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult>* Result                         (Parm, ZeroConstructor, IsPlainOldData)

void APOI_GorePile_Slot_C::OnPathComplete(TEnumAsByte<EPathFollowingResult>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_GorePile_Slot.POI_GorePile_Slot_C.OnPathComplete");

	APOI_GorePile_Slot_C_OnPathComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POI_GorePile_Slot.POI_GorePile_Slot_C.ExecuteUbergraph_POI_GorePile_Slot
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APOI_GorePile_Slot_C::ExecuteUbergraph_POI_GorePile_Slot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_GorePile_Slot.POI_GorePile_Slot_C.ExecuteUbergraph_POI_GorePile_Slot");

	APOI_GorePile_Slot_C_ExecuteUbergraph_POI_GorePile_Slot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POI_GorePile_Slot.POI_GorePile_Slot_C.AtLocation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendAIController*       SlotUser                       (Parm, ZeroConstructor, IsPlainOldData)
// class ABendPOISlot*            Slot                           (Parm, ZeroConstructor, IsPlainOldData)

void APOI_GorePile_Slot_C::AtLocation__DelegateSignature(class ABendAIController* SlotUser, class ABendPOISlot* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_GorePile_Slot.POI_GorePile_Slot_C.AtLocation__DelegateSignature");

	APOI_GorePile_Slot_C_AtLocation__DelegateSignature_Params params;
	params.SlotUser = SlotUser;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
