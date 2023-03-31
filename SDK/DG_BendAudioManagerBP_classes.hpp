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

// BlueprintGeneratedClass BendAudioManagerBP.BendAudioManagerBP_C
// 0x0010 (0x0D00 - 0x0CF0)
class ABendAudioManagerBP_C : public ABendAudioManager
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0CF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0CF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BendAudioManagerBP.BendAudioManagerBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnConversationEnded(bool* ShouldUnduckAudio);
	void OnConversationPaused(bool* ShouldUnduckAudio);
	void OnConversationStarted(bool* ShouldDuckAudio);
	void OnConversationUnpaused(bool* ShouldDuckAudio);
	void OnTimeDilationChanged(float* NewTimeDilation);
	void ExecuteUbergraph_BendAudioManagerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
