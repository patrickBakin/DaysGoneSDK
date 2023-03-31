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

// Function AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C.PreviousValue
struct UAdvancedDisplyMenuEntryBase_C_PreviousValue_Params
{
};

// Function AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C.NextValue
struct UAdvancedDisplyMenuEntryBase_C_NextValue_Params
{
};

// Function AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C.SetSelected
struct UAdvancedDisplyMenuEntryBase_C_SetSelected_Params
{
	bool                                               Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C.SetDisabled
struct UAdvancedDisplyMenuEntryBase_C_SetDisabled_Params
{
	bool                                               Disabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C.HandleStateChanged
struct UAdvancedDisplyMenuEntryBase_C_HandleStateChanged_Params
{
};

// Function AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C.OnSelected__DelegateSignature
struct UAdvancedDisplyMenuEntryBase_C_OnSelected__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AdvancedDisplyMenuEntryBase.AdvancedDisplyMenuEntryBase_C.OnHovered__DelegateSignature
struct UAdvancedDisplyMenuEntryBase_C_OnHovered__DelegateSignature_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
