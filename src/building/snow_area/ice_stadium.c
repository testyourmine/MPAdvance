#include "global.h"
#include "gba/gba.h"

void sub_08050390(void) {
    
    EventAnimateChara_080418C8(0, 0, 3, 0xFF);
    EventSleep_08040690(120);
    EventAnimateChara_080418C8(0, 0, 3, 0xFF);
    EventSleep_08040690(120);
    EventAnimateChara_080418C8(0, 0, 0, 0);
    EventSleep_08040690(30);
    EventAnimateChara_080418C8(1, 0, 0, 0);
    sub_08041808(1, 1);
    EventPlaySFX_080410E0(0x11F);
    EventSleep_08040690(60);
    sub_08041808(1, 0);
    EventWinInit_08040fe8();
    EventWinSpeakerSet_08041018(0x29);
    EventWinMesSet_08041058(0xF0000);
    EventWinMesSet_08041058(0xF0001);
    EventWinChoice_0804106C(0xF0002);
    if ((EventWinChoiceGet_08041088() << 0x18) >> 0x18 == 1) {
        EventWinMesSet_08041058(0xF0003);
        return;
    }
    if ((EventQuestTitle_080408C4(0xE, 0xF0004) << 0x18) != 0) {
        EventBGMPlay_080410A8(0x12);
        EventWinInit_08040fe8();
        EventWinSpeakerSet_08041018(0x29);
        EventWinMesSet_08041058(0xF0005);
        EventWinMesSet_08041058(0xF0006);
        EventWinMesSet_08041058(0xF0007);
        EventWinChoice_0804106C(0xF0008);
        if ((EventWinChoiceGet_08041088() << 0x18) == 0) {
            EventWinMesSet_08041058(0xF0009);
        } else {
            EventWinMesSet_08041058(0xF000C);
            EventWinMesSet_08041058(0xF000D);
        }
        EventWinMesSet_08041058(0xF000A);
        EventWinMesSet_08041058(0xF000B);
        EventSetFlag_080406E4(0x3A);
        SetCharacterMetFlag_0802D7CC(0x14);
    }
}

void sub_080504CC(void) {
	
	EventWinInit_08040fe8();
	EventWinSpeakerSet_08041018(0x29);
	if (TestQuestFlag_08040714(0x3b) == 1) {
		EventWinMesSet_08041058(0xf000e);
		EventWinMesSet_08041058(0xf000f);
		EventWinMesSet_08041058(0xf0010);
		QuestFinish_08042814(0x11,0x12);
		EventWinSpeakerSet_08041018(0x29);
		EventWinMesSet_08041058(0xf0011);
		EventWinMesSet_08041058(0xf0012);
		SetEventFlag_080406BC(0x3d);
	} else {
		EventWinMesSet_08041058(0xf0013);
		EventWinMesSet_08041058(0xf0014);
		EventWinMesSet_08041058(0xf0015);
		EventWinMesSet_08041058(0xf0016);
		EventWinMesSet_08041058(0xf0017);
		EventUnsetFlag_080406FC(0x3a);
		EventUnsetFlag_080406FC(0x3b);
		EventUnsetFlag_080406FC(0x3c);
		UnsetEventFlag_080406D0(0x3d);
	}
}

void sub_08050580(void) {
	
	EventAnimateChara_080418C8(0,0,3,0xff);
	EventSleep_08040690(0x78);
	EventAnimateChara_080418C8(0,0,3,0xff);
	EventSleep_08040690(0x78);
	EventAnimateChara_080418C8(0,0,0,0);
	EventWinInit_08040fe8();
	EventWinSpeakerSet_08041018(0x29);
	EventWinMesSet_08041058(0xf0018);
	EventWinMesSet_08041058(0xf0019);
	EventWinMesSet_08041058(0xf001a);
}

void IceStadiumInit_080505E0(void) {
    EventInit_080405B8();
    LoadBuildingBG_0804115C(&gUnknown_0808E22C);
    LoadCharSprite_080415A0(0, 0, &gUnknown_0808E99C);
    sub_08041734(0, 0);
    EventPlaceChara_08041894(0, 0x78, 0x68);
    LoadCharSprite_080415A0(1, 0, &gUnknown_0808E6BC);
    sub_08041734(1, 0);
    EventPlaceChara_08041894(1, 0x7C, 0x38);
    sub_08041808(1, 0);
    sub_080407FC();
    if (TestQuestFlag_08040714(0x3D) == 1) {
        EventBGMPlay_080410A8(0x1B);
        RunEventScript_0804066C(&sub_08050580);
    } else if ((sub_08040EF0() << 0x18) == 0) {
        EventBGMPlay_080410A8(0x1B);
        RunEventScript_0804066C(&sub_08050390);
        if ((TestQuestFlag_08040714(0x3A) << 0x18) != 0) {
            EventSetupQuestMinigame_08040F18(6);
        }
    } else {
        EventBGMPlay_080410A8(0x12);
        if (sub_08040F38() == 1) {
            EventSetFlag_080406E4(0x3B);
        }
        RunEventScript_0804066C(&sub_080504CC);
        sub_08040F0C();
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
