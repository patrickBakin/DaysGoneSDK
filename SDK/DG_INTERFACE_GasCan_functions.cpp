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

// Function INTERFACE_GasCan.INTERFACE_GasCan_C.I_DisplayFuelInteract
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DisplayInteract                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorToFuel                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ObjectAnimAnchorRef            (Parm, IsPlainOldData)
// struct FTransform              WidgetTransform                (Parm, IsPlainOldData)
// bool                           NeedsRefilling                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UINTERFACE_GasCan_C::I_DisplayFuelInteract(bool DisplayInteract, class AActor* ActorToFuel, const struct FTransform& ObjectAnimAnchorRef, const struct FTransform& WidgetTransform, bool* NeedsRefilling)
{
	static auto fn = UObject::FindObject<UFunction>("Function INTERFACE_GasCan.INTERFACE_GasCan_C.I_DisplayFuelInteract");

	UINTERFACE_GasCan_C_I_DisplayFuelInteract_Params params;
	params.DisplayInteract = DisplayInteract;
	params.ActorToFuel = ActorToFuel;
	params.ObjectAnimAnchorRef = ObjectAnimAnchorRef;
	params.WidgetTransform = WidgetTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NeedsRefilling != nullptr)
		*NeedsRefilling = params.NeedsRefilling;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
