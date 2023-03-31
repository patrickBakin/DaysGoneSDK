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

// Function BendTriggerBox.BendTriggerBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendTriggerBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendTriggerBox.BendTriggerBox_C.UserConstructionScript");

	ABendTriggerBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendTriggerBox.BendTriggerBox_C.OnOverlapWithReturnSelf__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TriggerBox                     (Parm, ZeroConstructor, IsPlainOldData)

void ABendTriggerBox_C::OnOverlapWithReturnSelf__DelegateSignature(class AActor* Actor, class AActor* TriggerBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendTriggerBox.BendTriggerBox_C.OnOverlapWithReturnSelf__DelegateSignature");

	ABendTriggerBox_C_OnOverlapWithReturnSelf__DelegateSignature_Params params;
	params.Actor = Actor;
	params.TriggerBox = TriggerBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
