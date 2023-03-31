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

// Function BendDefaultGameMode.BendDefaultGameMode_C.GetClosestEncampmentPointFromOriginalLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Closest                        (Parm, OutParm, IsPlainOldData)

void ABendDefaultGameMode_C::GetClosestEncampmentPointFromOriginalLocation(struct FTransform* Closest)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultGameMode.BendDefaultGameMode_C.GetClosestEncampmentPointFromOriginalLocation");

	ABendDefaultGameMode_C_GetClosestEncampmentPointFromOriginalLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Closest != nullptr)
		*Closest = params.Closest;
}


// Function BendDefaultGameMode.BendDefaultGameMode_C.GetLocalizedDifficultyString
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ABendDefaultGameMode_C::GetLocalizedDifficultyString()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultGameMode.BendDefaultGameMode_C.GetLocalizedDifficultyString");

	ABendDefaultGameMode_C_GetLocalizedDifficultyString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BendDefaultGameMode.BendDefaultGameMode_C.BeginFastTravel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform*             PlayerTransform                (Parm, IsPlainOldData)
// struct FTransform*             BikeTransform                  (Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABendDefaultGameMode_C::BeginFastTravel(struct FTransform* PlayerTransform, struct FTransform* BikeTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultGameMode.BendDefaultGameMode_C.BeginFastTravel");

	ABendDefaultGameMode_C_BeginFastTravel_Params params;
	params.PlayerTransform = PlayerTransform;
	params.BikeTransform = BikeTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BendDefaultGameMode.BendDefaultGameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultGameMode.BendDefaultGameMode_C.UserConstructionScript");

	ABendDefaultGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultGameMode.BendDefaultGameMode_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ABendDefaultGameMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultGameMode.BendDefaultGameMode_C.ReceiveBeginPlay");

	ABendDefaultGameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultGameMode.BendDefaultGameMode_C.PlayerDeathStartFadeToBlack
// (BlueprintCallable, BlueprintEvent)

void ABendDefaultGameMode_C::PlayerDeathStartFadeToBlack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultGameMode.BendDefaultGameMode_C.PlayerDeathStartFadeToBlack");

	ABendDefaultGameMode_C_PlayerDeathStartFadeToBlack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultGameMode.BendDefaultGameMode_C.PlayerRespawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABendPlayerController*   PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultGameMode_C::PlayerRespawned(class ABendPlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultGameMode.BendDefaultGameMode_C.PlayerRespawned");

	ABendDefaultGameMode_C_PlayerRespawned_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultGameMode.BendDefaultGameMode_C.RequestFastTravel
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform*             PlayerTransform                (Parm, IsPlainOldData)
// struct FTransform*             BikeTransform                  (Parm, IsPlainOldData)
// struct FName*                  TravelDestination              (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultGameMode_C::RequestFastTravel(struct FTransform* PlayerTransform, struct FTransform* BikeTransform, struct FName* TravelDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultGameMode.BendDefaultGameMode_C.RequestFastTravel");

	ABendDefaultGameMode_C_RequestFastTravel_Params params;
	params.PlayerTransform = PlayerTransform;
	params.BikeTransform = BikeTransform;
	params.TravelDestination = TravelDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultGameMode.BendDefaultGameMode_C.OnFadedToBlack_FastTravel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void ABendDefaultGameMode_C::OnFadedToBlack_FastTravel(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultGameMode.BendDefaultGameMode_C.OnFadedToBlack_FastTravel");

	ABendDefaultGameMode_C_OnFadedToBlack_FastTravel_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultGameMode.BendDefaultGameMode_C.OnFadingFinished_FastTravel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void ABendDefaultGameMode_C::OnFadingFinished_FastTravel(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultGameMode.BendDefaultGameMode_C.OnFadingFinished_FastTravel");

	ABendDefaultGameMode_C_OnFadingFinished_FastTravel_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultGameMode.BendDefaultGameMode_C.ORWorldLoadedIn
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultGameMode_C::ORWorldLoadedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultGameMode.BendDefaultGameMode_C.ORWorldLoadedIn");

	ABendDefaultGameMode_C_ORWorldLoadedIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultGameMode.BendDefaultGameMode_C.GoToMainMenu
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultGameMode_C::GoToMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultGameMode.BendDefaultGameMode_C.GoToMainMenu");

	ABendDefaultGameMode_C_GoToMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultGameMode.BendDefaultGameMode_C.GoToMainMenuForceDLC
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultGameMode_C::GoToMainMenuForceDLC()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultGameMode.BendDefaultGameMode_C.GoToMainMenuForceDLC");

	ABendDefaultGameMode_C_GoToMainMenuForceDLC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultGameMode.BendDefaultGameMode_C.GoToMainMenuForceNGP
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABendDefaultGameMode_C::GoToMainMenuForceNGP()
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultGameMode.BendDefaultGameMode_C.GoToMainMenuForceNGP");

	ABendDefaultGameMode_C_GoToMainMenuForceNGP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultGameMode.BendDefaultGameMode_C.ResetJobCategory
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EJobResetTypes>*   TypeToReset                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ResetAll                       (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultGameMode_C::ResetJobCategory(TEnumAsByte<EJobResetTypes>* TypeToReset, bool* ResetAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultGameMode.BendDefaultGameMode_C.ResetJobCategory");

	ABendDefaultGameMode_C_ResetJobCategory_Params params;
	params.TypeToReset = TypeToReset;
	params.ResetAll = ResetAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultGameMode.BendDefaultGameMode_C.OnFadedToBlack_FastTravel_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void ABendDefaultGameMode_C::OnFadedToBlack_FastTravel_Copy(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultGameMode.BendDefaultGameMode_C.OnFadedToBlack_FastTravel_Copy");

	ABendDefaultGameMode_C_OnFadedToBlack_FastTravel_Copy_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultGameMode.BendDefaultGameMode_C.OnFadingFinished_MM_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void ABendDefaultGameMode_C::OnFadingFinished_MM_Event_1(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultGameMode.BendDefaultGameMode_C.OnFadingFinished_MM_Event_1");

	ABendDefaultGameMode_C_OnFadingFinished_MM_Event_1_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultGameMode.BendDefaultGameMode_C.OnLoadFailure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (Parm)

void ABendDefaultGameMode_C::OnLoadFailure(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultGameMode.BendDefaultGameMode_C.OnLoadFailure");

	ABendDefaultGameMode_C_OnLoadFailure_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultGameMode.BendDefaultGameMode_C.OnSaveFailure
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Message                        (Parm)

void ABendDefaultGameMode_C::OnSaveFailure(const struct FText& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultGameMode.BendDefaultGameMode_C.OnSaveFailure");

	ABendDefaultGameMode_C_OnSaveFailure_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendDefaultGameMode.BendDefaultGameMode_C.ExecuteUbergraph_BendDefaultGameMode
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABendDefaultGameMode_C::ExecuteUbergraph_BendDefaultGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendDefaultGameMode.BendDefaultGameMode_C.ExecuteUbergraph_BendDefaultGameMode");

	ABendDefaultGameMode_C_ExecuteUbergraph_BendDefaultGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
