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

// Function DropWeaponComponent.DropWeaponComponent_C.StartDrop
// (BlueprintCallable, BlueprintEvent)

void UDropWeaponComponent_C::StartDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropWeaponComponent.DropWeaponComponent_C.StartDrop");

	UDropWeaponComponent_C_StartDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropWeaponComponent.DropWeaponComponent_C.StopDrop
// (BlueprintCallable, BlueprintEvent)

void UDropWeaponComponent_C::StopDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function DropWeaponComponent.DropWeaponComponent_C.StopDrop");

	UDropWeaponComponent_C_StopDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropWeaponComponent.DropWeaponComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UDropWeaponComponent_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropWeaponComponent.DropWeaponComponent_C.ReceiveTick");

	UDropWeaponComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropWeaponComponent.DropWeaponComponent_C.ExecuteUbergraph_DropWeaponComponent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDropWeaponComponent_C::ExecuteUbergraph_DropWeaponComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropWeaponComponent.DropWeaponComponent_C.ExecuteUbergraph_DropWeaponComponent");

	UDropWeaponComponent_C_ExecuteUbergraph_DropWeaponComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DropWeaponComponent.DropWeaponComponent_C.OnDropUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UDropWeaponComponent_C::OnDropUpdate__DelegateSignature(float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DropWeaponComponent.DropWeaponComponent_C.OnDropUpdate__DelegateSignature");

	UDropWeaponComponent_C_OnDropUpdate__DelegateSignature_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
