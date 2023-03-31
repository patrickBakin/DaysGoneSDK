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

// BlueprintGeneratedClass BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C
// 0x0051 (0x03E1 - 0x0390)
class ABP_Storm_Lightning_Effect_C : public AEditorTickableActorLabeled_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FLinearColor                                LightningColor;                                           // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightningBrightness;                                      // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightningTODScaleFactor;                                  // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndingSpeed;                                              // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ActiveState;                                              // 0x03B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03B5(0x0003) MISSED OFFSET
	float                                              ChanceToEnd;                                              // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Lifetime;                                                 // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightningDistance;                                        // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlickerIntensity;                                         // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightningBrightnessTODAdjusted;                           // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ThunderSound;                                             // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABendWorldManager*                           WorldManager;                                             // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               DebugFireEventStartLightning;                             // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Storm_Lightning_Effect.BP_Storm_Lightning_Effect_C");
		return ptr;
	}


	void StateFrameDelay(bool* AllowTick);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void Editor_Tick();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void End_Lightning();
	void Start_Lightning();
	void ExecuteUbergraph_BP_Storm_Lightning_Effect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
