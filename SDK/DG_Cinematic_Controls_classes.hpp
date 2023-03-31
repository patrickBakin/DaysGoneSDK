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

// BlueprintGeneratedClass Cinematic_Controls.Cinematic_Controls_C
// 0x0010 (0x0368 - 0x0358)
class ACinematic_Controls_C : public ABendCinematicControls
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Cinematic_Controls.Cinematic_Controls_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveActorOnInputEnabled();
	void ReceiveActorOnInputDisabled();
	void ExecuteUbergraph_Cinematic_Controls(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
