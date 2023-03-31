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

// Function BendLib_CinematicFunctions.BendLib_CinematicFunctions_C.CinematicMode
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CinematicActive                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Affects_HUD                    (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENUM_CinematicHidePawns> HideActors                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_CinematicFunctions_C::STATIC_CinematicMode(bool CinematicActive, bool Affects_HUD, TEnumAsByte<ENUM_CinematicHidePawns> HideActors, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_CinematicFunctions.BendLib_CinematicFunctions_C.CinematicMode");

	UBendLib_CinematicFunctions_C_CinematicMode_Params params;
	params.CinematicActive = CinematicActive;
	params.Affects_HUD = Affects_HUD;
	params.HideActors = HideActors;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
