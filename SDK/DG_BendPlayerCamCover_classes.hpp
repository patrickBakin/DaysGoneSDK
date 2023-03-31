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

// BlueprintGeneratedClass BendPlayerCamCover.BendPlayerCamCover_C
// 0x0008 (0x0388 - 0x0380)
class UBendPlayerCamCover_C : public UBendPlayerCamCombat_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendPlayerCamCover.BendPlayerCamCover_C");
		return ptr;
	}


	void OnUpdate(float* DeltaTime);
	void ExecuteUbergraph_BendPlayerCamCover(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
