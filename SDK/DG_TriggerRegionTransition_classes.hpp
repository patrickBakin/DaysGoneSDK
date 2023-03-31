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

// BlueprintGeneratedClass TriggerRegionTransition.TriggerRegionTransition_C
// 0x0030 (0x03A8 - 0x0378)
class ATriggerRegionTransition_C : public ABendTriggerBox_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TEnumAsByte<ERegions>                              RegionToLoad;                                             // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERegions>                              RegionToUnload;                                           // 0x0381(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0382(0x0006) MISSED OFFSET
	struct FName                                       LevelToLoad;                                              // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ProxyLevelToUnload;                                       // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelToUnload;                                            // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ProxyLevelToLoad;                                         // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TriggerRegionTransition.TriggerRegionTransition_C");
		return ptr;
	}


	void GetRegionNamesFromId(TEnumAsByte<ERegions> Region, struct FName* Normal, struct FName* Proxy);
	void UserConstructionScript();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ExecuteUbergraph_TriggerRegionTransition(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
