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

// BlueprintGeneratedClass BendDebugCam.BendDebugCam_C
// 0x0010 (0x0100 - 0x00F0)
class UBendDebugCam_C : public UBendCamDebug
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraModifier*                             Modifier_1;                                               // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendDebugCam.BendDebugCam_C");
		return ptr;
	}


	void OnActivate();
	void OnDeactivate();
	void ExecuteUbergraph_BendDebugCam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
