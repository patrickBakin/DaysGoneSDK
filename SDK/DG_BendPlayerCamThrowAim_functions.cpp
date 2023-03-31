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

// Function BendPlayerCamThrowAim.BendPlayerCamThrowAim_C.OnActivate
// (Event, Public, BlueprintEvent)

void UBendPlayerCamThrowAim_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendPlayerCamThrowAim.BendPlayerCamThrowAim_C.OnActivate");

	UBendPlayerCamThrowAim_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendPlayerCamThrowAim.BendPlayerCamThrowAim_C.HidingStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsHiding                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanControl                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnclosedSpace                (Parm, ZeroConstructor, IsPlainOldData)

void UBendPlayerCamThrowAim_C::HidingStateChanged(bool IsHiding, bool CanControl, bool IsEnclosedSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendPlayerCamThrowAim.BendPlayerCamThrowAim_C.HidingStateChanged");

	UBendPlayerCamThrowAim_C_HidingStateChanged_Params params;
	params.IsHiding = IsHiding;
	params.CanControl = CanControl;
	params.IsEnclosedSpace = IsEnclosedSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendPlayerCamThrowAim.BendPlayerCamThrowAim_C.ExecuteUbergraph_BendPlayerCamThrowAim
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBendPlayerCamThrowAim_C::ExecuteUbergraph_BendPlayerCamThrowAim(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendPlayerCamThrowAim.BendPlayerCamThrowAim_C.ExecuteUbergraph_BendPlayerCamThrowAim");

	UBendPlayerCamThrowAim_C_ExecuteUbergraph_BendPlayerCamThrowAim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
