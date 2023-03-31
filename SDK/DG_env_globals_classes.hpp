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

// BlueprintGeneratedClass env_globals.env_globals_C
// 0x0014 (0x036C - 0x0358)
class Aenv_globals_C : public ABendEnvGlobals
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0358(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OriginalGlintScale;                                       // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass env_globals.env_globals_C");
		return ptr;
	}


	void UserConstructionScript();
	void CinStart(const struct FName& CinematicLevel);
	void ReceiveBeginPlay();
	void CinEnd(const struct FName& CinematicLevel);
	void ExecuteUbergraph_env_globals(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
