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

// Function env_globals.env_globals_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aenv_globals_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function env_globals.env_globals_C.UserConstructionScript");

	Aenv_globals_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function env_globals.env_globals_C.CinStart
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void Aenv_globals_C::CinStart(const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function env_globals.env_globals_C.CinStart");

	Aenv_globals_C_CinStart_Params params;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function env_globals.env_globals_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Aenv_globals_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function env_globals.env_globals_C.ReceiveBeginPlay");

	Aenv_globals_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function env_globals.env_globals_C.CinEnd
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CinematicLevel                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void Aenv_globals_C::CinEnd(const struct FName& CinematicLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function env_globals.env_globals_C.CinEnd");

	Aenv_globals_C_CinEnd_Params params;
	params.CinematicLevel = CinematicLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function env_globals.env_globals_C.ExecuteUbergraph_env_globals
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Aenv_globals_C::ExecuteUbergraph_env_globals(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function env_globals.env_globals_C.ExecuteUbergraph_env_globals");

	Aenv_globals_C_ExecuteUbergraph_env_globals_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
