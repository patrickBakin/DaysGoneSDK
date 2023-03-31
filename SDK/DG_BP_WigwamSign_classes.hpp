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

// BlueprintGeneratedClass BP_WigwamSign.BP_WigwamSign_C
// 0x0070 (0x03C8 - 0x0358)
class ABP_WigwamSign_C : public AStaticMeshActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio1;                                                   // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Flicker_W_Flicker_170D0F8741D06C92260E388EF2A23EFE;       // 0x0368(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Flicker_E_Flicker_170D0F8741D06C92260E388EF2A23EFE;       // 0x036C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Flicker__Direction_170D0F8741D06C92260E388EF2A23EFE;      // 0x0370(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Flicker;                                                  // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Arrows___Smoke_Smoke3_ADE832B442341EC782E977ADE1B5B39A;   // 0x0380(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Arrows___Smoke_Smoke2_ADE832B442341EC782E977ADE1B5B39A;   // 0x0384(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Arrows___Smoke_Smoke1_ADE832B442341EC782E977ADE1B5B39A;   // 0x0388(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Arrows___Smoke_Arrow3_ADE832B442341EC782E977ADE1B5B39A;   // 0x038C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Arrows___Smoke_Arrow2_ADE832B442341EC782E977ADE1B5B39A;   // 0x0390(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Arrows___Smoke_Arrow1_ADE832B442341EC782E977ADE1B5B39A;   // 0x0394(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Arrows___Smoke__Direction_ADE832B442341EC782E977ADE1B5B39A;// 0x0398(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Arrows___Smoke;                                           // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Emissive_Color_Blue;                                      // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Emissive_Color_Red;                                       // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WigwamSign.BP_WigwamSign_C");
		return ptr;
	}


	void UserConstructionScript();
	void Flicker__FinishedFunc();
	void Flicker__UpdateFunc();
	void Arrows___Smoke__FinishedFunc();
	void Arrows___Smoke__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WigwamSign(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
