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

// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.CreateDynamicNestMaterials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UStaticMeshComponent*> Static_Mesh_s                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UMaterialInstanceDynamic*> Dynamic_Material_Array         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMasterBuilding_Multi_NestBase_C::CreateDynamicNestMaterials(TArray<class UStaticMeshComponent*>* Static_Mesh_s, TArray<class UMaterialInstanceDynamic*>* Dynamic_Material_Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.CreateDynamicNestMaterials");

	AMasterBuilding_Multi_NestBase_C_CreateDynamicNestMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Static_Mesh_s != nullptr)
		*Static_Mesh_s = params.Static_Mesh_s;
	if (Dynamic_Material_Array != nullptr)
		*Dynamic_Material_Array = params.Dynamic_Material_Array;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMasterBuilding_Multi_NestBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.UserConstructionScript");

	AMasterBuilding_Multi_NestBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AMasterBuilding_Multi_NestBase_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_0__FinishedFunc");

	AMasterBuilding_Multi_NestBase_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AMasterBuilding_Multi_NestBase_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_0__UpdateFunc");

	AMasterBuilding_Multi_NestBase_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void AMasterBuilding_Multi_NestBase_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_1__FinishedFunc");

	AMasterBuilding_Multi_NestBase_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void AMasterBuilding_Multi_NestBase_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_1__UpdateFunc");

	AMasterBuilding_Multi_NestBase_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void AMasterBuilding_Multi_NestBase_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_2__FinishedFunc");

	AMasterBuilding_Multi_NestBase_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void AMasterBuilding_Multi_NestBase_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_2__UpdateFunc");

	AMasterBuilding_Multi_NestBase_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_3__FinishedFunc
// (BlueprintEvent)

void AMasterBuilding_Multi_NestBase_C::Timeline_3__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_3__FinishedFunc");

	AMasterBuilding_Multi_NestBase_C_Timeline_3__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_3__UpdateFunc
// (BlueprintEvent)

void AMasterBuilding_Multi_NestBase_C::Timeline_3__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_3__UpdateFunc");

	AMasterBuilding_Multi_NestBase_C_Timeline_3__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_4__FinishedFunc
// (BlueprintEvent)

void AMasterBuilding_Multi_NestBase_C::Timeline_4__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_4__FinishedFunc");

	AMasterBuilding_Multi_NestBase_C_Timeline_4__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_4__UpdateFunc
// (BlueprintEvent)

void AMasterBuilding_Multi_NestBase_C::Timeline_4__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_4__UpdateFunc");

	AMasterBuilding_Multi_NestBase_C_Timeline_4__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_5__FinishedFunc
// (BlueprintEvent)

void AMasterBuilding_Multi_NestBase_C::Timeline_5__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_5__FinishedFunc");

	AMasterBuilding_Multi_NestBase_C_Timeline_5__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_5__UpdateFunc
// (BlueprintEvent)

void AMasterBuilding_Multi_NestBase_C::Timeline_5__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_5__UpdateFunc");

	AMasterBuilding_Multi_NestBase_C_Timeline_5__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_6__FinishedFunc
// (BlueprintEvent)

void AMasterBuilding_Multi_NestBase_C::Timeline_6__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_6__FinishedFunc");

	AMasterBuilding_Multi_NestBase_C_Timeline_6__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_6__UpdateFunc
// (BlueprintEvent)

void AMasterBuilding_Multi_NestBase_C::Timeline_6__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_6__UpdateFunc");

	AMasterBuilding_Multi_NestBase_C_Timeline_6__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_7__FinishedFunc
// (BlueprintEvent)

void AMasterBuilding_Multi_NestBase_C::Timeline_7__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_7__FinishedFunc");

	AMasterBuilding_Multi_NestBase_C_Timeline_7__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_7__UpdateFunc
// (BlueprintEvent)

void AMasterBuilding_Multi_NestBase_C::Timeline_7__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Timeline_7__UpdateFunc");

	AMasterBuilding_Multi_NestBase_C_Timeline_7__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AMasterBuilding_Multi_NestBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.ReceiveBeginPlay");

	AMasterBuilding_Multi_NestBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Nest Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Nest_s_ID                      (Parm, ZeroConstructor)

void AMasterBuilding_Multi_NestBase_C::Nest_Destroyed(const struct FString& Nest_s_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.Nest Destroyed");

	AMasterBuilding_Multi_NestBase_C_Nest_Destroyed_Params params;
	params.Nest_s_ID = Nest_s_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.BoundOnNestDestroyed_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 DestroyedNestID                (Parm, ZeroConstructor)
// class ABendNest*               DestroyedNest                  (Parm, ZeroConstructor, IsPlainOldData)

void AMasterBuilding_Multi_NestBase_C::BoundOnNestDestroyed_Event(const struct FString& DestroyedNestID, class ABendNest* DestroyedNest)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.BoundOnNestDestroyed_Event");

	AMasterBuilding_Multi_NestBase_C_BoundOnNestDestroyed_Event_Params params;
	params.DestroyedNestID = DestroyedNestID;
	params.DestroyedNest = DestroyedNest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.RetryLoad
// (BlueprintCallable, BlueprintEvent)

void AMasterBuilding_Multi_NestBase_C::RetryLoad()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.RetryLoad");

	AMasterBuilding_Multi_NestBase_C_RetryLoad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.FireGoneOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NestID                         (Parm, ZeroConstructor)

void AMasterBuilding_Multi_NestBase_C::FireGoneOut(const struct FString& NestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.FireGoneOut");

	AMasterBuilding_Multi_NestBase_C_FireGoneOut_Params params;
	params.NestID = NestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.NestFireGoneOut_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NestID                         (Parm, ZeroConstructor)

void AMasterBuilding_Multi_NestBase_C::NestFireGoneOut_Event(const struct FString& NestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.NestFireGoneOut_Event");

	AMasterBuilding_Multi_NestBase_C_NestFireGoneOut_Event_Params params;
	params.NestID = NestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.BurnTheMaterials
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 NestID                         (Parm, ZeroConstructor)
// TArray<class UMaterialInstanceDynamic*> Materials                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AMasterBuilding_Multi_NestBase_C::BurnTheMaterials(const struct FString& NestID, TArray<class UMaterialInstanceDynamic*> Materials)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.BurnTheMaterials");

	AMasterBuilding_Multi_NestBase_C_BurnTheMaterials_Params params;
	params.NestID = NestID;
	params.Materials = Materials;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.ExecuteUbergraph_MasterBuilding_Multi-NestBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMasterBuilding_Multi_NestBase_C::ExecuteUbergraph_MasterBuilding_Multi_NestBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterBuilding_Multi-NestBase.MasterBuilding_Multi-NestBase_C.ExecuteUbergraph_MasterBuilding_Multi-NestBase");

	AMasterBuilding_Multi_NestBase_C_ExecuteUbergraph_MasterBuilding_Multi_NestBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
