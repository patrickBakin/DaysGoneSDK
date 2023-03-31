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

// BlueprintGeneratedClass SHSE_JobScript.SHSE_JobScript_C
// 0x0027 (0x04D8 - 0x04B1)
class ASHSE_JobScript_C : public ABP_JobScriptBase_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x04B1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                     TeleportLocation;                                         // 0x04C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TeleportRotation;                                         // 0x04CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SHSE_JobScript.SHSE_JobScript_C");
		return ptr;
	}


	void UserConstructionScript();
	void I_InitializeJobScript();
	void PlayTheCin();
	void OnFadingFinished_MM_Event_1(const struct FString& Message);
	void ExecuteUbergraph_SHSE_JobScript(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
