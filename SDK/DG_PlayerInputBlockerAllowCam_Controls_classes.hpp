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

// BlueprintGeneratedClass PlayerInputBlockerAllowCam_Controls.PlayerInputBlockerAllowCam_Controls_C
// 0x0010 (0x0358 - 0x0348)
class APlayerInputBlockerAllowCam_Controls_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerInputBlockerAllowCam_Controls.PlayerInputBlockerAllowCam_Controls_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveActorOnInputEnabled();
	void ReceiveActorOnInputDisabled();
	void ExecuteUbergraph_PlayerInputBlockerAllowCam_Controls(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
