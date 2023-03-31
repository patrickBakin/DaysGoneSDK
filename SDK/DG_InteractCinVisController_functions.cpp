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

// Function InteractCinVisController.InteractCinVisController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AInteractCinVisController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractCinVisController.InteractCinVisController_C.UserConstructionScript");

	AInteractCinVisController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractCinVisController.InteractCinVisController_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AInteractCinVisController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractCinVisController.InteractCinVisController_C.ReceiveBeginPlay");

	AInteractCinVisController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractCinVisController.InteractCinVisController_C.CinematicEnd
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AInteractCinVisController_C::CinematicEnd(const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractCinVisController.InteractCinVisController_C.CinematicEnd");

	AInteractCinVisController_C_CinematicEnd_Params params;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractCinVisController.InteractCinVisController_C.CinematicStart
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AInteractCinVisController_C::CinematicStart(const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractCinVisController.InteractCinVisController_C.CinematicStart");

	AInteractCinVisController_C_CinematicStart_Params params;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InteractCinVisController.InteractCinVisController_C.ExecuteUbergraph_InteractCinVisController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AInteractCinVisController_C::ExecuteUbergraph_InteractCinVisController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InteractCinVisController.InteractCinVisController_C.ExecuteUbergraph_InteractCinVisController");

	AInteractCinVisController_C_ExecuteUbergraph_InteractCinVisController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
