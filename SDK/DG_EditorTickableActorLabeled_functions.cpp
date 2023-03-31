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

// Function EditorTickableActorLabeled.EditorTickableActorLabeled_C.MakeLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AEditorTickableActorLabeled_C::MakeLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditorTickableActorLabeled.EditorTickableActorLabeled_C.MakeLabel");

	AEditorTickableActorLabeled_C_MakeLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditorTickableActorLabeled.EditorTickableActorLabeled_C.IsBendGame
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Game                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEditorTickableActorLabeled_C::IsBendGame(bool* Is_Game)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditorTickableActorLabeled.EditorTickableActorLabeled_C.IsBendGame");

	AEditorTickableActorLabeled_C_IsBendGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_Game != nullptr)
		*Is_Game = params.Is_Game;
}


// Function EditorTickableActorLabeled.EditorTickableActorLabeled_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEditorTickableActorLabeled_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditorTickableActorLabeled.EditorTickableActorLabeled_C.UserConstructionScript");

	AEditorTickableActorLabeled_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditorTickableActorLabeled.EditorTickableActorLabeled_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AEditorTickableActorLabeled_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditorTickableActorLabeled.EditorTickableActorLabeled_C.ReceiveTick");

	AEditorTickableActorLabeled_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditorTickableActorLabeled.EditorTickableActorLabeled_C.Editor Tick
// (BlueprintCallable, BlueprintEvent)

void AEditorTickableActorLabeled_C::Editor_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function EditorTickableActorLabeled.EditorTickableActorLabeled_C.Editor Tick");

	AEditorTickableActorLabeled_C_Editor_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EditorTickableActorLabeled.EditorTickableActorLabeled_C.ExecuteUbergraph_EditorTickableActorLabeled
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEditorTickableActorLabeled_C::ExecuteUbergraph_EditorTickableActorLabeled(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EditorTickableActorLabeled.EditorTickableActorLabeled_C.ExecuteUbergraph_EditorTickableActorLabeled");

	AEditorTickableActorLabeled_C_ExecuteUbergraph_EditorTickableActorLabeled_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
