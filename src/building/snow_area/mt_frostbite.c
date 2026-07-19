#include "global.h"
#include "gba/gba.h"

void sub_080506E4(void) {
    sub_080407FC();
    EventPlaySFX_080410E0(0x11B);
    EventAnimateChara_080418C8(0, 0, 0xF, 0);
    EventMoveChara_08041938(0, 0x30, 0x68, 0x10);
    EventPlaySFX_080410E0(0x11E);
    sub_080454C4();
    EventAnimateChara_080418C8(0, 0, 0xC, 0);
    EventSleep_08040690(0x31);
    EventPlaySFX_080410E0(0x12C);
    EventWinInit_08040fe8();
    EventWinSpeakerSet_08041018(0x38);
    EventWinMesSet_08041058(0x160000);
    EventAnimateChara_080418C8(0, 0, 0xD, 0);
    EventWinMesSet_08041058(0x160001);
    EventWinMesSet_08041058(0x160002);
    EventAnimateChara_080418C8(0, 0, 5, 0);
    EventSleep_08040690(0x1E);
    EventAnimateChara_080418C8(0, 0, 0x10, 0);
    EventWinMesSet_08041058(0x160003);
    sub_08041008();
    EventMoveChara_08041938(0, 0x30, 0x58, 8);
    EventMoveChara_08041938(0, 0x30, 0x68, 8);
    EventAnimateChara_080418C8(0, 0, 0xF, 8);
    EventPlaySFX_080410E0(0x11C);
    EventMoveChara_08041938(0, 0, 0x68, 8);
    EventSleep_08040690(0x78);
    sub_080417E0(0);
    sub_08041684(0, 0);
    EventWinInit_08040fe8();
    EventWinSpeakerSet_08041018(2);
    EventWinMesSet_08041058(0x160004);
    EventWinSpeakerSet_08041018(0xA);
    EventWinMesSet_08041058(0x160005);
    EventWinSpeakerSet_08041018(2);
    EventWinMesSet_08041058(0x160006);
    EventWinSpeakerSet_08041018(0xA);
    EventWinMesSet_08041058(0x160007);
    EventWinSpeakerSet_08041018(2);
    EventWinMesSet_08041058(0x160008);
    EventWinChoice_0804106C(0x160009);
    if ((EventWinChoiceGet_08041088() << 0x18) != 0) {
        EventWinMesSet_08041058(0x16000A);
        EventAnimateChara_080418C8(2, 0, 3, 0);
        EventAnimateChara_080418C8(4, 0, 3, 0);
        EventWinSpeakerSet_08041018(0xA);
        EventWinMesSet_08041058(0x16000B);
        EventAnimateChara_080418C8(2, 0, 9, 0xFF);
        EventAnimateChara_080418C8(4, 0, 9, 0xFF);
        EventWinSpeakerSet_08041018(2);
        EventWinMesSet_08041058(0x16000C);
        EventWinSpeakerSet_08041018(0xA);
        EventWinMesSet_08041058(0x16000D);
        return;
    }
    if ((EventQuestTitle_080408C4(0x15, 0x16000E) << 0x18) == 0) {
        return;
    }
    EventBGMPlay_080410A8(0x13);
    EventWinInit_08040fe8();
    EventWinSpeakerSet_08041018(2);
    EventWinMesSet_08041058(0x16000F);
    EventWinMesSet_08041058(0x160010);
    EventWinSpeakerSet_08041018(0xA);
    EventWinMesSet_08041058(0x160011);
    EventWinSpeakerSet_08041018(2);
    EventWinMesSet_08041058(0x160012);
    EventWinMesSet_08041058(0x160013);
    EventWinChoice_0804106C(0x160014);
    if ((EventWinChoiceGet_08041088() << 0x18) == 0) {
        EventWinMesSet_08041058(0x160015);
        EventWinSpeakerSet_08041018(0xA);
        EventWinMesSet_08041058(0x160016);
        EventWinSpeakerSet_08041018(2);
        EventWinMesSet_08041058(0x160017);
        EventWinMesSet_08041058(0x160018);
        EventWinMesSet_08041058(0x160019);
        EventWinSpeakerSet_08041018(0xA);
        EventWinMesSet_08041058(0x16001A);
        EventWinSpeakerSet_08041018(2);
        EventWinMesSet_08041058(0x16001B);
    } else {
        EventWinMesSet_08041058(0x16001C);
        EventWinSpeakerSet_08041018(0xA);
        EventWinMesSet_08041058(0x16001D);
        EventWinSpeakerSet_08041018(2);
        EventWinMesSet_08041058(0x16001E);
        EventWinMesSet_08041058(0x16001F);
        EventWinMesSet_08041058(0x160020);
        EventWinSpeakerSet_08041018(0xA);
        EventWinMesSet_08041058(0x160021);
        EventWinSpeakerSet_08041018(2);
        EventWinMesSet_08041058(0x160022);
    }
    EventSetFlag_080406E4(0x55);
    SetCharacterMetFlag_0802D7CC(0xB);
    SetCharacterMetFlag_0802D7CC(0x2D);
}

void sub_080509FC() {
	
	EventAnimateChara_080418C8(3,0,3,0);
	EventAnimateChara_080418C8(5,0,3,0);
	EventWinMesSet_08041058(0x160025);
	EventAnimateChara_080418C8(2,0,3,0);
	EventAnimateChara_080418C8(4,0,3,0);
	EventWinSpeakerSet_08041018(10);
	EventWinMesSet_08041058(0x160026);
	EventAnimateChara_080418C8(3,0,0xd,0xff);
	EventAnimateChara_080418C8(5,0,0xd,0xff);
	EventAnimateChara_080418C8(2,0,9,0xff);
	EventAnimateChara_080418C8(4,0,9,0xff);
	EventWinSpeakerSet_08041018(2);
	EventWinMesSet_08041058(0x160027);
	EventWinSpeakerSet_08041018(10);
	EventWinMesSet_08041058(0x160028);
	EventWinSpeakerSet_08041018(2);
	EventWinMesSet_08041058(0x160029);
}

void sub_08050AAC(void) {
    EventWinSpeakerSet_08041018(2);
    EventWinMesSet_08041058(0x160023);
    EventWinChoice_0804106C(0x160024);
    if (EventWinChoiceGet_08041088() != 1) {
        goto block_4;
    }
    EventAnimateChara_080418C8(3, 0, 8, 0xFF);
    EventAnimateChara_080418C8(5, 0, 8, 0xFF);
    EventAnimateChara_080418C8(2, 0, 6, 0xFF);
    EventAnimateChara_080418C8(4, 0, 6, 0xFF);
    EventWinSpeakerSet_08041018(2);
    EventWinMesSet_08041058(0x16002A);
    EventWinSpeakerSet_08041018(0xA);
    EventWinMesSet_08041058(0x16002B);
    EventWinSpeakerSet_08041018(2);
    EventWinMesSet_08041058(0x16002C);
    EventAnimateChara_080418C8(3, 0, 0xD, 0xFF);
    EventAnimateChara_080418C8(5, 0, 0xD, 0xFF);
    EventAnimateChara_080418C8(2, 0, 9, 0xFF);
    EventAnimateChara_080418C8(4, 0, 9, 0xFF);
    EventWinMesSet_08041058(0x16002D);
    EventWinSpeakerSet_08041018(0xA);
    EventWinMesSet_08041058(0x16002E);
    EventWinSpeakerSet_08041018(2);
    EventWinMesSet_08041058(0x16002F);
    EventWinChoice_0804106C(0x160030);
    if ((EventWinChoiceGet_08041088() != 2) || (EventAnimateChara_080418C8(3, 0, 8, 0xFF), EventAnimateChara_080418C8(5, 0, 8, 0xFF), EventAnimateChara_080418C8(2, 0, 6, 0xFF), EventAnimateChara_080418C8(4, 0, 6, 0xFF), EventWinSpeakerSet_08041018(2), EventWinMesSet_08041058(0x160031), EventWinSpeakerSet_08041018(0xA), EventWinMesSet_08041058(0x160032), EventAnimateChara_080418C8(3, 0, 0, 0xFF), EventAnimateChara_080418C8(5, 0, 0, 0xFF), EventAnimateChara_080418C8(2, 0, 0, 0), EventAnimateChara_080418C8(4, 0, 0, 0), EventWinSpeakerSet_08041018(2), EventWinMesSet_08041058(0x160033), EventWinMesSet_08041058(0x160034), EventWinSpeakerSet_08041018(0xA), EventWinMesSet_08041058(0x160035), EventWinSpeakerSet_08041018(2), EventWinMesSet_08041058(0x160036), EventWinChoice_0804106C(0x160037), (EventWinChoiceGet_08041088() != 2))) {
block_4:
        RunEventScript_0804066C(&sub_080509FC);
        return;
    }
    EventAnimateChara_080418C8(3, 0, 8, 0xFF);
    EventAnimateChara_080418C8(5, 0, 8, 0xFF);
    EventAnimateChara_080418C8(2, 0, 6, 0xFF);
    EventAnimateChara_080418C8(4, 0, 6, 0xFF);
    EventWinSpeakerSet_08041018(2);
    EventWinMesSet_08041058(0x160038);
    EventWinSpeakerSet_08041018(0xA);
    EventWinMesSet_08041058(0x160039);
    EventAnimateChara_080418C8(3, 0, 0, 0xFF);
    EventAnimateChara_080418C8(5, 0, 0, 0xFF);
    EventAnimateChara_080418C8(2, 0, 0, 0);
    EventAnimateChara_080418C8(4, 0, 0, 0);
    EventWinSpeakerSet_08041018(2);
    EventWinMesSet_08041058(0x16003A);
    EventWinMesSet_08041058(0x16003B);
    EventAnimateChara_080418C8(2, 0, 3, 0);
    EventAnimateChara_080418C8(4, 0, 3, 0);
    EventWinSpeakerSet_08041018(0xA);
    EventWinMesSet_08041058(0x16003C);
    EventAnimateChara_080418C8(2, 0, 0, 0);
    EventAnimateChara_080418C8(4, 0, 0, 0);
    EventWinSpeakerSet_08041018(2);
    EventWinMesSet_08041058(0x16003D);
    EventWinMesSet_08041058(0x16003E);
    EventAnimateChara_080418C8(2, 0, 3, 0);
    EventAnimateChara_080418C8(4, 0, 3, 0);
    EventWinSpeakerSet_08041018(0xA);
    EventWinMesSet_08041058(0x16003F);
    EventAnimateChara_080418C8(2, 0, 0, 0);
    EventAnimateChara_080418C8(4, 0, 0, 0);
    EventWinSpeakerSet_08041018(2);
    EventWinMesSet_08041058(0x160040);
    EventAnimateChara_080418C8(2, 0, 3, 0);
    EventAnimateChara_080418C8(4, 0, 3, 0);
    EventWinSpeakerSet_08041018(0xA);
    EventWinMesSet_08041058(0x160041);
    EventAnimateChara_080418C8(2, 0, 0, 0);
    EventAnimateChara_080418C8(4, 0, 0, 0);
    EventMgSpecialGoal_080427E0(0x6D, 0x460028);
    EventWinSpeakerSet_08041018(2);
    EventWinMesSet_08041058(0x160042);
    sub_08040BB8();
    EventAnimateChara_080418C8(3, 0, 8, 0xFF);
    EventAnimateChara_080418C8(5, 0, 8, 0xFF);
    EventWinMesSet_08041058(0x160043);
    EventAnimateChara_080418C8(3, 0, 0, 0xFF);
    EventAnimateChara_080418C8(5, 0, 0, 0xFF);
    EventAnimateChara_080418C8(2, 0, 3, 0);
    EventAnimateChara_080418C8(4, 0, 3, 0);
    EventWinSpeakerSet_08041018(0xA);
    EventWinMesSet_08041058(0x160044);
    EventAnimateChara_080418C8(3, 0, 8, 0xFF);
    EventAnimateChara_080418C8(5, 0, 8, 0xFF);
    EventWinSpeakerSet_08041018(2);
    EventWinMesSet_08041058(0x160045);
    EventSetFlag_080406E4(0x56);
}

void sub_08050EBC(void) {
    
    if (TestQuestFlag_08040714(0x57) == 1) {
        PlayJingle_08041100(0x68);
        EventWaitForJingle_08041138();
        EventBGMPlay_080410A8(0x13);
        EventWinInit_08040fe8();
        EventWinSpeakerSet_08041018(2);
        EventWinMesSet_08041058(0x160046);
        EventWinSpeakerSet_08041018(0xA);
        EventWinMesSet_08041058(0x160047);
        EventAnimateChara_080418C8(3, 0, 0, 0xFF);
        EventAnimateChara_080418C8(5, 0, 0, 0xFF);
        EventAnimateChara_080418C8(2, 0, 0, 0);
        EventAnimateChara_080418C8(4, 0, 0, 0);
        EventWinSpeakerSet_08041018(2);
        EventWinMesSet_08041058(0x160048);
        EventAnimateChara_080418C8(2, 0, 3, 0);
        EventAnimateChara_080418C8(4, 0, 3, 0);
        EventWinSpeakerSet_08041018(0xA);
        EventWinMesSet_08041058(0x160049);
        QuestFinish_08042814(0x26, 0x13);
        EventAnimateChara_080418C8(2, 0, 0, 0);
        EventAnimateChara_080418C8(4, 0, 0, 0);
        EventWinSpeakerSet_08041018(2);
        EventWinMesSet_08041058(0x16004A);
        EventWinMesSet_08041058(0x16004B);
        EventAnimateChara_080418C8(2, 0, 3, 0);
        EventAnimateChara_080418C8(4, 0, 3, 0);
        EventWinSpeakerSet_08041018(0xA);
        EventWinMesSet_08041058(0x16004C);
        EventAnimateChara_080418C8(2, 0, 0, 0);
        EventAnimateChara_080418C8(4, 0, 0, 0);
        EventWinSpeakerSet_08041018(2);
        EventWinMesSet_08041058(0x16004D);
        EventAnimateChara_080418C8(2, 0, 3, 0);
        EventAnimateChara_080418C8(4, 0, 3, 0);
        EventWinSpeakerSet_08041018(0xA);
        EventWinMesSet_08041058(0x16004E);
        EventAnimateChara_080418C8(3, 0, 0xD, 0xFF);
        EventAnimateChara_080418C8(5, 0, 0xD, 0xFF);
        EventAnimateChara_080418C8(2, 0, 9, 0xFF);
        EventAnimateChara_080418C8(4, 0, 9, 0xFF);
        EventWinSpeakerSet_08041018(2);
        EventWinMesSet_08041058(0x16004F);
        EventSetMinigame_08040B84(0x6D);
        SetEventFlag_080406BC(0x58);
    } else {
        EventWinInit_08040fe8();
        EventWinSpeakerSet_08041018(2);
        EventWinMesSet_08041058(0x160050);
        EventWinMesSet_08041058(0x160051);
        EventAnimateChara_080418C8(2, 0, 3, 0);
        EventAnimateChara_080418C8(4, 0, 3, 0);
        EventWinSpeakerSet_08041018(0xA);
        EventWinMesSet_08041058(0x160052);
        EventAnimateChara_080418C8(2, 0, 0, 0);
        EventAnimateChara_080418C8(4, 0, 0, 0);
        EventWinSpeakerSet_08041018(2);
        EventWinMesSet_08041058(0x160053);
        EventWinMesSet_08041058(0x160054);
        EventAnimateChara_080418C8(3, 0, 8, 0xFF);
        EventAnimateChara_080418C8(5, 0, 8, 0xFF);
        EventWinMesSet_08041058(0x160055);
        EventAnimateChara_080418C8(2, 0, 3, 0);
        EventAnimateChara_080418C8(4, 0, 3, 0);
        EventWinSpeakerSet_08041018(0xA);
        EventWinMesSet_08041058(0x160056);
        EventUnsetFlag_080406FC(0x55);
        EventUnsetFlag_080406FC(0x56);
        EventUnsetFlag_080406FC(0x57);
        UnsetEventFlag_080406D0(0x58);
        return;
    }
}

void sub_0805114C(void) {
	
	sub_080407FC();
	EventWinInit_08040fe8();
	EventWinSpeakerSet_08041018(2);
	EventWinMesSet_08041058(0x160057);
	EventWinSpeakerSet_08041018(10);
	EventWinMesSet_08041058(0x160058);
	EventWinSpeakerSet_08041018(2);
	EventWinMesSet_08041058(0x160059);
	EventWinSpeakerSet_08041018(10);
	EventWinMesSet_08041058(0x16005a);
}

void MtFrostbiteInit_0805119C(void) {

    EventInit_080405B8();
    LoadBuildingBG_0804115C(&gUnknown_0808E254);
    sub_080412A0(0, 0x40000, 0);
    DisplayGFX_080414B4(&gUnknown_0808E62C, 0x78, 0x68);
    LoadCharSprite_080415A0(2, 0, &gUnknown_0808E7BC);
    sub_08041734(2, 0);
    sub_08041864(2, 3);
    EventPlaceChara_08041894(2, 0x9C, 0x68);
    LoadCharSprite_080415A0(4, 0, &gUnknown_0808E7CC);
    sub_08041734(4, 0);
    sub_08041864(4, 3);
    EventPlaceChara_08041894(4, 0x9C, 0x68);
    LoadCharSprite_080415A0(3, 0, &gUnknown_0808E70C);
    sub_08041734(3, 0);
    sub_08041864(3, 3);
    EventPlaceChara_08041894(3, 0x60, 0x68);
    LoadCharSprite_080415A0(5, 0, &gUnknown_0808E72C);
    sub_08041734(5, 0);
    sub_08041864(5, 3);
    EventPlaceChara_08041894(5, 0x60, 0x68);
    EventAnimateChara_080418C8(3, 0, 0xD, 0xFF);
    EventAnimateChara_080418C8(5, 0, 0xD, 0xFF);
    EventAnimateChara_080418C8(2, 0, 9, 0xFF);
    EventAnimateChara_080418C8(4, 0, 9, 0xFF);
    LoadCharSprite_080415A0(0, 0, &gUnknown_0808EA6C);
    sub_08041734(0, 0);
    EventPlaceChara_08041894(0, 0, 0x48);
    sub_08041864(0, 2);
    EventPlaySFX_080410E0(0x12F);
    if (TestQuestFlag_08040714(0x58) == 1) {
        EventBGMPlay_080410A8(0x1B);
        RunEventScript_0804066C(&sub_0805114C);
    } else if ((sub_08040B0C() << 0x18) == 0) {
        EventBGMPlay_080410A8(0x1B);
        RunEventScript_0804066C(&sub_080506E4);
        if ((TestQuestFlag_08040714(0x55) << 0x18) != 0) {
            RunEventScript_0804066C(&sub_08050AAC);
            if ((TestQuestFlag_08040714(0x56) << 0x18) != 0) {
                EventQuestBegin_080406D0(0x6D);
            } else {
                EventUnsetFlag_080406FC(0x55);
                EventUnsetFlag_080406FC(0x56);
                EventUnsetFlag_080406FC(0x57);
                UnsetEventFlag_080406D0(0x58);
            }
        }
    } else {
        EventAnimateChara_080418C8(3, 0, 0, 0xFF);
        EventAnimateChara_080418C8(5, 0, 0, 0xFF);
        EventAnimateChara_080418C8(2, 0, 0, 0);
        EventAnimateChara_080418C8(4, 0, 0, 0);
        sub_080407FC();
        switch (EventQuestFailRetry_08040A6C(0x13)) 
        {
        case 0:
            break;
        case 1:
            EventSetFlag_080406E4(0x57);
        case 2:
            RunEventScript_0804066C(&sub_08050EBC);
            sub_08040B28();
            break;
        }
    }
    sub_080410D0();
    sub_08041008();
    sub_08040820();
    sub_080417E0(2);
    sub_08041684(2, 0);
    sub_080417E0(4);
    sub_08041684(4, 0);
    sub_080417E0(3);
    sub_08041684(3, 0);
    sub_080417E0(5);
    sub_08041684(5, 0);
    sub_080417E0(0);
    sub_08041684(0, 0);
    sub_08041560();
    sub_08041310();
    sub_0804062C();
}
