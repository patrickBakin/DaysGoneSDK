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

// Function NewtController.NewtController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANewtController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtController.NewtController_C.UserConstructionScript");

	ANewtController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewtController.NewtController_C.ExecuteUbergraph_NewtController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ANewtController_C::ExecuteUbergraph_NewtController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewtController.NewtController_C.ExecuteUbergraph_NewtController");

	ANewtController_C_ExecuteUbergraph_NewtController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
