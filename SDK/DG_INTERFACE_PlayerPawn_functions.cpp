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

// Function INTERFACE_PlayerPawn.INTERFACE_PlayerPawn_C.I_WearRadioOnChest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WearRadio                      (Parm, ZeroConstructor, IsPlainOldData)

void UINTERFACE_PlayerPawn_C::I_WearRadioOnChest(bool WearRadio)
{
	static auto fn = UObject::FindObject<UFunction>("Function INTERFACE_PlayerPawn.INTERFACE_PlayerPawn_C.I_WearRadioOnChest");

	UINTERFACE_PlayerPawn_C_I_WearRadioOnChest_Params params;
	params.WearRadio = WearRadio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function INTERFACE_PlayerPawn.INTERFACE_PlayerPawn_C.I_GetPlayerMusic2ndTrackComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UINTERFACE_PlayerPawn_C::I_GetPlayerMusic2ndTrackComponent(class UAudioComponent** AudioComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function INTERFACE_PlayerPawn.INTERFACE_PlayerPawn_C.I_GetPlayerMusic2ndTrackComponent");

	UINTERFACE_PlayerPawn_C_I_GetPlayerMusic2ndTrackComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AudioComponent != nullptr)
		*AudioComponent = params.AudioComponent;
}


// Function INTERFACE_PlayerPawn.INTERFACE_PlayerPawn_C.I_GetPlayerMusicComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         AudioComponent                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UINTERFACE_PlayerPawn_C::I_GetPlayerMusicComponent(class UAudioComponent** AudioComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function INTERFACE_PlayerPawn.INTERFACE_PlayerPawn_C.I_GetPlayerMusicComponent");

	UINTERFACE_PlayerPawn_C_I_GetPlayerMusicComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AudioComponent != nullptr)
		*AudioComponent = params.AudioComponent;
}


// Function INTERFACE_PlayerPawn.INTERFACE_PlayerPawn_C.I_SetPlayerTakeFallDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TakeDamage_                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UINTERFACE_PlayerPawn_C::I_SetPlayerTakeFallDamage(bool TakeDamage_, bool* Success_)
{
	static auto fn = UObject::FindObject<UFunction>("Function INTERFACE_PlayerPawn.INTERFACE_PlayerPawn_C.I_SetPlayerTakeFallDamage");

	UINTERFACE_PlayerPawn_C_I_SetPlayerTakeFallDamage_Params params;
	params.TakeDamage_ = TakeDamage_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success_ != nullptr)
		*Success_ = params.Success_;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
