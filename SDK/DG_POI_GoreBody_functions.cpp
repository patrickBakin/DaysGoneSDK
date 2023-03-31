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

// Function POI_GoreBody.POI_GoreBody_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APOI_GoreBody_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_GoreBody.POI_GoreBody_C.UserConstructionScript");

	APOI_GoreBody_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POI_GoreBody.POI_GoreBody_C.ReceivePreSaveGameLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bIsCheckpoint                  (Parm, ZeroConstructor, IsPlainOldData)

void APOI_GoreBody_C::ReceivePreSaveGameLoaded(bool* bIsCheckpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_GoreBody.POI_GoreBody_C.ReceivePreSaveGameLoaded");

	APOI_GoreBody_C_ReceivePreSaveGameLoaded_Params params;
	params.bIsCheckpoint = bIsCheckpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function POI_GoreBody.POI_GoreBody_C.ExecuteUbergraph_POI_GoreBody
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APOI_GoreBody_C::ExecuteUbergraph_POI_GoreBody(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function POI_GoreBody.POI_GoreBody_C.ExecuteUbergraph_POI_GoreBody");

	APOI_GoreBody_C_ExecuteUbergraph_POI_GoreBody_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
