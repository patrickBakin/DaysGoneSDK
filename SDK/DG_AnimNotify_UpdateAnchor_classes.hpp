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

// BlueprintGeneratedClass AnimNotify_UpdateAnchor.AnimNotify_UpdateAnchor_C
// 0x0001 (0x0031 - 0x0030)
class UAnimNotify_UpdateAnchor_C : public UAnimNotifyState
{
public:
	TEnumAsByte<EAnimNotify_UpdateAnchor_Enum_Type>    UpdateAnchorType;                                         // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_UpdateAnchor.AnimNotify_UpdateAnchor_C");
		return ptr;
	}


	bool Received_NotifyTick(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* FrameDeltaTime);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
