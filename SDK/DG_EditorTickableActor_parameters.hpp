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

// Function EditorTickableActor.EditorTickableActor_C.DebugPrint
struct AEditorTickableActor_C_DebugPrint_Params
{
	int                                                Periodic_Ticker_Index;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Print_Immediately;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Display_Time;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EditorTickableActor.EditorTickableActor_C.PeriodicTickersTrigger
struct AEditorTickableActor_C_PeriodicTickersTrigger_Params
{
	int                                                Ticker_Index;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Period;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Delta;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Triggered;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EditorTickableActor.EditorTickableActor_C.PeriodicTickersUpdate
struct AEditorTickableActor_C_PeriodicTickersUpdate_Params
{
};

// Function EditorTickableActor.EditorTickableActor_C.DoEditorTickInterval
struct AEditorTickableActor_C_DoEditorTickInterval_Params
{
	bool                                               Tick;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EditorTickableActor.EditorTickableActor_C.UserConstructionScript
struct AEditorTickableActor_C_UserConstructionScript_Params
{
};

// Function EditorTickableActor.EditorTickableActor_C.ReceiveTick
struct AEditorTickableActor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EditorTickableActor.EditorTickableActor_C.Editor Tick
struct AEditorTickableActor_C_Editor_Tick_Params
{
};

// Function EditorTickableActor.EditorTickableActor_C.ExecuteUbergraph_EditorTickableActor
struct AEditorTickableActor_C_ExecuteUbergraph_EditorTickableActor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
