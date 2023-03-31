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

// BlueprintGeneratedClass WolfPawn.WolfPawn_C
// 0x0010 (0x2D08 - 0x2CF8)
class AWolfPawn_C : public AAnimalPawnBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2CF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                           SupplementalCapsule;                                      // 0x2D00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WolfPawn.WolfPawn_C");
		return ptr;
	}


	float ModifyDamage(float* Damage, class UClass** DamageType, class AController** EventInstigator, class AActor** DamageCauser);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WolfPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
