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

// BlueprintGeneratedClass BendPlayerCamCrouch.BendPlayerCamCrouch_C
// 0x000C (0x038C - 0x0380)
class UBendPlayerCamCrouch_C : public UBendPlayerCamFollow_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                                Timer;                                                    // 0x0388(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendPlayerCamCrouch.BendPlayerCamCrouch_C");
		return ptr;
	}


	void OnActivate();
	void UpdateCombat();
	void OnDeactivate();
	void ExecuteUbergraph_BendPlayerCamCrouch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
