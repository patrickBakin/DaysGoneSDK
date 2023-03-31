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

// BlueprintGeneratedClass Actor_EnvCoverManual.Actor_EnvCoverManual_C
// 0x0018 (0x0360 - 0x0348)
class AActor_EnvCoverManual_C : public AActor
{
public:
	class UBendCoverChildComponent*                    BendCoverChild;                                           // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      coverProxyBP;                                             // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Actor_EnvCoverManual.Actor_EnvCoverManual_C");
		return ptr;
	}


	void AddChildCover(class UBendCoverChildComponent* coverVolume, class UClass* coverClass);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
