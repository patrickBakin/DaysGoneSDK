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

// BlueprintGeneratedClass BendPlayerCamLookAt.BendPlayerCamLookAt_C
// 0x0010 (0x0390 - 0x0380)
class UBendPlayerCamLookAt_C : public UBendPlayerCamFollow_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              ActiveTime;                                               // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                TimerID;                                                  // 0x038C(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendPlayerCamLookAt.BendPlayerCamLookAt_C");
		return ptr;
	}


	void DeactivateCamera();
	void OnActivate();
	void TimerExpired();
	void ExecuteUbergraph_BendPlayerCamLookAt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
