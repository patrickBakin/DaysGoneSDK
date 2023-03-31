#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EditorTickableActorLabeled.EditorTickableActorLabeled_C.MakeLabel
struct AEditorTickableActorLabeled_C_MakeLabel_Params
{
};

// Function EditorTickableActorLabeled.EditorTickableActorLabeled_C.IsBendGame
struct AEditorTickableActorLabeled_C_IsBendGame_Params
{
	bool                                               Is_Game;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EditorTickableActorLabeled.EditorTickableActorLabeled_C.UserConstructionScript
struct AEditorTickableActorLabeled_C_UserConstructionScript_Params
{
};

// Function EditorTickableActorLabeled.EditorTickableActorLabeled_C.ReceiveTick
struct AEditorTickableActorLabeled_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EditorTickableActorLabeled.EditorTickableActorLabeled_C.Editor Tick
struct AEditorTickableActorLabeled_C_Editor_Tick_Params
{
};

// Function EditorTickableActorLabeled.EditorTickableActorLabeled_C.ExecuteUbergraph_EditorTickableActorLabeled
struct AEditorTickableActorLabeled_C_ExecuteUbergraph_EditorTickableActorLabeled_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
