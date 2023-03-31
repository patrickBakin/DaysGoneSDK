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

// BlueprintGeneratedClass BP_Storm_Lightning_Effect_Amb_Near_02.BP_Storm_Lightning_Effect_Amb_Near_02_C
// 0x0020 (0x0430 - 0x0410)
class ABP_Storm_Lightning_Effect_Amb_Near_02_C : public ABP_Storm_Lightning_Effect_Amb_Near_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        DistantLightningV1;                                       // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            LightningMaterials;                                       // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Storm_Lightning_Effect_Amb_Near_02.BP_Storm_Lightning_Effect_Amb_Near_02_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void Editor_Tick();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void Start_Lightning();
	void End_Lightning();
	void ExecuteUbergraph_BP_Storm_Lightning_Effect_Amb_Near_02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
