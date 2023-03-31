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

// BlueprintGeneratedClass BP_ORWorldManager.BP_ORWorldManager_C
// 0x0118 (0x0460 - 0x0348)
class ABP_ORWorldManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                       Cinematic_Post;                                           // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       Fog_Density;                                              // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       Is_Inside_Post;                                           // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       Rain_Night_Post;                                          // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       Snow_Post_Night;                                          // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       Snow_Post;                                                // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       Cloud_Cover;                                              // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       Rain_Post;                                                // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPostProcessComponent*                       Night_Post;                                               // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Sun_Tints_Sun_Lighting_Tint_BB6E6A1E4BA8B40D9F1C01AC9A1E0FA2;// 0x03A0(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Sun_Tints_Cloud_Lighting_Tint_BB6E6A1E4BA8B40D9F1C01AC9A1E0FA2;// 0x03B0(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Sun_Tints_Sun_Lighting_Temperature_BB6E6A1E4BA8B40D9F1C01AC9A1E0FA2;// 0x03C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Sun_Tints_Cloud_Lighting_Temperature_BB6E6A1E4BA8B40D9F1C01AC9A1E0FA2;// 0x03C4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Sun_Tints__Direction_BB6E6A1E4BA8B40D9F1C01AC9A1E0FA2;    // 0x03C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Sun_Tints;                                                // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sun_Moon_Intensity_Sun_Intensity_B03241F04B6FF429B33549B318946259;// 0x03D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Sun_Moon_Intensity_Moon_Intensity_B03241F04B6FF429B33549B318946259;// 0x03DC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Sun_Moon_Intensity__Direction_B03241F04B6FF429B33549B318946259;// 0x03E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03E1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Sun_Moon_Intensity;                                       // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TOD_Post_Weight_Night_Post_Weight_A8675BCB42574A2DA75E7C8820176EEF;// 0x03F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    TOD_Post_Weight__Direction_A8675BCB42574A2DA75E7C8820176EEF;// 0x03F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          TOD_Post_Weight;                                          // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Atmospheric_Fog_Terrain_Tint_5A291A07467CEC4A2D78D49144113042;// 0x0400(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Atmospheric_Fog_Rayleigh_Scatter_Term_5A291A07467CEC4A2D78D49144113042;// 0x0410(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Atmospheric_Fog_Rayleigh_Scale_Terrain_5A291A07467CEC4A2D78D49144113042;// 0x041C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Atmospheric_Fog_Mie_Direction_Scale_Terrain_5A291A07467CEC4A2D78D49144113042;// 0x0420(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Atmospheric_Fog_Rayleight_Direction_Scale_Terrain_5A291A07467CEC4A2D78D49144113042;// 0x0424(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Atmospheric_Fog_Altitude_Reference_In_Meters_5A291A07467CEC4A2D78D49144113042;// 0x0428(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Atmospheric_Fog_Mie_Direction_term_5A291A07467CEC4A2D78D49144113042;// 0x042C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Atmospheric_Fog_Mie_Scale_Term_5A291A07467CEC4A2D78D49144113042;// 0x0430(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Atmospheric_Fog_Rayleigh_Scale_Term_5A291A07467CEC4A2D78D49144113042;// 0x0434(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Atmospheric_Fog_Mie_Scatter_Term_5A291A07467CEC4A2D78D49144113042;// 0x0438(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Atmospheric_Fog_Mip_Fog_Transition_Distance_5A291A07467CEC4A2D78D49144113042;// 0x043C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Atmospheric_Fog__Direction_5A291A07467CEC4A2D78D49144113042;// 0x0440(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0441(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Atmospheric_Fog;                                          // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           ORWorld_Sun_Light;                                        // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_ORWindManager_C*                         Wind_Manager;                                             // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ORWorldManager.BP_ORWorldManager_C");
		return ptr;
	}


	void UserConstructionScript();
	void Sun_Tints__FinishedFunc();
	void Sun_Tints__UpdateFunc();
	void Atmospheric_Fog__FinishedFunc();
	void Atmospheric_Fog__UpdateFunc();
	void TOD_Post_Weight__FinishedFunc();
	void TOD_Post_Weight__UpdateFunc();
	void Sun_Moon_Intensity__FinishedFunc();
	void Sun_Moon_Intensity__UpdateFunc();
	void Update_ORWorldManager();
	void Cinematic_Start(const struct FName& CinematicLevel);
	void Cinematic_End(const struct FName& CinematicLevel);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ORWorldManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
