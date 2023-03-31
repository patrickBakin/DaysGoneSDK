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

// Function cin_main_menu.cin_main_menu_C.SetHeroBike
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBendSavePlayerProfile*  Save_Data                      (Parm, ZeroConstructor, IsPlainOldData)
// class AVehiclePawn*            Vehicle                        (Parm, ZeroConstructor, IsPlainOldData)

void Acin_main_menu_C::SetHeroBike(class UBendSavePlayerProfile* Save_Data, class AVehiclePawn* Vehicle)
{
	static auto fn = UObject::FindObject<UFunction>("Function cin_main_menu.cin_main_menu_C.SetHeroBike");

	Acin_main_menu_C_SetHeroBike_Params params;
	params.Save_Data = Save_Data;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cin_main_menu.cin_main_menu_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Acin_main_menu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function cin_main_menu.cin_main_menu_C.ReceiveBeginPlay");

	Acin_main_menu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cin_main_menu.cin_main_menu_C.OptionSelected
// (BlueprintCallable, BlueprintEvent)

void Acin_main_menu_C::OptionSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function cin_main_menu.cin_main_menu_C.OptionSelected");

	Acin_main_menu_C_OptionSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cin_main_menu.cin_main_menu_C.DeveloperLoad
// (BlueprintCallable, BlueprintEvent)

void Acin_main_menu_C::DeveloperLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function cin_main_menu.cin_main_menu_C.DeveloperLoad");

	Acin_main_menu_C_DeveloperLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cin_main_menu.cin_main_menu_C.UnlockFullMapNav
// (BlueprintCallable, BlueprintEvent)

void Acin_main_menu_C::UnlockFullMapNav()
{
	static auto fn = UObject::FindObject<UFunction>("Function cin_main_menu.cin_main_menu_C.UnlockFullMapNav");

	Acin_main_menu_C_UnlockFullMapNav_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cin_main_menu.cin_main_menu_C.NewGameLoad
// (BlueprintCallable, BlueprintEvent)

void Acin_main_menu_C::NewGameLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function cin_main_menu.cin_main_menu_C.NewGameLoad");

	Acin_main_menu_C_NewGameLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cin_main_menu.cin_main_menu_C.UnlockNewGameMap
// (BlueprintCallable, BlueprintEvent)

void Acin_main_menu_C::UnlockNewGameMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function cin_main_menu.cin_main_menu_C.UnlockNewGameMap");

	Acin_main_menu_C_UnlockNewGameMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cin_main_menu.cin_main_menu_C.OnFadeFromBlackStart_MM_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void Acin_main_menu_C::OnFadeFromBlackStart_MM_Event_1(const struct FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function cin_main_menu.cin_main_menu_C.OnFadeFromBlackStart_MM_Event_1");

	Acin_main_menu_C_OnFadeFromBlackStart_MM_Event_1_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cin_main_menu.cin_main_menu_C.FinishedLoading
// (BlueprintCallable, BlueprintEvent)

void Acin_main_menu_C::FinishedLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function cin_main_menu.cin_main_menu_C.FinishedLoading");

	Acin_main_menu_C_FinishedLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cin_main_menu.cin_main_menu_C.MainMenuMusicStop
// (BlueprintCallable, BlueprintEvent)

void Acin_main_menu_C::MainMenuMusicStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function cin_main_menu.cin_main_menu_C.MainMenuMusicStop");

	Acin_main_menu_C_MainMenuMusicStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cin_main_menu.cin_main_menu_C.MainMenuMusicStart
// (BlueprintCallable, BlueprintEvent)

void Acin_main_menu_C::MainMenuMusicStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function cin_main_menu.cin_main_menu_C.MainMenuMusicStart");

	Acin_main_menu_C_MainMenuMusicStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cin_main_menu.cin_main_menu_C.OnDisplayCalibrationClosed
// (BlueprintCallable, BlueprintEvent)

void Acin_main_menu_C::OnDisplayCalibrationClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function cin_main_menu.cin_main_menu_C.OnDisplayCalibrationClosed");

	Acin_main_menu_C_OnDisplayCalibrationClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cin_main_menu.cin_main_menu_C.ExecuteUbergraph_cin_main_menu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Acin_main_menu_C::ExecuteUbergraph_cin_main_menu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function cin_main_menu.cin_main_menu_C.ExecuteUbergraph_cin_main_menu");

	Acin_main_menu_C_ExecuteUbergraph_cin_main_menu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
