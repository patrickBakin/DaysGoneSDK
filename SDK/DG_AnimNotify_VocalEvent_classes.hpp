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

// BlueprintGeneratedClass AnimNotify_VocalEvent.AnimNotify_VocalEvent_C
// 0x0002 (0x00A2 - 0x00A0)
class UAnimNotify_VocalEvent_C : public UAnimNotify_VocalEvent
{
public:
	TEnumAsByte<EAnimNotify_VocalEvent_Enum_Type>      VocalType;                                                // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAnimNotify_VocalEvent_Enum_Force>     VocalForce;                                               // 0x00A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_VocalEvent.AnimNotify_VocalEvent_C");
		return ptr;
	}


	void RandomVocalPainAmt(unsigned char* RandByte);
	void RandomVocalAttackExertAmt(unsigned char* RandByte);
	void RandomVocalSniffAmt(unsigned char* RandByte);
	void RandomVocalScreamAmt(unsigned char* RandByte);
	void RandomVocalDeathAmt(unsigned char* RandByte);
	void TriggerFaceAnim(unsigned char VocalAmt, class ABendPawn** BendPawn);
	void RandomVocalAmount();
	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
