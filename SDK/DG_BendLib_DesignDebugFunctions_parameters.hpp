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

// Function BendLib_DesignDebugFunctions.BendLib_DesignDebugFunctions_C.TakeBugitScreenshot
struct UBendLib_DesignDebugFunctions_C_TakeBugitScreenshot_Params
{
	struct FString                                     ShotName;                                                 // (Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_DesignDebugFunctions.BendLib_DesignDebugFunctions_C.TakeScreenshot1024
struct UBendLib_DesignDebugFunctions_C_TakeScreenshot1024_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_DesignDebugFunctions.BendLib_DesignDebugFunctions_C.SimplifyVectorForPrint
struct UBendLib_DesignDebugFunctions_C_SimplifyVectorForPrint_Params
{
	struct FVector                                     VectorIn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     VectorOut;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BendLib_DesignDebugFunctions.BendLib_DesignDebugFunctions_C.PrintPlayerWorldPosition
struct UBendLib_DesignDebugFunctions_C_PrintPlayerWorldPosition_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BendLib_DesignDebugFunctions.BendLib_DesignDebugFunctions_C.TakeScreenshot
struct UBendLib_DesignDebugFunctions_C_TakeScreenshot_Params
{
	class UObject*                                     __WorldContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
