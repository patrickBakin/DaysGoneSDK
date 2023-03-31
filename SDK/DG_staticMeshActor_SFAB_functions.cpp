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

// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.hasAnyInteriorLoaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           hasInteriorLoaded              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AstaticMeshActor_SFAB_C::hasAnyInteriorLoaded(bool* hasInteriorLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.hasAnyInteriorLoaded");

	AstaticMeshActor_SFAB_C_hasAnyInteriorLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hasInteriorLoaded != nullptr)
		*hasInteriorLoaded = params.hasInteriorLoaded;
}


// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.verticalRotatedWindowChecks
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    windowComponent                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           enabledBlocked                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           disabledBlocked                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AstaticMeshActor_SFAB_C::verticalRotatedWindowChecks(class UStaticMeshComponent* windowComponent, bool* enabledBlocked, bool* disabledBlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.verticalRotatedWindowChecks");

	AstaticMeshActor_SFAB_C_verticalRotatedWindowChecks_Params params;
	params.windowComponent = windowComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (enabledBlocked != nullptr)
		*enabledBlocked = params.enabledBlocked;
	if (disabledBlocked != nullptr)
		*disabledBlocked = params.disabledBlocked;
}


// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.horizontalUnrotatedWindowChecks
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    windowComponenet               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           enabledObstructed              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           disabledUnobstructed           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AstaticMeshActor_SFAB_C::horizontalUnrotatedWindowChecks(class UStaticMeshComponent* windowComponenet, bool* enabledObstructed, bool* disabledUnobstructed)
{
	static auto fn = UObject::FindObject<UFunction>("Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.horizontalUnrotatedWindowChecks");

	AstaticMeshActor_SFAB_C_horizontalUnrotatedWindowChecks_Params params;
	params.windowComponenet = windowComponenet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (enabledObstructed != nullptr)
		*enabledObstructed = params.enabledObstructed;
	if (disabledUnobstructed != nullptr)
		*disabledUnobstructed = params.disabledUnobstructed;
}


// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.getWindowComponents
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UStaticMeshComponent*> windowComponents               (Parm, OutParm, ZeroConstructor)

void AstaticMeshActor_SFAB_C::getWindowComponents(TArray<class UStaticMeshComponent*>* windowComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.getWindowComponents");

	AstaticMeshActor_SFAB_C_getWindowComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (windowComponents != nullptr)
		*windowComponents = params.windowComponents;
}


// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.attachedToDummyPyramidReport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AstaticMeshActor_SFAB_C::attachedToDummyPyramidReport()
{
	static auto fn = UObject::FindObject<UFunction>("Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.attachedToDummyPyramidReport");

	AstaticMeshActor_SFAB_C_attachedToDummyPyramidReport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.overrideAllEdgesFine
// (Public, BlueprintCallable, BlueprintEvent)

void AstaticMeshActor_SFAB_C::overrideAllEdgesFine()
{
	static auto fn = UObject::FindObject<UFunction>("Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.overrideAllEdgesFine");

	AstaticMeshActor_SFAB_C_overrideAllEdgesFine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.enabledAssetBlockReport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void AstaticMeshActor_SFAB_C::enabledAssetBlockReport(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.enabledAssetBlockReport");

	AstaticMeshActor_SFAB_C_enabledAssetBlockReport_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.verticalUnrotatedWindowChecks
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    windowComponent                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           enabledBlocked                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           disabledBlocked                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AstaticMeshActor_SFAB_C::verticalUnrotatedWindowChecks(class UStaticMeshComponent* windowComponent, bool* enabledBlocked, bool* disabledBlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.verticalUnrotatedWindowChecks");

	AstaticMeshActor_SFAB_C_verticalUnrotatedWindowChecks_Params params;
	params.windowComponent = windowComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (enabledBlocked != nullptr)
		*enabledBlocked = params.enabledBlocked;
	if (disabledBlocked != nullptr)
		*disabledBlocked = params.disabledBlocked;
}


// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.horizontalRotatedWindowChecks
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    windowComponenet               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           enabledObstructed              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           disabledUnobstructed           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AstaticMeshActor_SFAB_C::horizontalRotatedWindowChecks(class UStaticMeshComponent* windowComponenet, bool* enabledObstructed, bool* disabledUnobstructed)
{
	static auto fn = UObject::FindObject<UFunction>("Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.horizontalRotatedWindowChecks");

	AstaticMeshActor_SFAB_C_horizontalRotatedWindowChecks_Params params;
	params.windowComponenet = windowComponenet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (enabledObstructed != nullptr)
		*enabledObstructed = params.enabledObstructed;
	if (disabledUnobstructed != nullptr)
		*disabledUnobstructed = params.disabledUnobstructed;
}


// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.enabledObstructedReport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void AstaticMeshActor_SFAB_C::enabledObstructedReport(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.enabledObstructedReport");

	AstaticMeshActor_SFAB_C_enabledObstructedReport_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.disabledUnobstructedReport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void AstaticMeshActor_SFAB_C::disabledUnobstructedReport(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.disabledUnobstructedReport");

	AstaticMeshActor_SFAB_C_disabledUnobstructedReport_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.checkWindowEdgeValidity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    windowComponent                (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void AstaticMeshActor_SFAB_C::checkWindowEdgeValidity(class UStaticMeshComponent* windowComponent, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.checkWindowEdgeValidity");

	AstaticMeshActor_SFAB_C_checkWindowEdgeValidity_Params params;
	params.windowComponent = windowComponent;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.getWindowInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AstaticMeshActor_SFAB_C::getWindowInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.getWindowInfo");

	AstaticMeshActor_SFAB_C_getWindowInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.countWindows
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AstaticMeshActor_SFAB_C::countWindows()
{
	static auto fn = UObject::FindObject<UFunction>("Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.countWindows");

	AstaticMeshActor_SFAB_C_countWindows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AstaticMeshActor_SFAB_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function staticMeshActor_SFAB.staticMeshActor_SFAB_C.UserConstructionScript");

	AstaticMeshActor_SFAB_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
