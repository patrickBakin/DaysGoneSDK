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

// BlueprintGeneratedClass BP_SP_Add2.BP_SP_Add2_C
// 0x0060 (0x0498 - 0x0438)
class ABP_SP_Add2_C : public ABP_SP_ProfileDefault_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0438(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FLinearColor                                Sky_Preset_Cloud_Lighting_Tint_599D15E24FD88018DB7BDE8C763D9116;// 0x0440(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Sky_Preset_Sun_Color_599D15E24FD88018DB7BDE8C763D9116;    // 0x0450(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Sky_Preset_Rayleigh_Scatter_Term_599D15E24FD88018DB7BDE8C763D9116;// 0x0460(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Sky_Preset_Altitude_Scale_599D15E24FD88018DB7BDE8C763D9116;// 0x046C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Sky_Preset_Reference_Altitude_Meters_599D15E24FD88018DB7BDE8C763D9116;// 0x0470(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Sky_Preset_Mie_Direction_term_599D15E24FD88018DB7BDE8C763D9116;// 0x0474(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Sky_Preset_Mie_Scale_Term_599D15E24FD88018DB7BDE8C763D9116;// 0x0478(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Sky_Preset_Rayleigh_Scale_Term_599D15E24FD88018DB7BDE8C763D9116;// 0x047C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Sky_Preset_Mie_Scatter_Term_599D15E24FD88018DB7BDE8C763D9116;// 0x0480(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Sky_Preset_Distance_Scale_599D15E24FD88018DB7BDE8C763D9116;// 0x0484(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Sky_Preset_Mip_Fog_Transition_Distance_599D15E24FD88018DB7BDE8C763D9116;// 0x0488(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Sky_Preset__Direction_599D15E24FD88018DB7BDE8C763D9116;   // 0x048C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x048D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Sky_Preset;                                               // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SP_Add2.BP_SP_Add2_C");
		return ptr;
	}


	void UserConstructionScript();
	void Sky_Preset__FinishedFunc();
	void Sky_Preset__UpdateFunc();
	void UpdateProfile();
	void ExecuteUbergraph_BP_SP_Add2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
