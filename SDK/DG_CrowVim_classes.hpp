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

// AnimBlueprintGeneratedClass CrowVim.CrowVim_C
// 0x98C0 (0xABD0 - 0x1310)
class UCrowVim_C : public UBendCrowAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1310(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1C04F158425CC22B42536FB44D874C6C;      // 0x1318(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5BDAAAEA4E90CCF09A3D5CBD43B4D2DC;// 0x1360(0x00F8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3AEE4A0C403BF3BE1BB42AB63818C46A;// 0x1458(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_57DAB2E04D832F9FEFC061B113E98805;      // 0x14A0(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_88E7B24E4E527653F2245086C608B335;// 0x1500(0x00F8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x15F8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A9ACE54D4B70E16EFE321FAB96AEE871;// 0x1600(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_71A6D5AA40998AC881017D91A6BA263F;// 0x1690(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34FDB8194793A2A61D361C9CA6540B64;// 0x1720(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E19C34AA4344EE1CE2A0FCA008791A34;// 0x17B0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9CC39109408246DAEAB9CBAF06DF99D0;// 0x1840(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1C91D9AC4F0C74A9FE0817BDC27FBA71;// 0x18D0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_76EEECE0406771E68F82428E0E6FE226;// 0x1960(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6FA8E0D143D8DE8A063E038D4785FC32;// 0x19F0(0x0090)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_0E2CD05340927F71F68E11912225A6DA;// 0x1A80(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_569CFE3F47846CDCFF3D9A96FAFEAEDA;// 0x1AB8(0x0048)
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_DE3ABF09407DF8FBD31A1D9CE6287184;    // 0x1B00(0x01A0)
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_BBA83AE04AD8953742D7D1A3D0A6AC76;    // 0x1CA0(0x01A0)
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_6A6D2FB147A29625161A7D9C15F8936B;    // 0x1E40(0x01A0)
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_9B0BDCFB45E74BCB7FBB65A73CAAF3B0;    // 0x1FE0(0x01A0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_6F71F87047DE9DEBDD0281AC1AA22901;// 0x2180(0x0038)
	unsigned char                                      UnknownData01[0x8];                                       // 0x21B8(0x0008) MISSED OFFSET
	struct FAnimNode_Anchor                            AnimGraphNode_Anchor_58808CCB4A1B12107FC7DCA01650B8F4;    // 0x21C0(0x01A0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D6055DD846347479310D439E5C398AFA;// 0x2360(0x0048)
	unsigned char                                      UnknownData02[0x8];                                       // 0x23A8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_739FF3A64041CDFEB8A13FBA87091C75;// 0x23B0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FA28B6E44ECD24A825E962845B7EB40D;// 0x2440(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_91B2A01C422A2DBA17EF92BE3BFD258E;// 0x24D0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_39DC63D6400CBC5DB08B058B374BE1EC;// 0x2560(0x0090)
	struct FAnimNode_RandomSequence                    AnimGraphNode_RandomSequence_5E1CEFA345D1D05AB5C88699017A90A6;// 0x25F0(0x0170)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CBA3B33E495FE946522F8689D56B910C;// 0x2760(0x00F0)
	struct FAnimNode_RandomBlendSpace                  AnimGraphNode_RandomBlendSpace_407D6E1A48571617EE533B99CE517BED;// 0x2850(0x0238)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6436699B489FA7D96F5426AD137086EA;// 0x2A88(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C7A49F0148EE8251129E62AA9552E2E1;// 0x2AD0(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1002419441087C9296753184E693AE4B;// 0x2B18(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_B002342F4FA5B79CCC509495AA272DA8;// 0x2B60(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_545D4F5E4B21916A52A25B9199967F83;// 0x2BD0(0x0048)
	struct FAnimNode_RandomBlendSpace                  AnimGraphNode_RandomBlendSpace_67FDB65E419E0770B30480A30262B064;// 0x2C18(0x0238)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C35958114B7FD05423054A994A5D9FFF;// 0x2E50(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DB66C6254F719248AB628089C770FF15;// 0x2E98(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_30FB3EC64FCB0D4D542597A8263E942C;// 0x2FA8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_C6AFE5AE498812808BE7D8A13B47C9FF;// 0x2FF0(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BC39F9B44C55CA8EFEB6A186F086B0A4;// 0x3028(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D21CA2CF4B9242EDE02B38869551B6FF;// 0x3070(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_66DA27EF488CD57EAE2EEA8E1067FC7D;// 0x3100(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BB50107E43B69D5EF2194EB6BB282C5F;// 0x3190(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8FBF5CA4430CEEA488691AAFBEBA4DD6;// 0x3220(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C17125784248964FA7EE6EAF83263BFE;// 0x32B0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5F24D1E544D9BA9D7BF595A9802D5D5A;// 0x3340(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7E9861864C4E766B26D038B94D66EA90;// 0x33D0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AE57B28B4890E86E2A648ABF3C1A621E;// 0x3460(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_19A1AD53459F78946D589EB7E97871EA;// 0x34F0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9899CC094491FC9E5319DF8CE962C73C;// 0x3580(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8D3F51C54BD16DF80A525D81C094B082;// 0x3610(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_48CB63DE4F4658C397BB918E0BA7C6C4;// 0x36A0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_59487FB147AF6986EBE8FD90B6BA619D;// 0x3730(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A08614ED4211928BCE7E64865DA650E9;// 0x37C0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33390FD4429AD95501FF20911649D7D8;// 0x3850(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B7788436483405866D4496AF3619E7AD;// 0x38E0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_271EB8BD46BE97548F467D931FE47EE3;// 0x3970(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5FE2F6974B8E7402287FC098F8ECDF8C;// 0x3A00(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DF65B73A4189EF601BFEBE9DCBC5680C;// 0x3A90(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7E0F46D2476772D62EF832BC1D3C2CE0;// 0x3B20(0x0090)
	struct FAnimNode_RandomSequence                    AnimGraphNode_RandomSequence_FCFC955A4B26DAFA126030BFF78AD667;// 0x3BB0(0x0170)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_188A15A54DB7298BFB7430B6303C0A79;// 0x3D20(0x0048)
	struct FAnimNode_RandomSequence                    AnimGraphNode_RandomSequence_EC5A0C2E4845267236E96D9907F67012;// 0x3D68(0x0170)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_491CA2CF4BDB2FDB562D1CBEE2414AFD;// 0x3ED8(0x0048)
	struct FBendAnimNode_AddCurveValue                 BendAnimGraphNode_AddCurveValue_8606D1A24EECDB8D6B3312997DEB8795;// 0x3F20(0x0058)
	unsigned char                                      UnknownData03[0x8];                                       // 0x3F78(0x0008) MISSED OFFSET
	struct FAnimNode_AnimalAttackAssetPlayer           AnimGraphNode_AnimalAttackAssetPlayer_D0E533B44EAD1577DDCE7E87E2BE5413;// 0x3F80(0x0880)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CFD909C446D81227EF5B31B95B31D09A;// 0x4800(0x0048)
	unsigned char                                      UnknownData04[0x8];                                       // 0x4848(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_48C8A2D146B4A85239924E8C3BAFF608;// 0x4850(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DB57272E4C61FFE41A6DEBBB0089C97F;// 0x48E0(0x0090)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2137B8FB49B829A03E4986BBB46572EA;// 0x4970(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2BBE3C0C4E63ED12965B27A0DF6AB03A;// 0x49A8(0x0048)
	struct FAnimNode_RandomSequence                    AnimGraphNode_RandomSequence_C52BA41C48A11372A95F7582F7A7B7D8;// 0x49F0(0x0170)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_294880F64CA3587490D526A4E234D90D;// 0x4B60(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B9D199604ACEA88F7368B8B5A5537FC5;// 0x4BA8(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BA2E11BF4D94070812F070B949A38091;// 0x4BF0(0x0048)
	struct FAnimNode_RandomSequence                    AnimGraphNode_RandomSequence_AA6992574EAE29D52A34EA934A947F4C;// 0x4C38(0x0170)
	struct FAnimNode_MultiAnchorSequence               AnimGraphNode_MultiAnchorSequence_F73397104D518EF29B3FF98490A715CE;// 0x4DA8(0x00C8)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_854AA531499969C427F230829F68AB70;// 0x4E70(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_E583349F4A18860F2D748788C7DB359B;// 0x4EB8(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FEBE160245E4619D2DF73B8AC190EED5;// 0x4F28(0x0048)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_7A0ED48E490F508237C7B08E3DC88A32;// 0x4F70(0x0070)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_99C166B14924B98B0D27E09C84C237A3;// 0x4FE0(0x0160)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D37CF4F24FBFA53511811A8679B8A326;// 0x5140(0x0160)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_4E30926940601365027B5F8ACF34883D;// 0x52A0(0x0180)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_2451158843B0F396289617B1F1D89485;// 0x5420(0x0180)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_135670B24A29EFDB95FE21A110DC6F94;// 0x55A0(0x0180)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_ED9A36BB40BF8F1FEAB6219F0141B9AF;// 0x5720(0x0160)
	struct FAnimationNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend_9B8DAAD147D90C7179301F983F45847B;// 0x5880(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_92B4B9C6486948B4DA9833BB1B20066C;// 0x58F0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A6ECEBBE42E1FD9C9AA27AB5C125CD4D;// 0x5938(0x0110)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CBF6BB164FF0DB09007181A13A6D473C;// 0x5A48(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FB49B00544088B7944B48CB3EB0D8AC2;// 0x5A90(0x0110)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_72ED28F744C157F4A2A956AF10EE1D95;// 0x5BA0(0x0048)
	unsigned char                                      UnknownData05[0x8];                                       // 0x5BE8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F7E4367740C904E876AA8586AB4022EA;// 0x5BF0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_11EACD604A82A5F815D95299605E4944;// 0x5C80(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7A4FE02D460DE3309D2D688FFB69F8A4;// 0x5D10(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3BD25E3E44777894C630B4A778854535;// 0x5DA0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9828948D4E60ED7837D4F78038554BE1;// 0x5E30(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_39704D5F40EC4B1E8CF2BEAC4DE3F473;// 0x5EC0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4573891748261E3B5C09E395CC77313A;// 0x5F50(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_712D075245E30FFB51AF7F84852C0B2D;// 0x5FE0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_25E50AA04737D3699AED4BBAD913D593;// 0x6070(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0EAE405A4639E04DE2F6AAA2DA0D6576;// 0x6100(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BBD58ECF47F9116A32B42EBECEC98FEE;// 0x6190(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1C15343B43CD7D58E70525BC8E949BC8;// 0x6220(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_78069B014B19476766CC1ABC5F22C2BD;// 0x62B0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_425A9D8C4E077A42E4671E9EFC4B78E5;// 0x6340(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FA9195A247B491F203786C8D55717881;// 0x63D0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_09BC240D463B727832A96AA2F0BFE21F;// 0x6460(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_13EFBEE047636751F3257BAAB05E0A91;// 0x64F0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_99D3604C4D181974A054DCB72C3ECAD0;// 0x6580(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DE1E5B664DA31582046717A21C848B51;// 0x6610(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D616AE1C41CDAA5B0A1B13AA7A0D2E14;// 0x66A0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23CC03454247A26CDE9DB4AFFD6E1FC5;// 0x6730(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_93E59ED640CE2DF801A2F4A5DCAEBBED;// 0x67C0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D0D23E55449224271A30B7B5E6A3C841;// 0x6850(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_60EFAE144A237B3C0FEA21A3145CFCBC;// 0x68E0(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C4D80AAA40802BBA4ABA4199E4F7EB87;// 0x6970(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E64C313D4E2F22886B36D387B98A6E63;// 0x6A00(0x0090)
	struct FAnimNode_AnimalDamageAssetPlayer           AnimGraphNode_AnimalDamageAssetPlayer_017422D4401A1100C6B5BEBCDD3954352;// 0x6A90(0x0418)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A7B2E3874A3C6BD5290F2EACDB1853AC2;// 0x6EA8(0x0048)
	struct FAnimNode_AnimalDamageAssetPlayer           AnimGraphNode_AnimalDamageAssetPlayer_9B79640B4E9D9B161B4A61B8264567042;// 0x6EF0(0x0418)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4AAB6D0D4D9D38E7A9BA46BADC57CA332;// 0x7308(0x0048)
	struct FAnimNode_AnimalDamageAssetPlayer           AnimGraphNode_AnimalDamageAssetPlayer_A9A450EB4078A28290FBB09598307AA02;// 0x7350(0x0418)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8AB16203437167228F41C3B48CE1DAF42;// 0x7768(0x0048)
	struct FAnimNode_AnimalDamageAssetPlayer           AnimGraphNode_AnimalDamageAssetPlayer_E891D7AB4B20A4FE210AC6BFC9FD64B22;// 0x77B0(0x0418)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CC7202644E6A81F7C63B25BA4A5CCDEB2;// 0x7BC8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_32171A58486FDA884305EC9F060158D6;// 0x7C10(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8485B739443990FA9592B283113E3890;// 0x7CA0(0x0090)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_DC4B8F8A4B4F080A0698B0842991558E;// 0x7D30(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2856E5704CD4F681D91F33878B2F6C04;// 0x7D68(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_52DBA8844A5F4B0D1DFE4ABEFCEAB649;// 0x7DB0(0x0090)
	struct FAnimNode_AnimalDamageAssetPlayer           AnimGraphNode_AnimalDamageAssetPlayer_017422D4401A1100C6B5BEBCDD395435;// 0x7E40(0x0418)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A7B2E3874A3C6BD5290F2EACDB1853AC;// 0x8258(0x0048)
	struct FAnimNode_AnimalDamageAssetPlayer           AnimGraphNode_AnimalDamageAssetPlayer_9B79640B4E9D9B161B4A61B826456704;// 0x82A0(0x0418)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4AAB6D0D4D9D38E7A9BA46BADC57CA33;// 0x86B8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_E3AEFBC042636101AE4BC69BBE7DC81C;// 0x8700(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CD87DAE546271627F95E79ADD4A5A87D;// 0x8738(0x0048)
	struct FAnimNode_AnimalDamageAssetPlayer           AnimGraphNode_AnimalDamageAssetPlayer_A9A450EB4078A28290FBB09598307AA0;// 0x8780(0x0418)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8AB16203437167228F41C3B48CE1DAF4;// 0x8B98(0x0048)
	struct FAnimNode_AnimalDamageAssetPlayer           AnimGraphNode_AnimalDamageAssetPlayer_E891D7AB4B20A4FE210AC6BFC9FD64B2;// 0x8BE0(0x0418)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CC7202644E6A81F7C63B25BA4A5CCDEB;// 0x8FF8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_CCE95FA54A749A5E7789B4A8FF8AF525;// 0x9040(0x0110)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_3FB9BCEB4E382F5BF9049C8274D8B0D6;// 0x9150(0x0070)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_C2AE05764BCADFC415FCBEA463FD0B38;// 0x91C0(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FFAC1B0B49DE8B5BBC29E9951B9E7151;// 0x91F8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_54D635E84FFCD6CEA4E9F486CC870B58;// 0x9240(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_15F0AD8E4C9BF86A8F9A248566B26053;// 0x9278(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F5457A0E4BB9E4D6B1BDCE95C755ED60;// 0x92C0(0x0110)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_C3CF35FE451715D73868FA869856224B;// 0x93D0(0x0070)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8EA587824C8F981A08A3A69724C7CC3B;// 0x9440(0x00F8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_13BAD3604EC0975FF40B999586C27CC2;// 0x9538(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8393DB9B46AFB9E63D18B18520652CA8;// 0x9580(0x00F8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AB5E117F413A5490C77E0D85C2C2B834;// 0x9678(0x00F0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_709B8A6246022B70384B1FB9596D55C8;// 0x9768(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_312723B74CBD2425E35174A05734F70C;// 0x97B0(0x0038)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_D44DB9A94D05D587E00496866702E952;// 0x97E8(0x00F8)
	struct FAnimNode_RandomAimOffset                   AnimGraphNode_RandomAimOffset_0AD665BA4F7A8456CFDA94960B7B01E9;// 0x98E0(0x0250)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_57B59B86445BA27E04D154BB8BA829D1;// 0x9B30(0x0038)
	unsigned char                                      UnknownData06[0x8];                                       // 0x9B68(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ED01D0FB4E081E0B870AC08AD3051750;// 0x9B70(0x0090)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4C22D88B4C7B0140B8BA9FB0DE885CD5;// 0x9C00(0x0090)
	struct FAnimNode_RandomSequence                    AnimGraphNode_RandomSequence_7188A6D34836F0F7656653A3A245B311;// 0x9C90(0x0170)
	struct FAnimNode_RandomSequence                    AnimGraphNode_RandomSequence_EECAC6634BD8A0F56E673BA472A3E4F5;// 0x9E00(0x0170)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9A5BEEC5488C04C6915C08B48FE70ACA;// 0x9F70(0x00F0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_62A87136418C370E8F5283BAF3D698F2;// 0xA060(0x0048)
	struct FAnimNode_RandomSequence                    AnimGraphNode_RandomSequence_0E31563F4DE221A4641C19927ED986D5;// 0xA0A8(0x0170)
	struct FAnimNode_RandomSequence                    AnimGraphNode_RandomSequence_B7266BDC43EEA6EA74DB03BC4A796287;// 0xA218(0x0170)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4816DC504459C6060CAE06890624F998;// 0xA388(0x00F0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_1E61DDBA4CE86C2C44300B947B5EBDBB;// 0xA478(0x0070)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C9C921EC4C678AAF71CD7FB2B4722925;// 0xA4E8(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DA0DBB464CE76A163ABC5A900D4DD2E3;// 0xA530(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_24D913D14816B4EC1A63548BE43F2B95;// 0xA578(0x0110)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_506B327745000CE5072E688186F0E19F;// 0xA688(0x00F8)
	struct FBendAnimNode_BlockGraphTillSetupValid      BendAnimGraphNode_BlockGraphTillSetupValid_0D6055344CB6206DE1C970B1B8581CF8;// 0xA780(0x0050)
	struct FBendAnimNode_SmoothStepUpStepDown          BendAnimGraphNode_SmoothStepUpStepDown_301A235849385DFF60253786EA6F1BC1;// 0xA7D0(0x0118)
	struct FBendAnimNode_FixupAnchoredMeshPostCollision BendAnimGraphNode_FixupAnchoredMeshPostCollision_DAF7A2C941230D05C05C448E1E93C73F;// 0xA8E8(0x0158)
	struct FBendAnimNode_PostPhysicsInitialPose        BendAnimGraphNode_PostPhysicsInitialPose_36DB80C0424E1D126AFFC785A29C2973;// 0xAA40(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1D1C6CE84940F1A8D2A937B20934CB16;// 0xAA88(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_98EE9C17412297E7E0A531AB16475612;// 0xAAD0(0x0048)
	struct FBendAnimNode_PostPhysicsSwitch             BendAnimGraphNode_PostPhysicsSwitch_EA8C47854B66B938371B179B8683253F;// 0xAB18(0x0060)
	struct FBendAnimNode_ResetGraphBelow               BendAnimGraphNode_ResetGraphBelow_867C20DC4F3DB4CE038612883E9B350E;// 0xAB78(0x0050)
	class ACrowController_C*                           CrowController;                                           // 0xABC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass CrowVim.CrowVim_C");
		return ptr;
	}


	bool WantsToMove();
	bool CanPlayAnimations();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_A9ACE54D4B70E16EFE321FAB96AEE871();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_71A6D5AA40998AC881017D91A6BA263F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_E19C34AA4344EE1CE2A0FCA008791A34();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_9CC39109408246DAEAB9CBAF06DF99D0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_1C91D9AC4F0C74A9FE0817BDC27FBA71();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_76EEECE0406771E68F82428E0E6FE226();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_739FF3A64041CDFEB8A13FBA87091C75();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_FA28B6E44ECD24A825E962845B7EB40D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_91B2A01C422A2DBA17EF92BE3BFD258E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_RandomBlendSpace_67FDB65E419E0770B30480A30262B064();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_D21CA2CF4B9242EDE02B38869551B6FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_66DA27EF488CD57EAE2EEA8E1067FC7D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_BB50107E43B69D5EF2194EB6BB282C5F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_C17125784248964FA7EE6EAF83263BFE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_5F24D1E544D9BA9D7BF595A9802D5D5A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_7E9861864C4E766B26D038B94D66EA90();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_19A1AD53459F78946D589EB7E97871EA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_9899CC094491FC9E5319DF8CE962C73C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_8D3F51C54BD16DF80A525D81C094B082();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_A08614ED4211928BCE7E64865DA650E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_5FE2F6974B8E7402287FC098F8ECDF8C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_DB57272E4C61FFE41A6DEBBB0089C97F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_RandomSequence_C52BA41C48A11372A95F7582F7A7B7D8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_RandomSequence_AA6992574EAE29D52A34EA934A947F4C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TwoWayBlend_7A0ED48E490F508237C7B08E3DC88A32();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_RotationOffsetBlendSpace_4E30926940601365027B5F8ACF34883D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_RotationOffsetBlendSpace_2451158843B0F396289617B1F1D89485();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TwoWayBlend_9B8DAAD147D90C7179301F983F45847B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_F7E4367740C904E876AA8586AB4022EA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_11EACD604A82A5F815D95299605E4944();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_7A4FE02D460DE3309D2D688FFB69F8A4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_3BD25E3E44777894C630B4A778854535();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_9828948D4E60ED7837D4F78038554BE1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_39704D5F40EC4B1E8CF2BEAC4DE3F473();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_4573891748261E3B5C09E395CC77313A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_712D075245E30FFB51AF7F84852C0B2D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_25E50AA04737D3699AED4BBAD913D593();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_0EAE405A4639E04DE2F6AAA2DA0D6576();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_425A9D8C4E077A42E4671E9EFC4B78E5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_13EFBEE047636751F3257BAAB05E0A91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_99D3604C4D181974A054DCB72C3ECAD0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_DE1E5B664DA31582046717A21C848B51();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_D616AE1C41CDAA5B0A1B13AA7A0D2E14();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_23CC03454247A26CDE9DB4AFFD6E1FC5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_93E59ED640CE2DF801A2F4A5DCAEBBED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_D0D23E55449224271A30B7B5E6A3C841();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_60EFAE144A237B3C0FEA21A3145CFCBC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_C4D80AAA40802BBA4ABA4199E4F7EB87();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_32171A58486FDA884305EC9F060158D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_8485B739443990FA9592B283113E3890();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_52DBA8844A5F4B0D1DFE4ABEFCEAB649();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_RandomAimOffset_0AD665BA4F7A8456CFDA94960B7B01E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_ED01D0FB4E081E0B870AC08AD3051750();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CrowVim_AnimGraphNode_TransitionResult_4C22D88B4C7B0140B8BA9FB0DE885CD5();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void AnimNotify_Dead_Entered();
	void ExecuteUbergraph_CrowVim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
