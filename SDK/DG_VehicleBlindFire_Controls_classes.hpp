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

// BlueprintGeneratedClass VehicleBlindFire_Controls.VehicleBlindFire_Controls_C
// 0x0014 (0x035C - 0x0348)
class AVehicleBlindFire_Controls_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BlindFire_DID;                                            // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VehicleBlindFire_Controls.VehicleBlindFire_Controls_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveActorOnInputEnabled();
	void ReceiveActorOnInputDisabled();
	void ExecuteUbergraph_VehicleBlindFire_Controls(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
