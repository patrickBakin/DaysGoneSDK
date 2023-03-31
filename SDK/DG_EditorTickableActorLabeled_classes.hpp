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

// BlueprintGeneratedClass EditorTickableActorLabeled.EditorTickableActorLabeled_C
// 0x000C (0x0390 - 0x0384)
class AEditorTickableActorLabeled_C : public AEditorTickableActor_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EditorTickableActorLabeled.EditorTickableActorLabeled_C");
		return ptr;
	}


	void MakeLabel();
	void IsBendGame(bool* Is_Game);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void Editor_Tick();
	void ExecuteUbergraph_EditorTickableActorLabeled(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
