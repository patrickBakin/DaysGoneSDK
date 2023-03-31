#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GameplayDebugger.EAIDebugDrawDataView
enum class EAIDebugDrawDataView : uint8_t
{
	Empty                          = 0,
	OverHead                       = 1,
	Basic                          = 2,
	BehaviorTree                   = 3,
	EQS                            = 4,
	Perception                     = 5,
	GameView1                      = 6,
	GameView2                      = 7,
	GameView3                      = 8,
	GameView4                      = 9,
	GameView5                      = 10,
	NavMesh                        = 11,
	MAX                            = 12,
	EAIDebugDrawDataView_MAX       = 13
};


// Enum GameplayDebugger.EDebugComponentMessage
enum class EDebugComponentMessage : uint8_t
{
	EnableExtendedView             = 0,
	DisableExtendedView            = 1,
	ActivateReplication            = 2,
	DeactivateReplilcation         = 3,
	ActivateDataView               = 4,
	DeactivateDataView             = 5,
	SetMultipleDataViews           = 6,
	EDebugComponentMessage_MAX     = 7
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayDebugger.GDTCustomViewNames
// 0x0050
struct FGDTCustomViewNames
{
	struct FString                                     GameView1;                                                // 0x0000(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     GameView2;                                                // 0x0010(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     GameView3;                                                // 0x0020(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     GameView4;                                                // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     GameView5;                                                // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
