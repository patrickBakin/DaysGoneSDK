#pragma once

// DaysGone (00) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Niagara.NiagaraActor
// 0x0008 (0x0350 - 0x0348)
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                           NiagaraComponent;                                         // 0x0348(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraActor");
		return ptr;
	}

};


// Class Niagara.NiagaraComponent
// 0x0020 (0x05F0 - 0x05D0)
class UNiagaraComponent : public UPrimitiveComponent
{
public:
	class UNiagaraEffect*                              Asset;                                                    // 0x05D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x05D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraComponent");
		return ptr;
	}

};


// Class Niagara.NiagaraScript
// 0x01C8 (0x01F0 - 0x0028)
class UNiagaraScript : public UObject
{
public:
	TArray<unsigned char>                              ByteCode;                                                 // 0x0028(0x0010) (ZeroConstructor)
	struct FNiagaraScriptConstantData                  ConstantData;                                             // 0x0038(0x0180)
	TArray<struct FNiagaraVariableInfo>                Attributes;                                               // 0x01B8(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraDataSetProperties>           EventReceivers;                                           // 0x01C8(0x0010) (ZeroConstructor)
	TArray<struct FNiagaraDataSetProperties>           EventGenerators;                                          // 0x01D8(0x0010) (ZeroConstructor)
	struct FNiagaraScriptUsageInfo                     Usage;                                                    // 0x01E8(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01E9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraScript");
		return ptr;
	}

};


// Class Niagara.NiagaraEmitterProperties
// 0x0110 (0x0138 - 0x0028)
class UNiagaraEmitterProperties : public UObject
{
public:
	struct FString                                     EmitterName;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)
	bool                                               bIsEnabled;                                               // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              SpawnRate;                                                // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   Material;                                                 // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEmitterRenderModuleType>              RenderModuleType;                                         // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              StartTime;                                                // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	class UNiagaraEffectRendererProperties*            RendererProperties;                                       // 0x0058(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	int                                                NumLoops;                                                 // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FNiagaraEmitterScriptProperties             UpdateScriptProps;                                        // 0x0068(0x0068) (Edit)
	struct FNiagaraEmitterScriptProperties             SpawnScriptProps;                                         // 0x00D0(0x0068) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEmitterProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraEffect
// 0x0020 (0x0048 - 0x0028)
class UNiagaraEffect : public UObject
{
public:
	TArray<struct FDeprecatedNiagaraEmitterProperties> EmitterPropsSerialized;                                   // 0x0028(0x0010) (ZeroConstructor, Deprecated)
	TArray<class UNiagaraEmitterProperties*>           EmitterProps;                                             // 0x0038(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEffect");
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction
// 0x0000 (0x0028 - 0x0028)
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction");
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// 0x0008 (0x0030 - 0x0028)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32_t                                           NumParticles;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles");
		return ptr;
	}

};


// Class Niagara.NiagaraFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraFunctionLibrary");
		return ptr;
	}


	class UNiagaraComponent* STATIC_SpawnEffectAttached(class UNiagaraEffect* EffectTemplate, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy);
	class UNiagaraComponent* STATIC_SpawnEffectAtLocation(class UObject* WorldContextObject, class UNiagaraEffect* EffectTemplate, const struct FVector& Location, const struct FRotator& Rotation, bool bAutoDestroy);
	void STATIC_SetUpdateScriptConstant(class UNiagaraComponent* Component, const struct FName& EmitterName, const struct FName& ConstantName, const struct FVector& Value);
};


// Class Niagara.NiagaraScriptSourceBase
// 0x0020 (0x0048 - 0x0028)
class UNiagaraScriptSourceBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraScriptSourceBase");
		return ptr;
	}

};


// Class Niagara.NiagaraSequence
// 0x0008 (0x0030 - 0x0028)
class UNiagaraSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSequence");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
