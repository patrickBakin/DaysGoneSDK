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

// Function POI_GorePile_Slot.POI_GorePile_Slot_C.UserConstructionScript
struct APOI_GorePile_Slot_C_UserConstructionScript_Params
{
};

// Function POI_GorePile_Slot.POI_GorePile_Slot_C.OnPathComplete
struct APOI_GorePile_Slot_C_OnPathComplete_Params
{
	TEnumAsByte<EPathFollowingResult>*                 Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function POI_GorePile_Slot.POI_GorePile_Slot_C.ExecuteUbergraph_POI_GorePile_Slot
struct APOI_GorePile_Slot_C_ExecuteUbergraph_POI_GorePile_Slot_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function POI_GorePile_Slot.POI_GorePile_Slot_C.AtLocation__DelegateSignature
struct APOI_GorePile_Slot_C_AtLocation__DelegateSignature_Params
{
	class ABendAIController*                           SlotUser;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class ABendPOISlot*                                Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
