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

// BlueprintGeneratedClass AnimNotify_CarryObjectEvent.AnimNotify_CarryObjectEvent_C
// 0x0001 (0x0031 - 0x0030)
class UAnimNotify_CarryObjectEvent_C : public UAnimNotify
{
public:
	TEnumAsByte<EAnimNotify_Enum_CarryObjectEvent>     Event;                                                    // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_CarryObjectEvent.AnimNotify_CarryObjectEvent_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
