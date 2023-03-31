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

// Function BP_Storm_Lightning_StrikeTarget_Component.BP_Storm_Lightning_StrikeTarget_Component_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_Storm_Lightning_StrikeTarget_Component_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_StrikeTarget_Component.BP_Storm_Lightning_StrikeTarget_Component_C.ReceiveBeginPlay");

	UBP_Storm_Lightning_StrikeTarget_Component_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_StrikeTarget_Component.BP_Storm_Lightning_StrikeTarget_Component_C.Strike Me
// (BlueprintCallable, BlueprintEvent)

void UBP_Storm_Lightning_StrikeTarget_Component_C::Strike_Me()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_StrikeTarget_Component.BP_Storm_Lightning_StrikeTarget_Component_C.Strike Me");

	UBP_Storm_Lightning_StrikeTarget_Component_C_Strike_Me_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_StrikeTarget_Component.BP_Storm_Lightning_StrikeTarget_Component_C.Editor Begin Play Trigger
// (BlueprintCallable, BlueprintEvent)

void UBP_Storm_Lightning_StrikeTarget_Component_C::Editor_Begin_Play_Trigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_StrikeTarget_Component.BP_Storm_Lightning_StrikeTarget_Component_C.Editor Begin Play Trigger");

	UBP_Storm_Lightning_StrikeTarget_Component_C_Editor_Begin_Play_Trigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Storm_Lightning_StrikeTarget_Component.BP_Storm_Lightning_StrikeTarget_Component_C.ExecuteUbergraph_BP_Storm_Lightning_StrikeTarget_Component
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_Storm_Lightning_StrikeTarget_Component_C::ExecuteUbergraph_BP_Storm_Lightning_StrikeTarget_Component(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Storm_Lightning_StrikeTarget_Component.BP_Storm_Lightning_StrikeTarget_Component_C.ExecuteUbergraph_BP_Storm_Lightning_StrikeTarget_Component");

	UBP_Storm_Lightning_StrikeTarget_Component_C_ExecuteUbergraph_BP_Storm_Lightning_StrikeTarget_Component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
