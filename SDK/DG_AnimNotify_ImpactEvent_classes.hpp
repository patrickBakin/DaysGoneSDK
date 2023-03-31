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

// BlueprintGeneratedClass AnimNotify_ImpactEvent.AnimNotify_ImpactEvent_C
// 0x0004 (0x0064 - 0x0060)
class UAnimNotify_ImpactEvent_C : public UAnimNotify_ImpactEvent
{
public:
	TEnumAsByte<EAnimNotify_ImpactEvent_Enum_type>     impact_type;                                              // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimNotify_ImpactEvent_Enum_BodyPart> BodyPartImpacted;                                         // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimNotify_ImpactEvent_Enum_Force>    ForceOfImpact;                                            // 0x0062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimNotify_ImpactEvent_Enum_BodyPartSide> BodyPartSide;                                             // 0x0063(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_ImpactEvent.AnimNotify_ImpactEvent_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
