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

// BlueprintGeneratedClass DebugCamModifier.DebugCamModifier_C
// 0x0968 (0x09B0 - 0x0048)
class UDebugCamModifier_C : public UCameraModifier
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FPostProcessSettings                        post;                                                     // 0x0050(0x0960) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DebugCamModifier.DebugCamModifier_C");
		return ptr;
	}


	void BlueprintModifyPostProcess(float* DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
