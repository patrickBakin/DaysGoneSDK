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

// Function BendLib_DesignDebugFunctions.BendLib_DesignDebugFunctions_C.TakeBugitScreenshot
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ShotName                       (Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_DesignDebugFunctions_C::STATIC_TakeBugitScreenshot(const struct FString& ShotName, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignDebugFunctions.BendLib_DesignDebugFunctions_C.TakeBugitScreenshot");

	UBendLib_DesignDebugFunctions_C_TakeBugitScreenshot_Params params;
	params.ShotName = ShotName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_DesignDebugFunctions.BendLib_DesignDebugFunctions_C.TakeScreenshot1024
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_DesignDebugFunctions_C::STATIC_TakeScreenshot1024(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignDebugFunctions.BendLib_DesignDebugFunctions_C.TakeScreenshot1024");

	UBendLib_DesignDebugFunctions_C_TakeScreenshot1024_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_DesignDebugFunctions.BendLib_DesignDebugFunctions_C.SimplifyVectorForPrint
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 VectorIn                       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 VectorOut                      (Parm, OutParm, ZeroConstructor)

void UBendLib_DesignDebugFunctions_C::STATIC_SimplifyVectorForPrint(const struct FVector& VectorIn, class UObject* __WorldContext, struct FString* VectorOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignDebugFunctions.BendLib_DesignDebugFunctions_C.SimplifyVectorForPrint");

	UBendLib_DesignDebugFunctions_C_SimplifyVectorForPrint_Params params;
	params.VectorIn = VectorIn;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VectorOut != nullptr)
		*VectorOut = params.VectorOut;
}


// Function BendLib_DesignDebugFunctions.BendLib_DesignDebugFunctions_C.PrintPlayerWorldPosition
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_DesignDebugFunctions_C::STATIC_PrintPlayerWorldPosition(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignDebugFunctions.BendLib_DesignDebugFunctions_C.PrintPlayerWorldPosition");

	UBendLib_DesignDebugFunctions_C_PrintPlayerWorldPosition_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BendLib_DesignDebugFunctions.BendLib_DesignDebugFunctions_C.TakeScreenshot
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UBendLib_DesignDebugFunctions_C::STATIC_TakeScreenshot(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BendLib_DesignDebugFunctions.BendLib_DesignDebugFunctions_C.TakeScreenshot");

	UBendLib_DesignDebugFunctions_C_TakeScreenshot_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
