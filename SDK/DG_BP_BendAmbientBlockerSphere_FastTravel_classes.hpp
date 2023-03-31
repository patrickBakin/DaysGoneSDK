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

// BlueprintGeneratedClass BP_BendAmbientBlockerSphere_FastTravel.BP_BendAmbientBlockerSphere_FastTravel_C
// 0x0014 (0x0370 - 0x035C)
class ABP_BendAmbientBlockerSphere_FastTravel_C : public ABP_BendAmbientBlockerSphere_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendSphereComponent*                        BendSphere;                                               // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BendAmbientBlockerSphere_FastTravel.BP_BendAmbientBlockerSphere_FastTravel_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__BendSphere_K2Node_ComponentBoundEvent_739_EndOverlapSig__DelegateSignature();
	void ExecuteUbergraph_BP_BendAmbientBlockerSphere_FastTravel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
