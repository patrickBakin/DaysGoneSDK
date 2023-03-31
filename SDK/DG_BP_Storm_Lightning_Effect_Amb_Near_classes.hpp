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

// BlueprintGeneratedClass BP_Storm_Lightning_Effect_Amb_Near.BP_Storm_Lightning_Effect_Amb_Near_C
// 0x002F (0x0410 - 0x03E1)
class ABP_Storm_Lightning_Effect_Amb_Near_C : public ABP_Storm_Lightning_Effect_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        ChildActor_AmbientLight;                                  // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LightningDirection;                                       // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AmbientLightScale;                                        // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	class UBendAmbientLightComponent*                  AmbientLightComponent;                                    // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Storm_Lightning_Effect_Amb_Near.BP_Storm_Lightning_Effect_Amb_Near_C");
		return ptr;
	}


	void UserConstructionScript();
	void Start_Lightning();
	void Editor_Tick();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void End_Lightning();
	void ExecuteUbergraph_BP_Storm_Lightning_Effect_Amb_Near(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
