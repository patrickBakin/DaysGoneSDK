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

// BlueprintGeneratedClass BP_OpenWorldVOManager.BP_OpenWorldVOManager_C
// 0x0018 (0x0458 - 0x0440)
class ABP_OpenWorldVOManager_C : public ABendOpenWorldVOManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBP_SkipGameplayComponent_C*                 BP_SkipGameplayComponent;                                 // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OpenWorldVOManager.BP_OpenWorldVOManager_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnPlayRFO();
	void OnSkipGameplaySection_Event_1(const struct FName& SkipIdentifier);
	void ReceiveBeginPlay();
	void OnFinishRFO();
	void ExecuteUbergraph_BP_OpenWorldVOManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
