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

// Function BP_SP_ProfileDefault.BP_SP_ProfileDefault_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SP_ProfileDefault_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SP_ProfileDefault.BP_SP_ProfileDefault_C.UserConstructionScript");

	ABP_SP_ProfileDefault_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SP_ProfileDefault.BP_SP_ProfileDefault_C.Sky Preset__FinishedFunc
// (BlueprintEvent)

void ABP_SP_ProfileDefault_C::Sky_Preset__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SP_ProfileDefault.BP_SP_ProfileDefault_C.Sky Preset__FinishedFunc");

	ABP_SP_ProfileDefault_C_Sky_Preset__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SP_ProfileDefault.BP_SP_ProfileDefault_C.Sky Preset__UpdateFunc
// (BlueprintEvent)

void ABP_SP_ProfileDefault_C::Sky_Preset__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SP_ProfileDefault.BP_SP_ProfileDefault_C.Sky Preset__UpdateFunc");

	ABP_SP_ProfileDefault_C_Sky_Preset__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SP_ProfileDefault.BP_SP_ProfileDefault_C.InitializeCodeReferences
// (Event, Public, BlueprintEvent)

void ABP_SP_ProfileDefault_C::InitializeCodeReferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SP_ProfileDefault.BP_SP_ProfileDefault_C.InitializeCodeReferences");

	ABP_SP_ProfileDefault_C_InitializeCodeReferences_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SP_ProfileDefault.BP_SP_ProfileDefault_C.UpdateProfile
// (Event, Public, BlueprintEvent)

void ABP_SP_ProfileDefault_C::UpdateProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SP_ProfileDefault.BP_SP_ProfileDefault_C.UpdateProfile");

	ABP_SP_ProfileDefault_C_UpdateProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SP_ProfileDefault.BP_SP_ProfileDefault_C.ExecuteUbergraph_BP_SP_ProfileDefault
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_SP_ProfileDefault_C::ExecuteUbergraph_BP_SP_ProfileDefault(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SP_ProfileDefault.BP_SP_ProfileDefault_C.ExecuteUbergraph_BP_SP_ProfileDefault");

	ABP_SP_ProfileDefault_C_ExecuteUbergraph_BP_SP_ProfileDefault_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
