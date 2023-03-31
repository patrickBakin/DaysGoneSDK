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

// BlueprintGeneratedClass Base_EventMusic.Base_EventMusic_C
// 0x0008 (0x0080 - 0x0078)
class UBase_EventMusic_C : public UBendMusic
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0078(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_EventMusic.Base_EventMusic_C");
		return ptr;
	}


	void SetEndingState();
	void OnSetAsPrimary();
	void OnSetAsSecondary();
	void OnSetAsLast();
	void ExecuteUbergraph_Base_EventMusic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
