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

// BlueprintGeneratedClass BendPlayerCamThrowAim.BendPlayerCamThrowAim_C
// 0x0010 (0x04F0 - 0x04E0)
class UBendPlayerCamThrowAim_C : public UBendPlayerCamManualAim_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              BushOffsetZ;                                              // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchOffsetZ;                                            // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendPlayerCamThrowAim.BendPlayerCamThrowAim_C");
		return ptr;
	}


	void OnActivate();
	void HidingStateChanged(bool IsHiding, bool CanControl, bool IsEnclosedSpace);
	void ExecuteUbergraph_BendPlayerCamThrowAim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
