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

// BlueprintGeneratedClass BendDebugAngleCam.BendDebugAngleCam_C
// 0x0010 (0x0390 - 0x0380)
class UBendDebugAngleCam_C : public UBendCamFollow
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraModifier*                             Modifier_1;                                               // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendDebugAngleCam.BendDebugAngleCam_C");
		return ptr;
	}


	void OnActivate();
	void OnDeactivate();
	void ExecuteUbergraph_BendDebugAngleCam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
