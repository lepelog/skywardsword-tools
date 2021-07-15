          void entrypoint_303_27() {
/*< 91>*/ 	start()
/*< 92>*/ 	printf("Zag u dat, meesteres Fi?")
          }

          void entrypoint_303_44() {
/*<203>*/ 	start()
/*<204>*/ 	printf("Wauw, het is hier wel heet, brrzrrt! Als ik\ngeen hightech robot was, dan zou ik\npeentjes zweten, zzbrt!")
          }

          void entrypoint_303_10() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf("\x0E\x01\x0B\x04\x00rBzzzrpt! Waar ga jij naartoe? Ik wacht\nhier wel tot je klaar bent met wat dat ook\nmag wezen, zzzt, maar schiet op!")
          }

          void entrypoint_303_28() {
/*< 93>*/ 	start()
/*< 94>*/ 	printf("Als ik nog ergens mee ken helpen, dan doe\nik dat graag, zzzzrp! Roep me wanneer je\nmaar wilt, zzzrbtzz!")
          }

          void entrypoint_303_45() {
/*<205>*/ 	start()
/*<206>*/ 	printf("Hé! We gaan verkeerd, zrrt! Misschien\nmoeten we even stoppen om de weg te\nvragen?")
          }

          void entrypoint_303_11() {
/*< 56>*/ 	start()
/*< 57>*/ 	printf("\x0E\x01\x0B\x04\x00rZzzbt! Ik zit in de problemen! Kom me\nsnel even helpen, bzzzzat!")
          }

          void entrypoint_303_29() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf("De vlammen die uw pad blokkeerden, zijn\nvolledig gedoofd. Ik stel voor verder te\ngaan.")
/*<200>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<291>*/ 	story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = false;
          }

          void entrypoint_303_46() {
/*<207>*/ 	start()
/*<208>*/ 	printf("Zijn we er al? Sneller graag, we hebben\nhaast, brzzt!")
          }

          void entrypoint_303_12() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf("\x0E\x01\x0B\x04\x00rHÉ! Brzzpt! Schiet op! HELP!")
          }

          void entrypoint_303_47() {
/*<219>*/ 	start()
/*<220>*/ 	printf("Welkom terug, \x0E\x01\x12\x04\x00\x04meester.\n\n\n\nMijn aanname is dat deze nieuwe <y<vuur-\nwerende oorbellen >>u in staat zullen stellen\nnaar extreem hete plekken af te reizen.\n\nIk raad u aan verder te zoeken naar de\n<r<heilige vlam>>.")
          }

          void entrypoint_303_13() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf("\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x2CDZZRRRPT!")
          }

          void entrypoint_303_30() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf("\x0E\x01\x05\x04K\x00\x0E\x01\x12\x04\x00\x0BIk heb een update over uw voortgang,\nmeester. We naderen nu de krater op de\ntop van de <b<Eldin-vulkaan>>.")
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
/*<271>*/ 					printf("\x0E\x01\x09\x04\x11\x801Hé, maat. Heb je die <r<types met de grote\nschilden >>er al van langs gegeven?\n\n\n\x0E\x01\x09\x04ÿ\xFF00Dit is alles dat je moet onthouden: hak\nhouten schilden, weer speeraanvallen af en\nklauter over schilden alsof het muren zijn.\n\nAls je dat allemaal onthoudt, dan komt het\nhelemaal goed. Beloofd!")
/*<272>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
/*<263>*/ 					printf("Hé, maat. Je hebt nog steeds moeite met\ndie <r<types met de grote schilden>>, toch?\n\n\n\x0E\x01\x09\x04\x15\x80BIk heb nog <r<een laatste geheime tip >>die je\nleven een stuk makkelijker kan maken.")
/*<264>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 256, 'param3': 12}
/*<256>*/ 					printf("Je weet ondertussen hoe dit werkt, hè?\n\x0E\x01\x09\x04ÿ\xFF09Voor de info wil ik R-<pause0A>U-<pause0A>P-<pause0A>E-<pause0A>E-<pause0A>S.<pause0A> Voor\nprecies <r<50 rupees>> geef ik je de tip.\n[1]Oké![2-]Nee, bedankt.")
          					flw_245:
/*<245>*/ 					switch (choice(2)) {
          					  case 0:
/*<247>*/ 						check_item_flag(501, 50)
/*<248>*/ 						switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 84}) {
          						  case 0:
/*<269>*/ 							rupees += -50;
/*<250>*/ 							printf("\x0E\x01\x09\x04\x11\x80BJa! Jij houdt ervan met geld te strooien,\nhè? Ik maak me er, eerlijk gezegd, een\nbeetje zorgen om.\n\n\x0E\x01\x09\x04\x14\x1200Kijk goed uit, maat. Laat je niet flessen\ndoor oplichters! Die plukken je helemaal\nkaal als ze de kans krijgen.")
/*<251>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<265>*/ 							printf("\x0E\x01\x09\x04ÿ\xFF00Goed dan, dit is mijn laatste geheime tip.\nDe schilden van die griezels zijn enorm,\ntoch? Als een muur?\n\n\x0E\x01\x09\x04\x11\x800Dus behandel die schilden als een muur en\nren er eens keihard tegenaan!\n\n\n\x0E\x01\x09\x04ÿ\xFF09Ik ga je niet verklappen wat er dan\ngebeurt, maar ik raad het ten zeerste aan!\nIk denk dat je het zult waarderen!\n\n\x0E\x01\x09\x04\x11\x800Geef ze er van langs, maat! En bedankt\nvoor je klandizie.")
/*<266>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<275>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						  case 1:
/*<249>*/ 							printf("\x0E\x01\x09\x04\x14\x1215Wat denk je hier te bereiken, maat? Je\nhebt niet genoeg rupees bij je!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Kom maar terug als je ergens <r<50 rupees\n>>vandaan hebt weten te halen.")
/*<274>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					  case 1:
/*<246>*/ 						printf("\x0E\x01\x09\x04\x14\x1215Waarom ben je opeens zo gierig, zeg? <r<50\nrupees>> stelt toch niks voor?\n\n\n\x0E\x01\x09\x04ÿ\xFF00Pfft. Laat maar. Kom maar langs als je\nvan gedachten verandert.")
/*<273>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				}
          			  case 1:
/*<261>*/ 				printf("Hé, maat. Heb je nog steeds moeite met die\n<r<types met grote schilden>>?\n\n\n\n\x0E\x01\x09\x04\x15\x80BIk heb nog <r<meer geheime informatie >>die je\ndaar wel bij kan helpen.")
/*<262>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 255, 'param3': 12}
/*<255>*/ 				printf("Maar ik moet ook ergens van leven. \x0E\x01\x09\x04ÿ\xFF09Dus ik\nwil je R-<pause0A>U-<pause0A>P-<pause0A>E-<pause0A>E-<pause0A>S.<pause0A> <r<30 rupees >>voor nog een\ngeheim.\n[1]Oké![2-]Nee, bedankt.")
          				flw_234:
/*<234>*/ 				switch (choice(2)) {
          				  case 0:
/*<236>*/ 					check_item_flag(501, 30)
/*<237>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 78}) {
          					  case 0:
/*<268>*/ 						rupees += -30;
/*<239>*/ 						printf("\x0E\x01\x09\x04\x11\x808Je bent mijn favoriete klant, wist je dat?\nDie info is gratis. En nu je tip:\n\n\n\x0E\x01\x09\x04ÿ\xFF00Die schurken proberen je altijd aan hun\nmonstersperen te rijgen, toch? Als ze zo'n\nspeer in je buik weten te prikken, dan ben\nje er geweest.\nMaar als je het goed timet kun je hun\naanvallen<r< afweren >>en... <pause0F>\x0E\x01\x09\x04\x11\x800Ach, je weet wel\nwat er dan gebeurt.<pause0F>\n[1]Goeie info![2]Dat wist ik al.")
/*<241>*/ 						scene_flags[4 'Eldin Volcano'][113 /* 0xF 02 */] = true;
/*<242>*/ 						switch (choice(2)) {
          						  case 0:
/*<244>*/ 							printf("\x0E\x01\x09\x04\x11\x80BReken maar dat dat een goeie tip is! Ik heb\ner mijn leven voor geriskeerd.\n\n\n\x0E\x01\x09\x04ÿ\xFF00En zo heb ik nog wel wat tips voor je. Mijn\nvolgende tip is echt de kers op de geheime\nslagroomtaart. Hij kost maar <pause14><r<50 rupees>>.\n[1]Kom maar op![2-]Nee, dank je.")
          							goto flw_245
          						  case 1:
/*<243>*/ 							printf("\x0E\x01\x09\x04\x12\xE04O ja? Prima, maat. Er ontgaat jou niet\nveel voor een... eh... wat je ook bent.\n\n\n\x0E\x01\x09\x04ÿ\xFF00Gelukkig heb ik de beste tip voor het laatst\nbewaard! Dit is echt de ultieme tip. Hij\nkost slechts <r<50 rupees>>!\n[1]Vooruit![2-]Nee, dank je.")
          							goto flw_245
          						}
          					  case 1:
/*<238>*/ 						printf("\x0E\x01\x09\x04\x14\x1215Wat moet je, maat? Je hebt niet genoeg\nrupees, dus krijg je ook helemaal niks van\nme, nada, noppes.\n\n\x0E\x01\x09\x04ÿ\xFF00Kom maar terug als je <r<30 rupees >>voor me\nhebt.")
/*<276>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				  case 1:
/*<235>*/ 					printf("\x0E\x01\x09\x04\x14\x1215Waarom zo gierig, zeg? <r<30 rupees>> is een\nkoopje!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Maar goed, wat jij wil. Kom maar terug\nals je van gedachten verandert.")
/*<277>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			}
          		  case 1:
/*<259>*/ 			printf("Hé, maat. Heb je nog steeds moeite met die\n<r<types met grote schilden>>?\n\n\n\x0E\x01\x09\x04\x15\x80BIk heb wat<r< geheime informatie>> die je daar\nwel bij kan helpen, vermoed ik.")
/*<260>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 253, 'param3': 12}
/*<253>*/ 			printf("Maar voor niks komt de zon op, toch? \x0E\x01\x09\x04ÿ\xFF09Ik\nwil R-<pause0A>U-<pause0A>P-<pause0A>E-<pause0A>E-<pause0A>S.<pause0A> Ik wil <r<30 rupees >>van je\nom precies te zijn.\n[1]Oké![2-]Nee, bedankt.")
          			flw_225:
/*<225>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				check_item_flag(501, 30)
/*<228>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 72}) {
          				  case 0:
/*<267>*/ 					rupees += -30;
/*<230>*/ 					printf("\x0E\x01\x09\x04\x11\x809Heel erg bedankt, maat! Luister! Dit\nvertel ik alleen aan jou. Dus vertel dit niet\ndoor aan iedereen die je tegenkomt.\n\n\x0E\x01\x09\x04ÿ\xFF00Goed... <pause14>De schilden die die grote types\nrondzeulen? Die kun je kapot hakken met\nje zwaard! Zie je wel? Is dat niet de beste\nkwaliteit informatie ooit?\nMaar kijk uit voor die griezels met ijzeren\nschilden, daar kun je met je zwaard niet\ndoorheen hakken.\n[1]Oké! [2]Wat? Dat was het?")
/*<240>*/ 					scene_flags[4 'Eldin Volcano'][112 /* 0xF 01 */] = true;
/*<231>*/ 					switch (choice(2)) {
          					  case 0:
/*<233>*/ 						printf("\x0E\x01\x09\x04\x15\x90BHehehe... En ik heb nog meer sappige\ninformatie en weetjes voor je, als je\ninteresse hebt.\n\n\x0E\x01\x09\x04ÿ\xFF00Dat kost je wel wat... <pause14>Nog eens <r<30 rupees>>.\n[1]Vertel! [2-]Nee, dank je.")
          						goto flw_234
          					  case 1:
/*<232>*/ 						printf("Hé! Kijk me niet zo raar aan, oké? Met je\n\"ik-weet-het-allemaal-al\"-gezicht.\n\n\n\x0E\x01\x09\x04\x15\x809Dat laatste weetje kan niet tippen aan de\ngouden tips die ik nog heb... Wat dacht je\nvan nog een sappig weetje voor nog eens <r<30\nrupees>>?[1]Goed![2-]Nee.")
          						goto flw_234
          					}
          				  case 1:
/*<229>*/ 					printf("\x0E\x01\x09\x04\x14\x1215Wat moet je, maat? Je hebt niet genoeg\nrupees, dus krijg je ook helemaal niks van\nme, nada, noppes.\n\n\x0E\x01\x09\x04ÿ\xFF00Kom maar terug als je <r<30 rupees >>voor me\nhebt.")
/*<278>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			  case 1:
/*<226>*/ 				printf("\x0E\x01\x09\x04\x14\x1215Waarom zo gierig, zeg? <r<30 rupees>> is een\nkoopje!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Maar goed, wat jij wil. Kom maar terug\nals je van gedachten verandert.")
/*<279>*/ 				zone_temp_flags[7 /* 0x1 80 */] = true;
          			}
          		}
          	  case 1:
/*<222>*/ 		printf("\x0E\x01\x09\x04\x00\x01Hé, maat. Neem je even pauze? Je bent\nzeker moe van al dat vechten met monsters,\nhè?\n\n\x0E\x01\x09\x04\x11\x900Als ze net zo taai zijn als dat ze lelijk zijn,\nmaken die griezels met hun <r<grote schilden\n>>je vast het leven zuur?\n\n\x0E\x01\x09\x04\x15\x80BMaar goed, ik heb dus wat<r< geheime info\n>>die je leven een stuk makkelijker zal\nmaken.")
/*<258>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 257, 'param3': 12}
/*<257>*/ 		printf("\x0E\x01\x09\x04ÿ\xFF09Natuurlijk wil ik daar wel iets voor terug\nhebben. Het gaat je wat rupees kosten,\nkeiharde R-<pause0A>U-<pause0A>P-<pause0A>E-<pause0A>E-<pause0A>S.\n\nVoor maar <r<30 rupees>> is de info van jou.\nWat zeg je ervan?\n[1]Kom maar op! [2-]Nee.")
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][108 /* 0xC 10 */] = true;
          		goto flw_225
          	}
          }

          void entrypoint_303_14() {
/*< 62>*/ 	start()
/*< 63>*/ 	printf("\x0E\x01\x05\x04Z\x00Zzst-S-Storing! Zzrrt! Ernstige... zzrrggt...\nschade... bzzzz...")
          }

          void entrypoint_303_31() {
/*< 99>*/ 	start()
/*<100>*/ 	printf("\x0E\x01\x05\x04Z\x00Ik heb in dit gebied extreem hoge\ntemperaturen gemeten. Met uw<y< vuur-\nwerende oorbellen >>bent u echter beschermd\nbij langdurige blootstelling aan deze hitte.")
          }

          void entrypoint_303_49() {
/*<280>*/ 	start()
/*<281>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMeester Link, ik neem in de\ndirecte omgeving geen sporen van de\naanwezigheid van <r<water >>waar.\n\nNatuurlijk heeft u een grote houder nodig\nvoor al het water, maar u heeft ook het\n<r<water>> zelf nodig. <pling>Ik raad u aan eerst naar\nwater op zoek te gaan.")
/*<282>*/ 	scene_flags[5 'Eldin Volcano Summit'][115 /* 0xF 08 */] = true;
          }

          void entrypoint_303_15() {
/*< 64>*/ 	start()
/*< 65>*/ 	printf("\x0E\x01\x12\x04\x00dHé! Mijn systeem is niet in staat de\nmeester te volgen, zzrrpt! Je zult moeten\nlopen!")
          }

          void entrypoint_303_32() {
/*<101>*/ 	start()
/*<102>*/ 	printf("\x0E\x01\x05\x04Z\x00Op basis van mijn berekeningen acht ik het 90%\nzeker dat de laatste<r< heilige vlam >>hier is.\nIk stel voor naar de vlam op zoek te gaan.")
          }

          void entrypoint_303_16() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf("\x0E\x01\x0B\x04\x00rBrrzt! Wacht op mij!")
          }

          void entrypoint_303_33() {
/*<103>*/ 	start()
/*<104>*/ 	printf("Ik heb verscheidene defecten ontdekt in de\nrobot. Ik stel voor de robot te repareren en\ndan terug te komen.")
          }

          void entrypoint_303_50() {
/*<293>*/ 	start()
/*<294>*/ 	printf("\x0E\x01\x12\x04\x00\x0BAttentie, meester Link. De\nrobot wacht onderaan de vulkaan op u.\n\n\nIk raad u aan de lucht in te vliegen en\ndaarna naar de voet van de vulkaan terug\nte keren om zo de robot naar deze locatie te\nleiden.")
/*<295>*/ 	temp_flags[29 /* 0x2 20 */] = true;
          }

          void entrypoint_303_17() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf("\x0E\x01\x0B\x04\x00rWaar ben je gebleven, brrrzt? Open\nde <r<kaart >>met \x0E\x02\x04\x02\x2CD om me te vinden, vrrt.\nEn kom me hier halen, brzzzpt!")
          }

          void entrypoint_303_34() {
/*<105>*/ 	start()
/*<106>*/ 	printf("Doe beter je best dit keer, zzbrrrt!")
/*<199>*/ 	story_flags[723 /* us: 805A9B24 0x08, jp: 805ACDA4 0x08 */] = false;
          }

          void entrypoint_303_00() {
          	start()
/*<  1>*/ 	printf("Tijd om te gaan, meester Broekie! Ik kom\ndirect achter u aan, zrrt!")
          }

          void entrypoint_303_18() {
/*< 70>*/ 	start()
/*<196>*/ 	switch (random(3)) {
          	  case 0:
/*< 71>*/ 		printf("\x0E\x01\x0B\x04\x00rMonsters! Zrrrbt, zou je daar niet eens wat\naan gaan doen?")
          	  case 1:
/*<197>*/ 		printf("\x0E\x01\x0B\x04\x00rBzzzrt! Help! GEVAAR!")
          	  case 2:
/*<198>*/ 		printf("\x0E\x01\x0B\x04\x00rMonsters, zzzbrt! Mijn systeem heeft een\nzeer lage monstertolerantie!")
          	}
          }

          void entrypoint_303_35() {
/*<107>*/ 	start()
/*<108>*/ 	printf("Als ik nog ergens mee ken helpen, dan doe\nik dat graag, zzzzrp! Roep me wanneer je\nmaar wilt, zzzrbtzz!")
          }

          void entrypoint_303_01() {
/*<  2>*/ 	start()
/*<  6>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*<  8>*/ 		printf("Ik vermoed dat er nog steeds wat\n<y<godinnenblokken >>op deze berg te vinden\nzijn. Doe je best om ze te vinden.")
          	  case 1:
/*<  3>*/ 		printf("\x0E\x01\x09\x04\x15\x1B09O, hoi! Daar ben je weer. Hoe is het\nermee?\n\n\nIk ben hiernaartoe gekomen omdat ik\nhoorde dat er <y<godinnenblokken>> in dit<y<\n>>gebied te vinden zijn.\n\nJe hebt er zelf misschien al een paar, maar\nik voel aan m'n knieën dat er hier nog\nmeer verstopt moeten zijn.\n\n\x0E\x01\x09\x04\x18\x17FFAls je tijd hebt, kun je zelf ook naar ze op\nzoek gaan.")
/*<  9>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_303_19() {
/*< 72>*/ 	start()
/*< 74>*/ 	switch (random(3)) {
          	  case 0:
/*< 73>*/ 		printf("\x0E\x01\x0B\x04\x00rHÉ! Hoelang moet ik hier nog blijven\nwachten, zzrrt? Druk op \x0E\x02\x04\x02\x2CD en gebruik\nde <r<kaart >>om me te vinden, brzzzt!")
          	  case 1:
/*< 75>*/ 		printf("\x0E\x01\x0B\x04\x00rWaarom gaan we zo TRAAG, zzzrrrt?\nDruk op \x0E\x02\x04\x02\x2CD om de <r<kaart >>te openen en\nmijn locatie te zien!")
          	  case 2:
/*< 76>*/ 		printf("\x0E\x01\x0B\x04\x00rBrrzpt! Wat krijgen we nou? Kom snel\nhierheen! Druk op \x0E\x02\x04\x02\x2CD om de <r<kaart>> te\nopenen en te zien waar ik ben!")
          	}
          }

          void entrypoint_303_36() {
/*<109>*/ 	start()
/*<213>*/ 	switch (story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */]) {
          	  case 0:
/*<215>*/ 		set_camera(2, 0)
/*<216>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 217, 'param3': 32}
/*<217>*/ 		make_actor_do_something(0, 49)
/*<214>*/ 		printf("")
/*<218>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	  case 1:
/*<116>*/ 		set_camera(2, 0)
/*<209>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 210, 'param3': 32}
/*<210>*/ 		make_actor_do_something(0, 49)
/*<110>*/ 		printf("\x0E\x01\x12\x04\x00dWat is dit, brzzt? Mijn propeller\nexplodeerde bijna bij die afdaling, zrbt...\nMaar dit is waar het water naartoe moest,\ncorrect?\n<pause0A>WAT?! NAAR DE TOP? <pause0F>En dat vertel je\nme nu pas, bzzrt? Ik wil dit ding niet\nopnieuw de lucht in tillen. HET WEEGT\nVEEL, BRZZZT!\nBzzzrt...zrrbt...tzzptrr.<pause0F>")
/*<114>*/ 		set_camera(1, 0)
/*<111>*/ 		printf("\x0E\x01\x12\x04\x00dDeze plek, zrrrt, krioelt van de monsters.\nVrrrrrm...")
/*<115>*/ 		set_camera(3, 0)
/*<112>*/ 		printf("\x0E\x01\x12\x04\x00dIk verpletter vijanden als schroot op de\nstortplaats, zzizat! Echter, ik heb nu mijn\nhanden vol aan dit vat, bzzz...")
/*<113>*/ 		printf("\x0E\x01\x12\x04\x00dHé, meester Broekie! Laten we het spel\n\"bescherm de robot\" spelen, nu we hier\ntoch zijn, bzzrt!\n\nDe regels zijn als volgt: ik volg je naar de\ntop van de vulkaan, zzzrt, en jij beschermt\nmij. Duidelijk? Uitstekend!")
/*<187>*/ 		printf("\x0E\x01\x12\x04\x00dJe taak is eenvoudig, zzrrt! Zorg dat die\nmonsters van me afblijven!")
/*<211>*/ 		story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */] = true;
/*<212>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	}
          }

          void entrypoint_303_02() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMeester, ik heb belangrijke informatie\nvoor u. Dankzij uw verbeterde zwaard bent\nu nu in staat om met hulp van <r<detectie\n>><y<godinnenblokken>> te vinden.\nIk ben zo vrij geweest de <y<godinnenblokken\n>>op te slaan als doelwitten voor het\n<r<detecteren>>. <pling>Gebruik deze nieuwe\nvaardigheid naar believen.")
/*<  7>*/ 	story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */] = true;
/*<290>*/ 	open_dowsing_wheel(21)
          }

          void entrypoint_303_37() {
/*<117>*/ 	start()
/*<124>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<125>*/ 		printf("Je bent wel een pechvogel, zeg, om dat hele\neind hierheen te reizen en dan niet meer\nverder te kunnen.\n\n\x0E\x01\x09\x04\x15\xDFFHm... <pause14>Ik vergeet, volgens mij, nog iets\nbelangrijks...\n\n\nVolgens mij iets dat mijn maat me ooit\nvertelde, maar... <pause14>\x0E\x01\x09\x04\x00\x04Hm, nee. Ik kan het me\nniet herinneren!\n\n\x0E\x01\x09\x04\x09\x8FFMaar goed, water dus. Als je veel water\nnodig hebt, dan kun je beter naar het\n<r<Floria-meer>> gaan. Daar vind je wel wat je\nnodig hebt.")
          		flw_141:
/*<141>*/ 		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          		  case 0:
          		  case 1:
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*<118>*/ 		printf("\x0E\x01\x09\x04\x11\x801Moet je zien wie we daar hebben! Ben je\nnog steeds op zoek naar je maat?\n\n\n\x0E\x01\x09\x04\x09\x8FFIk ben zelf op zoek naar schatten,\nnatuurlijk. Ik hoorde dat hier ergens\nruïnes verstopt zijn... Vandaar!\n\n\x0E\x01\x09\x04\x15\xDFFIk heb tot nu alleen nog niks gevonden.\nHeb jij geen sappige tip voor me?\n[1]Weet je het zeker?[2]Ik zeg niks!")
/*<119>*/ 		switch (choice(2)) {
          		  case 0:
/*<120>*/ 			printf("\x0E\x01\x09\x04\x11\x900Je hebt echt een tip voor me? Kom op,\nvertel! We zijn maten, toch?")
          			flw_122:
/*<122>*/ 			printf("\x0E\x01\x09\x04\x09\x80EWat? Je kunt niet verder door een muur\nvan vuur? Waarom blus je die muur niet\nmet wat water?\n\n\x0E\x01\x09\x04\x15\x800Wauw, je hebt zoveel water nodig... Ik\ndenk dat ik het snap. <pause14>Dat water hier is niet\ngenoeg, hè?\n\n\x0E\x01\x09\x04\x09\x8FFWeet je, dat beetje water dat we hier\nhebben, komt uit een of ander meer. Dat\nmeer heet het <r<Floria-meer<pling>>> of zo.\n\n\x0E\x01\x09\x04\x11\x8FFEen maat van mij is ooit wezen schat-\nzoeken in het <b<Faron-woud>>. Hij vertelde me\ndat hij via het water weer terug thuis kon\nkomen.\n\x0E\x01\x09\x04\x09\x8FFHij zei dat het Floria-meer het grootste\nmeer ooit moet zijn. Daar is vast genoeg\nwater om je te helpen met je probleem.")
/*<123>*/ 			story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */] = true;
          			goto flw_141
          		  case 1:
/*<121>*/ 			printf("\x0E\x01\x09\x04\x14\x120AToe nou, laat me niet in de kou staan! We\nzijn maten, toch? Vertel!")
          			goto flw_122
          		}
          	}
          }

          void entrypoint_303_03() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf("Les mijn dorst om het pad te onthullen.")
          }

          void entrypoint_303_20() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf("\x0E\x01\x0B\x04\x00rDat duurde lang, bzrrt! Het werd tijd dat\nje kwam opdagen.")
          }

          void entrypoint_303_38() {
/*<126>*/ 	start()
/*<135>*/ 	switch (scene_flags[114 /* 0xF 04 */]) {
          	  case 0:
/*<136>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMeester Link, ik wil u op het\nvolgende wijzen: \x0E\x01\x12\x04\x00\x01de vlammen die uw\nvoortgang hinderen, zijn nog niet geblust.\n\nZal ik het vat van de <b<waterdraak >>voor u\ninstellen als doelwit om te <g<detecteren>>?\n[1]Ja.[2-]Nog niet.")
          		flw_139:
/*<139>*/ 		switch (choice(2)) {
          		  case 0:
/*<128>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<129>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<130>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<131>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<132>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<133>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<289>*/ 			printf("\x0E\x01\x12\x04\x00\x05Attentie, meester, ik heb het vat van de\n<b<waterdraak>> als doelwit ingesteld om met\nuw zwaard te <g<detecteren>>.<pling>")
/*<288>*/ 			open_dowsing_wheel(13)
          			flw_134:
/*<134>*/ 			scene_flags[5 'Eldin Volcano Summit'][114 /* 0xF 04 */] = true;
/*<137>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
          		  case 1:
/*<140>*/ 			printf("\x0E\x01\x12\x04\x00\x05Zoals u wenst, meester. Ik zal er nog even\nmee wachten.")
          			goto flw_134
          		}
          	  case 1:
/*<127>*/ 		printf("Attentie, \x0E\x01\x12\x04\x00\x0Bmeester Link. Ik stel\nvoor het advies van de <b<Mogma >>te volgen\nen naar het <r<Floria-meer >>te gaan.\n\nVerder geef ik u graag nog meer advies\nover de huidige situatie. Het gaat over de\nhouder voor al dat water...<pause0F> Ik stel voor\ndat u naar de <r<waterdraak>> gaat. <pling>\nVolgens mijn berekeningen moet het\n<r<watervat>> waarin de draak zich terugtrok\nom te herstellen van haar verwondingen,\ngroot genoeg zijn.")
/*<296>*/ 		printf("Wilt u dat ik de data van eerder nogmaals\nvoor u analyseer? Ik kan er dan voor\nzorgen dat u het vat kunt <r<detecteren>>.\n[1]Ja![2-]Nog niet.")
          		goto flw_139
          	}
          }

          void entrypoint_303_04() {
/*< 12>*/ 	start()
/*< 14>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x15\x1B09Hoi! Ben jij hier ook op zoek naar de\n<y<godinnenblokken>>? Is het hier niet een\nbeetje te heet voor jou?\n\n\x0E\x01\x09\x04ÿ\xFF00De hitte van eerder deed me niet echt iets,\nmaar dit vuur hier is een ander loeiheet\nverhaal.")
          		flw_17:
/*< 17>*/ 		printf("\x0E\x01\x09\x04\x18\x17FFKonden we maar iets doen om dit vuur te\ndoven...")
          	  case 1:
/*< 13>*/ 		printf("\x0E\x01\x09\x04\x15\x1B09Ha, hallo! Daar ben je weer. Hoe is het\nermee?\n\n\n\x0E\x01\x09\x04\x16\xBFFIk ben hier naartoe gekomen omdat ik\nhoorde dat er <y<godinnenblokken>> in dit<y<\n>>gebied te vinden zijn.\n\n\x0E\x01\x09\x04\x00\xB00Ik vermoed dat ze ergens die kant op te\nvinden zijn, maar deze muur van vuur\nblokkeert de doorgang!")
/*< 16>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_17
          	}
          }

          void entrypoint_303_21() {
/*< 79>*/ 	start()
/*< 80>*/ 	printf("\x0E\x01\x0B\x04\x00rBzzzort! Waar denk jij mee bezig te zijn?")
          }

          void entrypoint_303_39() {
/*<148>*/ 	start()
/*<150>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*<151>*/ 		printf("\x0E\x01\x09\x04\x0C\x405Als ik op pensioen ga, dan wil ik ergens\nheel hoog wonen, met een prachtig uitzicht.\n\n\n\x0E\x01\x09\x04\x0C\xDFFHet grootste deel van mijn leven heb ik\nondergronds doorgebracht. Toch kijk ik\nsteeds omhoog naar die pluizige wolken.\n\n\x0E\x01\x09\x04\x09\x906Als ik mocht kiezen, zou ik een vogel zijn in\nmijn volgende leven, zodat ik in die blauwe\nlucht kon zweven.")
          	  case 1:
/*<149>*/ 		printf("\x0E\x01\x09\x04\x0B\xC07O, jij weer! Ik herken je gezicht nog van\nlaaaang geleden.\n\n\n\x0E\x01\x09\x04\x0B\x506Ghahaha. Hoe bevallen de handschoenen\ndie ik uitgevonden heb? Zijn ze nog steeds\nnaar wens?\n\nGhaha, hoe het met mij gaat? Wat\nvreselijk lief. Eens denken...\n\n\n\x0E\x01\x09\x04\x0C\x405Ik heb in mijn leven overal en nergens\nnaar schatten gezocht, en ben nog nooit\nmet lege klauwen thuisgekomen.\n\nIk moet zeggen, ik begin een beetje moe te\nworden van het gegraaf in deze steenoven.\n\n\n\x0E\x01\x09\x04\x09\x908Soms stel ik me voor hoe het zou zijn; een\nbestaan zonder schatzoeken. Een rustige\nouwe dag, zonder zorgen of gevaar.")
/*<152>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

          void entrypoint_303_05() {
/*< 23>*/ 	start()
/*< 21>*/ 	switch (scene_flags[106 /* 0xC 04 */]) {
          	  case 0:
/*< 22>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Nou, ik weet wel dat als je hier naar buiten\ngaat en rechts aanhoudt, dat je dan een\nheerlijk koele <r<bron>> aantreft.\n\nMaar ja, eerlijk gezegd weet ik niet wat we\nnu kunnen doen...")
          	  case 1:
/*< 20>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*< 18>*/ 			printf("\"Les mijn dorst\"? Hmm... Als je deze\nruimte uitgaat en naar rechts gaat, dan\nkom je buiten uit.\n\nEr is daar een <r<bron>>. <pling>En het water van die\nbron is goddelijk!\n\n\n\x0E\x01\x09\x04\x18\x1705Maar ik heb geen idee hoe je dat water\nhiernaartoe zou kunnen brengen. Die\nkikkermonsters willen het vast niet voor\nons dragen. <pause0F>Wat denk jij?")
/*< 19>*/ 			scene_flags[5 'Eldin Volcano Summit'][106 /* 0xC 04 */] = true;
          		  case 1:
/*< 24>*/ 			printf("\x0E\x01\x09\x04\x18\x17FFKonden we maar iets doen om dit vuur te\ndoven...")
          		}
          	}
          }

          void entrypoint_303_22() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("\x0E\x01\x0B\x04\x00rHÉ! Als je zo door blijft gaan, breekt er\nstraks nog wat, zzbrrt!")
          }

          void entrypoint_303_06() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x17\x1908Hé, het vuur is gedoofd! We kunnen nu\nweer verdergaan.")
/*<153>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 28, 'param3': 13}
/*< 28>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 0, 'next': 27, 'param3': 14}
/*< 27>*/ 	story_flags[468 /* us: 805A9B0F 0x40, jp: 805ACD8F 0x40 */] = true;
/*<142>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_23() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMeester, de robot wacht op u op de\nvulkaan. Ik stel voor ernaar terug te gaan.")
          }

          void entrypoint_303_40() {
/*<155>*/ 	start()
/*<157>*/ 	switch (story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */]) {
          	  case 0:
          		flw_165:
/*<165>*/ 		switch (scene_flags[81 /* 0xB 02 */]) {
          		  case 0:
/*<166>*/ 			printf("\x0E\x01\x09\x04\x1A\x30DOuwe baas... Ik zal zorgen dat je trots op\nme kunt zijn, wacht maar af. Ik hoop dat\nje ons nooit vergeet, waar je nu ook bent!")
          		  case 1:
/*<158>*/ 			printf("\x0E\x01\x09\x04\x1C\x180FW-W-Wat? De ouwe baas is ergens naartoe\ngelanceerd? Waar is hij dan nu?\n[1]Hoog in de lucht![2]Voorbij deze wereld.")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
/*<162>*/ 				printf("\x0E\x01\x09\x04\x1A\x2011De lucht? Hoog in dat blauwe spul?\n\n\n\nAch... \x0E\x01\x09\x04\x1B\x407<pause14>Hij had het er altijd over hoe mooi\nhij de lucht vond.\n\n\nIk durf te wedden dat hij daar nu in de\nwolken naar schatten aan het graven is.")
          				flw_164:
/*<164>*/ 				scene_flags[4 'Eldin Volcano'][81 /* 0xB 02 */] = true;
          			  case 1:
/*<163>*/ 				printf("\x0E\x01\x09\x04\x1A\x2011Voorbij deze wereld?\n\n\n\nEh...\x0E\x01\x09\x04\x1B\x2207 Voorbij? <pause14>Wat bedoel je daarmee?\nBedoel je dat ie weg is? Als in \"komt niet\nmeer terug\"?\n\nUiteindelijk overkomt dat ons allemaal,\nmaar toch... wauw.")
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
/*<177>*/ 					printf("\x0E\x01\x09\x04\x1B\x2207Wat een held is hij! Heen en weer reizen\ntussen hier en de lucht, ongelofelijk!")
          				  case 1:
/*<174>*/ 					printf("\x0E\x01\x09\x04\x1A\x2011Wacht, wat bedoel je \"hij is terug\"?\n\n\n\n\x0E\x01\x09\x04\x1B\x2207Hij kan heen en weer reizen tussen hier en\nde lucht? Die baas is echt een kei, ik zeg\nhet je.")
/*<175>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				}
          			  case 1:
/*<167>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<172>*/ 					switch (zone_temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*<173>*/ 						printf("\x0E\x01\x09\x04\x00\x15Een rustige ouwe dag dus? Je helpt die\nouwe baas toch wel zijn droom waar te\nmaken?")
          					  case 1:
/*<286>*/ 						switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          						  case 0:
/*<170>*/ 							printf("\x0E\x01\x09\x04\x1A\x2001Hé, maat, heb je met die ouwe baas\ngesproken? Hoe gaat het met hem?\n\n\n\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x1A\x2011Wat? Een rustige ouwe dag?\n\n\n\nEh...\x0E\x01\x09\x04\x00ÿ Wat bedoel jij nu weer? Is \"rustige\nouwe dag\" een soort code voor \"een enorme\nschat\"?\n\n\x0E\x01\x09\x04\x1B\x1E15Ik zal je zeggen dat ik daar nog nooit van\ngehoord heb.\n\n\nMaar als dat is waar die ouwe baas je hulp\nvoor nodig heeft, dan moet je hem zeker\nhelpen!")
          							flw_171:
/*<171>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
          						  case 1:
/*<287>*/ 							printf("\x0E\x01\x09\x04\x1B\x2201Huh?! Als dat mijn maat niet is! Hoe is\nhet ermee, ouwe makker?\n\n\nEn met mij? M'n reukzin is net zo scherp\nals m'n klauwen en op schatten ingesteld!\n\n\n\x0E\x01\x09\x04\x00\x02Al ben ik wel een beetje bezorgd. Die ouwe\nbaas, <b<Gaud>>, gedraagt zich een beetje\nvreemd sinds hij de ruïnes gevonden heeft.\n\n\x0E\x01\x09\x04\x1B\x22FFJe hebt al met hem gesproken, toch? Hoe\ngaat het met hem?\n\n\n\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x1A\x2011Wat? Een rustige ouwe dag?\n\n\n\nEh...\x0E\x01\x09\x04\x00ÿ Wat bedoel jij nu weer? Is \"rustige\nouwe dag\" een soort code voor \"een enorme\nschat\"?\n\n\x0E\x01\x09\x04\x1B\x1E15Ik zal je zeggen dat ik daar nog nooit van\ngehoord heb. En ik weet alles over schatten.\n\n\nMaar je helpt die ouwe baas wel, toch? Als\ndat is wat hij wil.")
/*<292>*/ 							story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          							goto flw_171
          						}
          					}
          				  case 1:
/*<168>*/ 					switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          					  case 0:
/*<169>*/ 						printf("\x0E\x01\x09\x04\x1B\x50A<b<Gaud>> loopt daar ergens wat rond te\nwandelen. Praat eens even met hem voor\nme, oké?\n\nEen ouwe bekende kan hem misschien wat\nopvrolijken.")
          					  case 1:
/*<156>*/ 						printf("\x0E\x01\x09\x04\x1B\x2201Huh?! Als dat mijn maat niet is! Hoe is\nhet ermee, ouwe makker?\n\n\nEn met mij? M'n reukzin is net zo scherp\nals m'n klauwen en op schatten ingesteld!\nYep, het gaat dus geweldig!\n\n\x0E\x01\x09\x04\x00\x02Al ben ik wel een beetje bezorgd. Die ouwe\nbaas, <b<Gaud>>, gedraagt zich een beetje\nvreemd sinds hij de ruïnes gevonden heeft.\n\n\x0E\x01\x09\x04\x1B\x230AKun je voor mij naar<b< Gaud>> toe gaan? Hij\nstaat daarzo ergens en ik weet zeker dat\nhij blij zal zijn om je weer te zien.")
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
/*< 32>*/ 		printf("Je zou zeker niet nog een keer een brandje\nvoor ons kunnen blussen?")
          	  case 1:
/*< 30>*/ 		printf("\x0E\x01\x09\x04\x16\x1E56Nog meer vuur... Hopelijk houd ik hier\ngeen burn-out aan over...")
/*< 33>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_32
          	}
          }

          void entrypoint_303_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	printf("\x0E\x01\x12\x04\x00dWaar hing jij uit, zzzrbt! Breng me\nhelemaal naar boven! Snel, brrzzt!")
          }

          void entrypoint_303_41() {
/*<178>*/ 	start()
/*<180>*/ 	switch (zone_temp_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<181>*/ 		printf("\x0E\x01\x09\x04\x1B\x2215Weet je wat het is met <b<Plati>>? Hij kan\nalleen zijn schouders eronder zetten\nwanneer hij op jacht is naar schatten.")
          	  case 1:
/*<179>*/ 		printf("\x0E\x01\x09\x04\x1A\x200FHé, jij bent het! Dat type van laatst...<pause0F>\n\n\n\n\x0E\x01\x09\x04\x1B\x2209Hehehe... Ja, dat was niet mijn beste\nmoment.\n\n\nMaar alles is nu weer goed tussen ons, want\nmijn maat is erachter gekomen wat er\nmisgegaan is.\n\n\x0E\x01\x09\x04\x1B\x1EFFHij is zelf ook een keer gevangen genomen.\nDus hij en ik staan quitte. Niks om je\nzorgen over te maken.\n\n\x0E\x01\x09\x04\x1A\xA12Maar, eh, heb je <b<Plati>> hier ergens gezien?\n[1]Hij was daar ergens.[2]Nee, sorry.")
/*<183>*/ 		switch (choice(2)) {
          		  case 0:
/*<184>*/ 			printf("\x0E\x01\x09\x04\x1B\xA12O, echt? Super, dan is alles in orde.\n\n\n\nIk begon me gewoon een beetje zorgen te\nmaken, weet je...\n\n\n\x0E\x01\x09\x04\x1B\x160FIk dacht: die heeft zich vast weer ergens in\nde nesten gewerkt.\n\n\n\x0E\x01\x09\x04\x1B\x16FFEerlijk waar, hij trekt problemen aan zoals\neen magneet ijzer aantrekt!")
          			flw_182:
/*<182>*/ 			zone_temp_flags[5 /* 0x1 20 */] = true;
          		  case 1:
/*<185>*/ 			printf("\x0E\x01\x09\x04\x1B\x2207Volgens mij zit zijn kop vol zand... <pause14>Hij is\nvast weer ergens alleen op zoek naar\nschatten.\n\nHij hoort niet alleen op schattenjacht te\ngaan! Het is hier gevaarlijk.\n\n\n\x0E\x01\x09\x04\x1B\x09Wat moet ik toch met hem? Dat krijg je\nervan als je een <b<schatzoeker >>bent. Iemand\ndie van geen ophouden weet.\n\nAls je <b<Plati>> tegenkomt, doe hem dan de\ngroeten voor me, oké?")
          			goto flw_182
          		}
          	}
          }

          void entrypoint_303_08() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf("\x0E\x01\x09\x04\x17\x1908Mooi gedaan, hoor! Zo komen we er wel!")
/*<154>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 37, 'param3': 13}
/*< 37>*/ 	{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 0, 'next': 36, 'param3': 14}
/*< 36>*/ 	story_flags[469 /* us: 805A9B0E 0x02, jp: 805ACD8E 0x02 */] = true;
/*<143>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_25() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf("\x0E\x01\x12\x04\x00dLaat me hier niet achter! Druk op \x0E\x02\x04\x02\x2CD om\nde <r<kaart >>te openen en haal me hier weg,\nzzrrt!\x0E\x01\x11\x02\x2CD")
          }

          void entrypoint_303_42() {
/*<188>*/ 	start()
/*<190>*/ 	switch (scene_flags[82 /* 0xB 04 */]) {
          	  case 0:
/*<191>*/ 		printf("\x0E\x01\x09\x04\x0D\x509Goed. Waar zal ik nu eens op jacht gaan\nnaar schatten?")
          	  case 1:
/*<189>*/ 		printf("\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x0E\x1008Hé, maat! Je leeft nog!\n\n\n\n\x0E\x01\x09\x04\x11\x110BEn zo te zien heb je ook al je spullen weer\nterug. Ik wist wel dat je het kon.\n\n\nDus...<pause14> heb je nog schatten gevonden?\n[1]Kisten vol![2]Helemaal niks...")
/*<192>*/ 		switch (choice(2)) {
          		  case 0:
/*<193>*/ 			printf("\x0E\x01\x09\x04\x0E\x505Echt waar? Aaah, ik ben dol op schatten!\n\n\n\n\x0E\x01\x09\x04\x0E\x1F0AMaar de wereld is groot, weet je? Er zijn\nvast nog genoeg schatten over die ik ergens\nweg kan graaien.\n\nJa, ik ga hier niet op mijn staart zitten\nwachten tot de schatten in m'n schoot\ngeworpen worden! De volgende keer ga ik\nmet alle schatten naar huis! Echt!")
          			flw_195:
/*<195>*/ 			scene_flags[4 'Eldin Volcano'][82 /* 0xB 04 */] = true;
          		  case 1:
/*<194>*/ 			printf("\x0E\x01\x09\x04\x0E\x40AWat? Je hebt nauwelijks iets kunnen\nvinden? Hè, dat is balen, maat.\n\n\n\x0E\x01\x09\x04\x0F\x508Maar nu niet treurig zijn! De wereld is\nenorm en zit vol met schatten die erop\nwachten gevonden te worden!")
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
/*< 53>*/ 			printf("Ik ga ergens anders mijn onderzoek\nvoortzetten. Tot ziens!")
          		  case 1:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x18\x1702Nou, hoe ging het? Wat heb je allemaal\ngevonden?\n[1]Valstrikken![2]Monsters!")
/*< 47>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_49:
/*< 49>*/ 				switch (story_flags[248 /* us: 805A9AF7 0x04, jp: 805ACD77 0x04 */]) {
          				  case 0:
/*< 50>*/ 					printf("\x0E\x01\x09\x04\x16\x1E56Echt waar? Hm... Dan laat ik het\nontdekken vanaf hier aan jou over.\n\n\n\x0E\x01\x09\x04\x08\xBFFIk ga ergens anders heen om mijn\nonderzoek voort te zetten. Spreek me\nvooral aan als je me weer tegenkomt.")
          					flw_51:
/*< 51>*/ 					scene_flags[5 'Eldin Volcano Summit'][111 /* 0xC 80 */] = true;
          				  case 1:
/*< 48>*/ 					printf("\x0E\x01\x09\x04\x16\x1E56Echt waar? Hm... Dan laat ik het\nontdekken vanaf hier aan jou over.\n\n\n\x0E\x01\x09\x04\x08\xBFFTrouwens, ik vermoed dat er hier in de\nbuurt een <y<godinnenblok >>te vinden is.\n\n\nEn mijn vermoedens blijken vaak te\nkloppen, dus kijk maar eens goed rond.")
          					goto flw_51
          				}
          			  case 1:
          				goto flw_49
          			}
          		}
          	  case 1:
/*< 43>*/ 		switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          		  case 0:
/*< 44>*/ 			printf("\x0E\x01\x09\x04\x17\x1908Jij bent me er eentje! Is er iets dat je niet\nkunt? Grahahaha!\n\n\n\x0E\x01\x09\x04\x08\xBFFGa jij maar vast voorop! Je hebt je plek\nvooraan de expeditie verdiend.")
          		  case 1:
/*< 40>*/ 			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          			  case 0:
/*<284>*/ 				switch (temp_flags[15 /* 0x0 80 */]) {
          				  case 0:
/*<285>*/ 					printf("\x0E\x01\x09\x04\x18\x1707Veel<r< water >>dus en <r<iets om het in te\nverplaatsen>>... Weet jij misschien waar we\nzoiets kunnen vinden?")
          				  case 1:
/*< 41>*/ 					printf("\x0E\x01\x09\x04\x18\x1707Hoe gaan we deze driftkikker genoeg\n<r<water>> brengen? We hebben eerst een <r<grote\nhouder>> voor al dat water nodig.\n\n\x0E\x01\x09\x04\x16\x1EFFAls avonturier heb jij wel voor hetere\nvuren gestaan, toch? Wat doen we nu?")
/*<283>*/ 					temp_flags[15 /* 0x0 80 */] = true;
          				}
          			  case 1:
/*< 39>*/ 				printf("Moet je dit hier zien! Zeer, zeer\ninteressant... Onze eerste ontmoeting met\nhet onbekende.\n\n\x0E\x01\x09\x04\x17\x1908Dit hier heeft volgens mij niets met de\n<y<godinnenblokken >>te maken! Er is hier vast\niets <r<superbelangrijks >>verborgen!")
/*<144>*/ 				set_camera(4, 0)
/*<146>*/ 				printf("\x0E\x01\x09\x04\x16\x1EFFJe zult met heel wat meer water moeten\nkomen om de dorst van die kikker te\nlessen. Voor zo'n blaaskaak zijn <y<flesjes >>niet\ngenoeg, denk ik.")
/*<145>*/ 				set_camera(-1, 0)
/*<147>*/ 				printf("\x0E\x01\x09\x04\x00\x07Hm...<pause0F>\x0E\x01\x09\x04\x18\x1700 Je hebt een<r< grote houder>> nodig om\ngenoeg water te dragen voor deze taak.\n<pling>Heb je zoiets bij je?\n\n\x0E\x01\x09\x04\x16\x1EFFBovendien, waar ga je zoveel <r<water>>\neigenlijk vandaan halen? Hoe gaan we dit\nnu weer voor elkaar krijgen...")
/*< 42>*/ 				story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_303_26() {
/*< 89>*/ 	start()
/*< 90>*/ 	printf("Wil je dat ik hier water op spuit? Komt in\norde, zzzbrt!")
          }

          void entrypoint_303_43() {
/*<201>*/ 	start()
/*<202>*/ 	printf("We zijn aangekomen bij de Eldin-vulkaan.\n\n\n\nGebruik uw zwaard om de toegangspoort\nvan de proef te <r<detecteren>>. Om de heilige\nvlam te vinden moet u de proef met succes\nvolbrengen.")
          }

