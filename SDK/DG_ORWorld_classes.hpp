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

// BlueprintGeneratedClass ORWorld.ORWorld_C
// 0x0010 (0x0368 - 0x0358)
class AORWorld_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AMatineeActor*                               BeginPlay_GenericFadeIn_ExecuteUbergraph_ORWorld_RefProperty;// 0x0360(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ORWorld.ORWorld_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_ORWorld(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
