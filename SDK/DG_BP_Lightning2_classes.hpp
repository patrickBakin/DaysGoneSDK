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

// BlueprintGeneratedClass BP_Lightning2.BP_Lightning2_C
// 0x0014 (0x0370 - 0x035C)
class ABP_Lightning2_C : public ABP_LightningBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lightning2.BP_Lightning2_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__ParticleSystem1_K2Node_ComponentBoundEvent_638_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem);
	void ExecuteUbergraph_BP_Lightning2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
