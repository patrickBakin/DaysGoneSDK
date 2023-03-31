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

// BlueprintGeneratedClass AnimNotify_MovementEvent.AnimNotify_MovementEvent_C
// 0x0005 (0x0035 - 0x0030)
class UAnimNotify_MovementEvent_C : public UAnimNotify
{
public:
	TEnumAsByte<EAnimNotify_MovementEvent_Enum_Type>   MovementType;                                             // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimNotify_MovementEvent_Enum_BodyPart> BodyPartMoved;                                            // 0x0031(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimNotify_MovementEvent_Enum_Amount> MovementAmount;                                           // 0x0032(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimNotify_MovementEvent_Enum_Force>  ForceOfMovement;                                          // 0x0033(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimNotify_MovementEvent_Enum_BodyPartSide> BodyPartSideMoved;                                        // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_MovementEvent.AnimNotify_MovementEvent_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
