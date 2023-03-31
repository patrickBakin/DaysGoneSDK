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

// BlueprintGeneratedClass WolfAttackModifier.WolfAttackModifier_C
// 0x0971 (0x09B9 - 0x0048)
class UWolfAttackModifier_C : public UCameraModifier
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FPostProcessSettings                        post;                                                     // 0x0050(0x0960) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               StartBLendOut;                                            // 0x09B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09B1(0x0003) MISSED OFFSET
	float                                              Delta;                                                    // 0x09B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DoneBlending;                                             // 0x09B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WolfAttackModifier.WolfAttackModifier_C");
		return ptr;
	}


	void BlueprintModifyPostProcess(float* DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
