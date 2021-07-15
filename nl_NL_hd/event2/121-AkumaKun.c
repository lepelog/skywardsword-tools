          void entrypoint_121_02() {
/*<102>*/ 	start()
/*<103>*/ 	printf("\x0E\x01\x09\x04\x15\xC09Wacht! Nee! Je kunt die schatkist maar\nbeter niet openen! Er zit namelijk iets\nverschrikkelijks in!\n[1]Wat dan?[2]Ik wil toch even kijken.")
/*<104>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_106:
/*<106>*/ 		printf("\x0E\x01\x09\x04\x13\x800In die doos bevindt zich de meest\nangstaanjagende medaille die er is.\nDe <y<vervloekte medaille>>. Als je die bij je\ndraagt, kun je meer rupees verzamelen.\n\x0E\x01\x09\x04\x15\xC00Ook schatten zullen makkelijker te vinden\nzijn! \x0E\x01\x09\x04\x14\xA00Het is alleen... Nou, ja...\n[1]Klinkt goed![2]En verder?")
/*<108>*/ 		switch (choice(2)) {
          		  case 0:
/*<109>*/ 			printf("\x0E\x01\x09\x04\x13\x800Ik begrijp dat het erg aanlokkelijk klinkt,\nmaar...")
          			flw_107:
/*<107>*/ 			printf("\x0E\x01\x09\x04\x15\xC00Het ergste moet nog komen!\n\n\n\n\x0E\x01\x09\x04\x14\xA00Hij die de medaille bij zich draagt,\n<r<kan zijn buidel niet meer openen>>!\n\n\nDat betekent bijvoorbeeld dat je geen\ngeneesdrankjes en schilden meer kunt\ngebruiken! Ik zei toch dat het\nverschrikkelijk is!\n\n\x0E\x01\x09\x04\x15\xC00Daarom moet je elke gedachte aan die kist\nuit je hoofd zetten. Je mag er nooit meer\naan denken!")
/*<110>*/ 			scene_flags[0 'Skyloft'][84 /* 0xB 10 */] = true;
          		  case 1:
          			goto flw_107
          		}
          	  case 1:
/*<105>*/ 		printf("\x0E\x01\x09\x04\x13\x800Ik zei NEE!")
          		goto flw_106
          	}
          }

          void entrypoint_121_20() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x09\x04\x00\x03Stop! Alsjeblieft! Doe me geen pijn!\n\n\n\nOei, dit ziet er waarschijnlijk anders uit\ndan het in werkelijkheid is. Ik doe\nniemand kwaad, hoor! We speelden een\nspelletje wie het hardst kan schreeuwen.")
/*< 66>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2560, 'next': 114, 'param3': 13}
/*<114>*/ 	make_actor_do_something(2, 0)
/*<  4>*/ 	printf("\x0E\x01\x09\x04\x00\x05Dat is toch een leuk spelletje? Hm, laat\nme het je uitleggen.\n\n\nIk heet <b<Vleros>> en zoals je ziet, ben ik een\nmonster. Ik woon hier in Skyloft.\n\n\nLaat me een misverstand de wereld uit\nhelpen. Ik ben inderdaad een monster,\nmaar ik doe geen vlieg kwaad. Die kleine\nmeid is de enige die niet bang voor me is.\nSinds ze mij regelmatig bezoekt, voel ik\nme echt in m'n nopjes. Ik zou ontzettend\ngraag vrienden willen worden met\niedereen op Skyloft.\nMaar je kunt je vast voorstellen dat het\nlastig is om het ijs te breken wanneer\niedereen die me ziet, verstijft van angst...")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 2048, 'next': 72, 'param3': 13}
/*< 72>*/ 	printf("Ik zou niets liever willen dan vrienden\nworden met de andere mensen.\n\n\nMaar zodra anderen mij zo zien, worden\nze bang en rennen ze weg.\n\n\nO, wacht... Stom van me. Ik loop\nbehoorlijk op de zaken vooruit. Weet je, er\nbestaat een legende die onder monsters\nwordt verteld...")
/*< 76>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3077, 'next': 73, 'param3': 13}
/*< 73>*/ 	printf("Men zegt dat als mensen andere mensen\nblij maken, de blije mensen iets\nuitscheiden dat een <y<dankbaarheidskristal>>\nwordt genoemd.")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 74, 'param3': 13}
/*< 74>*/ 	printf("<y<Dankbaarheidskristallen>> zijn geweldig!\nMet zoveel dankbaarheid zou het mogelijk\nmoeten zijn om van een monster in een\nmens te veranderen!")
/*< 78>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 115, 'param3': 13}
/*<115>*/ 	make_actor_do_something(3, 0)
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x00\x07Ik weet het zeker. Ik wil een mens zijn!\n\n\n\nVanaf het moment dat ik je met mijn\nmonsterlijke ogen zag, wist ik dat je\nhet hart op de juiste plaats hebt.")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 2048, 'next': 116, 'param3': 13}
/*<116>*/ 	make_actor_do_something(4, 0)
/*< 80>*/ 	printf("Dus, wat zeg je ervan? Zou je een paar\nvan zulke <y<dankbaarheidskristallen>> voor\nme willen verzamelen?\n[1]Tuurlijk![2-]Liever niet.")
/*<  5>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_82:
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3086, 'next': 117, 'param3': 13}
/*<117>*/ 		make_actor_do_something(5, 0)
/*<  8>*/ 		printf("Echt waar?!")
/*<118>*/ 		make_actor_do_something(6, 0)
/*<113>*/ 		printf("Ik heb gehoord dat je die <y<dankbaarheids-\nkristallen>> krijgt door mensen te helpen.")
/*< 84>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 83, 'param3': 13}
/*< 83>*/ 		printf("Ze kunnen ook overal liggen op Skyloft\nof op andere plekken waar veel mensen\nkomen.\n\nIemand met een goed hart zoals jij kan ze\nongetwijfeld zien.\n\n\nIk zou je willen vragen om alle <y<dankbaar-\nheidskristallen>> voor me te verzamelen\ndie je kunt vinden.")
/*< 86>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3079, 'next': 85, 'param3': 13}
/*< 85>*/ 		printf("En ik zal je natuurlijk rijkelijk belonen\nvoor je inzet!")
/*<  2>*/ 		story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*< 65>*/ 		scene_flags[0 'Skyloft'][78 /* 0x8 40 */] = true;
/*< 11>*/ 		switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
          		  case 0:
/*< 12>*/ 			story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */] = true;
          			flw_167:
/*<167>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
          			goto flw_167
          		}
          	  case 1:
          		flw_81:
/*< 81>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 6, 'param3': 13}
/*<  6>*/ 		printf("Alsjeblieft, dat is toch niet te veel\ngevraagd?\n[1]Nou, vooruit...[2-]Nee is nee!")
/*<  7>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_82
          		  case 1:
          			goto flw_81
          		}
          	}
          }

          void entrypoint_121_03() {
/*<152>*/ 	start()
/*<158>*/ 	switch (story_flags[1091 /* us: 805A9B52 0x02, jp: 805ACDD2 0x02 */]) {
          	  case 0:
/*<159>*/ 		printf("\x0E\x01\x09\x04\x00\xA07Toen ik ontdekte dat mijn aanwezigheid\nin Skyloft problemen veroorzaakte voor\nde lieve inwoners, was dat wel even\nslikken.\nNu is dat gelukkig verleden tijd. Ik voel\nme eindelijk een doodnormale bewoner\nvan Skyloft. Dank je wel!")
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\x00\x05Goedenavond, Link! Ik besloot\neens een wandelingetje te maken en tot\nmijn grote verbazing was er geen monster\nte bekennen.\nJe denkt toch niet dat dat iets te maken\nheeft met het feit dat ik een mens ben\ngeworden?\n[1]Zou kunnen![2]Welnee.")
/*<154>*/ 		switch (choice(2)) {
          		  case 0:
/*<155>*/ 			printf("\x0E\x01\x09\x04\x00\x856Ik denk dat je gelijk hebt...")
          			flw_157:
/*<157>*/ 			printf("\x0E\x01\x09\x04\x08\x800Toen ik een demon was, straalde ik een\nkwaadaardige energie uit...\n\n\nNu ik een mens ben, is deze energie\nnergens meer te bekennen.\n\n\n\x0E\x01\x09\x04\x15\xA07Ik ben dan ook enorm opgelucht. Dankzij\njou kan iedereen nu in vrede leven.")
/*<160>*/ 			story_flags[1091 /* us: 805A9B52 0x02, jp: 805ACDD2 0x02 */] = true;
          		  case 1:
/*<156>*/ 			printf("\x0E\x01\x09\x04\x00\x814Ach, je kunt eerlijk tegen me zijn, hoor.")
          			goto flw_157
          		}
          	}
          }

          void entrypoint_121_30() {
/*<  9>*/ 	start()
/*<111>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<112>*/ 		printf("\x0E\x01\x09\x04\x13\x808O, je hebt hem geopend!\n\n\n\nDe nieuwsgierigheid van mensen is een\ngriezelig iets, maar juist dat maakt jullie\nzo interessant. Vrees niet als je je buidel\nniet kunt openen...\nDat komt doordat je die medaille bij je\ndraagt. Breng hem naar de <b<voorwerpen-\nbank>> als je weer in je buidel wilt komen.")
          	  case 1:
/*<120>*/ 		switch (story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */]) {
          		  case 0:
/*<121>*/ 			story_flags[734 /* us: 805A9B27 0x40, jp: 805ACDA7 0x40 */] = true;
          			flw_13:
/*< 13>*/ 			switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          			  case 0:
/*<125>*/ 				switch (scene_flags[79 /* 0x8 80 */]) {
          				  case 0:
/*<126>*/ 					printf("\x0E\x01\x09\x04\n\xC05Ik kan je niet genoeg bedanken! Nu kan\nik eindelijk over Skyloft lopen zonder dat\nik iedereen de stuipen op het lijf jaag.")
          				  case 1:
/*< 95>*/ 					{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 3072, 'next': 17, 'param3': 13}
/*< 17>*/ 					printf("\x0E\x01\x09\x04\x00\x05Wat denk je? Ik durf te wedden dat je\neven niet wist wie ik was.")
/*< 96>*/ 					{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 97, 'param3': 13}
/*< 97>*/ 					printf("Dat snap ik ook wel. Ik heb zelf ook het\ngevoel dat ik niet meer mezelf ben.")
/*<124>*/ 					scene_flags[0 'Skyloft'][79 /* 0x8 80 */] = true;
          				}
          			  case 1:
/*< 39>*/ 				switch (scene_flags[70 /* 0x9 40 */]) {
          				  case 0:
/*< 41>*/ 					switch (scene_flags[71 /* 0x9 80 */]) {
          					  case 0:
/*< 46>*/ 						switch (scene_flags[72 /* 0x8 01 */]) {
          						  case 0:
/*< 52>*/ 							switch (scene_flags[73 /* 0x8 02 */]) {
          							  case 0:
/*< 55>*/ 								switch (scene_flags[74 /* 0x8 04 */]) {
          								  case 0:
/*< 58>*/ 									switch (scene_flags[75 /* 0x8 08 */]) {
          									  case 0:
/*< 35>*/ 										switch (context_related2(6)) {
          										  case 0:
/*< 98>*/ 											{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3083, 'next': 36, 'param3': 13}
/*< 36>*/ 											printf("Niet te geloven! Je hebt echt <r<80>><y<\ndankbaarheidskristallen>> weten te vinden!\nAls ik me niet vergis, zijn dat zelfs alle\ndankbaarheidskristallen in de wereld!\n\x0E\x01\x09\x04\x07\x807Duizend maal dank! Ik sta voor eeuwig\nbij je in het krijt! Neem dit als mijn\nlaatste geschenk.")
          											flw_166:
/*<166>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 37, 'param3': 12}
/*< 37>*/ 											give_item(111 0x6F);
/*< 20>*/ 											printf("Het is niets bijzonders, maar ik hoop dat\nje er wat aan hebt.")
/*< 87>*/ 											{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 15, 'param3': 13}
/*< 15>*/ 											printf("O, zoveel <y<dankbaarheidskristallen>> zijn\ngenoeg om een mens te worden!\n\n\n\x0E\x01\x09\x04\x07\x809Ik ben echt nerveus! Hopelijk werkt het\nallemaal...")
/*<148>*/ 											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          										  case 1:
/*< 62>*/ 											printf("\x0E\x01\x09\x04\x00\x05Ik zou zo graag een mens worden...\nDaarvoor heb ik meer <y<dankbaarheids-\nkristallen >>nodig.\n\nKom terug wanneer je <r<80 kristallen\n>>voor me hebt verzameld.")
          										}
          									  case 1:
/*< 34>*/ 										switch (context_related2(5)) {
          										  case 0:
/*< 59>*/ 											printf("\x0E\x01\x09\x04\x09\xD0BWauw! Je hebt echt een hoop <y<dankbaar-\nheidskristallen>> weten te vinden!\n\n\n\x0E\x01\x09\x04\x07\x807Je hebt me een grote dienst bewezen.\nHier, als teken van dank!")
          											flw_127:
/*<127>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 161, 'param3': 12}
/*<161>*/ 											give_item(33 0x21);
/*<162>*/ 											printf("\x0E\x01\x09\x04\x09\xD0BDit staat nog niet in verhouding met wat\njij voor mij hebt gedaan.\n\n\n\x0E\x01\x09\x04\x07\x807Ik schenk je nog iets.")
/*<163>*/ 											give_item(33 0x21);
/*< 60>*/ 											printf("Ik heb nog maar een paar <y<dankbaarheids-\nkristallen>> nodig om een mens te worden.\nLaat me nu alsjeblieft niet in de steek.")
/*< 61>*/ 											scene_flags[0 'Skyloft'][75 /* 0x8 08 */] = true;
/*<143>*/ 											switch (context_related2(6)) {
          											  case 0:
/*<144>*/ 												printf("\x0E\x01\x09\x04\x09\xD0BO, je bent er weer! En je hebt nog meer\n<y<dankbaarheidskristallen>> meegebracht!\n\n\nHet zijn er maar liefst <r<80>>... Dat zijn\nvolgens mij alle <y<dankbaarheidskristallen>>\nin de hele wereld!\n\n\x0E\x01\x09\x04\x07\x807Ontzettend bedankt! Ontzettend bedankt!\n\n\n\nNeem dit als laatste geschenk voor je\nongelofelijke hulp.")
          												goto flw_166
          											  case 1:
/*<147>*/ 												scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          											}
          										  case 1:
/*< 57>*/ 											printf("\x0E\x01\x09\x04\x00\x05Ik zou zo graag een mens worden...\nDaarvoor heb ik meer <y<dankbaarheids-\nkristallen>> nodig.\n\nKom terug wanneer je <r<70 kristallen\n>>voor me hebt verzameld.")
          										}
          									}
          								  case 1:
/*< 33>*/ 									switch (context_related2(4)) {
          									  case 0:
/*< 28>*/ 										printf("\x0E\x01\x09\x04\x09\xD0BWauw! Je hebt echt een hoop <y<dankbaar-\nheidskristallen>> weten te vinden!\n\n\n\x0E\x01\x09\x04\x07\x807Je hebt me een grote dienst bewezen.\nHier, als teken van dank!")
          										flw_165:
/*<165>*/ 										{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 										give_item(110 0x6E);
/*< 29>*/ 										printf("Ik heb nog maar een paar <y<dankbaarheids-\nkristallen>> nodig om een mens te worden.\nLaat me nu alsjeblieft niet in de steek.")
/*< 56>*/ 										scene_flags[0 'Skyloft'][74 /* 0x8 04 */] = true;
/*<141>*/ 										switch (context_related2(5)) {
          										  case 0:
/*<142>*/ 											printf("\x0E\x01\x09\x04\x09\xD0BWauw! Wat een monsterlijke hoeveelheid\n<y<dankbaarheidskristallen>>!\n\n\n\x0E\x01\x09\x04\x07\x807Dit is zo'n verschrikkelijk karige beloning\ndat het schaamrood op m'n kaken staat,\nmaar alsjeblieft... pak aan!")
          											goto flw_127
          										  case 1:
/*<146>*/ 											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          										}
          									  case 1:
/*< 54>*/ 										printf("\x0E\x01\x09\x04\x00\x05Ik zou zo graag een mens worden...\nDaarvoor heb ik meer <y<dankbaarheids-\nkristallen>> nodig.\n\nKom terug wanneer je <r<50 kristallen\n>>voor me hebt verzameld.")
          									}
          								}
          							  case 1:
/*< 32>*/ 								switch (context_related2(3)) {
          								  case 0:
/*< 50>*/ 									printf("\x0E\x01\x09\x04\x09\xD0BWauw! Je hebt echt een hoop <y<dankbaar-\nheidskristallen>> weten te vinden!\n\n\n\x0E\x01\x09\x04\x07\x807Je hebt me een grote dienst bewezen.\nHier, als teken van dank!")
          									flw_164:
/*<164>*/ 									{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 49, 'param3': 12}
/*< 49>*/ 									give_item(33 0x21);
/*< 51>*/ 									printf("Dat zijn behoorlijk wat <y<dankbaarheids-\nkristallen>>, zeg!\n\n\nIk heb er nog maar een paar nodig.")
/*< 53>*/ 									scene_flags[0 'Skyloft'][73 /* 0x8 02 */] = true;
/*<139>*/ 									switch (context_related2(4)) {
          									  case 0:
/*<140>*/ 										printf("\x0E\x01\x09\x04\x09\xD0BWauw! Wat een monsterlijke hoeveelheid\n<y<dankbaarheidskristallen>>!\n\n\n\x0E\x01\x09\x04\x07\x807Dit is zo'n verschrikkelijk karige beloning\ndat het schaamrood op m'n kaken staat,\nmaar alsjeblieft... pak aan!")
          										goto flw_165
          									  case 1:
/*<145>*/ 										scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          									}
          								  case 1:
/*< 48>*/ 									printf("\x0E\x01\x09\x04\x00\x05Ik zou zo graag een mens worden...\nDaarvoor heb ik meer <y<dankbaarheids-\nkristallen>> nodig.\n\nKun je nog eens langskomen als je\n<r<40 kristallen>> hebt verzameld?")
          								}
          							}
          						  case 1:
/*< 31>*/ 							switch (context_related2(2)) {
          							  case 0:
/*< 25>*/ 								printf("\x0E\x01\x09\x04\x09\xD0BWauw! Je hebt echt een hoop <y<dankbaar-\nheidskristallen>> weten te vinden!\n\n\n\x0E\x01\x09\x04\x07\x807Je hebt me een grote dienst bewezen.\nHier, als teken van dank!")
          								flw_24:
/*< 24>*/ 								give_item(109 0x6D);
/*< 26>*/ 								printf("Dat zijn behoorlijk wat <y<dankbaarheids-\nkristallen>>, zeg!\n\n\nIk heb er nog maar een paar nodig.")
/*< 47>*/ 								scene_flags[0 'Skyloft'][72 /* 0x8 01 */] = true;
/*<137>*/ 								switch (context_related2(3)) {
          								  case 0:
/*<138>*/ 									printf("\x0E\x01\x09\x04\x09\xD0BWauw! Wat een monsterlijke hoeveelheid\n<y<dankbaarheidskristallen>>!\n\n\n\x0E\x01\x09\x04\x07\x807Dit is zo'n verschrikkelijk karige beloning\ndat het schaamrood op m'n kaken staat,\nmaar alsjeblieft... pak aan!")
          									goto flw_164
          								  case 1:
/*< 99>*/ 									scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          								}
          							  case 1:
/*< 64>*/ 								printf("\x0E\x01\x09\x04\x00\x05Ik zou zo graag een mens worden...\nDaarvoor heb ik meer <y<dankbaarheids-\nkristallen>> nodig.\n\nKun je nog eens langskomen als je\n<r<30 kristallen>> hebt verzameld?")
          							}
          						}
          					  case 1:
/*< 30>*/ 						switch (context_related2(1)) {
          						  case 0:
/*< 43>*/ 							printf("\x0E\x01\x09\x04\x09\xD0BWauw! Je hebt echt een hoop <y<dankbaar-\nheidskristallen>> weten te vinden!\n\n\n\x0E\x01\x09\x04\x07\x807Je hebt me een grote dienst bewezen.\nHier, als teken van dank!")
          							flw_42:
/*< 42>*/ 							give_item(94 0x5E);
/*< 44>*/ 							printf("Hm, ik heb nog meer <y<dankbaarheids-\nkristallen>> nodig om een mens te kunnen\nworden.\n\nJe wilt een arme, ongelukkige demon\ntoch wel helpen?")
/*< 45>*/ 							scene_flags[0 'Skyloft'][71 /* 0x9 80 */] = true;
/*<135>*/ 							switch (context_related2(2)) {
          							  case 0:
/*<136>*/ 								printf("\x0E\x01\x09\x04\x09\xD0BWauw! Wat een monsterlijke hoeveelheid\n<y<dankbaarheidskristallen>>!\n\n\n\x0E\x01\x09\x04\x07\x807Dit is zo'n verschrikkelijk karige beloning\ndat het schaamrood op m'n kaken staat,\nmaar alsjeblieft... pak aan!")
          								goto flw_24
          							  case 1:
          							}
          						  case 1:
/*< 40>*/ 							printf("\x0E\x01\x09\x04\x00\x05Ik zou zo graag een mens worden...\nDaarvoor heb ik meer <y<dankbaarheids-\nkristallen>> nodig.\n\nKun je nog eens langskomen als je\n<r<10 kristallen>> hebt verzameld?")
          						}
          					}
          				  case 1:
/*< 63>*/ 					switch (context_related2(0)) {
          					  case 0:
/*< 22>*/ 						printf("\x0E\x01\x09\x04\x09\xD0BWauw! Je hebt echt een hoop <y<dankbaar-\nheidskristallen>> weten te vinden!\n\n\n\x0E\x01\x09\x04\x07\x807Je hebt me een grote dienst bewezen.\nHier, als teken van dank!")
/*< 21>*/ 						give_item(108 0x6C);
/*< 23>*/ 						printf("Hm, ik heb nog meer <y<dankbaarheids-\nkristallen>> nodig om een mens te kunnen\nworden.\n\nJe wilt een arme, ongelukkige demon\ntoch wel helpen?")
/*< 38>*/ 						scene_flags[0 'Skyloft'][70 /* 0x9 40 */] = true;
/*<133>*/ 						switch (context_related2(1)) {
          						  case 0:
/*<134>*/ 							printf("\x0E\x01\x09\x04\x09\xD0BWauw! Wat een monsterlijke hoeveelheid\n<y<dankbaarheidskristallen>>!\n\n\n\x0E\x01\x09\x04\x07\x807Dit is zo'n verschrikkelijk karige beloning\ndat het schaamrood op m'n kaken staat,\nmaar alsjeblieft... pak aan!")
          							goto flw_42
          						  case 1:
          						}
          					  case 1:
/*<132>*/ 						switch (zone_temp_flags[1 /* 0x1 02 */]) {
          						  case 0:
          							flw_122:
/*<122>*/ 							switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          							  case 0:
/*< 14>*/ 								printf("\x0E\x01\x09\x04\x00\x05Aaah... Ik wil geen monster meer zijn.\nZou je voor mij een paar <y<dankbaarheids-\nkristallen>> willen zoeken? <r<5 kristallen>>\nzou al een mooie start zijn.\nAls je iemand helpt, kun je er zelfs\nmeerdere tegelijk krijgen!")
          							  case 1:
/*<123>*/ 								printf("\x0E\x01\x09\x04\x00\x05Die kleine meid zou morgenochtend al\nveilig thuis moeten zijn. Doe je de groeten\naan haar ouders? O, en vergeet die\n<y<dankbaarheidskristallen>> niet!\n<r<5 kristallen>> zou een mooi begin zijn.\nJe krijgt er misschien meerdere tegelijk\nals je anderen helpt.")
          							}
          						  case 1:
/*<129>*/ 							check_item_flag(48, 1)
/*<128>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 46}) {
          							  case 0:
/*<130>*/ 								printf("\x0E\x01\x09\x04\x00\x05Ja! Dat is er een! Dat is een <y<dankbaar-\nheidskristal>>! <pause14>Dat heb je snel gedaan, zeg!\n\n\nVoor nu zou het geweldig zijn als je me <r<5\nkristallen >>zou kunnen brengen.\n\n\nJe krijgt er misschien meerdere tegelijk\nals je anderen helpt!")
/*<131>*/ 								zone_temp_flags[1 /* 0x1 02 */] = true;
          							  case 1:
          								goto flw_122
          							}
          						}
          					}
          				}
          			}
          		  case 1:
          			goto flw_13
          		}
          	}
          }

          void entrypoint_121_00() {
          	start()
/*< 70>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 35, 'next': 18, 'param3': 32}
/*< 18>*/ 	printf("\x0E\x01\x09\x04\x00\x0BHet is... Waaah!\x0E\x01\x05\x04<\x00")
/*< 67>*/ 	make_actor_do_something(0, 0)
/*<119>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 68, 'param3': 6}
/*< 68>*/ 	printf("\x0E\x01\x09\x04\x00\x04\x0E\x01\x08\x02\x2CDGraaaahhh!\x0E\x01\x05\x04\x1E\x00")
/*< 69>*/ 	make_actor_do_something(1, 0)
/*< 71>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8969, 'param2': 3072, 'next': 89, 'param3': 13}
/*< 89>*/ 	printf("\x0E\x01\x06\x02\xFCCDEh...\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x00\x07 En? Hoe zie ik eruit,\nLink?")
/*< 90>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8968, 'param2': 2560, 'next': 91, 'param3': 13}
/*< 91>*/ 	printf("Zeg maar niets. Je gezicht zegt al genoeg.")
/*< 92>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8970, 'param2': 3072, 'next': 93, 'param3': 13}
/*< 93>*/ 	printf("De metamorfose die ik heb ondergaan is\nzo immens, dat je er helemaal geen\nwoorden voor hebt, hè?")
/*< 94>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8969, 'param2': 3072, 'next': 19, 'param3': 13}
/*< 19>*/ 	printf("Laat me je dit zeggen. Er is geen woord\nte bedenken waarmee ik mijn dank kan\nuitdrukken. Ik ben echt geroerd.\n\nVan nu af aan wil ik een rustig en\nzorgeloos leven leiden. Niet als\nmonster, maar als mens.")
/*< 16>*/ 	story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */] = true;
          }

          void entrypoint_121_01() {
/*<100>*/ 	start()
/*<149>*/ 	switch (temp_flags[12 /* 0x0 10 */]) {
          	  case 0:
/*<151>*/ 		printf("\x0E\x01\x09\x04\x08\xA0CIk kijk hier echt m'n ogen uit! Er is\nzoveel te zien en te doen. Echt prachtig!\nIk zou hier de hele dag kunnen rondlopen.")
          	  case 1:
/*<101>*/ 		printf("\x0E\x01\x09\x04\x00\x05Wees gegroet, Link! Ik kan je\nsimpelweg niet genoeg bedanken! Zonder\njou was ik nergens geweest.\n\nJe wilt niet weten hoelang ik ervan heb\ngedroomd om lekker door de bazaar te\nwandelen. Nu kan dat eindelijk!\n\n\x0E\x01\x09\x04\x15\xC00Kijk toch eens. Niemand is meer bang\nvoor me! Ik ben zo blij!")
/*<150>*/ 		temp_flags[12 /* 0x0 10 */] = true;
          	}
          }

