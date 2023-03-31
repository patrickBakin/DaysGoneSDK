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

// BlueprintGeneratedClass AnimNotify_UpdateAnchor_DodgeAttack.AnimNotify_UpdateAnchor_DodgeAttack_C
// 0x0000 (0x0030 - 0x0030)
class UAnimNotify_UpdateAnchor_DodgeAttack_C : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_UpdateAnchor_DodgeAttack.AnimNotify_UpdateAnchor_DodgeAttack_C");
		return ptr;
	}


	bool Received_NotifyTick(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* FrameDeltaTime);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
