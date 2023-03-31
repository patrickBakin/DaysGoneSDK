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

// BlueprintGeneratedClass BendSpherePlayerDetector.BendSpherePlayerDetector_C
// 0x0039 (0x0381 - 0x0348)
class ABendSpherePlayerDetector_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBendSphereComponent*                        OverlapSphere;                                            // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sphere_Radius;                                            // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Extra_Exit_Radius;                                        // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    PlayerBeginOverlap;                                       // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerEndOverlap;                                         // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               StartActive_;                                             // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendSpherePlayerDetector.BendSpherePlayerDetector_C");
		return ptr;
	}


	void Set_Sphere_Radius(float New_Radius);
	void UserConstructionScript();
	void BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_488_BeginOverlapSig__DelegateSignature();
	void BndEvt__OverlapSphere_K2Node_ComponentBoundEvent_490_EndOverlapSig__DelegateSignature();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BendSpherePlayerDetector(int EntryPoint);
	void PlayerEndOverlap__DelegateSignature();
	void PlayerBeginOverlap__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
