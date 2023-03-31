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

// BlueprintGeneratedClass CrierNest.CrierNest_C
// 0x0028 (0x0758 - 0x0730)
class ACrierNest_C : public ANest_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0730(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            FrenzySphere;                                             // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxCrows;                                                 // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CrowCount;                                                // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FrenzyRadius;                                             // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x074C(0x0004) MISSED OFFSET
	class UJobClassInfo*                               JobID;                                                    // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CrierNest.CrierNest_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnNestStartedBurning();
	void StartCrierNestJob();
	void ExecuteUbergraph_CrierNest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
