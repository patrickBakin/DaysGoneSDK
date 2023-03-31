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

// BlueprintGeneratedClass SuicideFireStatusEffect.SuicideFireStatusEffect_C
// 0x0008 (0x0148 - 0x0140)
class USuicideFireStatusEffect_C : public UFireBaseStatusEffect_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0140(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SuicideFireStatusEffect.SuicideFireStatusEffect_C");
		return ptr;
	}


	void OnTick(bool* StopEffect);
	void OnEnd();
	void OnStart();
	void ExecuteUbergraph_SuicideFireStatusEffect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
