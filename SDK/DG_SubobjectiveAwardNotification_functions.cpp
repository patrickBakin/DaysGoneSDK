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

// Function SubobjectiveAwardNotification.SubobjectiveAwardNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USubobjectiveAwardNotification_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubobjectiveAwardNotification.SubobjectiveAwardNotification_C.Construct");

	USubobjectiveAwardNotification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubobjectiveAwardNotification.SubobjectiveAwardNotification_C.BndEvt__Appear_K2Node_ComponentBoundEvent_416_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void USubobjectiveAwardNotification_C::BndEvt__Appear_K2Node_ComponentBoundEvent_416_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubobjectiveAwardNotification.SubobjectiveAwardNotification_C.BndEvt__Appear_K2Node_ComponentBoundEvent_416_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	USubobjectiveAwardNotification_C_BndEvt__Appear_K2Node_ComponentBoundEvent_416_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubobjectiveAwardNotification.SubobjectiveAwardNotification_C.ExecuteUbergraph_SubobjectiveAwardNotification
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USubobjectiveAwardNotification_C::ExecuteUbergraph_SubobjectiveAwardNotification(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubobjectiveAwardNotification.SubobjectiveAwardNotification_C.ExecuteUbergraph_SubobjectiveAwardNotification");

	USubobjectiveAwardNotification_C_ExecuteUbergraph_SubobjectiveAwardNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
