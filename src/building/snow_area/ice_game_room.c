#include "global.h"
#include "gba/gba.h"

void sub_0804FF04(void) {
    EventAnimateChara_080418C8(0, 0, 1, 0);
    sub_080407FC();
    EventSleep_08040690(60);
    EventAnimateChara_080418C8(0, 0, 0, 0);
    EventWinInit_08040fe8();
    EventWinSpeakerSet_08041018(0x14);
    EventWinMesSet_08041058(0x220000);
    EventWinMesSet_08041058(0x220001);
    EventWinChoice_0804106C(0x220002);
    if ((EventWinChoiceGet_08041088() << 0x18) != 0) {
        EventAnimateChara_080418C8(1, 0, 8, 0);
        sub_08041808(1, 1);
        EventSleep_08040690(20);
        EventPlaySFX_080410E0(0x124);
        EventWinMesSet_08041058(0x220003);
        return;
    }
    if ((EventQuestTitle_080408C4(0x21, 0x220004) << 0x18) == 0) {
        return;
    }
    EventBGMPlay_080410A8(0x16);
    EventWinInit_08040fe8();
    EventWinSpeakerSet_08041018(0x14);
    EventAnimateChara_080418C8(0, 0, 3, 0xFF);
    EventWinMesSet_08041058(0x220005);
    EventAnimateChara_080418C8(0, 0, 0, 0);
    EventWinMesSet_08041058(0x220006);
    EventWinMesSet_08041058(0x220007);
    EventWinMesSet_08041058(0x220008);
    EventWinMesSet_08041058(0x220009);
    EventWinMesSet_08041058(0x22000A);
    EventWinChoice_0804106C(0x22000B);
    if ((EventWinChoiceGet_08041088() << 0x18) == 0) {
        EventAnimateChara_080418C8(0, 0, 3, 0xFF);
        EventWinMesSet_08041058(0x22000C);
        EventAnimateChara_080418C8(0, 0, 0, 0);
        EventWinMesSet_08041058(0x22000D);
    } else {
        EventAnimateChara_080418C8(1, 0, 8, 0);
        sub_08041808(1, 1);
        EventSleep_08040690(20);
        EventPlaySFX_080410E0(0x124);
        EventWinMesSet_08041058(0x220011);
        sub_08041808(1, 0);
        EventWinMesSet_08041058(0x220012);
        EventWinMesSet_08041058(0x220013);
    }
    EventWinMesSet_08041058(0x22000E);
    EventWinMesSet_08041058(0x22000F);
    EventMgSpecialGoal_080427E0(0x77, 0x460030);
    EventAnimateChara_080418C8(0, 0, 3, 0xFF);
    EventWinSpeakerSet_08041018(0x14);
    EventWinMesSet_08041058(0x220010);
    EventSetFlag_080406E4(0x84);
    SetCharacterMetFlag_0802D7CC(0x29);
}

void sub_080500D8(void) {
    if (TestQuestFlag_08040714(0x85) == 1) {
        PlayJingle_08041100(0x68);
        EventWaitForJingle_08041138();
        EventBGMPlay_080410A8(0x16);
        EventWinInit_08040fe8();
        EventWinSpeakerSet_08041018(0x14);
        EventAnimateChara_080418C8(0, 0, 3, 0xFF);
        EventWinMesSet_08041058(0x220014);
        EventWinMesSet_08041058(0x220015);
        EventAnimateChara_080418C8(1, 0, 7, 0xFF);
        sub_08041808(1, 1);
        EventPlaySFX_080410E0(0x123);
        EventWinMesSet_08041058(0x220016);
        sub_08041808(1, 0);
        EventAnimateChara_080418C8(0, 0, 0, 0);
        EventWinMesSet_08041058(0x220017);
        EventWinMesSet_08041058(0x220018);
        EventWinMesSet_08041058(0x220019);
        EventAnimateChara_080418C8(0, 0, 3, 0xFF);
        EventWinMesSet_08041058(0x22001A);
        EventSetMinigame_08040B84(0x77);
        SetEventFlag_080406BC(0x86);
        return;
    }
    EventAnimateChara_080418C8(1, 0, 3, 0);
    sub_08041808(1, 1);
    EventPlaySFX_080410E0(0x121);
    EventSleep_08040690(120);
    sub_08041808(1, 0);
    EventWinInit_08040fe8();
    EventWinSpeakerSet_08041018(0x14);
    EventWinMesSet_08041058(0x22001B);
    EventWinMesSet_08041058(0x22001C);
    EventWinMesSet_08041058(0x22001D);
    EventWinMesSet_08041058(0x22001E);
    EventWinMesSet_08041058(0x22001F);
    EventUnsetFlag_080406FC(0x84);
    EventUnsetFlag_080406FC(0x85);
    UnsetEventFlag_080406D0(0x86);
}

void sub_08050220(void) {
	
	EventAnimateChara_080418C8(0,0,1,0);
	sub_080407FC();
	EventSleep_08040690(0x3c);
	EventAnimateChara_080418C8(0,0,0,0);
	EventWinInit_08040fe8();
	EventWinSpeakerSet_08041018(0x14);
	EventWinMesSet_08041058(0x220020);
	EventWinMesSet_08041058(0x220021);
	EventWinMesSet_08041058(0x220022);
	EventWinMesSet_08041058(0x220023);
}

void IceGameRoomInit_0805027C(void) {

    EventInit_080405B8();
    LoadBuildingBG_0804115C(&gUnknown_0808E204);
    LoadCharSprite_080415A0(0, 0, &gUnknown_0808E86C);
    sub_08041734(0, 0);
    EventPlaceChara_08041894(0, 0x78, 0x68);
    LoadCharSprite_080415A0(1, 0, &gUnknown_0808E6BC);
    sub_08041734(1, 0);
    EventPlaceChara_08041894(1, 0x7C, 0x34);
    sub_08041808(1, 0);
    if (TestQuestFlag_08040714(0x86) == 1) {
        EventBGMPlay_080410A8(0x1B);
        RunEventScript_0804066C(&sub_08050220);
    } else if ((sub_08040B0C() << 0x18) == 0) {
        EventBGMPlay_080410A8(0x1B);
        RunEventScript_0804066C(&sub_0804FF04);
        if ((TestQuestFlag_08040714(0x84) << 0x18) != 0) {
            EventQuestBegin_080406D0(0x77);
        }
    } else {
        EventAnimateChara_080418C8(0, 0, 0, 0);
        sub_080407FC();
        switch (EventQuestFailRetry_08040A6C(0x16)) 
        {
        case 0:
            break;
        case 1:
            EventSetFlag_080406E4(0x85);
        case 2:
            RunEventScript_0804066C(&sub_080500D8);
            sub_08040B28();
            break;
        }
    }
    sub_080410D0();
    sub_08041008();
    sub_08040820();
    sub_080417E0(0);
    sub_08041684(0, 0);
    sub_080417E0(1);
    sub_08041684(1, 0);
    sub_0804062C();
}
