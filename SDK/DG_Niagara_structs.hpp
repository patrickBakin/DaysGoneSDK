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

// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8_t
{
	ParticleData                   = 0,
	Shared                         = 1,
	Event                          = 2,
	ENiagaraDataSetType_MAX        = 3
};


// Enum Niagara.ENiagaraDataType
enum class ENiagaraDataType : uint8_t
{
	Scalar                         = 0,
	Vector                         = 1,
	Matrix                         = 2,
	Curve                          = 3,
	ENiagaraDataType_MAX           = 4
};


// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8_t
{
	Copy                           = 0,
	Zero                           = 1,
	None                           = 2,
	MarkInvalid                    = 3,
	EUnusedAttributeBehaviour_MAX  = 4
};


// Enum Niagara.EEmitterRenderModuleType
enum class EEmitterRenderModuleType : uint8_t
{
	RMT_None                       = 0,
	RMT_Sprites                    = 1,
	RMT_Ribbon                     = 2,
	RMT_Trails                     = 3,
	RMT_Meshes                     = 4,
	RMT_MAX                        = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Niagara.NiagaraVariableInfo
// 0x0010
struct FNiagaraVariableInfo
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENiagaraDataType>                      Type;                                                     // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Niagara.DeprecatedNiagaraConstants
// 0x0080
struct FDeprecatedNiagaraConstants
{
	TArray<struct FNiagaraVariableInfo>                ScalarConstantsInfo;                                      // 0x0000(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FNiagaraVariableInfo>                VectorConstantsInfo;                                      // 0x0010(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FNiagaraVariableInfo>                MatrixConstantsInfo;                                      // 0x0020(0x0010) (ZeroConstructor, Deprecated)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	TArray<float>                                      ScalarConstants;                                          // 0x0040(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FVector4>                            VectorConstants;                                          // 0x0050(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FMatrix>                             MatrixConstants;                                          // 0x0060(0x0010) (ZeroConstructor, Deprecated)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraConstantBase
// 0x0008
struct FNiagaraConstantBase
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraConstants_Float
// 0x0008 (0x0010 - 0x0008)
struct FNiagaraConstants_Float : public FNiagaraConstantBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraConstants_Vector
// 0x0018 (0x0020 - 0x0008)
struct FNiagaraConstants_Vector : public FNiagaraConstantBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FVector4                                    Value;                                                    // 0x0010(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraConstants_Matrix
// 0x0048 (0x0050 - 0x0008)
struct FNiagaraConstants_Matrix : public FNiagaraConstantBase
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FMatrix                                     Value;                                                    // 0x0010(0x0040) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraConstants_DataObject
// 0x0008 (0x0010 - 0x0008)
struct FNiagaraConstants_DataObject : public FNiagaraConstantBase
{
	class UNiagaraDataObject*                          Value;                                                    // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraConstants
// 0x0040
struct FNiagaraConstants
{
	TArray<struct FNiagaraConstants_Float>             ScalarConstants;                                          // 0x0000(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FNiagaraConstants_Vector>            VectorConstants;                                          // 0x0010(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FNiagaraConstants_Matrix>            MatrixConstants;                                          // 0x0020(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FNiagaraConstants_DataObject>        DataObjectConstants;                                      // 0x0030(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraScriptConstantData
// 0x0180
struct FNiagaraScriptConstantData
{
	struct FDeprecatedNiagaraConstants                 ExternalConstants;                                        // 0x0000(0x0080) (Deprecated)
	struct FDeprecatedNiagaraConstants                 InternalConstants;                                        // 0x0080(0x0080) (Deprecated)
	struct FNiagaraConstants                           ExternalConstantsNew;                                     // 0x0100(0x0040)
	struct FNiagaraConstants                           InternalConstantsNew;                                     // 0x0140(0x0040)
};

// ScriptStruct Niagara.NiagaraDataSetID
// 0x0010
struct FNiagaraDataSetID
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENiagaraDataSetType>                   Type;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraDataSetProperties
// 0x0020
struct FNiagaraDataSetProperties
{
	struct FNiagaraDataSetID                           Id;                                                       // 0x0000(0x0010) (Edit, EditConst)
	TArray<struct FNiagaraVariableInfo>                Variables;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraScriptUsageInfo
// 0x0001
struct FNiagaraScriptUsageInfo
{
	bool                                               bReadsAttriubteData;                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Niagara.NiagaraEventReceiverProperties
// 0x0028
struct FNiagaraEventReceiverProperties
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceEventGenerator;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceEmitter;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UNiagaraEventReceiverEmitterAction*>  EmitterActions;                                           // 0x0018(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraEventGeneratorProperties
// 0x0008 (0x0028 - 0x0020)
struct FNiagaraEventGeneratorProperties : public FNiagaraDataSetProperties
{
	int                                                MaxEventsPerFrame;                                        // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct Niagara.NiagaraEmitterScriptProperties
// 0x0068
struct FNiagaraEmitterScriptProperties
{
	class UNiagaraScript*                              Script;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FNiagaraConstants                           ExternalConstants;                                        // 0x0008(0x0040) (Edit)
	TArray<struct FNiagaraEventReceiverProperties>     EventReceivers;                                           // 0x0048(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	TArray<struct FNiagaraEventGeneratorProperties>    EventGenerators;                                          // 0x0058(0x0010) (Edit, EditFixedSize, ZeroConstructor)
};

// ScriptStruct Niagara.NiagaraConstantMap
// 0x0148
struct FNiagaraConstantMap
{
	unsigned char                                      UnknownData00[0x148];                                     // 0x0000(0x0148) MISSED OFFSET
};

// ScriptStruct Niagara.DeprecatedNiagaraEmitterProperties
// 0x02E0
struct FDeprecatedNiagaraEmitterProperties
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bIsEnabled;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              SpawnRate;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	class UNiagaraScript*                              UpdateScript;                                             // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNiagaraScript*                              SpawnScript;                                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   Material;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmitterRenderModuleType>              RenderModuleType;                                         // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              StartTime;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UNiagaraEffectRendererProperties*            RendererProperties;                                       // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FNiagaraConstantMap                         ExternalConstants;                                        // 0x0048(0x0148)
	struct FNiagaraConstantMap                         ExternalSpawnConstants;                                   // 0x0190(0x0148)
	int                                                NumLoops;                                                 // 0x02D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02DC(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
