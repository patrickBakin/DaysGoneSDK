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

// BlueprintGeneratedClass BP_SP_ProfileDefault.BP_SP_ProfileDefault_C
// 0x0078 (0x0438 - 0x03C0)
class ABP_SP_ProfileDefault_C : public ABendDefaultSkyProfile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcess;                                              // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        TextLabel;                                                // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Sky_Preset_Cloud_Lighting_Tint_60B84105465A98382D2405BE63047FA1;// 0x03E0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Sky_Preset_Sun_Color_60B84105465A98382D2405BE63047FA1;    // 0x03F0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Sky_Preset_Rayleigh_Scatter_Term_60B84105465A98382D2405BE63047FA1;// 0x0400(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Sky_Preset_Altitude_Scale_60B84105465A98382D2405BE63047FA1;// 0x040C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Sky_Preset_Reference_Altitude_Meters_60B84105465A98382D2405BE63047FA1;// 0x0410(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Sky_Preset_Mie_Direction_term_60B84105465A98382D2405BE63047FA1;// 0x0414(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Sky_Preset_Mie_Scale_Term_60B84105465A98382D2405BE63047FA1;// 0x0418(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Sky_Preset_Rayleigh_Scale_Term_60B84105465A98382D2405BE63047FA1;// 0x041C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Sky_Preset_Mie_Scatter_Term_60B84105465A98382D2405BE63047FA1;// 0x0420(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Sky_Preset_Distance_Scale_60B84105465A98382D2405BE63047FA1;// 0x0424(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Sky_Preset_Mip_Fog_Transition_Distance_60B84105465A98382D2405BE63047FA1;// 0x0428(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Sky_Preset__Direction_60B84105465A98382D2405BE63047FA1;   // 0x042C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x042D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Sky_Preset;                                               // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SP_ProfileDefault.BP_SP_ProfileDefault_C");
		return ptr;
	}


	void UserConstructionScript();
	void Sky_Preset__FinishedFunc();
	void Sky_Preset__UpdateFunc();
	void InitializeCodeReferences();
	void UpdateProfile();
	void ExecuteUbergraph_BP_SP_ProfileDefault(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
