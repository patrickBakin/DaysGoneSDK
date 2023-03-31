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

// Function Map_Controls.Map_Controls_C.IsInPhotoMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Photo_Mode_Active              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMap_Controls_C::IsInPhotoMode(bool* Photo_Mode_Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.IsInPhotoMode");

	AMap_Controls_C_IsInPhotoMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Photo_Mode_Active != nullptr)
		*Photo_Mode_Active = params.Photo_Mode_Active;
}


// Function Map_Controls.Map_Controls_C.ForceCloseWeaponWheel
// (Public, BlueprintCallable, BlueprintEvent)

void AMap_Controls_C::ForceCloseWeaponWheel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.ForceCloseWeaponWheel");

	AMap_Controls_C_ForceCloseWeaponWheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Controls.Map_Controls_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMap_Controls_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.UserConstructionScript");

	AMap_Controls_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Controls.Map_Controls_C.InpTchEvt_UniqueObjectNameForCooking_1069601
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void AMap_Controls_C::InpTchEvt_UniqueObjectNameForCooking_1069601(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.InpTchEvt_UniqueObjectNameForCooking_1069601");

	AMap_Controls_C_InpTchEvt_UniqueObjectNameForCooking_1069601_Params params;
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Controls.Map_Controls_C.InpTchEvt_UniqueObjectNameForCooking_1069600
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void AMap_Controls_C::InpTchEvt_UniqueObjectNameForCooking_1069600(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.InpTchEvt_UniqueObjectNameForCooking_1069600");

	AMap_Controls_C_InpTchEvt_UniqueObjectNameForCooking_1069600_Params params;
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Controls.Map_Controls_C.InpTchEvt_UniqueObjectNameForCooking_1069599
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)

void AMap_Controls_C::InpTchEvt_UniqueObjectNameForCooking_1069599(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.InpTchEvt_UniqueObjectNameForCooking_1069599");

	AMap_Controls_C_InpTchEvt_UniqueObjectNameForCooking_1069599_Params params;
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Controls.Map_Controls_C.InpActEvt_TogglePauseMenu_Map_UniqueObjectNameForCooking_220
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void AMap_Controls_C::InpActEvt_TogglePauseMenu_Map_UniqueObjectNameForCooking_220(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.InpActEvt_TogglePauseMenu_Map_UniqueObjectNameForCooking_220");

	AMap_Controls_C_InpActEvt_TogglePauseMenu_Map_UniqueObjectNameForCooking_220_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Controls.Map_Controls_C.InpActEvt_TogglePauseMenu_Map_UniqueObjectNameForCooking_219
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void AMap_Controls_C::InpActEvt_TogglePauseMenu_Map_UniqueObjectNameForCooking_219(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.InpActEvt_TogglePauseMenu_Map_UniqueObjectNameForCooking_219");

	AMap_Controls_C_InpActEvt_TogglePauseMenu_Map_UniqueObjectNameForCooking_219_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Controls.Map_Controls_C.InpActEvt_TogglePauseMenu_Skills_UniqueObjectNameForCooking_218
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void AMap_Controls_C::InpActEvt_TogglePauseMenu_Skills_UniqueObjectNameForCooking_218(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.InpActEvt_TogglePauseMenu_Skills_UniqueObjectNameForCooking_218");

	AMap_Controls_C_InpActEvt_TogglePauseMenu_Skills_UniqueObjectNameForCooking_218_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Controls.Map_Controls_C.InpActEvt_TogglePauseMenu_Inventory_UniqueObjectNameForCooking_217
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void AMap_Controls_C::InpActEvt_TogglePauseMenu_Inventory_UniqueObjectNameForCooking_217(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.InpActEvt_TogglePauseMenu_Inventory_UniqueObjectNameForCooking_217");

	AMap_Controls_C_InpActEvt_TogglePauseMenu_Inventory_UniqueObjectNameForCooking_217_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Controls.Map_Controls_C.InpActEvt_TogglePauseMenu_Storylines_UniqueObjectNameForCooking_216
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void AMap_Controls_C::InpActEvt_TogglePauseMenu_Storylines_UniqueObjectNameForCooking_216(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.InpActEvt_TogglePauseMenu_Storylines_UniqueObjectNameForCooking_216");

	AMap_Controls_C_InpActEvt_TogglePauseMenu_Storylines_UniqueObjectNameForCooking_216_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Controls.Map_Controls_C.InpActEvt_TogglePauseMenu_MapPC_UniqueObjectNameForCooking_215
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void AMap_Controls_C::InpActEvt_TogglePauseMenu_MapPC_UniqueObjectNameForCooking_215(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.InpActEvt_TogglePauseMenu_MapPC_UniqueObjectNameForCooking_215");

	AMap_Controls_C_InpActEvt_TogglePauseMenu_MapPC_UniqueObjectNameForCooking_215_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Controls.Map_Controls_C.InpActEvt_DLC_QuickMenu_UniqueObjectNameForCooking_214
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void AMap_Controls_C::InpActEvt_DLC_QuickMenu_UniqueObjectNameForCooking_214(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.InpActEvt_DLC_QuickMenu_UniqueObjectNameForCooking_214");

	AMap_Controls_C_InpActEvt_DLC_QuickMenu_UniqueObjectNameForCooking_214_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Controls.Map_Controls_C.InpActEvt_DLC_QuickMenu_UniqueObjectNameForCooking_213
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (Parm)

void AMap_Controls_C::InpActEvt_DLC_QuickMenu_UniqueObjectNameForCooking_213(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.InpActEvt_DLC_QuickMenu_UniqueObjectNameForCooking_213");

	AMap_Controls_C_InpActEvt_DLC_QuickMenu_UniqueObjectNameForCooking_213_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Controls.Map_Controls_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AMap_Controls_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.ReceiveBeginPlay");

	AMap_Controls_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Controls.Map_Controls_C.ReceiveActorOnInputEnabled
// (Event, Public, BlueprintEvent)

void AMap_Controls_C::ReceiveActorOnInputEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.ReceiveActorOnInputEnabled");

	AMap_Controls_C_ReceiveActorOnInputEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Controls.Map_Controls_C.ReceiveActorOnInputDisabled
// (Event, Public, BlueprintEvent)

void AMap_Controls_C::ReceiveActorOnInputDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.ReceiveActorOnInputDisabled");

	AMap_Controls_C_ReceiveActorOnInputDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Controls.Map_Controls_C.InputFlickUp
// (Event, Public, BlueprintEvent)

void AMap_Controls_C::InputFlickUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.InputFlickUp");

	AMap_Controls_C_InputFlickUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Controls.Map_Controls_C.InputFlickLeft
// (Event, Public, BlueprintEvent)

void AMap_Controls_C::InputFlickLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.InputFlickLeft");

	AMap_Controls_C_InputFlickLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Controls.Map_Controls_C.InputFlickRight
// (Event, Public, BlueprintEvent)

void AMap_Controls_C::InputFlickRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.InputFlickRight");

	AMap_Controls_C_InputFlickRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Controls.Map_Controls_C.InputFlickDown
// (Event, Public, BlueprintEvent)

void AMap_Controls_C::InputFlickDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.InputFlickDown");

	AMap_Controls_C_InputFlickDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Controls.Map_Controls_C.Toggle DLC Dashboard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void AMap_Controls_C::Toggle_DLC_Dashboard(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.Toggle DLC Dashboard");

	AMap_Controls_C_Toggle_DLC_Dashboard_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Controls.Map_Controls_C.ExecuteUbergraph_Map_Controls
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMap_Controls_C::ExecuteUbergraph_Map_Controls(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Controls.Map_Controls_C.ExecuteUbergraph_Map_Controls");

	AMap_Controls_C_ExecuteUbergraph_Map_Controls_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
