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

// Function POI_MultiOpenWorldCorpse.POI_MultiOpenWorldCorpse_C.Construction Script Function Call
// (Public, BlueprintCallable, BlueprintEvent)

void APOI_MultiOpenWorldCorpse_C::Construction_Script_Function_Call()
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_MultiOpenWorldCorpse.POI_MultiOpenWorldCorpse_C.Construction Script Function Call");

	APOI_MultiOpenWorldCorpse_C_Construction_Script_Function_Call_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POI_MultiOpenWorldCorpse.POI_MultiOpenWorldCorpse_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APOI_MultiOpenWorldCorpse_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_MultiOpenWorldCorpse.POI_MultiOpenWorldCorpse_C.UserConstructionScript");

	APOI_MultiOpenWorldCorpse_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POI_MultiOpenWorldCorpse.POI_MultiOpenWorldCorpse_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void APOI_MultiOpenWorldCorpse_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_MultiOpenWorldCorpse.POI_MultiOpenWorldCorpse_C.ReceiveBeginPlay");

	APOI_MultiOpenWorldCorpse_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POI_MultiOpenWorldCorpse.POI_MultiOpenWorldCorpse_C.ExecuteUbergraph_POI_MultiOpenWorldCorpse
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APOI_MultiOpenWorldCorpse_C::ExecuteUbergraph_POI_MultiOpenWorldCorpse(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_MultiOpenWorldCorpse.POI_MultiOpenWorldCorpse_C.ExecuteUbergraph_POI_MultiOpenWorldCorpse");

	APOI_MultiOpenWorldCorpse_C_ExecuteUbergraph_POI_MultiOpenWorldCorpse_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
