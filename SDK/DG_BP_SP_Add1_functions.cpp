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

// Function BP_SP_Add1.BP_SP_Add1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SP_Add1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SP_Add1.BP_SP_Add1_C.UserConstructionScript");

	ABP_SP_Add1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SP_Add1.BP_SP_Add1_C.Sky_Preset__FinishedFunc
// (BlueprintEvent)

void ABP_SP_Add1_C::Sky_Preset__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SP_Add1.BP_SP_Add1_C.Sky_Preset__FinishedFunc");

	ABP_SP_Add1_C_Sky_Preset__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SP_Add1.BP_SP_Add1_C.Sky_Preset__UpdateFunc
// (BlueprintEvent)

void ABP_SP_Add1_C::Sky_Preset__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SP_Add1.BP_SP_Add1_C.Sky_Preset__UpdateFunc");

	ABP_SP_Add1_C_Sky_Preset__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SP_Add1.BP_SP_Add1_C.UpdateProfile
// (Event, Public, BlueprintEvent)

void ABP_SP_Add1_C::UpdateProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SP_Add1.BP_SP_Add1_C.UpdateProfile");

	ABP_SP_Add1_C_UpdateProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SP_Add1.BP_SP_Add1_C.ExecuteUbergraph_BP_SP_Add1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SP_Add1_C::ExecuteUbergraph_BP_SP_Add1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SP_Add1.BP_SP_Add1_C.ExecuteUbergraph_BP_SP_Add1");

	ABP_SP_Add1_C_ExecuteUbergraph_BP_SP_Add1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
