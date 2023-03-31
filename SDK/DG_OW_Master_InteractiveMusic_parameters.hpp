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

// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.SetupArrays
struct UOW_Master_InteractiveMusic_C_SetupArrays_Params
{
};

// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.IntSwitchFunction
struct UOW_Master_InteractiveMusic_C_IntSwitchFunction_Params
{
	TArray<int>                                        List_Of_Values;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Value_In_Register;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Return_Index;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.TickMusic
struct UOW_Master_InteractiveMusic_C_TickMusic_Params
{
	float                                              Delta_Time;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Tick_Number;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.Damaged_Player
struct UOW_Master_InteractiveMusic_C_Damaged_Player_Params
{
};

// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.BulletBy_Player
struct UOW_Master_InteractiveMusic_C_BulletBy_Player_Params
{
};

// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.OnBulletPassedByNearPlayer
struct UOW_Master_InteractiveMusic_C_OnBulletPassedByNearPlayer_Params
{
};

// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.OnPlayerDamaged
struct UOW_Master_InteractiveMusic_C_OnPlayerDamaged_Params
{
	class UClass**                                     TypeOfDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             AmountOfDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.OnTick
struct UOW_Master_InteractiveMusic_C_OnTick_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TickNumber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.OnPlay
struct UOW_Master_InteractiveMusic_C_OnPlay_Params
{
};

// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.OnEnteredInfestation_Event_1
struct UOW_Master_InteractiveMusic_C_OnEnteredInfestation_Event_1_Params
{
	class UBendNestingZone*                            Zone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.OnLeftInfestation_Event_1
struct UOW_Master_InteractiveMusic_C_OnLeftInfestation_Event_1_Params
{
	class UBendNestingZone*                            Zone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.OnTriggerMissionViaMissionTrigger_Event_1
struct UOW_Master_InteractiveMusic_C_OnTriggerMissionViaMissionTrigger_Event_1_Params
{
	class UBendMissionData*                            MissionData;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OW_Master_InteractiveMusic.OW_Master_InteractiveMusic_C.ExecuteUbergraph_OW_Master_InteractiveMusic
struct UOW_Master_InteractiveMusic_C_ExecuteUbergraph_OW_Master_InteractiveMusic_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
