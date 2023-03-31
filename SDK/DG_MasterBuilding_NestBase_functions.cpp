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

// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.verticalUnrotatedWindowChecks
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    windowComponent                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           enabledBlocked                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           disabledBlocked                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMasterBuilding_NestBase_C::verticalUnrotatedWindowChecks(class UStaticMeshComponent* windowComponent, bool* enabledBlocked, bool* disabledBlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.verticalUnrotatedWindowChecks");

	AMasterBuilding_NestBase_C_verticalUnrotatedWindowChecks_Params params;
	params.windowComponent = windowComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (enabledBlocked != nullptr)
		*enabledBlocked = params.enabledBlocked;
	if (disabledBlocked != nullptr)
		*disabledBlocked = params.disabledBlocked;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.horizontalUnrotatedWindowChecks
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    windowComponent                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           enabledObstructed              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           disabledUnobstructed           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMasterBuilding_NestBase_C::horizontalUnrotatedWindowChecks(class UStaticMeshComponent* windowComponent, bool* enabledObstructed, bool* disabledUnobstructed)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.horizontalUnrotatedWindowChecks");

	AMasterBuilding_NestBase_C_horizontalUnrotatedWindowChecks_Params params;
	params.windowComponent = windowComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (enabledObstructed != nullptr)
		*enabledObstructed = params.enabledObstructed;
	if (disabledUnobstructed != nullptr)
		*disabledUnobstructed = params.disabledUnobstructed;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.attachedToDummyPyramidReport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMasterBuilding_NestBase_C::attachedToDummyPyramidReport()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.attachedToDummyPyramidReport");

	AMasterBuilding_NestBase_C_attachedToDummyPyramidReport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.hasAnyInteriorLoaded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           hasInteriorLoaded              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMasterBuilding_NestBase_C::hasAnyInteriorLoaded(bool* hasInteriorLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.hasAnyInteriorLoaded");

	AMasterBuilding_NestBase_C_hasAnyInteriorLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hasInteriorLoaded != nullptr)
		*hasInteriorLoaded = params.hasInteriorLoaded;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.getWindowComponents
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UStaticMeshComponent*> allComponents                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UStaticMeshComponent*> windowComponents               (Parm, OutParm, ZeroConstructor)

void AMasterBuilding_NestBase_C::getWindowComponents(TArray<class UStaticMeshComponent*>* allComponents, TArray<class UStaticMeshComponent*>* windowComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.getWindowComponents");

	AMasterBuilding_NestBase_C_getWindowComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (allComponents != nullptr)
		*allComponents = params.allComponents;
	if (windowComponents != nullptr)
		*windowComponents = params.windowComponents;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.GetChildrenComponents
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UStaticMeshComponent*> outExtComponents               (Parm, OutParm, ZeroConstructor)

void AMasterBuilding_NestBase_C::GetChildrenComponents(TArray<class UStaticMeshComponent*>* outExtComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.GetChildrenComponents");

	AMasterBuilding_NestBase_C_GetChildrenComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outExtComponents != nullptr)
		*outExtComponents = params.outExtComponents;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.overrideAllEdgesFine
// (Public, BlueprintCallable, BlueprintEvent)

void AMasterBuilding_NestBase_C::overrideAllEdgesFine()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.overrideAllEdgesFine");

	AMasterBuilding_NestBase_C_overrideAllEdgesFine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.enabledAssetBlockReport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void AMasterBuilding_NestBase_C::enabledAssetBlockReport(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.enabledAssetBlockReport");

	AMasterBuilding_NestBase_C_enabledAssetBlockReport_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.verticalRotatedWindowChecks
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    windowComponent                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           enabledBlocked                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           disabledBlocked                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMasterBuilding_NestBase_C::verticalRotatedWindowChecks(class UStaticMeshComponent* windowComponent, bool* enabledBlocked, bool* disabledBlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.verticalRotatedWindowChecks");

	AMasterBuilding_NestBase_C_verticalRotatedWindowChecks_Params params;
	params.windowComponent = windowComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (enabledBlocked != nullptr)
		*enabledBlocked = params.enabledBlocked;
	if (disabledBlocked != nullptr)
		*disabledBlocked = params.disabledBlocked;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.horizontalRotatedWindowChecks
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    windowComponent                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           enabledObstructed              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           disabledUnobstructed           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMasterBuilding_NestBase_C::horizontalRotatedWindowChecks(class UStaticMeshComponent* windowComponent, bool* enabledObstructed, bool* disabledUnobstructed)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.horizontalRotatedWindowChecks");

	AMasterBuilding_NestBase_C_horizontalRotatedWindowChecks_Params params;
	params.windowComponent = windowComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (enabledObstructed != nullptr)
		*enabledObstructed = params.enabledObstructed;
	if (disabledUnobstructed != nullptr)
		*disabledUnobstructed = params.disabledUnobstructed;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.enabledObstructedReport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void AMasterBuilding_NestBase_C::enabledObstructedReport(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.enabledObstructedReport");

	AMasterBuilding_NestBase_C_enabledObstructedReport_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.disabledUnobstructedReport
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void AMasterBuilding_NestBase_C::disabledUnobstructedReport(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.disabledUnobstructedReport");

	AMasterBuilding_NestBase_C_disabledUnobstructedReport_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.checkWindowEdgeValidity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    windowComponent                (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void AMasterBuilding_NestBase_C::checkWindowEdgeValidity(class UStaticMeshComponent* windowComponent, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.checkWindowEdgeValidity");

	AMasterBuilding_NestBase_C_checkWindowEdgeValidity_Params params;
	params.windowComponent = windowComponent;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.CreateNestDynamicMaterials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UStaticMeshComponent*> Static_Mesh_s                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UMaterialInstanceDynamic*> DynamicMaterialArray           (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMasterBuilding_NestBase_C::CreateNestDynamicMaterials(TArray<class UStaticMeshComponent*>* Static_Mesh_s, TArray<class UMaterialInstanceDynamic*>* DynamicMaterialArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.CreateNestDynamicMaterials");

	AMasterBuilding_NestBase_C_CreateNestDynamicMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Static_Mesh_s != nullptr)
		*Static_Mesh_s = params.Static_Mesh_s;
	if (DynamicMaterialArray != nullptr)
		*DynamicMaterialArray = params.DynamicMaterialArray;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMasterBuilding_NestBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.UserConstructionScript");

	AMasterBuilding_NestBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.DynamicBurningTimeline__FinishedFunc
// (BlueprintEvent)

void AMasterBuilding_NestBase_C::DynamicBurningTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.DynamicBurningTimeline__FinishedFunc");

	AMasterBuilding_NestBase_C_DynamicBurningTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.DynamicBurningTimeline__UpdateFunc
// (BlueprintEvent)

void AMasterBuilding_NestBase_C::DynamicBurningTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.DynamicBurningTimeline__UpdateFunc");

	AMasterBuilding_NestBase_C_DynamicBurningTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AMasterBuilding_NestBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.ReceiveBeginPlay");

	AMasterBuilding_NestBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.NestDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Nest_ID                        (Parm, ZeroConstructor)

void AMasterBuilding_NestBase_C::NestDestroyed(const struct FString& Nest_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.NestDestroyed");

	AMasterBuilding_NestBase_C_NestDestroyed_Params params;
	params.Nest_ID = Nest_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.FireGoneOut
// (BlueprintCallable, BlueprintEvent)

void AMasterBuilding_NestBase_C::FireGoneOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.FireGoneOut");

	AMasterBuilding_NestBase_C_FireGoneOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.BurnTheMaterials
// (BlueprintCallable, BlueprintEvent)

void AMasterBuilding_NestBase_C::BurnTheMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.BurnTheMaterials");

	AMasterBuilding_NestBase_C_BurnTheMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.RetryLoad
// (BlueprintCallable, BlueprintEvent)

void AMasterBuilding_NestBase_C::RetryLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.RetryLoad");

	AMasterBuilding_NestBase_C_RetryLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.NestFireGoneOut_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NestID                         (Parm, ZeroConstructor)

void AMasterBuilding_NestBase_C::NestFireGoneOut_Event(const struct FString& NestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.NestFireGoneOut_Event");

	AMasterBuilding_NestBase_C_NestFireGoneOut_Event_Params params;
	params.NestID = NestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.OnNestStartedBurning_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NestID                         (Parm, ZeroConstructor)

void AMasterBuilding_NestBase_C::OnNestStartedBurning_Event_1(const struct FString& NestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.OnNestStartedBurning_Event_1");

	AMasterBuilding_NestBase_C_OnNestStartedBurning_Event_1_Params params;
	params.NestID = NestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.NestShouldStartSmoke_Event_1
// (BlueprintCallable, BlueprintEvent)

void AMasterBuilding_NestBase_C::NestShouldStartSmoke_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.NestShouldStartSmoke_Event_1");

	AMasterBuilding_NestBase_C_NestShouldStartSmoke_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.RetryLoad_Copy
// (BlueprintCallable, BlueprintEvent)

void AMasterBuilding_NestBase_C::RetryLoad_Copy()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.RetryLoad_Copy");

	AMasterBuilding_NestBase_C_RetryLoad_Copy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.NestFireGoneOut_Event_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NestID                         (Parm, ZeroConstructor)

void AMasterBuilding_NestBase_C::NestFireGoneOut_Event_Copy(const struct FString& NestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.NestFireGoneOut_Event_Copy");

	AMasterBuilding_NestBase_C_NestFireGoneOut_Event_Copy_Params params;
	params.NestID = NestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.OnNestStartedBurning_Event_0_Copy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NestID                         (Parm, ZeroConstructor)

void AMasterBuilding_NestBase_C::OnNestStartedBurning_Event_0_Copy(const struct FString& NestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.OnNestStartedBurning_Event_0_Copy");

	AMasterBuilding_NestBase_C_OnNestStartedBurning_Event_0_Copy_Params params;
	params.NestID = NestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.NestShouldStartSmoke_Event_0_Copy
// (BlueprintCallable, BlueprintEvent)

void AMasterBuilding_NestBase_C::NestShouldStartSmoke_Event_0_Copy()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.NestShouldStartSmoke_Event_0_Copy");

	AMasterBuilding_NestBase_C_NestShouldStartSmoke_Event_0_Copy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.ExecuteUbergraph_MasterBuilding_NestBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMasterBuilding_NestBase_C::ExecuteUbergraph_MasterBuilding_NestBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_NestBase.MasterBuilding_NestBase_C.ExecuteUbergraph_MasterBuilding_NestBase");

	AMasterBuilding_NestBase_C_ExecuteUbergraph_MasterBuilding_NestBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
