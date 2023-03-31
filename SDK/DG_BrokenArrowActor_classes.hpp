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

// BlueprintGeneratedClass BrokenArrowActor.BrokenArrowActor_C
// 0x0021 (0x0369 - 0x0348)
class ABrokenArrowActor_C : public ABendBrokenWeaponPart
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        ArrowTip;                                                 // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ArrowEnd;                                                 // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HitSoftTarget;                                            // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BrokenArrowActor.BrokenArrowActor_C");
		return ptr;
	}


	void UserConstructionScript();
	void MoveBrokenArrow();
	void ReceivePreSaveGameLoaded(bool* bIsCheckpoint);
	void ExecuteUbergraph_BrokenArrowActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
