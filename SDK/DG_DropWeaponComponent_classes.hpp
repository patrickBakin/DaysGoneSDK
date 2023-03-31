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

// BlueprintGeneratedClass DropWeaponComponent.DropWeaponComponent_C
// 0x0028 (0x00F8 - 0x00D0)
class UDropWeaponComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bDropping;                                                // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	float                                              DropTime;                                                 // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DropLength;                                               // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDropUpdate;                                             // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DropWeaponComponent.DropWeaponComponent_C");
		return ptr;
	}


	void StartDrop();
	void StopDrop();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_DropWeaponComponent(int EntryPoint);
	void OnDropUpdate__DelegateSignature(float Percent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
