          void entrypoint_303_27() {
/*< 91>*/ 	start()
/*< 92>*/ 	printf(/* textboxtype: 0, unk: 73, line: 26 */ "Zag u dat, meesteres Fi?")
          }

          void entrypoint_303_44() {
/*<203>*/ 	start()
/*<204>*/ 	printf(/* textboxtype: 73, unk: 1, line: 1 */ "Wauw, het is hier wel heet, brrzrrt! Als ik\ngeen hightech robot was, dan zou ik\npeentjes zweten, zzbrt!")
          }

          void entrypoint_303_10() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 73, unk: 1, line: 4 */ "<sound 114>Bzzzrpt! Waar ga jij naartoe? Ik wacht\nhier wel tot je klaar bent met wat dat ook\nmag wezen, zzzt, maar schiet op!")
          }

          void entrypoint_303_28() {
/*< 93>*/ 	start()
/*< 94>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "Als ik nog ergens mee ken helpen, dan doe\nik dat graag, zzzzrp! Roep me wanneer je\nmaar wilt, zzzrbtzz!")
          }

          void entrypoint_303_45() {
/*<205>*/ 	start()
/*<206>*/ 	printf(/* textboxtype: 0, unk: 73, line: 2 */ "Hé! We gaan verkeerd, zrrt! Misschien\nmoeten we even stoppen om de weg te\nvragen?")
          }

          void entrypoint_303_11() {
/*< 56>*/ 	start()
/*< 57>*/ 	printf(/* textboxtype: 0, unk: 73, line: 5 */ "<sound 114>Zzzbt! Ik zit in de problemen! Kom me\nsnel even helpen, bzzzzat!")
          }

          void entrypoint_303_29() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf(/* textboxtype: 0, unk: 0, line: 104 */ "De vlammen die uw pad blokkeerden, zijn\nvolledig gedoofd. Ik stel voor verder te\ngaan.")
/*<200>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<291>*/ 	story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = false;
          }

          void entrypoint_303_46() {
/*<207>*/ 	start()
/*<208>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "Zijn we er al? Sneller graag, we hebben\nhaast, brzzt!")
          }

          void entrypoint_303_12() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<sound 114>HÉ! Brzzpt! Schiet op! HELP!")
          }

          void entrypoint_303_47() {
/*<219>*/ 	start()
/*<220>*/ 	printf(/* textboxtype: 0, unk: 1, line: 121 */ "Welkom terug, <0x10012:0x00000004>meester.\n\n\n\nMijn aanname is dat deze nieuwe <color yellow<vuur-\nwerende oorbellen >coloroff>u in staat zullen stellen\nnaar extreem hete plekken af te reizen.\n\nIk raad u aan verder te zoeken naar de\n<color red<heilige vlam>coloroff>.")
          }

          void entrypoint_303_13() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 73, unk: 1, line: 7 */ "<0x10005:0x003c0000><0x10008:0x02cd>ZZRRRPT!")
          }

          void entrypoint_303_30() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10005:0x004b0000><0x10012:0x0000000b>Ik heb een update over uw voortgang,\nmeester. We naderen nu de krater op de\ntop van de <color blue<Eldin-vulkaan>coloroff>.")
          }

          void entrypoint_303_48() {
/*<221>*/ 	start()
/*<223>*/ 	switch (scene_flags[108 /* 0xC 10 */]) {
          	  case 0:
/*<252>*/ 		switch (scene_flags[112 /* 0xF 01 */]) {
          		  case 0:
/*<254>*/ 			switch (scene_flags[113 /* 0xF 02 */]) {
          			  case 0:
/*<270>*/ 				switch (scene_flags[114 /* 0xF 04 */]) {
          				  case 0:
/*<271>*/ 					printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00110801>Hé, maat. Heb je die <color red<types met de grote\nschilden >coloroff>er al van langs gegeven?\n\n\n<0x10009:0x00ffff00>Dit is alles dat je moet onthouden: hak\nhouten schilden, weer speeraanvallen af en\nklauter over schilden alsof het muren zijn.\n\nAls je dat allemaal onthoudt, dan komt het\nhelemaal goed. Beloofd!")
/*<272>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
/*<263>*/ 					printf(/* textboxtype: 0, unk: 1, line: 97 */ "Hé, maat. Je hebt nog steeds moeite met\ndie <color red<types met de grote schilden>coloroff>, toch?\n\n\n<0x10009:0x0015080b>Ik heb nog <color red<een laatste geheime tip >coloroff>die je\nleven een stuk makkelijker kan maken.")
/*<264>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 256, 'param3': 12}
/*<256>*/ 					printf(/* textboxtype: 0, unk: 0, line: 98 */ "Je weet ondertussen hoe dit werkt, hè?\n<0x10009:0x00ffff09>Voor de info wil ik R-<pause 10>U-<pause 10>P-<pause 10>E-<pause 10>E-<pause 10>S.<pause 10> Voor\nprecies <color red<50 rupees>coloroff> geef ik je de tip.\n[1-]Oké![2]Nee, bedankt.")
          					flw_245:
/*<245>*/ 					switch (choice(2)) {
          					  case 0:
/*<247>*/ 						check_item_flag(501, 50)
/*<248>*/ 						switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 84}) {
          						  case 0:
/*<269>*/ 							rupees += -50;
/*<250>*/ 							printf(/* textboxtype: 0, unk: 1, line: 91 */ "<0x10009:0x0011080b>Ja! Jij houdt ervan met geld te strooien,\nhè? Ik maak me er, eerlijk gezegd, een\nbeetje zorgen om.\n\n<0x10009:0x00141200>Kijk goed uit, maat. Laat je niet flessen\ndoor oplichters! Die plukken je helemaal\nkaal als ze de kans krijgen.")
/*<251>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<265>*/ 							printf(/* textboxtype: 2, unk: 0, line: 92 */ "<0x10009:0x00ffff00>Goed dan, dit is mijn laatste geheime tip.\nDe schilden van die griezels zijn enorm,\ntoch? Als een muur?\n\n<0x10009:0x00110800>Dus behandel die schilden als een muur en\nren er eens keihard tegenaan!\n\n\n<0x10009:0x00ffff09>Ik ga je niet verklappen wat er dan\ngebeurt, maar ik raad het ten zeerste aan!\nIk denk dat je het zult waarderen!\n\n<0x10009:0x00110800>Geef ze er van langs, maat! En bedankt\nvoor je klandizie.")
/*<266>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<275>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						  case 1:
/*<249>*/ 							printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x00141215>Wat denk je hier te bereiken, maat? Je\nhebt niet genoeg rupees bij je!\n\n\n<0x10009:0x00ffff00>Kom maar terug als je ergens <color red<50 rupees\n>coloroff>vandaan hebt weten te halen.")
/*<274>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					  case 1:
/*<246>*/ 						printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x00141215>Waarom ben je opeens zo gierig, zeg? <color red<50\nrupees>coloroff> stelt toch niks voor?\n\n\n<0x10009:0x00ffff00>Pfft. Laat maar. Kom maar langs als je\nvan gedachten verandert.")
/*<273>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				}
          			  case 1:
/*<261>*/ 				printf(/* textboxtype: 0, unk: 0, line: 95 */ "Hé, maat. Heb je nog steeds moeite met die\n<color red<types met grote schilden>coloroff>?\n\n\n\n<0x10009:0x0015080b>Ik heb nog <color red<meer geheime informatie >coloroff>die je\ndaar wel bij kan helpen.")
/*<262>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 255, 'param3': 12}
/*<255>*/ 				printf(/* textboxtype: 1, unk: 0, line: 96 */ "Maar ik moet ook ergens van leven. <0x10009:0x00ffff09>Dus ik\nwil je R-<pause 10>U-<pause 10>P-<pause 10>E-<pause 10>E-<pause 10>S.<pause 10> <color red<30 rupees >coloroff>voor nog een\ngeheim.\n[1-]Oké![2]Nee, bedankt.")
          				flw_234:
/*<234>*/ 				switch (choice(2)) {
          				  case 0:
/*<236>*/ 					check_item_flag(501, 30)
/*<237>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 78}) {
          					  case 0:
/*<268>*/ 						rupees += -30;
/*<239>*/ 						printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x00110808>Je bent mijn favoriete klant, wist je dat?\nDie info is gratis. En nu je tip:\n\n\n<0x10009:0x00ffff00>Die schurken proberen je altijd aan hun\nmonstersperen te rijgen, toch? Als ze zo'n\nspeer in je buik weten te prikken, dan ben\nje er geweest.\nMaar als je het goed timet kun je hun\naanvallen<color red< afweren >coloroff>en... <pause 15><0x10009:0x00110800>Ach, je weet wel\nwat er dan gebeurt.<pause 15>\n[1-]Goeie info![2-]Dat wist ik al.")
/*<241>*/ 						scene_flags[4 'Eldin Volcano'][113 /* 0xF 02 */] = true;
/*<242>*/ 						switch (choice(2)) {
          						  case 0:
/*<244>*/ 							printf(/* textboxtype: 0, unk: 0, line: 89 */ "<0x10009:0x0011080b>Reken maar dat dat een goeie tip is! Ik heb\ner mijn leven voor geriskeerd.\n\n\n<0x10009:0x00ffff00>En zo heb ik nog wel wat tips voor je. Mijn\nvolgende tip is echt de kers op de geheime\nslagroomtaart. Hij kost maar <pause 20><color red<50 rupees>coloroff>.\n[1-]Kom maar op![2]Nee, dank je.")
          							goto flw_245
          						  case 1:
/*<243>*/ 							printf(/* textboxtype: 1, unk: 2, line: 90 */ "<0x10009:0x00120e04>O ja? Prima, maat. Er ontgaat jou niet\nveel voor een... eh... wat je ook bent.\n\n\n<0x10009:0x00ffff00>Gelukkig heb ik de beste tip voor het laatst\nbewaard! Dit is echt de ultieme tip. Hij\nkost slechts <color red<50 rupees>coloroff>!\n[1-]Vooruit![2]Nee, dank je.")
          							goto flw_245
          						}
          					  case 1:
/*<238>*/ 						printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00141215>Wat moet je, maat? Je hebt niet genoeg\nrupees, dus krijg je ook helemaal niks van\nme, nada, noppes.\n\n<0x10009:0x00ffff00>Kom maar terug als je <color red<30 rupees >coloroff>voor me\nhebt.")
/*<276>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				  case 1:
/*<235>*/ 					printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00141215>Waarom zo gierig, zeg? <color red<30 rupees>coloroff> is een\nkoopje!\n\n\n<0x10009:0x00ffff00>Maar goed, wat jij wil. Kom maar terug\nals je van gedachten verandert.")
/*<277>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			}
          		  case 1:
/*<259>*/ 			printf(/* textboxtype: 1, unk: 0, line: 93 */ "Hé, maat. Heb je nog steeds moeite met die\n<color red<types met grote schilden>coloroff>?\n\n\n<0x10009:0x0015080b>Ik heb wat<color red< geheime informatie>coloroff> die je daar\nwel bij kan helpen, vermoed ik.")
/*<260>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 253, 'param3': 12}
/*<253>*/ 			printf(/* textboxtype: 0, unk: 1, line: 94 */ "Maar voor niks komt de zon op, toch? <0x10009:0x00ffff09>Ik\nwil R-<pause 10>U-<pause 10>P-<pause 10>E-<pause 10>E-<pause 10>S.<pause 10> Ik wil <color red<30 rupees >coloroff>van je\nom precies te zijn.\n[1-]Oké![2]Nee, bedankt.")
          			flw_225:
/*<225>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				check_item_flag(501, 30)
/*<228>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 72}) {
          				  case 0:
/*<267>*/ 					rupees += -30;
/*<230>*/ 					printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10009:0x00110809>Heel erg bedankt, maat! Luister! Dit\nvertel ik alleen aan jou. Dus vertel dit niet\ndoor aan iedereen die je tegenkomt.\n\n<0x10009:0x00ffff00>Goed... <pause 20>De schilden die die grote types\nrondzeulen? Die kun je kapot hakken met\nje zwaard! Zie je wel? Is dat niet de beste\nkwaliteit informatie ooit?\nMaar kijk uit voor die griezels met ijzeren\nschilden, daar kun je met je zwaard niet\ndoorheen hakken.\n[1-]Oké! [2-]Wat? Dat was het?")
/*<240>*/ 					scene_flags[4 'Eldin Volcano'][112 /* 0xF 01 */] = true;
/*<231>*/ 					switch (choice(2)) {
          					  case 0:
/*<233>*/ 						printf(/* textboxtype: 0, unk: 0, line: 86 */ "<0x10009:0x0015090b>Hehehe... En ik heb nog meer sappige\ninformatie en weetjes voor je, als je\ninteresse hebt.\n\n<0x10009:0x00ffff00>Dat kost je wel wat... <pause 20>Nog eens <color red<30 rupees>coloroff>.\n[1-]Vertel! [2]Nee, dank je.")
          						goto flw_234
          					  case 1:
/*<232>*/ 						printf(/* textboxtype: 1, unk: 0, line: 87 */ "Hé! Kijk me niet zo raar aan, oké? Met je\n\"ik-weet-het-allemaal-al\"-gezicht.\n\n\n<0x10009:0x00150809>Dat laatste weetje kan niet tippen aan de\ngouden tips die ik nog heb... Wat dacht je\nvan nog een sappig weetje voor nog eens <color red<30\nrupees>coloroff>?[1-]Goed![2]Nee.")
          						goto flw_234
          					}
          				  case 1:
/*<229>*/ 					printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00141215>Wat moet je, maat? Je hebt niet genoeg\nrupees, dus krijg je ook helemaal niks van\nme, nada, noppes.\n\n<0x10009:0x00ffff00>Kom maar terug als je <color red<30 rupees >coloroff>voor me\nhebt.")
/*<278>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			  case 1:
/*<226>*/ 				printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00141215>Waarom zo gierig, zeg? <color red<30 rupees>coloroff> is een\nkoopje!\n\n\n<0x10009:0x00ffff00>Maar goed, wat jij wil. Kom maar terug\nals je van gedachten verandert.")
/*<279>*/ 				zone_temp_flags[7 /* 0x1 80 */] = true;
          			}
          		}
          	  case 1:
/*<222>*/ 		printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Hé, maat. Neem je even pauze? Je bent\nzeker moe van al dat vechten met monsters,\nhè?\n\n<0x10009:0x00110900>Als ze net zo taai zijn als dat ze lelijk zijn,\nmaken die griezels met hun <color red<grote schilden\n>coloroff>je vast het leven zuur?\n\n<0x10009:0x0015080b>Maar goed, ik heb dus wat<color red< geheime info\n>coloroff>die je leven een stuk makkelijker zal\nmaken.")
/*<258>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 257, 'param3': 12}
/*<257>*/ 		printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00ffff09>Natuurlijk wil ik daar wel iets voor terug\nhebben. Het gaat je wat rupees kosten,\nkeiharde R-<pause 10>U-<pause 10>P-<pause 10>E-<pause 10>E-<pause 10>S.\n\nVoor maar <color red<30 rupees>coloroff> is de info van jou.\nWat zeg je ervan?\n[1-]Kom maar op! [2]Nee.")
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][108 /* 0xC 10 */] = true;
          		goto flw_225
          	}
          }

          void entrypoint_303_14() {
/*< 62>*/ 	start()
/*< 63>*/ 	printf(/* textboxtype: 0, unk: 73, line: 8 */ "<0x10005:0x005a0000>Zzst-S-Storing! Zzrrt! Ernstige... zzrrggt...\nschade... bzzzz...")
          }

          void entrypoint_303_31() {
/*< 99>*/ 	start()
/*<100>*/ 	printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10005:0x005a0000>Ik heb in dit gebied extreem hoge\ntemperaturen gemeten. Met uw<color yellow< vuur-\nwerende oorbellen >coloroff>bent u echter beschermd\nbij langdurige blootstelling aan deze hitte.")
          }

          void entrypoint_303_49() {
/*<280>*/ 	start()
/*<281>*/ 	printf(/* textboxtype: 0, unk: 0, line: 122 */ "<0x10012:0x0000000b>Meester <heroname>, ik neem in de\ndirecte omgeving geen sporen van de\naanwezigheid van <color red<water >coloroff>waar.\n\nNatuurlijk heeft u een grote houder nodig\nvoor al het water, maar u heeft ook het\n<color red<water>coloroff> zelf nodig. <sound 4>Ik raad u aan eerst naar\nwater op zoek te gaan.")
/*<282>*/ 	scene_flags[5 'Eldin Volcano Summit'][115 /* 0xF 08 */] = true;
          }

          void entrypoint_303_15() {
/*< 64>*/ 	start()
/*< 65>*/ 	printf(/* textboxtype: 73, unk: 1, line: 10 */ "<0x10012:0x00000064>Hé! Mijn systeem is niet in staat de\nmeester te volgen, zzrrpt! Je zult moeten\nlopen!")
          }

          void entrypoint_303_32() {
/*<101>*/ 	start()
/*<102>*/ 	printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10005:0x005a0000>Op basis van mijn berekeningen acht ik het 90%\nzeker dat de laatste<color red< heilige vlam >coloroff>hier is.\nIk stel voor naar de vlam op zoek te gaan.")
          }

          void entrypoint_303_16() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf(/* textboxtype: 0, unk: 73, line: 11 */ "<sound 114>Brrzt! Wacht op mij!")
          }

          void entrypoint_303_33() {
/*<103>*/ 	start()
/*<104>*/ 	printf(/* textboxtype: 1, unk: 0, line: 108 */ "Ik heb verscheidene defecten ontdekt in de\nrobot. Ik stel voor de robot te repareren en\ndan terug te komen.")
          }

          void entrypoint_303_50() {
/*<293>*/ 	start()
/*<294>*/ 	printf(/* textboxtype: 1, unk: 0, line: 123 */ "<0x10012:0x0000000b>Attentie, meester <heroname>. De\nrobot wacht onderaan de vulkaan op u.\n\n\nIk raad u aan de lucht in te vliegen en\ndaarna naar de voet van de vulkaan terug\nte keren om zo de robot naar deze locatie te\nleiden.")
/*<295>*/ 	temp_flags[29 /* 0x2 20 */] = true;
          }

          void entrypoint_303_17() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 12 */ "<sound 114>Waar ben je gebleven, brrrzt? Open\nde <color red<kaart >coloroff>met (-) om me te vinden, vrrt.\nEn kom me hier halen, brzzzpt!")
          }

          void entrypoint_303_34() {
/*<105>*/ 	start()
/*<106>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "Doe beter je best dit keer, zzbrrrt!")
/*<199>*/ 	story_flags[723 /* us: 805A9B24 0x08, jp: 805ACDA4 0x08 */] = false;
          }

          void entrypoint_303_00() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "Tijd om te gaan, meester Broekie! Ik kom\ndirect achter u aan, zrrt!")
          }

          void entrypoint_303_18() {
/*< 70>*/ 	start()
/*<196>*/ 	switch (random(3)) {
          	  case 0:
/*< 71>*/ 		printf(/* textboxtype: 73, unk: 1, line: 13 */ "<sound 114>Monsters! Zrrrbt, zou je daar niet eens wat\naan gaan doen?")
          	  case 1:
/*<197>*/ 		printf(/* textboxtype: 0, unk: 73, line: 14 */ "<sound 114>Bzzzrt! Help! GEVAAR!")
          	  case 2:
/*<198>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<sound 114>Monsters, zzzbrt! Mijn systeem heeft een\nzeer lage monstertolerantie!")
          	}
          }

          void entrypoint_303_35() {
/*<107>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "Als ik nog ergens mee ken helpen, dan doe\nik dat graag, zzzzrp! Roep me wanneer je\nmaar wilt, zzzrbtzz!")
          }

          void entrypoint_303_01() {
/*<  2>*/ 	start()
/*<  6>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*<  8>*/ 		printf(/* textboxtype: 0, unk: 73, line: 35 */ "Ik vermoed dat er nog steeds wat\n<color yellow<godinnenblokken >coloroff>op deze berg te vinden\nzijn. Doe je best om ze te vinden.")
          	  case 1:
/*<  3>*/ 		printf(/* textboxtype: 4, unk: 1, line: 34 */ "<0x10009:0x00151b09>O, hoi! Daar ben je weer. Hoe is het\nermee?\n\n\nIk ben hiernaartoe gekomen omdat ik\nhoorde dat er <color yellow<godinnenblokken>coloroff> in dit<color yellow<\n>coloroff>gebied te vinden zijn.\n\nJe hebt er zelf misschien al een paar, maar\nik voel aan m'n knieën dat er hier nog\nmeer verstopt moeten zijn.\n\n<0x10009:0x001817ff>Als je tijd hebt, kun je zelf ook naar ze op\nzoek gaan.")
/*<  9>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_303_19() {
/*< 72>*/ 	start()
/*< 74>*/ 	switch (random(3)) {
          	  case 0:
/*< 73>*/ 		printf(/* textboxtype: 73, unk: 1, line: 16 */ "<sound 114>HÉ! Hoelang moet ik hier nog blijven\nwachten, zzrrt? Druk op (-) en gebruik\nde <color red<kaart >coloroff>om me te vinden, brzzzt!")
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 0, unk: 73, line: 17 */ "<sound 114>Waarom gaan we zo TRAAG, zzzrrrt?\nDruk op (-) om de <color red<kaart >coloroff>te openen en\nmijn locatie te zien!")
          	  case 2:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<sound 114>Brrzpt! Wat krijgen we nou? Kom snel\nhierheen! Druk op (-) om de <color red<kaart>coloroff> te\nopenen en te zien waar ik ben!")
          	}
          }

          void entrypoint_303_36() {
/*<109>*/ 	start()
/*<213>*/ 	switch (story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */]) {
          	  case 0:
/*<215>*/ 		set_camera(2, 0)
/*<216>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 217, 'param3': 32}
/*<217>*/ 		make_actor_do_something(0, 49)
/*<214>*/ 		printf(/* textboxtype: 2, unk: 0, line: 33 */ "")
/*<218>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	  case 1:
/*<116>*/ 		set_camera(2, 0)
/*<209>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 210, 'param3': 32}
/*<210>*/ 		make_actor_do_something(0, 49)
/*<110>*/ 		printf(/* textboxtype: 73, unk: 1, line: 28 */ "<0x10012:0x00000064>Wat is dit, brzzt? Mijn propeller\nexplodeerde bijna bij die afdaling, zrbt...\nMaar dit is waar het water naartoe moest,\ncorrect?\n<pause 10>WAT?! NAAR DE TOP? <pause 15>En dat vertel je\nme nu pas, bzzrt? Ik wil dit ding niet\nopnieuw de lucht in tillen. HET WEEGT\nVEEL, BRZZZT!\nBzzzrt...zrrbt...tzzptrr.<pause 15>")
/*<114>*/ 		set_camera(1, 0)
/*<111>*/ 		printf(/* textboxtype: 0, unk: 73, line: 29 */ "<0x10012:0x00000064>Deze plek, zrrrt, krioelt van de monsters.\nVrrrrrm...")
/*<115>*/ 		set_camera(3, 0)
/*<112>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10012:0x00000064>Ik verpletter vijanden als schroot op de\nstortplaats, zzizat! Echter, ik heb nu mijn\nhanden vol aan dit vat, bzzz...")
/*<113>*/ 		printf(/* textboxtype: 73, unk: 1, line: 31 */ "<0x10012:0x00000064>Hé, meester Broekie! Laten we het spel\n\"bescherm de robot\" spelen, nu we hier\ntoch zijn, bzzrt!\n\nDe regels zijn als volgt: ik volg je naar de\ntop van de vulkaan, zzzrt, en jij beschermt\nmij. Duidelijk? Uitstekend!")
/*<187>*/ 		printf(/* textboxtype: 0, unk: 73, line: 32 */ "<0x10012:0x00000064>Je taak is eenvoudig, zzrrt! Zorg dat die\nmonsters van me afblijven!")
/*<211>*/ 		story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */] = true;
/*<212>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	}
          }

          void entrypoint_303_02() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10012:0x0000000b>Meester, ik heb belangrijke informatie\nvoor u. Dankzij uw verbeterde zwaard bent\nu nu in staat om met hulp van <color red<detectie\n>coloroff><color yellow<godinnenblokken>coloroff> te vinden.\nIk ben zo vrij geweest de <color yellow<godinnenblokken\n>coloroff>op te slaan als doelwitten voor het\n<color red<detecteren>coloroff>. <sound 4>Gebruik deze nieuwe\nvaardigheid naar believen.")
/*<  7>*/ 	story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */] = true;
/*<290>*/ 	open_dowsing_wheel(21)
          }

          void entrypoint_303_37() {
/*<117>*/ 	start()
/*<124>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<125>*/ 		printf(/* textboxtype: 0, unk: 0, line: 59 */ "Je bent wel een pechvogel, zeg, om dat hele\neind hierheen te reizen en dan niet meer\nverder te kunnen.\n\n<0x10009:0x00150dff>Hm... <pause 20>Ik vergeet, volgens mij, nog iets\nbelangrijks...\n\n\nVolgens mij iets dat mijn maat me ooit\nvertelde, maar... <pause 20><0x10009:0x00000004>Hm, nee. Ik kan het me\nniet herinneren!\n\n<0x10009:0x000908ff>Maar goed, water dus. Als je veel water\nnodig hebt, dan kun je beter naar het\n<color red<Floria-meer>coloroff> gaan. Daar vind je wel wat je\nnodig hebt.")
          		flw_141:
/*<141>*/ 		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          		  case 0:
          		  case 1:
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*<118>*/ 		printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x00110801>Moet je zien wie we daar hebben! Ben je\nnog steeds op zoek naar je maat?\n\n\n<0x10009:0x000908ff>Ik ben zelf op zoek naar schatten,\nnatuurlijk. Ik hoorde dat hier ergens\nruïnes verstopt zijn... Vandaar!\n\n<0x10009:0x00150dff>Ik heb tot nu alleen nog niks gevonden.\nHeb jij geen sappige tip voor me?\n[1-]Weet je het zeker?[2-]Ik zeg niks!")
/*<119>*/ 		switch (choice(2)) {
          		  case 0:
/*<120>*/ 			printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x00110900>Je hebt echt een tip voor me? Kom op,\nvertel! We zijn maten, toch?")
          			flw_122:
/*<122>*/ 			printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x0009080e>Wat? Je kunt niet verder door een muur\nvan vuur? Waarom blus je die muur niet\nmet wat water?\n\n<0x10009:0x00150800>Wauw, je hebt zoveel water nodig... Ik\ndenk dat ik het snap. <pause 20>Dat water hier is niet\ngenoeg, hè?\n\n<0x10009:0x000908ff>Weet je, dat beetje water dat we hier\nhebben, komt uit een of ander meer. Dat\nmeer heet het <color red<Floria-meer<sound 4>>coloroff> of zo.\n\n<0x10009:0x001108ff>Een maat van mij is ooit wezen schat-\nzoeken in het <color blue<Faron-woud>coloroff>. Hij vertelde me\ndat hij via het water weer terug thuis kon\nkomen.\n<0x10009:0x000908ff>Hij zei dat het Floria-meer het grootste\nmeer ooit moet zijn. Daar is vast genoeg\nwater om je te helpen met je probleem.")
/*<123>*/ 			story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */] = true;
          			goto flw_141
          		  case 1:
/*<121>*/ 			printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x0014120a>Toe nou, laat me niet in de kou staan! We\nzijn maten, toch? Vertel!")
          			goto flw_122
          		}
          	}
          }

          void entrypoint_303_03() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0, line: 102 */ "Les mijn dorst om het pad te onthullen.")
          }

          void entrypoint_303_20() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 73, unk: 1, line: 19 */ "<sound 114>Dat duurde lang, bzrrt! Het werd tijd dat\nje kwam opdagen.")
          }

          void entrypoint_303_38() {
/*<126>*/ 	start()
/*<135>*/ 	switch (scene_flags[114 /* 0xF 04 */]) {
          	  case 0:
/*<136>*/ 		printf(/* textboxtype: 1, unk: 0, line: 117 */ "<0x10012:0x0000000b>Meester <heroname>, ik wil u op het\nvolgende wijzen: <0x10012:0x00000001>de vlammen die uw\nvoortgang hinderen, zijn nog niet geblust.\n\nZal ik het vat van de <color blue<waterdraak >coloroff>voor u\ninstellen als doelwit om te <color green<detecteren>coloroff>?\n[1-]Ja.[2]Nog niet.")
          		flw_139:
/*<139>*/ 		switch (choice(2)) {
          		  case 0:
/*<128>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<129>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<130>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<131>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<132>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<133>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<289>*/ 			printf(/* textboxtype: 0, unk: 1, line: 118 */ "<0x10012:0x00000005>Attentie, meester, ik heb het vat van de\n<color blue<waterdraak>coloroff> als doelwit ingesteld om met\nuw zwaard te <color green<detecteren>coloroff>.<sound 4>")
/*<288>*/ 			open_dowsing_wheel(13)
          			flw_134:
/*<134>*/ 			scene_flags[5 'Eldin Volcano Summit'][114 /* 0xF 04 */] = true;
/*<137>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
          		  case 1:
/*<140>*/ 			printf(/* textboxtype: 0, unk: 0, line: 119 */ "<0x10012:0x00000005>Zoals u wenst, meester. Ik zal er nog even\nmee wachten.")
          			goto flw_134
          		}
          	  case 1:
/*<127>*/ 		printf(/* textboxtype: 0, unk: 1, line: 109 */ "Attentie, <0x10012:0x0000000b>meester <heroname>. Ik stel\nvoor het advies van de <color blue<Mogma >coloroff>te volgen\nen naar het <color red<Floria-meer >coloroff>te gaan.\n\nVerder geef ik u graag nog meer advies\nover de huidige situatie. Het gaat over de\nhouder voor al dat water...<pause 15> Ik stel voor\ndat u naar de <color red<waterdraak>coloroff> gaat. <sound 4>\nVolgens mijn berekeningen moet het\n<color red<watervat>coloroff> waarin de draak zich terugtrok\nom te herstellen van haar verwondingen,\ngroot genoeg zijn.")
/*<296>*/ 		printf(/* textboxtype: 1, unk: 0, line: 116 */ "Wilt u dat ik de data van eerder nogmaals\nvoor u analyseer? Ik kan er dan voor\nzorgen dat u het vat kunt <color red<detecteren>coloroff>.\n[1-]Ja![2]Nog niet.")
          		goto flw_139
          	}
          }

          void entrypoint_303_04() {
/*< 12>*/ 	start()
/*< 14>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*< 15>*/ 		printf(/* textboxtype: 73, unk: 1, line: 37 */ "<0x10009:0x00151b09>Hoi! Ben jij hier ook op zoek naar de\n<color yellow<godinnenblokken>coloroff>? Is het hier niet een\nbeetje te heet voor jou?\n\n<0x10009:0x00ffff00>De hitte van eerder deed me niet echt iets,\nmaar dit vuur hier is een ander loeiheet\nverhaal.")
          		flw_17:
/*< 17>*/ 		printf(/* textboxtype: 0, unk: 73, line: 38 */ "<0x10009:0x001817ff>Konden we maar iets doen om dit vuur te\ndoven...")
          	  case 1:
/*< 13>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00151b09>Ha, hallo! Daar ben je weer. Hoe is het\nermee?\n\n\n<0x10009:0x00160bff>Ik ben hier naartoe gekomen omdat ik\nhoorde dat er <color yellow<godinnenblokken>coloroff> in dit<color yellow<\n>coloroff>gebied te vinden zijn.\n\n<0x10009:0x00000b00>Ik vermoed dat ze ergens die kant op te\nvinden zijn, maar deze muur van vuur\nblokkeert de doorgang!")
/*< 16>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_17
          	}
          }

          void entrypoint_303_21() {
/*< 79>*/ 	start()
/*< 80>*/ 	printf(/* textboxtype: 0, unk: 73, line: 20 */ "<sound 114>Bzzzort! Waar denk jij mee bezig te zijn?")
          }

          void entrypoint_303_39() {
/*<148>*/ 	start()
/*<150>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*<151>*/ 		printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x000c0405>Als ik op pensioen ga, dan wil ik ergens\nheel hoog wonen, met een prachtig uitzicht.\n\n\n<0x10009:0x000c0dff>Het grootste deel van mijn leven heb ik\nondergronds doorgebracht. Toch kijk ik\nsteeds omhoog naar die pluizige wolken.\n\n<0x10009:0x00090906>Als ik mocht kiezen, zou ik een vogel zijn in\nmijn volgende leven, zodat ik in die blauwe\nlucht kon zweven.")
          	  case 1:
/*<149>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x000b0c07>O, jij weer! Ik herken je gezicht nog van\nlaaaang geleden.\n\n\n<0x10009:0x000b0506>Ghahaha. Hoe bevallen de handschoenen\ndie ik uitgevonden heb? Zijn ze nog steeds\nnaar wens?\n\nGhaha, hoe het met mij gaat? Wat\nvreselijk lief. Eens denken...\n\n\n<0x10009:0x000c0405>Ik heb in mijn leven overal en nergens\nnaar schatten gezocht, en ben nog nooit\nmet lege klauwen thuisgekomen.\n\nIk moet zeggen, ik begin een beetje moe te\nworden van het gegraaf in deze steenoven.\n\n\n<0x10009:0x00090908>Soms stel ik me voor hoe het zou zijn; een\nbestaan zonder schatzoeken. Een rustige\nouwe dag, zonder zorgen of gevaar.")
/*<152>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

          void entrypoint_303_05() {
/*< 23>*/ 	start()
/*< 21>*/ 	switch (scene_flags[106 /* 0xC 04 */]) {
          	  case 0:
/*< 22>*/ 		printf(/* textboxtype: 73, unk: 1, line: 40 */ "<0x10009:0x00181700>Nou, ik weet wel dat als je hier naar buiten\ngaat en rechts aanhoudt, dat je dan een\nheerlijk koele <color red<bron>coloroff> aantreft.\n\nMaar ja, eerlijk gezegd weet ik niet wat we\nnu kunnen doen...")
          	  case 1:
/*< 20>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*< 18>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "\"Les mijn dorst\"? Hmm... Als je deze\nruimte uitgaat en naar rechts gaat, dan\nkom je buiten uit.\n\nEr is daar een <color red<bron>coloroff>. <sound 4>En het water van die\nbron is goddelijk!\n\n\n<0x10009:0x00181705>Maar ik heb geen idee hoe je dat water\nhiernaartoe zou kunnen brengen. Die\nkikkermonsters willen het vast niet voor\nons dragen. <pause 15>Wat denk jij?")
/*< 19>*/ 			scene_flags[5 'Eldin Volcano Summit'][106 /* 0xC 04 */] = true;
          		  case 1:
/*< 24>*/ 			printf(/* textboxtype: 0, unk: 73, line: 38 */ "<0x10009:0x001817ff>Konden we maar iets doen om dit vuur te\ndoven...")
          		}
          	}
          }

          void entrypoint_303_22() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<sound 114>HÉ! Als je zo door blijft gaan, breekt er\nstraks nog wat, zzbrrt!")
          }

          void entrypoint_303_06() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 0, unk: 73, line: 41 */ "<0x10009:0x00171908>Hé, het vuur is gedoofd! We kunnen nu\nweer verdergaan.")
/*<153>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 28, 'param3': 13}
/*< 28>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 0, 'next': 27, 'param3': 14}
/*< 27>*/ 	story_flags[468 /* us: 805A9B0F 0x40, jp: 805ACD8F 0x40 */] = true;
/*<142>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_23() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf(/* textboxtype: 73, unk: 1, line: 22 */ "<0x10012:0x0000000b>Meester, de robot wacht op u op de\nvulkaan. Ik stel voor ernaar terug te gaan.")
          }

          void entrypoint_303_40() {
/*<155>*/ 	start()
/*<157>*/ 	switch (story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */]) {
          	  case 0:
          		flw_165:
/*<165>*/ 		switch (scene_flags[81 /* 0xB 02 */]) {
          		  case 0:
/*<166>*/ 			printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x001a030d>Ouwe baas... Ik zal zorgen dat je trots op\nme kunt zijn, wacht maar af. Ik hoop dat\nje ons nooit vergeet, waar je nu ook bent!")
          		  case 1:
/*<158>*/ 			printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x001c180f>W-W-Wat? De ouwe baas is ergens naartoe\ngelanceerd? Waar is hij dan nu?\n[1-]Hoog in de lucht![2-]Voorbij deze wereld.")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
/*<162>*/ 				printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x10009:0x001a2011>De lucht? Hoog in dat blauwe spul?\n\n\n\nAch... <0x10009:0x001b0407><pause 20>Hij had het er altijd over hoe mooi\nhij de lucht vond.\n\n\nIk durf te wedden dat hij daar nu in de\nwolken naar schatten aan het graven is.")
          				flw_164:
/*<164>*/ 				scene_flags[4 'Eldin Volcano'][81 /* 0xB 02 */] = true;
          			  case 1:
/*<163>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x001a2011>Voorbij deze wereld?\n\n\n\nEh...<0x10009:0x001b2207> Voorbij? <pause 20>Wat bedoel je daarmee?\nBedoel je dat ie weg is? Als in \"komt niet\nmeer terug\"?\n\nUiteindelijk overkomt dat ons allemaal,\nmaar toch... wauw.")
          				goto flw_164
          			}
          		}
          	  case 1:
/*<186>*/ 		switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          		  case 0:
          			goto flw_165
          		  case 1:
/*<160>*/ 			switch (scene_flags[81 /* 0xB 02 */]) {
          			  case 0:
/*<176>*/ 				switch (zone_temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<177>*/ 					printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x001b2207>Wat een held is hij! Heen en weer reizen\ntussen hier en de lucht, ongelofelijk!")
          				  case 1:
/*<174>*/ 					printf(/* textboxtype: 0, unk: 0, line: 71 */ "<0x10009:0x001a2011>Wacht, wat bedoel je \"hij is terug\"?\n\n\n\n<0x10009:0x001b2207>Hij kan heen en weer reizen tussen hier en\nde lucht? Die baas is echt een kei, ik zeg\nhet je.")
/*<175>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				}
          			  case 1:
/*<167>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<172>*/ 					switch (zone_temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*<173>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000015>Een rustige ouwe dag dus? Je helpt die\nouwe baas toch wel zijn droom waar te\nmaken?")
          					  case 1:
/*<286>*/ 						switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          						  case 0:
/*<170>*/ 							printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x001a2001>Hé, maat, heb je met die ouwe baas\ngesproken? Hoe gaat het met hem?\n\n\n<0x10008:0x01cd><0x10009:0x001a2011>Wat? Een rustige ouwe dag?\n\n\n\nEh...<0x10009:0x000000ff> Wat bedoel jij nu weer? Is \"rustige\nouwe dag\" een soort code voor \"een enorme\nschat\"?\n\n<0x10009:0x001b1e15>Ik zal je zeggen dat ik daar nog nooit van\ngehoord heb.\n\n\nMaar als dat is waar die ouwe baas je hulp\nvoor nodig heeft, dan moet je hem zeker\nhelpen!")
          							flw_171:
/*<171>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
          						  case 1:
/*<287>*/ 							printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x001b2201>Huh?! Als dat mijn maat niet is! Hoe is\nhet ermee, ouwe makker?\n\n\nEn met mij? M'n reukzin is net zo scherp\nals m'n klauwen en op schatten ingesteld!\n\n\n<0x10009:0x00000002>Al ben ik wel een beetje bezorgd. Die ouwe\nbaas, <color blue<Gaud>coloroff>, gedraagt zich een beetje\nvreemd sinds hij de ruïnes gevonden heeft.\n\n<0x10009:0x001b22ff>Je hebt al met hem gesproken, toch? Hoe\ngaat het met hem?\n\n\n<0x10008:0x01cd><0x10009:0x001a2011>Wat? Een rustige ouwe dag?\n\n\n\nEh...<0x10009:0x000000ff> Wat bedoel jij nu weer? Is \"rustige\nouwe dag\" een soort code voor \"een enorme\nschat\"?\n\n<0x10009:0x001b1e15>Ik zal je zeggen dat ik daar nog nooit van\ngehoord heb. En ik weet alles over schatten.\n\n\nMaar je helpt die ouwe baas wel, toch? Als\ndat is wat hij wil.")
/*<292>*/ 							story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          							goto flw_171
          						}
          					}
          				  case 1:
/*<168>*/ 					switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          					  case 0:
/*<169>*/ 						printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x001b050a><color blue<Gaud>coloroff> loopt daar ergens wat rond te\nwandelen. Praat eens even met hem voor\nme, oké?\n\nEen ouwe bekende kan hem misschien wat\nopvrolijken.")
          					  case 1:
/*<156>*/ 						printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10009:0x001b2201>Huh?! Als dat mijn maat niet is! Hoe is\nhet ermee, ouwe makker?\n\n\nEn met mij? M'n reukzin is net zo scherp\nals m'n klauwen en op schatten ingesteld!\nYep, het gaat dus geweldig!\n\n<0x10009:0x00000002>Al ben ik wel een beetje bezorgd. Die ouwe\nbaas, <color blue<Gaud>coloroff>, gedraagt zich een beetje\nvreemd sinds hij de ruïnes gevonden heeft.\n\n<0x10009:0x001b230a>Kun je voor mij naar<color blue< Gaud>coloroff> toe gaan? Hij\nstaat daarzo ergens en ik weet zeker dat\nhij blij zal zijn om je weer te zien.")
/*<159>*/ 						story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_303_07() {
/*< 29>*/ 	start()
/*< 31>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
          		flw_32:
/*< 32>*/ 		printf(/* textboxtype: 73, unk: 1, line: 43 */ "Je zou zeker niet nog een keer een brandje\nvoor ons kunnen blussen?")
          	  case 1:
/*< 30>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00161e56>Nog meer vuur... Hopelijk houd ik hier\ngeen burn-out aan over...")
/*< 33>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_32
          	}
          }

          void entrypoint_303_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 0, unk: 73, line: 23 */ "<0x10012:0x00000064>Waar hing jij uit, zzzrbt! Breng me\nhelemaal naar boven! Snel, brrzzt!")
          }

          void entrypoint_303_41() {
/*<178>*/ 	start()
/*<180>*/ 	switch (zone_temp_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<181>*/ 		printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10009:0x001b2215>Weet je wat het is met <color blue<Plati>coloroff>? Hij kan\nalleen zijn schouders eronder zetten\nwanneer hij op jacht is naar schatten.")
          	  case 1:
/*<179>*/ 		printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x001a200f>Hé, jij bent het! Dat type van laatst...<pause 15>\n\n\n\n<0x10009:0x001b2209>Hehehe... Ja, dat was niet mijn beste\nmoment.\n\n\nMaar alles is nu weer goed tussen ons, want\nmijn maat is erachter gekomen wat er\nmisgegaan is.\n\n<0x10009:0x001b1eff>Hij is zelf ook een keer gevangen genomen.\nDus hij en ik staan quitte. Niks om je\nzorgen over te maken.\n\n<0x10009:0x001a0a12>Maar, eh, heb je <color blue<Plati>coloroff> hier ergens gezien?\n[1-]Hij was daar ergens.[2-]Nee, sorry.")
/*<183>*/ 		switch (choice(2)) {
          		  case 0:
/*<184>*/ 			printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x001b0a12>O, echt? Super, dan is alles in orde.\n\n\n\nIk begon me gewoon een beetje zorgen te\nmaken, weet je...\n\n\n<0x10009:0x001b160f>Ik dacht: die heeft zich vast weer ergens in\nde nesten gewerkt.\n\n\n<0x10009:0x001b16ff>Eerlijk waar, hij trekt problemen aan zoals\neen magneet ijzer aantrekt!")
          			flw_182:
/*<182>*/ 			zone_temp_flags[5 /* 0x1 20 */] = true;
          		  case 1:
/*<185>*/ 			printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x001b2207>Volgens mij zit zijn kop vol zand... <pause 20>Hij is\nvast weer ergens alleen op zoek naar\nschatten.\n\nHij hoort niet alleen op schattenjacht te\ngaan! Het is hier gevaarlijk.\n\n\n<0x10009:0x001b0009>Wat moet ik toch met hem? Dat krijg je\nervan als je een <color blue<schatzoeker >coloroff>bent. Iemand\ndie van geen ophouden weet.\n\nAls je <color blue<Plati>coloroff> tegenkomt, doe hem dan de\ngroeten voor me, oké?")
          			goto flw_182
          		}
          	}
          }

          void entrypoint_303_08() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 0, unk: 73, line: 44 */ "<0x10009:0x00171908>Mooi gedaan, hoor! Zo komen we er wel!")
/*<154>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 37, 'param3': 13}
/*< 37>*/ 	{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 0, 'next': 36, 'param3': 14}
/*< 36>*/ 	story_flags[469 /* us: 805A9B0E 0x02, jp: 805ACD8E 0x02 */] = true;
/*<143>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_25() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10012:0x00000064>Laat me hier niet achter! Druk op (-) om\nde <color red<kaart >coloroff>te openen en haal me hier weg,\nzzrrt!<0x10011:0x02cd>")
          }

          void entrypoint_303_42() {
/*<188>*/ 	start()
/*<190>*/ 	switch (scene_flags[82 /* 0xB 04 */]) {
          	  case 0:
/*<191>*/ 		printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10009:0x000d0509>Goed. Waar zal ik nu eens op jacht gaan\nnaar schatten?")
          	  case 1:
/*<189>*/ 		printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10008:0x01cd><0x10009:0x000e1008>Hé, maat! Je leeft nog!\n\n\n\n<0x10009:0x0011110b>En zo te zien heb je ook al je spullen weer\nterug. Ik wist wel dat je het kon.\n\n\nDus...<pause 20> heb je nog schatten gevonden?\n[1-]Kisten vol![2-]Helemaal niks...")
/*<192>*/ 		switch (choice(2)) {
          		  case 0:
/*<193>*/ 			printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x000e0505>Echt waar? Aaah, ik ben dol op schatten!\n\n\n\n<0x10009:0x000e1f0a>Maar de wereld is groot, weet je? Er zijn\nvast nog genoeg schatten over die ik ergens\nweg kan graaien.\n\nJa, ik ga hier niet op mijn staart zitten\nwachten tot de schatten in m'n schoot\ngeworpen worden! De volgende keer ga ik\nmet alle schatten naar huis! Echt!")
          			flw_195:
/*<195>*/ 			scene_flags[4 'Eldin Volcano'][82 /* 0xB 04 */] = true;
          		  case 1:
/*<194>*/ 			printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x000e040a>Wat? Je hebt nauwelijks iets kunnen\nvinden? Hè, dat is balen, maat.\n\n\n<0x10009:0x000f0508>Maar nu niet treurig zijn! De wereld is\nenorm en zit vol met schatten die erop\nwachten gevonden te worden!")
          			goto flw_195
          		}
          	}
          }

          void entrypoint_303_09() {
/*< 38>*/ 	start()
/*< 45>*/ 	switch (story_flags[173 /* us: 805A9AE2 0x10, jp: 805ACD62 0x10 */]) {
          	  case 0:
/*< 52>*/ 		switch (scene_flags[111 /* 0xC 80 */]) {
          		  case 0:
/*< 53>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "Ik ga ergens anders mijn onderzoek\nvoortzetten. Tot ziens!")
          		  case 1:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00181702>Nou, hoe ging het? Wat heb je allemaal\ngevonden?\n[1-]Valstrikken![2-]Monsters!")
/*< 47>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_49:
/*< 49>*/ 				switch (story_flags[248 /* us: 805A9AF7 0x04, jp: 805ACD77 0x04 */]) {
          				  case 0:
/*< 50>*/ 					printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x00161e56>Echt waar? Hm... Dan laat ik het\nontdekken vanaf hier aan jou over.\n\n\n<0x10009:0x00080bff>Ik ga ergens anders heen om mijn\nonderzoek voort te zetten. Spreek me\nvooral aan als je me weer tegenkomt.")
          					flw_51:
/*< 51>*/ 					scene_flags[5 'Eldin Volcano Summit'][111 /* 0xC 80 */] = true;
          				  case 1:
/*< 48>*/ 					printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00161e56>Echt waar? Hm... Dan laat ik het\nontdekken vanaf hier aan jou over.\n\n\n<0x10009:0x00080bff>Trouwens, ik vermoed dat er hier in de\nbuurt een <color yellow<godinnenblok >coloroff>te vinden is.\n\n\nEn mijn vermoedens blijken vaak te\nkloppen, dus kijk maar eens goed rond.")
          					goto flw_51
          				}
          			  case 1:
          				goto flw_49
          			}
          		}
          	  case 1:
/*< 43>*/ 		switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          		  case 0:
/*< 44>*/ 			printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x00171908>Jij bent me er eentje! Is er iets dat je niet\nkunt? Grahahaha!\n\n\n<0x10009:0x00080bff>Ga jij maar vast voorop! Je hebt je plek\nvooraan de expeditie verdiend.")
          		  case 1:
/*< 40>*/ 			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          			  case 0:
/*<284>*/ 				switch (temp_flags[15 /* 0x0 80 */]) {
          				  case 0:
/*<285>*/ 					printf(/* textboxtype: 73, unk: 1, line: 49 */ "<0x10009:0x00181707>Veel<color red< water >coloroff>dus en <color red<iets om het in te\nverplaatsen>coloroff>... Weet jij misschien waar we\nzoiets kunnen vinden?")
          				  case 1:
/*< 41>*/ 					printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00181707>Hoe gaan we deze driftkikker genoeg\n<color red<water>coloroff> brengen? We hebben eerst een <color red<grote\nhouder>coloroff> voor al dat water nodig.\n\n<0x10009:0x00161eff>Als avonturier heb jij wel voor hetere\nvuren gestaan, toch? Wat doen we nu?")
/*<283>*/ 					temp_flags[15 /* 0x0 80 */] = true;
          				}
          			  case 1:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 45 */ "Moet je dit hier zien! Zeer, zeer\ninteressant... Onze eerste ontmoeting met\nhet onbekende.\n\n<0x10009:0x00171908>Dit hier heeft volgens mij niets met de\n<color yellow<godinnenblokken >coloroff>te maken! Er is hier vast\niets <color red<superbelangrijks >coloroff>verborgen!")
/*<144>*/ 				set_camera(4, 0)
/*<146>*/ 				printf(/* textboxtype: 73, unk: 1, line: 46 */ "<0x10009:0x00161eff>Je zult met heel wat meer water moeten\nkomen om de dorst van die kikker te\nlessen. Voor zo'n blaaskaak zijn <color yellow<flesjes >coloroff>niet\ngenoeg, denk ik.")
/*<145>*/ 				set_camera(-1, 0)
/*<147>*/ 				printf(/* textboxtype: 0, unk: 73, line: 47 */ "<0x10009:0x00000007>Hm...<pause 15><0x10009:0x00181700> Je hebt een<color red< grote houder>coloroff> nodig om\ngenoeg water te dragen voor deze taak.\n<sound 4>Heb je zoiets bij je?\n\n<0x10009:0x00161eff>Bovendien, waar ga je zoveel <color red<water>coloroff>\neigenlijk vandaan halen? Hoe gaan we dit\nnu weer voor elkaar krijgen...")
/*< 42>*/ 				story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_303_26() {
/*< 89>*/ 	start()
/*< 90>*/ 	printf(/* textboxtype: 73, unk: 1, line: 25 */ "Wil je dat ik hier water op spuit? Komt in\norde, zzzbrt!")
          }

          void entrypoint_303_43() {
/*<201>*/ 	start()
/*<202>*/ 	printf(/* textboxtype: 1, unk: 0, line: 120 */ "We zijn aangekomen bij de Eldin-vulkaan.\n\n\n\nGebruik uw zwaard om de toegangspoort\nvan de proef te <color red<detecteren>coloroff>. Om de heilige\nvlam te vinden moet u de proef met succes\nvolbrengen.")
          }

