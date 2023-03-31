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

// BlueprintGeneratedClass FreakCrowPawn.FreakCrowPawn_C
// 0x0000 (0x2D11 - 0x2D11)
class AFreakCrowPawn_C : public ACrowPawn_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FreakCrowPawn.FreakCrowPawn_C");
		return ptr;
	}


	class AActor* SpawnAndSetupSearchBodyActor(class UAnimSequenceBase** AnimSequence, class UAnimSequenceBase** AnimSequenceCrouched, struct FName* SubClass);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
