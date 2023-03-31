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

// BlueprintGeneratedClass FreakCrowController.FreakCrowController_C
// 0x0010 (0x1090 - 0x1080)
class AFreakCrowController_C : public ACrowController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1080(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ACrierNest_C*                                MyNest;                                                   // 0x1088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FreakCrowController.FreakCrowController_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnNestBurningStarted();
	void SetCrierNest(class ACrierNest_C* CrierNest);
	void ExecuteUbergraph_FreakCrowController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
