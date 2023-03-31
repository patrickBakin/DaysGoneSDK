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

// BlueprintGeneratedClass BendPlayerCamGrapple.BendPlayerCamGrapple_C
// 0x000C (0x038C - 0x0380)
class UBendPlayerCamGrapple_C : public UBendPlayerCamFollow_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              NearEnemyRadius;                                          // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendPlayerCamGrapple.BendPlayerCamGrapple_C");
		return ptr;
	}


	void SetNewtCameraValues();
	void OnActivate();
	void ExecuteUbergraph_BendPlayerCamGrapple(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
