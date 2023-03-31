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

// BlueprintGeneratedClass INTERFACE_PlayerPawn.INTERFACE_PlayerPawn_C
// 0x0000 (0x0028 - 0x0028)
class UINTERFACE_PlayerPawn_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass INTERFACE_PlayerPawn.INTERFACE_PlayerPawn_C");
		return ptr;
	}


	void I_WearRadioOnChest(bool WearRadio);
	void I_GetPlayerMusic2ndTrackComponent(class UAudioComponent** AudioComponent);
	void I_GetPlayerMusicComponent(class UAudioComponent** AudioComponent);
	void I_SetPlayerTakeFallDamage(bool TakeDamage_, bool* Success_);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
