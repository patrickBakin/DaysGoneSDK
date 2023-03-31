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

// Function loading_screen.cin_main_menu_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Acin_main_menu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function loading_screen.cin_main_menu_C.ReceiveBeginPlay");

	Acin_main_menu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loading_screen.cin_main_menu_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void Acin_main_menu_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function loading_screen.cin_main_menu_C.ReceiveEndPlay");

	Acin_main_menu_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loading_screen.cin_main_menu_C.ExecuteUbergraph_loading_screen
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Acin_main_menu_C::ExecuteUbergraph_loading_screen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function loading_screen.cin_main_menu_C.ExecuteUbergraph_loading_screen");

	Acin_main_menu_C_ExecuteUbergraph_loading_screen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
