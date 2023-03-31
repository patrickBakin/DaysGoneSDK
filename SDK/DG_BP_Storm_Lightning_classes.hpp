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

// BlueprintGeneratedClass BP_Storm_Lightning.BP_Storm_Lightning_C
// 0x0062 (0x0504 - 0x04A2)
class ABP_Storm_Lightning_C : public ABP_Storm_Lightning_NoClouds_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x04A2(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StormDistantFog;                                          // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        CumulonimbusCloud01;                                      // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendCloudActorComponent*                    BendCloudActorC;                                          // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendCloudActorComponent*                    BendCloudActorB;                                          // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBendCloudActorComponent*                    BendCloudActorA;                                          // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            CloudMaterials;                                           // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UBendCloudActorComponent*>            CloudActors;                                              // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     Cumulonimbus_Scale;                                       // 0x04F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Storm_Lightning.BP_Storm_Lightning_C");
		return ptr;
	}


	void CloudController();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void Editor_Tick();
	void End_Storm();
	void ExecuteUbergraph_BP_Storm_Lightning(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
