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

// BlueprintGeneratedClass BendPlayerCamBinocularAim.BendPlayerCamBinocularAim_C
// 0x0008 (0x04E8 - 0x04E0)
class UBendPlayerCamBinocularAim_C : public UBendCamManualAim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendPlayerCamBinocularAim.BendPlayerCamBinocularAim_C");
		return ptr;
	}


	void OnDeactivate();
	void ExecuteUbergraph_BendPlayerCamBinocularAim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
