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

// Function UI_Reticle_BlindfireKillMarker.UI_Reticle_BlindfireKillMarker_C.DestroySelf
// (Public, BlueprintCallable, BlueprintEvent)

void UUI_Reticle_BlindfireKillMarker_C::DestroySelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_BlindfireKillMarker.UI_Reticle_BlindfireKillMarker_C.DestroySelf");

	UUI_Reticle_BlindfireKillMarker_C_DestroySelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_BlindfireKillMarker.UI_Reticle_BlindfireKillMarker_C.SetHit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUI_Reticle_BlindfireKillMarker_C::SetHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_BlindfireKillMarker.UI_Reticle_BlindfireKillMarker_C.SetHit");

	UUI_Reticle_BlindfireKillMarker_C_SetHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UI_Reticle_BlindfireKillMarker.UI_Reticle_BlindfireKillMarker_C.FireComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_Reticle_BlindfireKillMarker_C::FireComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_Reticle_BlindfireKillMarker.UI_Reticle_BlindfireKillMarker_C.FireComplete__DelegateSignature");

	UUI_Reticle_BlindfireKillMarker_C_FireComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
