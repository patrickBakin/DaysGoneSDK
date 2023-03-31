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

// Function bp_veh_master.bp_veh_master_C.checkForUncollectableStaticMeshes
// (Public, BlueprintCallable, BlueprintEvent)

void Abp_veh_master_C::checkForUncollectableStaticMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.checkForUncollectableStaticMeshes");

	Abp_veh_master_C_checkForUncollectableStaticMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_veh_master.bp_veh_master_C.autoSetTireEnum
// (Public, BlueprintCallable, BlueprintEvent)

void Abp_veh_master_C::autoSetTireEnum()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.autoSetTireEnum");

	Abp_veh_master_C_autoSetTireEnum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_veh_master.bp_veh_master_C.setTireState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Abp_veh_master_C::setTireState()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.setTireState");

	Abp_veh_master_C_setTireState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_veh_master.bp_veh_master_C.setExcludeFromTerrainColorCapture
// (Public, BlueprintCallable, BlueprintEvent)

void Abp_veh_master_C::setExcludeFromTerrainColorCapture()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.setExcludeFromTerrainColorCapture");

	Abp_veh_master_C_setExcludeFromTerrainColorCapture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_veh_master.bp_veh_master_C.setPawnCollideHidden
// (Public, BlueprintCallable, BlueprintEvent)

void Abp_veh_master_C::setPawnCollideHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.setPawnCollideHidden");

	Abp_veh_master_C_setPawnCollideHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_veh_master.bp_veh_master_C.turnOffReceivesDecals
// (Public, BlueprintCallable, BlueprintEvent)

void Abp_veh_master_C::turnOffReceivesDecals()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.turnOffReceivesDecals");

	Abp_veh_master_C_turnOffReceivesDecals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_veh_master.bp_veh_master_C.getBendCoverChildTransforms
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             car                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              BendCoverChildTransforms       (Parm, OutParm, IsPlainOldData)

void Abp_veh_master_C::getBendCoverChildTransforms(class UStaticMesh* car, struct FTransform* BendCoverChildTransforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.getBendCoverChildTransforms");

	Abp_veh_master_C_getBendCoverChildTransforms_Params params;
	params.car = car;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BendCoverChildTransforms != nullptr)
		*BendCoverChildTransforms = params.BendCoverChildTransforms;
}


// Function bp_veh_master.bp_veh_master_C.SnapToSurface
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Abp_veh_master_C::SnapToSurface()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.SnapToSurface");

	Abp_veh_master_C_SnapToSurface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_veh_master.bp_veh_master_C.CreateDynamicMaterials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    Paint_Color_Indexes            (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UMaterialInstanceDynamic*> Dynamic_Material_Instances     (Parm, OutParm, ZeroConstructor)

void Abp_veh_master_C::CreateDynamicMaterials(TArray<int>* Paint_Color_Indexes, TArray<class UMaterialInstanceDynamic*>* Dynamic_Material_Instances)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.CreateDynamicMaterials");

	Abp_veh_master_C_CreateDynamicMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Paint_Color_Indexes != nullptr)
		*Paint_Color_Indexes = params.Paint_Color_Indexes;
	if (Dynamic_Material_Instances != nullptr)
		*Dynamic_Material_Instances = params.Dynamic_Material_Instances;
}


// Function bp_veh_master.bp_veh_master_C.ReadPaintedColorEnum_GetRandom
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    Paint_Indexes                  (Parm, OutParm, ZeroConstructor)

void Abp_veh_master_C::ReadPaintedColorEnum_GetRandom(TArray<int>* Paint_Indexes)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.ReadPaintedColorEnum_GetRandom");

	Abp_veh_master_C_ReadPaintedColorEnum_GetRandom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Paint_Indexes != nullptr)
		*Paint_Indexes = params.Paint_Indexes;
}


// Function bp_veh_master.bp_veh_master_C.ReadPaintColorEnum_GetIndexes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Enum_Value                     (Parm, ZeroConstructor)
// TArray<int>                    PaintIndexes                   (Parm, OutParm, ZeroConstructor)

void Abp_veh_master_C::ReadPaintColorEnum_GetIndexes(const struct FString& Enum_Value, TArray<int>* PaintIndexes)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.ReadPaintColorEnum_GetIndexes");

	Abp_veh_master_C_ReadPaintColorEnum_GetIndexes_Params params;
	params.Enum_Value = Enum_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PaintIndexes != nullptr)
		*PaintIndexes = params.PaintIndexes;
}


// Function bp_veh_master.bp_veh_master_C.ReadPaintColorEnum
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    Paint_Color_Indexes            (Parm, OutParm, ZeroConstructor)

void Abp_veh_master_C::ReadPaintColorEnum(TArray<int>* Paint_Color_Indexes)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.ReadPaintColorEnum");

	Abp_veh_master_C_ReadPaintColorEnum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Paint_Color_Indexes != nullptr)
		*Paint_Color_Indexes = params.Paint_Color_Indexes;
}


// Function bp_veh_master.bp_veh_master_C.TokenizeStringToList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 In_String                      (Parm, ZeroConstructor)
// struct FString                 Split_By                       (Parm, ZeroConstructor)
// TArray<struct FString>         Token_List_as_String           (Parm, OutParm, ZeroConstructor)
// TArray<int>                    Token_List_as_Int              (Parm, OutParm, ZeroConstructor)

void Abp_veh_master_C::TokenizeStringToList(const struct FString& In_String, const struct FString& Split_By, TArray<struct FString>* Token_List_as_String, TArray<int>* Token_List_as_Int)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.TokenizeStringToList");

	Abp_veh_master_C_TokenizeStringToList_Params params;
	params.In_String = In_String;
	params.Split_By = Split_By;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Token_List_as_String != nullptr)
		*Token_List_as_String = params.Token_List_as_String;
	if (Token_List_as_Int != nullptr)
		*Token_List_as_Int = params.Token_List_as_Int;
}


// Function bp_veh_master.bp_veh_master_C.BendVehCarArt_SplitPaintColorEnum
// (Public, BlueprintCallable, BlueprintEvent)

void Abp_veh_master_C::BendVehCarArt_SplitPaintColorEnum()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.BendVehCarArt_SplitPaintColorEnum");

	Abp_veh_master_C_BendVehCarArt_SplitPaintColorEnum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_veh_master.bp_veh_master_C.SetMaterialParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Dynamic_Material_Instances     (Parm, ZeroConstructor, IsPlainOldData)

void Abp_veh_master_C::SetMaterialParams(class UMaterialInstanceDynamic* Dynamic_Material_Instances)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.SetMaterialParams");

	Abp_veh_master_C_SetMaterialParams_Params params;
	params.Dynamic_Material_Instances = Dynamic_Material_Instances;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_veh_master.bp_veh_master_C.BendVehCarArt_ReadPaintColorEnum
// (Public, BlueprintCallable, BlueprintEvent)

void Abp_veh_master_C::BendVehCarArt_ReadPaintColorEnum()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.BendVehCarArt_ReadPaintColorEnum");

	Abp_veh_master_C_BendVehCarArt_ReadPaintColorEnum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_veh_master.bp_veh_master_C.ArtFunctions
// (Public, BlueprintCallable, BlueprintEvent)

void Abp_veh_master_C::ArtFunctions()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.ArtFunctions");

	Abp_veh_master_C_ArtFunctions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_veh_master.bp_veh_master_C.RemoveParts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    Hood                           (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMeshComponent*    Trunk                          (Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMeshComponent*    SteeringWheel                  (Parm, ZeroConstructor, IsPlainOldData)

void Abp_veh_master_C::RemoveParts(class UStaticMeshComponent* Hood, class UStaticMeshComponent* Trunk, class UStaticMeshComponent* SteeringWheel)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.RemoveParts");

	Abp_veh_master_C_RemoveParts_Params params;
	params.Hood = Hood;
	params.Trunk = Trunk;
	params.SteeringWheel = SteeringWheel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_veh_master.bp_veh_master_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_veh_master_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.UserConstructionScript");

	Abp_veh_master_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_veh_master.bp_veh_master_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void Abp_veh_master_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.ReceiveTick");

	Abp_veh_master_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_veh_master.bp_veh_master_C.BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_6_BeginOverlapSig__DelegateSignature
// (BlueprintEvent)

void Abp_veh_master_C::BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_6_BeginOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_6_BeginOverlapSig__DelegateSignature");

	Abp_veh_master_C_BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_6_BeginOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_veh_master.bp_veh_master_C.BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_8_EndOverlapSig__DelegateSignature
// (BlueprintEvent)

void Abp_veh_master_C::BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_8_EndOverlapSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_8_EndOverlapSig__DelegateSignature");

	Abp_veh_master_C_BndEvt__PlayerSphere_K2Node_ComponentBoundEvent_8_EndOverlapSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_veh_master.bp_veh_master_C.ExecuteUbergraph_bp_veh_master
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Abp_veh_master_C::ExecuteUbergraph_bp_veh_master(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_veh_master.bp_veh_master_C.ExecuteUbergraph_bp_veh_master");

	Abp_veh_master_C_ExecuteUbergraph_bp_veh_master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
