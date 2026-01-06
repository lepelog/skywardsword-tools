          void entrypoint_300_24() {
/*<220>*/ 	start()
/*<221>*/ 	switch (scene_flags[73 /* 0x8 02 */]) {
          	  case 0:
/*<223>*/ 		printf(/* textboxtype: 1, unk: 1, line: 96 */ "Ik weet zeker dat je vriendin ergens op je\nwacht. Dus geef nooit op!")
          	  case 1:
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][73 /* 0x8 02 */] = true;
/*<222>*/ 		printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00000001>Hé, daar! Lang niet gezien. Nog bedankt\nvoor je hulp.\n\n\nOver hulp gesproken... heb je die vriendin\ngevonden waar je naar op zoek was?\n[1-]Jazeker![2-]Nog niet...")
/*<225>*/ 		switch (choice(2)) {
          		  case 0:
/*<227>*/ 			printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10009:0x00110808>Ja? Hé, dat is geweldig nieuws, joh!<pause 20> Wat?\nJe hebt haar niet gered?\n\n\n<0x10009:0x000908ff>Hé, niet getreurd, maat! Ik weet zeker dat\nje haar nog gaat redden. Geef nooit op!")
          		  case 1:
/*<226>*/ 			printf(/* textboxtype: 0, unk: 0, line: 95 */ "<0x10009:0x0013100d>O, echt? Die rooie griezels hebben je\nvriendin toch niet... je weet wel?<pause 20>\n\n\n<0x10009:0x0011080e>Huh? Je weet zeker dat ze nog leeft? Dan\nkomt alles sowieso weer goed! Dus trek niet\nzo'n zielig gezicht, oké?\n\n<0x10009:0x00090800>Als je nu opgeeft, dan is ze er geweest.\nDaarom kun je nooit met je staart tussen\nje benen terug je tunnel in kruipen. Snap\nje?")
          		}
          	}
          }

          void entrypoint_300_07() {
/*<324>*/ 	start()
/*<325>*/ 	make_actor_do_something(3, 0)
/*<326>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 327, 'param3': 17}
/*<327>*/ 	switch (zone_temp_flags[16 /* 0x3 01 */]) {
          	  case 0:
          		flw_329:
/*<329>*/ 		printf(/* textboxtype: 1, unk: 0, line: 111 */ "<0x10009:0x00110800>Hé! Ren nou niet weg! Reken met die\ngriezels af, oké?")
          		flw_334:
/*<334>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*<333>*/ 		switch (zone_temp_flags[18 /* 0x3 04 */]) {
          		  case 0:
          			goto flw_329
          		  case 1:
/*<328>*/ 			printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x00110812>Hé, jij daar! Zo te zien heb je hun\naandacht. Volgens mij zijn ze op een\ngevecht uit.\n\n<0x10009:0x00150d00>Help ons anders uit de brand en verjaag\ndie griezels, wil je?")
/*<330>*/ 			zone_temp_flags[16 /* 0x3 01 */] = true;
          			goto flw_334
          		}
          	}
          }

          void entrypoint_300_08() {
/*< 20>*/ 	start()
/*< 56>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 57, 'param3': 32}
/*< 57>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': -1, 'next': 338, 'param3': 16}
/*<338>*/ 	make_actor_do_something(4, 16)
/*<155>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 17}
/*< 59>*/ 	set_camera(2, 0)
/*<339>*/ 	switch (scene_flags[27 /* 0x2 08 */]) {
          	  case 0:
/*<341>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4114, 'param2': 3590, 'next': 340, 'param3': 13}
/*<340>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "Waaah! Verrassingsaanval! Hé, waar is de\nlava gebleven? Nu is het pad weer\ntoegankelijk! Ik hou je in de gaten...")
          	  case 1:
/*<166>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4114, 'param2': 3590, 'next': 58, 'param3': 13}
/*< 58>*/ 		printf(/* textboxtype: 0, unk: 0, line: 56 */ "Waaah! Verrassingsaanval!\n\n\n\nMaar wacht, jij bent niet een van die rooie\ntypes. <pause 15><0x10009:0x10090807>Laat me niet zo schrikken! Ik had je\nbijna omver gemept.\n\n<0x10009:0x100aff00>Sorry dat ik zo schreeuwde, maar dat rooie\ntuig is hierheen gekomen en verziekt onze\nstek, snap je?")
/*< 61>*/ 		set_camera(3, 0)
/*< 60>*/ 		printf(/* textboxtype: 1, unk: 0, line: 57 */ "Ze kwamen uit dat gat daarachter, dus ik\nheb het pad ernaartoe in de lava laten\nzinken. Dat houdt ze, denk ik, wel tegen.")
/*< 63>*/ 		set_camera(4, 0)
/*< 62>*/ 		printf(/* textboxtype: 0, unk: 1, line: 58 */ "Wij kunnen er natuurlijk onderdoor\ngraven, no problemo, voor ons dan. <0x10009:0x1011080b>Best\nslim, hè?")
/*<167>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': -1, 'next': 65, 'param3': 13}
/*< 65>*/ 		set_camera(5, 0)
/*< 64>*/ 		printf(/* textboxtype: 0, unk: 0, line: 59 */ "Kom dus niet aan de stop die voorkomt dat\nde lava wegstroomt, want je kunt je er\nflink aan verbranden. Nou, dag, hoor!")
          	}
          }

          void entrypoint_300_25() {
/*<228>*/ 	start()
/*<229>*/ 	printf(/* textboxtype: 0, unk: 1, line: 97 */ "<0x10009:0x00150d0c>Hm...<pause 20> Wat denk jij eigenlijk dat die rooie\ntypes eten?")
          }

          void entrypoint_300_09() {
/*< 21>*/ 	start()
/*< 74>*/ 	switch (temp_flags[53 /* 0x7 20 */]) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 63 */ "O, hé! Soms graaf je ook van die<color red< gloeiende,\nrooie slijmballen >coloroff>op. Vet ranzig! Zorg dat\nze je niet vastgrijpen.")
          	  case 1:
/*<303>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2559, 'next': 350, 'param3': 13}
/*<350>*/ 		switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          		  case 0:
/*<351>*/ 			printf(/* textboxtype: 0, unk: 0, line: 62 */ "Wat?! Ik schrik me rot! <pause 20><0x10009:0x00110d00>Je kan niet\nzomaar recht boven me graven, weet je?\n\n\n<0x10009:0x00150809>Maar goed, ik snap waarom je dat doet.\nWat je tegenkomt bij het graven, is steeds\nweer een verrassing, dus het is erg\nverslavend!\n<0x10009:0x00ffffff>Je zult meestal <color red<rupees >coloroff>vinden als je ergens\ngraaft, maar soms vind je zelfs wat\n<color red<Eldin-erts>coloroff>!\n\n<0x10009:0x00150d11>Er waren hier beneden altijd veel hartjes\nbegraven, maar de laatste tijd vind ik ze\nniet meer. Zul je net zien.\n\n<0x10009:0x00ffffff>Hoe dan ook, als je een gat tegenkomt\nen tijd hebt, graaf dan!")
          			flw_75:
/*< 75>*/ 			temp_flags[53 /* 0x7 20 */] = true;
          		  case 1:
/*< 22>*/ 			printf(/* textboxtype: 0, unk: 1, line: 61 */ "Wat?! Ik schrik me rot! <pause 20><0x10009:0x00110d00>Je kunt niet\nzomaar recht boven me graven, weet je?\n\n\n<0x10009:0x00150809>Maar goed, ik snap waarom je dat doet.\nWat je tegenkomt bij het graven, is steeds\nweer een verrassing, dus het is erg\nverslavend!\n<0x10009:0x00ffffff>Je zult meestal <color red<rupees >coloroff>vinden als je ergens\ngraaft, maar soms vind je zelfs <color red<Eldin-erts\n>coloroff>of wat <color red<hartjes>coloroff>!\n\nDus als je ergens een gat tegenkomt en de\ntijd hebt, graaf dan!")
          			goto flw_75
          		}
          	}
          }

          void entrypoint_300_26() {
/*<230>*/ 	start()
/*<231>*/ 	switch (scene_flags[44 /* 0x4 10 */]) {
          	  case 0:
/*<234>*/ 		switch (scene_flags[74 /* 0x8 04 */]) {
          		  case 0:
/*<238>*/ 			switch (scene_flags[75 /* 0x8 08 */]) {
          			  case 0:
          				flw_236:
/*<236>*/ 				printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x000908ff>Je kunt grotten zowel boven als onder de\ngrond vinden. Ik vermoed dat je nog een\nhoop dunne muren zult vinden!")
          			  case 1:
/*<235>*/ 				printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00150d10>Huh? Ik zat er met m'n neus bovenop?\nGoed speurwerk, groentje!")
/*<237>*/ 				scene_flags[4 'Eldin Volcano'][75 /* 0x8 08 */] = true;
          				goto flw_236
          			}
          		  case 1:
/*<243>*/ 			switch (scene_flags[76 /* 0x8 10 */]) {
          			  case 0:
/*<242>*/ 				printf(/* textboxtype: 1, unk: 0, line: 102 */ "Je kunt hier in de buurt kleine grotten of\nopeningen vinden, ze zitten verstopt achter\nmuren met scheurtjes. Wie weet wat je op\nzulke plekken aantreft...")
          			  case 1:
/*<244>*/ 				printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10009:0x00000001>Je loopt er vrolijk bij, maat. Ben je\nteruggekomen om op zoek te gaan naar\nverborgen schatten?\n\n<0x10009:0x00110800>Je weet het vast al, maar de <color blue<Eldin-vulkaan\n>coloroff>zit barstensvol verborgen grottenstelsels.\n\n\n<0x10009:0x000908ff>Probeer maar eens wat dunne muren met\nbarsten erin te vinden.\n\n\nEr zijn allerlei schatten te vinden in de\ngrotten. Vooral <color yellow<rupees>coloroff>, maar je weet maar\nnooit. <0x10009:0x001108ff>Als je weer op zoek gaat naar\nschatten, denk daar dan aan.")
/*<241>*/ 				scene_flags[4 'Eldin Volcano'][76 /* 0x8 10 */] = true;
/*<272>*/ 				scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          			}
          		}
          	  case 1:
/*<240>*/ 		switch (scene_flags[74 /* 0x8 04 */]) {
          		  case 0:
/*<239>*/ 			printf(/* textboxtype: 0, unk: 0, line: 101 */ "<0x10009:0x0015080c>Er moet hier ergens zo'n grot zijn, ik kan\nhem haast ruiken...")
          		  case 1:
/*<232>*/ 			printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000001>Je loopt er vrolijk bij, maat.\n\n\n\n<0x10009:0x001108ff>Ben je teruggekomen om op zoek te gaan\nnaar verborgen schatten? Laat ik dan een\ngoeie tip voor je hebben.\n\n<0x10009:0x0009080b>De <color blue<Eldin-vulkaan >coloroff>zit vol verborgen grotten-\nstelsels. Je kunt ze ontdekken door naar\nkleine scheuren in muren te speuren.\n\nEr zijn allerlei schatten te vinden in de\ngrotten. Vooral <color yellow<rupees>coloroff>, maar je weet maar\nnooit. <0x10009:0x0015080c>Volgens mij is er hier vlakbij zo'n\ngrot te vinden...")
/*<233>*/ 			scene_flags[4 'Eldin Volcano'][74 /* 0x8 04 */] = true;
/*<273>*/ 			scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          		}
          	}
          }

          void entrypoint_300_27() {
/*<245>*/ 	start()
/*<249>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<248>*/ 		printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x0015080b>Nou, als je van zo'n verhaal geen zin krijgt\nin schatzoeken... Ha! Dan ben je geen echte\n<color blue<schatzoeker>coloroff>!")
          	  case 1:
/*<246>*/ 		printf(/* textboxtype: 0, unk: 0, line: 104 */ "<0x10009:0x00110801>Hé, jij daar! Ik hoop dat je goed voor m'n\n<color yellow<bommenzak>coloroff> zorgt.\n\n\n<0x10009:0x000909ff>Trouwens, heb je het hart van de <color blue<Eldin-\nvulkaan>coloroff> al van dichtbij gezien?\n\n\n<0x10009:0x00150816>Het is daar zo heet dat je kleren spontaan\nin brand vliegen. POEF, en ze zijn weg! De\ngemiddelde persoon houdt het daar geen\nminuut uit.\n<0x10009:0x000909ff>Maar ze zeggen... Nou, er is dus een gerucht\ndat daar ruïnes zijn die uitpuilen van de\nkostbare schatten.\n\n<0x10009:0x0011080b>Voor een graafexpert zoals ik is het\nnatuurlijk een kleine moeite om daar te\nkomen... Misschien moet ik dat binnenkort\nmaar eens proberen.")
/*<247>*/ 		scene_flags[4 'Eldin Volcano'][77 /* 0x8 20 */] = true;
          	}
          }

          void entrypoint_300_10() {
/*< 23>*/ 	start()
/*<278>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1000, 'next': 81, 'param3': 24}
/*< 81>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 147, 'param3': 32}
/*<147>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 17, 'next': 277, 'param3': 32}
/*<277>*/ 	make_actor_do_something(1, 16)
/*< 82>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 250, 'param3': 16}
/*<250>*/ 	set_camera(20, 0)
/*<258>*/ 	wait_frames(45)
/*<298>*/ 	make_actor_do_something(2, 16)
/*<168>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 3340, 'next': 24, 'param3': 13}
/*< 24>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "Hm... Ik weet zeker dat ze het hier ergens\nbegraven hebben, maar waar?")
/*< 83>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 25, 'param3': 16}
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "Hé, <color blue<Lóhd>coloroff>! Dit is de plek, of niet soms?\nWat hadden ze ook alweer begraven?")
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 170, 'param3': 16}
/*<170>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': -245, 'next': 26, 'param3': 13}
/*< 26>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "Een <color red<keutel>coloroff>! Eh, wacht... <color red<S-L-E-U-T-E-L>coloroff>,\n<color red<sleutel>coloroff>!")
/*<148>*/ 	set_camera(24, 0)
/*<259>*/ 	wait_frames(15)
/*<149>*/ 	printf(/* textboxtype: 0, unk: 0, line: 38 */ "Ze hebben de <color red<sleutel voor die deur >coloroff>aan\nstukken geslagen en de stukken op allerlei\nplekken verstopt.\n\nEén van de <color red<vijf stukken >coloroff>moet hier zijn!")
/*<260>*/ 	wait_frames(30)
/*<251>*/ 	set_camera(21, 0)
/*< 85>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 169, 'param3': 16}
/*<169>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4373, 'param2': 3330, 'next': 27, 'param3': 13}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "Trouwens, dat doet me denken aan dat\n<color red<vreemde blonde meisje met de rare\nkleren >coloroff><sound 4>dat mee naar binnen genomen\nwerd.")
/*<252>*/ 	set_camera(22, 0)
/*< 86>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 28, 'param3': 16}
/*< 28>*/ 	printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x10110d0b>O! Ik durf te wedden dat ze daar iets\nheel kostbaars verborgen houden.\n\n\n<0x10009:0x10090800>En dat blonde meisje dat ze meenamen,\nmaakt sowieso deel uit van hun grote\nplan. Ik kan de rijkdommen hier al\nruiken. Schatten, ik kom eraan!")
/*<253>*/ 	set_camera(23, 0)
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 171, 'param3': 16}
/*<171>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4607, 'param2': -254, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 70, line: 41 */ "Maar wat doen we nou als we alle stukken\nvan de sleutel hebben?")
/*< 88>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 30, 'param3': 16}
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x10110d09>Wat denk je zelf, steenkop? Dan gaan we\nnaar binnen en grijpen we alle schatten\ndie we kunnen tillen!")
/*<151>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4097, 'param2': -1, 'next': 89, 'param3': 13}
/*< 89>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 172, 'param3': 16}
/*<172>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4371, 'param2': 4103, 'next': 31, 'param3': 13}
/*< 31>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "Maar-eh...<pause 15> Waarom maken we ons druk\nover een sleutel als we kunnen graven?")
/*<262>*/ 	wait_frames(15)
/*<254>*/ 	set_camera(22, 0)
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 173, 'param3': 16}
/*<173>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4097, 'param2': 511, 'next': 174, 'param3': 13}
/*<174>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4353, 'param2': 511, 'next': 32, 'param3': 13}
/*< 32>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "Wat? O, eh...<pause 30>")
/*<353>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 255, 'param3': 16}
/*<255>*/ 	set_camera(21, 0)
/*< 33>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "Ik bedoel maar.<pause 30>")
/*<256>*/ 	set_camera(23, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 175, 'param3': 16}
/*<175>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': -1, 'next': 261, 'param3': 13}
/*<261>*/ 	wait_frames(30)
/*< 34>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "Je bent niet zo dom als je eruitziet!")
/*<257>*/ 	wait_frames(45)
/*<145>*/ 	scene_flags[4 'Eldin Volcano'][72 /* 0x8 01 */] = true;
/*<146>*/ 	wait_frames(45)
/*<345>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_300_28() {
/*<265>*/ 	start()
/*<282>*/ 	temp_flags[30 /* 0x2 40 */] = true;
/*<264>*/ 	printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10005:0x004b0000><0x10012:0x0000000b>Meester, dit hier is de <color blue<Eldin-vulkaan>coloroff>. De\nenorme kracht van de aarde sijpelt hier\ndoor de aardkorst naar buiten.")
          }

          void entrypoint_300_11() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10012:0x0000000b>Meester <heroname>, klopt het dat er\nin dat <color blue<Mogma>coloroff>-gesprek iets gezegd werd\ndat enorm belangrijk is?\n\nDie <color red<persoon met de vreemde kleren>coloroff> kan\ntoch maar één iemand zijn...\n[1-]Zelda![2-]Vrouw in het zwart?")
/*< 37>*/ 	switch (choice(2)) {
          	  case 0:
/*< 38>*/ 		printf(/* textboxtype: 2, unk: 0, line: 6 */ "<0x10012:0x00000005>Meester, mijn berekeningen komen tot\ndezelfde conclusie. Ik acht het 90% zeker\ndat dat inderdaad Zelda was.")
          		flw_92:
/*< 92>*/ 		set_camera(7, 0)
/*< 66>*/ 		printf(/* textboxtype: 1, unk: 0, line: 8 */ "Verder schat ik dat er 95% kans bestaat\ndat de sleutel voor deze deur van\nhetzelfde materiaal is gemaakt als het\nslot dat de deur dichthoudt.")
/*< 93>*/ 		set_camera(-1, 0)
/*< 94>*/ 		printf(/* textboxtype: 2, unk: 0, line: 9 */ "Ik heb in de buurt voorwerpen ontdekt\ndie uit hetzelfde materiaal bestaan.\n\n\nDeze voorwerpen zullen ons helpen <color red<Zelda\n>coloroff>te vinden. Ik heb de voorwerpen\nopgeslagen als doel voor het <color red<detecteren>coloroff>.<sound 4>")
/*<310>*/ 		story_flags[106 /* us: 805A9ADE 0x80, jp: 805ACD5E 0x80 */] = true;
/*<347>*/ 		open_dowsing_wheel(2)
/*<344>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*< 39>*/ 		printf(/* textboxtype: 0, unk: 2, line: 7 */ "De kans dat het inderdaad de vrouw in\nzwarte kleding was, is volgens mijn\nberekeningen niet meer dan <0x10008:0x01cd>10%<0x10008:0x00cd>...\n\nIk moet concluderen dat het\nwaarschijnlijk om <color red<Zelda>coloroff> ging.")
          		goto flw_92
          	}
          }

          void entrypoint_300_29() {
/*<267>*/ 	start()
/*<266>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10005:0x005a0000>Ongeveer 65% van dit gebied is bedekt\nmet lava. De vele wezens die hier leven\nkunnen goed tegen vuur en tegen de\nintense hitte van de actieve vulkaan.")
          }

          void entrypoint_300_12() {
/*< 40>*/ 	start()
/*< 46>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 47>*/ 		printf(/* textboxtype: 0, unk: 1, line: 70 */ "Ben je er klaar voor? Doe je best om dit te\nonthouden. Rondom een <color green rupee<groene rupee\n>coloroff>bevinden zich <color red<geen bommen>coloroff>.\n\nRond een <color blue rupee<blauwe rupee >coloroff>liggen <color red<één of twee\nbommen >coloroff>en rond een<color red rupee< rode rupee >coloroff>liggen er\n<color red<drie of vier>coloroff>.\n\nRondom een <color silver<zilveren rupee>coloroff> liggen dus <color red<vijf\nof zes bommen>coloroff> en rond een <color gold<gouden rupee\n>coloroff>liggen er <color red<zeven of acht>coloroff>. Dat zijn de regels!\n\nHet enige dat je er nog van weerhoud\nstinkend rijk te worden, is je geluk. <0x10009:0x00150509>Begin\nmaar vast te duimen dat het je gaat\nlukken. Hehehe.")
          	  case 1:
/*< 42>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*<176>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2059, 'next': 53, 'param3': 13}
/*< 53>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "O? Je wilt toch mijn supergeheime tip\nhoren?")
/*<308>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 309, 'param3': 12}
/*<309>*/ 			printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x00ffff00>Voor slechts <color red<20 rupees >coloroff>vertel ik je het\ngeheim van <color red<Delven voor durfallen>coloroff>.\n[1-]Vertel![2]Nee, dank je.")
          			flw_44:
/*< 44>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				switch (has_rupees(20)) {
          				  case 0:
/*< 51>*/ 					rupees += -20;
/*<179>*/ 					{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2057, 'next': 45, 'param3': 13}
/*< 45>*/ 					printf(/* textboxtype: 1, unk: 0, line: 66 */ "Hehehe... Zo mag ik het horen! Maar\nbeloof me dat je dit niet doorvertelt, oké?\nKlep dicht hierover, duidelijk?")
/*<305>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 306, 'param3': 12}
/*<306>*/ 					printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x0011ff00>De kleur van rupees laat zien hoeveel\nslechte gaten er rond die rupee te vinden\nzijn.\n\n<0x10009:0x00ffff0b>Als je een<color green rupee< groene rupee>coloroff> vindt, dan liggen er\n<color red<geen bommen>coloroff> rondom dat gat.\n\n\nRondom een <color blue rupee<blauwe rupee >coloroff>liggen <color red<een of\ntwee bommen>coloroff>. Rond een<color red rupee< rode rupee >coloroff>liggen\ner <color red<drie of vier>coloroff> en rond een <color silver<zilveren rupee\n>coloroff>zelfs <color red<vijf of zes>coloroff>.\nAls je de zeldzame <color gold<gouden rupee>coloroff> vindt,\ndan liggen daaromheen <color red<zeven of acht\nbommen>coloroff>. Dat betekent bijna geen gaten\nzonder bom!")
/*<178>*/ 					{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': -245, 'next': 54, 'param3': 13}
/*< 54>*/ 					printf(/* textboxtype: 0, unk: 0, line: 68 */ "Dus, wat denk je ervan? Dat maakt het\nveel makkelijker, of niet soms?\n\n\n<0x10009:0x00ffff09>Maar al met al is geluk het belangrijkst en\ndan bedoel ik JOUW geluk. Dus doe je best\nen duim voor jezelf of iets dergelijks.")
/*< 48>*/ 					scene_flags[4 'Eldin Volcano'][55 /* 0x7 80 */] = true;
          				  case 1:
/*< 52>*/ 					printf(/* textboxtype: 0, unk: 0, line: 71 */ "Kom nou! Je hebt niet eens genoeg rupees\nbij je.\n\n\n<0x10009:0x00141209>Zolang je niet die <color red<20 rupees>coloroff> kunt\nophoesten, heb ik je niks te vertellen.")
          				}
          			  case 1:
/*<177>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 49, 'param3': 13}
/*< 49>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "Waarom zo zuinig op de rupees, maat? Dit\nis een buitenkansje waar je u tegen zegt,\nhoor.\n\n<0x10009:0x00ffff00>Maar goed, je moet het zelf weten. Je weet\nme te vinden als je van gedachten\nverandert. De prijs is <color red<20 rupees>coloroff>.")
          			}
          		  case 1:
/*< 43>*/ 			scene_flags[4 'Eldin Volcano'][54 /* 0x7 40 */] = true;
/*< 41>*/ 			printf(/* textboxtype: 0, unk: 1, line: 64 */ "Hé, jij daar! Kom en speel <color blue<Knollerds\n>coloroff><color red<Delven voor durfallen >coloroff>nu je die mooie\nhandschoenen hebt!\n\n<0x10009:0x0015080b>Wil je een <color red<supergeheime tip>coloroff>? Zo word je\ngegarandeerd rijk! <0x10009:0x00ffff00>R-<pause 10>I-<pause 10>J-<pause 10>K<pause 10>.\n\n\nEn aangezien je zakken straks vol zitten\nmet rupees, is het wel zo eerlijk als je mij\nook wat geeft. Dus geef me mijn deel nu\nmaar vast.")
/*<304>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 307, 'param3': 12}
/*<307>*/ 			printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x001108ff>Omdat jij het bent, heb ik een speciale\naanbieding voor je. Wat zeg je van <color red<20\nrupees>coloroff>? Hebben we een deal?\n[1-]Deal![2]Nee, dank je.")
          			goto flw_44
          		}
          	}
          }

          void entrypoint_300_13() {
/*< 67>*/ 	start()
/*<297>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
/*<205>*/ 	check_item_flag(505, 5)
/*<204>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 36}) {
          	  case 0:
          		flw_207:
/*<207>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "Meester, ik neem <color red<extreem hoge\ntemperaturen>coloroff> waar in het gebied voor u.\n\n\nIn een dergelijke omgeving zult u niet\nkunnen overleven in uw <0x10012:0x00000002>huidige toestand.\nIk stel voor dat u omkeert.")
          		flw_296:
/*<296>*/ 		zone_temp_flags[1 /* 0x1 02 */] = false;
          	  case 1:
/*<206>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
          			goto flw_207
          		  case 1:
/*<203>*/ 			printf(/* textboxtype: 0, unk: 2, line: 13 */ "Attentie, <0x10012:0x0000000b>meester. De <color red<extreme hitte >coloroff>die ik\ndaar detecteer, is zeer gevaarlijk. U zult\ndeze niet overleven in uw <0x10012:0x00000002>huidige\ntoestand.\nBovendien volgde uit het <color red<detecteren >coloroff>dat\ndaar niets te vinden is. Overweeg\nalstublieft nogmaals of u deze keuze\ninderdaad wilt maken.")
/*<208>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_296
          		}
          	}
          }

          void entrypoint_300_30() {
/*<269>*/ 	start()
/*<268>*/ 	printf(/* textboxtype: 2, unk: 0, line: 3 */ "<0x10005:0x005a0000>Wees alstublieft voorzichtig met licht\nontvlambare materialen, zoals <color red<hout >coloroff>of <color red<stof\n>coloroff>van kleding.")
          }

          void entrypoint_300_14() {
/*< 69>*/ 	start()
/*< 72>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 71>*/ 		printf(/* textboxtype: 1, unk: 0, line: 78 */ "Ja, die meid had iets zwarts aan. Maar\nverder kan ik me niets herinneren.")
          	  case 1:
/*<153>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2065, 'next': 70, 'param3': 13}
/*< 70>*/ 		printf(/* textboxtype: 0, unk: 0, line: 74 */ "Huh? Weer een nieuwe kop. En deze is ook\nal geen rooie griezel. De buurt wordt er zo\nniet beter op, dat rent hier maar rond...")
/*< 77>*/ 		set_camera(6, 0)
/*< 78>*/ 		printf(/* textboxtype: 1, unk: 0, line: 75 */ "Hè? O, niks aan het handje, ik praatte wat\ntegen mezelf. Maar ik zag dus <color red<iemand in\nvreemde kleren >coloroff>dat gat induiken.")
/*< 79>*/ 		set_camera(-1, 0)
/*<154>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3342, 'next': 80, 'param3': 13}
/*< 80>*/ 		printf(/* textboxtype: 0, unk: 1, line: 76 */ "Was dat een vriendin waar je naar op\nzoek bent? Even denken... Wat had die\nrare vogel ook alweer aan?")
/*<349>*/ 		printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x0014120c>Hmmm...<pause 30> Ja, die meid droeg iets <color red<zwarts>coloroff>.\nVerder kan ik me niet echt iets herinneren.")
/*< 73>*/ 		scene_flags[4 'Eldin Volcano'][22 /* 0x3 40 */] = true;
          	}
          }

          void entrypoint_300_31() {
/*<271>*/ 	start()
/*<270>*/ 	printf(/* textboxtype: 0, unk: 2, line: 4 */ "<0x10005:0x004b0000>Mocht u in brand vliegen, dan kunt u\nuzelf blussen door het doen van een\n<color green<draaiaanval>coloroff> of door te <color green<rollen>coloroff>.")
          }

          void entrypoint_300_15() {
/*< 95>*/ 	start()
/*< 18>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 54 */ "Die meid die hier voorbij kwam hollen,\nleek wel een beetje op jou.\n\n\nMaar dan niet met groene kleren\nnatuurlijk.")
          	  case 1:
/*< 97>*/ 		printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00110d11>Huh? Je zoekt een vriendin? Geen schat?\n\n\n\n<0x10009:0x00ffff0e>Die meid die hier eerder <color red<voorbij sprintte\n>coloroff>en ons nog geen blik gunde, dat is dan\nzeker jouw vriendin?<sound 4>\n\nZe rende zo snel voorbij dat ik haar niet\ngoed kon zien, maar ik weet zeker dat het\nniet zo'n rooie griezel was.\n\nJe maat is hier recht naar boven\ngegaan, ga er maar snel achteraan!")
/*< 17>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_32() {
/*<274>*/ 	start()
/*<275>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "<0x10012:0x0000000b>Meester, u kunt uw zwaard nu ook\ngebruiken om <color yellow<rupees>coloroff> te <color red<detecteren>coloroff>.\n\n\n<color yellow<Rupees>coloroff> zijn nu een van de beschikbare\ndoelen bij het <color red<detecteren>coloroff>. <sound 4>Gebruik deze\nnieuwe functie zo vaak je wilt.")
/*<276>*/ 	story_flags[105 /* us: 805A9ADE 0x40, jp: 805ACD5E 0x40 */] = true;
/*<348>*/ 	open_dowsing_wheel(20)
          }

          void entrypoint_300_16() {
/*< 96>*/ 	start()
/*< 98>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<102>*/ 		switch (scene_flags[61 /* 0x6 20 */]) {
          		  case 0:
/*< 19>*/ 			printf(/* textboxtype: 0, unk: 1, line: 55 */ "Je vindt hier heel veel van die rooie,\nblauwe en groene stenen, <color yellow<rupees>coloroff> heten ze.\nEn soms kom je zelfs <color red<zilveren >coloroff>of <color red<gouden>coloroff>\nvarianten tegen!\nVerder kun je hier ook van die taaie\n<color red<metalen>coloroff> vinden. Dat zijn eigenlijk geen\nschatten, maar <color red<je kunt er dingen mee\nmaken>coloroff>.")
          		  case 1:
/*<101>*/ 			printf(/* textboxtype: 0, unk: 0, line: 53 */ "Wij <color blue<Mogma's >coloroff>eisen dit gebied op en alle\nrijkdommen die er te vinden zijn. We zijn\nstuk voor stuk echte <color blue<schatzoekers>coloroff>.\n\nJe kunt hier allerlei van die rooie, blauwe\nen groene stenen vinden, <color yellow<rupees >coloroff>heten die.\nSoms kom je zelfs <color red<zilveren >coloroff>of<color red< gouden\n>coloroff>varianten tegen.\nEn hoewel dat eigenlijk geen schatten zijn,\nkun je hier ook <color red<metalen>coloroff> vinden waarmee je\n<color red<allerlei dingen kunt maken>coloroff>.\n\nAls je hier toch bent, zoek dan gerust even\nmee naar wat schatten.")
/*<103>*/ 			scene_flags[4 'Eldin Volcano'][61 /* 0x6 20 */] = true;
          		}
          	  case 1:
/*< 99>*/ 		printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00110d11>Huh? Je zoekt een vriendin? Geen schat?\n\n\n\n<0x10009:0x00ffff0e>Die meid die hier eerder <color red<voorbij sprintte\n>coloroff>en ons nog geen blik gunde, dat is dan\nzeker jouw vriendin?<sound 4>\n\nZe rende zo snel voorbij dat ik haar niet\ngoed kon zien, maar ik weet zeker dat het\nniet zo'n rooie griezel was.\n\nJe maat is hier recht naar boven\ngegaan, ga er maar snel achteraan!")
/*<100>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_33() {
/*<286>*/ 	start()
/*<291>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<290>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<289>*/ 			printf(/* textboxtype: 0, unk: 0, line: 107 */ "Ik vraag me af waar de volgende schat\nbegraven ligt. En ik moet dit keer niet dat\nhele graven-ding vergeten.")
          		  case 1:
/*<287>*/ 			printf(/* textboxtype: 0, unk: 1, line: 106 */ "Hé, jij daar! Heb je de ruïnes kunnen\nvinden?\n\n\n<0x10009:0x0013100d>Mij leek het toch allemaal te veel werk. Je\nhad de uitbarsting van m'n maat moeten\nhoren!\n\n<0x10009:0x000908ff>Hij bleef maar roepen: \"Je had maar één\ntaak! We graven al ons hele leven van hot\nnaar her!\" <pause 15>Hij had gelijk, hoor. Maar dat\nwas ik vergeten...")
/*<288>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	  case 1:
/*<295>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<294>*/ 			printf(/* textboxtype: 0, unk: 1, line: 109 */ "Ik ben benieuwd waar mijn zoektocht naar\nschatten deze keer heen zal leiden. Een\n<color blue<schatzoeker kan nooit rusten>coloroff>. Ha!")
          		  case 1:
/*<292>*/ 			printf(/* textboxtype: 1, unk: 1, line: 108 */ "<0x10009:0x00110801>Hé, jij daar. Ik hoop dat je goed voor m'n\n<color yellow<bommenzak>coloroff> zorgt.\n\n\n<0x10009:0x000908ff>Maak er goed gebruik van, hoor. Zo'n\ncadeau krijg je maar zelden. En zorg dat je\ner geen gat in brandt!")
/*<293>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	}
          }

          void entrypoint_300_17() {
/*<121>*/ 	start()
/*<180>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3589, 'next': 123, 'param3': 13}
/*<123>*/ 	printf(/* textboxtype: 0, unk: 2, line: 16 */ "Zo hé! Nu ook nog een groene!")
/*<182>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -256, 'next': 181, 'param3': 13}
/*<181>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "Er stormde net iemand langs die er net\nzo vreemd als jij uitziet. <color red<Met een zwarte\nsluier>coloroff>! Een maat van je of zo?<sound 4>")
/*<125>*/ 	set_camera(13, 0)
/*<152>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 126, 'param3': 13}
/*<126>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "Zie je die afgrond? Dat noemen wij hier\ndus een doodlopend einde. Maar dat\nvreemde type sprong er zo overheen!")
/*<127>*/ 	set_camera(-1, 0)
/*<128>*/ 	printf(/* textboxtype: 0, unk: 2, line: 19 */ "Maat, daar zakte m'n broek van af... <pause 15>\nWat een waanzinnige sprong!")
          }

          void entrypoint_300_18() {
/*<122>*/ 	start()
/*<124>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "Het krioelt hier in de bergen van die\nrooie herrieschoppers...\n\n\nMaar ik denk dat dat verdachte type met\ngemak langs ze heen kan glippen.\n\n\nStel je voor hoe het moet zijn om als\nschatjager met zo iemand te werken...\n<0x10009:0x001502ff>Een goeie om te vriend te houden, denk\nje niet?")
          }

          void entrypoint_300_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "<0x10012:0x0000000b>Meester, u bent toch op zoek naar <color red<Zelda's>coloroff>\nexacte locatie?\n\n\nWeet u al hoe u Zelda's locatie kunt\n<color red<detecteren>coloroff>?\n[1-]Natuurlijk! [2-]Geen idee...")
/*<279>*/ 	switch (choice(2)) {
          	  case 0:
/*<280>*/ 		printf(/* textboxtype: 0, unk: 2, line: 10 */ "<0x10012:0x00000005>Natuurlijk. Het spijt me. Ga alstublieft\nverder en vind Zelda.")
          		flw_311:
/*<311>*/ 		scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          	  case 1:
/*<281>*/ 		printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10012:0x00000005>Meester, houd (^) ingedrukt om iets te\n<color red<detecteren>coloroff>.<0x10011:0x08cd>\n\n\nNa het selecteren van een doelwit om te\ndetecteren voelt u door de punt van uw\nzwaard aan waar het zich bevindt.\n\nHoe dichter u bij uw doel komt, hoe\n<color red<sterker de reactie van het zwaard>coloroff>. Het\ntrillen van de controller en een speciaal\ngeluid geven aan waar een doel is.\nU kunt ook de <color red<cursor >coloroff>gebruiken om met\nmeer precisie de locatie van een doel te\nbepalen.\n\nKies nu Zelda als doelwit voor het\ndetecteren en begin uw zoektocht.")
/*<343>*/ 		story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<342>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		goto flw_311
          	}
          }

          void entrypoint_300_19() {
/*<129>*/ 	start()
/*<130>*/ 	printf(/* textboxtype: 0, unk: 1, line: 115 */ "Zelda is dichtbij... <pause 20>Haast je!")
/*<131>*/ 	story_flags[184 /* us: 805A9AE6 0x80, jp: 805ACD66 0x80 */] = true;
          }

          void entrypoint_300_02() {
/*<  2>*/ 	start()
/*<107>*/ 	set_camera(10, 0)
/*<156>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 108, 'param3': 13}
/*<108>*/ 	printf(/* textboxtype: 2, unk: 0, line: 21 */ "Grrr... Die rooie gedrochten gedragen\nzich alsof zij hier de dienst uitmaken.")
/*<319>*/ 	make_actor_do_something(3, 0)
/*<106>*/ 	set_camera(-1, 0)
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 157, 'param3': 17}
/*<157>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3590, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 2, line: 22 */ "Wiii-aauw! Waar ben je mee bezig?! Sluip\ntoch niet zo rond, man!\n\n\nHuh? Je bent op zoek naar een vriendin?<0x10009:0x001412ff>\nDaar kan ik niks mee. <0x10009:0x00ffffff>Er is hier niemand\nlangsgekomen, dus...\n\n...misschien is je vriendin <0x1000A:0x000900cd>daar naar boven\ngegaan, de berg op.")
/*<105>*/ 	set_camera(-1, 0)
/*<158>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 55, 'param3': 13}
/*< 55>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "Grah... <pause 20>Ik wou dat iemand die rooie\nclowns voorgoed wegjoeg.")
/*<104>*/ 	scene_flags[4 'Eldin Volcano'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_300_03() {
/*<  4>*/ 	start()
/*<336>*/ 	switch (zone_temp_flags[19 /* 0x3 08 */]) {
          	  case 0:
/*<337>*/ 		set_camera(26, 0)
          		flw_314:
/*<314>*/ 		{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 346, 'param3': 40}
/*<346>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 313, 'param3': 13}
/*<313>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 320, 'param3': 14}
/*<320>*/ 		make_actor_do_something(3, 0)
/*<263>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 150, 'param3': 17}
/*<150>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2056, 'next': 5, 'param3': 13}
/*<  5>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "Je bent me een taaie rakker, zeg! Bedankt\nvoor al je hulp!\n\n\n<0x10009:0x00ffff0b>Zoals je misschien weet, laten wij <color blue<Mogma's>coloroff>\ngeen schuld onbetaald. Om dat te bewijzen\nzal ik je wat geven. Ben je naar iets\nspecifieks op zoek?\n[1-]Ik zoek de weg.[2-]Rupees!")
/*<132>*/ 		switch (choice(2)) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 0, unk: 0, line: 29 */ "O ja. Je was op zoek naar die vriendin\nvan je, of niet?\n\n\n<0x10009:0x00090809>In dat geval heb je hier vast wat aan! Het\nzijn twee hele bijzondere exemplaren, al\nzeg ik het zelf.")
/*<316>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 6, 'param3': 42}
/*<  6>*/ 			give_item(56 0x38);
/*<  7>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "Hiermee kun je daar boven komen.<0x1000A:0x000b00cd> Graaf daar\nmaar eens een gat, dan zul je wat beleven!")
/*<109>*/ 			set_camera(-1, 0)
          			flw_137:
/*<137>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "Ik hoop maar dat je vriendin niet door die\nrooie types gevangengenomen is... en dat\nalles weer goed komt.")
/*<318>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<159>*/ 			{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3599, 'next': 134, 'param3': 13}
/*<134>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "Huh? Rupees? Is dat echt waar je naar op\nzoek bent?\n\n\n<0x10009:0x00151204><0x10008:0xffcd>Dat meent ie toch niet? Het is zijn keuze, maar\ntoch... En ik heb geeneens rupees bij me. <pause 20>O,\nwacht, wat dacht je hiervan? <0x10009:0x001412ff>Ik heb, eh...\n<pause 15>geen rupees bij me...<0x2:0x0064>\n<0x10009:0x00110809>Maar ik weet iets beters! Je was naar een\nvriendin op zoek, toch? Ik heb hier iets\ndat je kan helpen bij je vriendin te komen...\nPak aan!<0x2:0x0064>")
/*<317>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 135, 'param3': 42}
/*<135>*/ 			give_item(56 0x38);
/*<136>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "Hiermee kun je daar boven komen.<0x1000A:0x000b00cd> Graaf daar\nmaar eens een gat, dan zul je wat beleven!")
/*<138>*/ 			set_camera(-1, 0)
/*<160>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2048, 'next': 139, 'param3': 13}
/*<139>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10008:0xffcd>Ik doe er zelf toch niks mee... En dit is\ntoch veeeeel beter dan rupees?")
/*<161>*/ 			{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 137, 'param3': 13}
          			goto flw_137
          		}
          	  case 1:
/*<315>*/ 		set_camera(25, 0)
          		goto flw_314
          	}
          }

          void entrypoint_300_20() {
/*<140>*/ 	start()
/*<144>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 322, 'param3': 32}
/*<322>*/ 	make_actor_do_something(3, 16)
/*<352>*/ 	make_actor_do_something(4, 16)
/*<143>*/ 	{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 272, 'next': 142, 'param3': 15}
/*<142>*/ 	set_camera(14, 0)
/*<183>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 1799, 'next': 141, 'param3': 13}
/*<141>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "Ik geloof m'n ogen niet... <pause 15>Je hebt ze\nallemaal verslagen...<pause 15>")
/*<335>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          }

          void entrypoint_300_04() {
/*<  8>*/ 	start()
/*<321>*/ 	make_actor_do_something(3, 0)
/*<323>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 14, 'param3': 17}
/*< 14>*/ 	switch (scene_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<  9>*/ 		printf(/* textboxtype: 0, unk: 1, line: 34 */ "Hé, ik duim voor je! Hopelijk vind je die\nvriendin van je heelhuids terug!")
          	  case 1:
/*<110>*/ 		switch (zone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
/*<111>*/ 			switch (zone_temp_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*<113>*/ 				printf(/* textboxtype: 0, unk: 0, line: 26 */ "Als die griezel met dat <color red<blauwe\nhoofddeksel>coloroff> op z'n hoorn blaast, dan\nkomen de versterkingen. Wat ga je\ndaaraan doen?")
          			  case 1:
/*<331>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<332>*/ 					printf(/* textboxtype: 0, unk: 1, line: 112 */ "<0x10009:0x00110809>Je hebt die griezels goed boos gemaakt,\ndus nu moet je wel met ze afrekenen!\n\n\n<0x10009:0x00ffffff>Maar ze blijven maar met die <color red<hoorn om\nversterkingen>coloroff> roepen en de versterkingen\nblijven maar komen!\n\nDie hoornblazer met die<color red< blauwe doek op\nz'n kop>coloroff><sound 4> is vast de baas.")
          					flw_114:
/*<114>*/ 					zone_temp_flags[18 /* 0x3 04 */] = true;
          				  case 1:
/*<112>*/ 					printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x0011080e>Wat? Je wilt die schurken echt wegjagen?\n\n\n\n<0x10009:0x00151200>Tja, ze weten dat je hier bent en ze lijken\nook behoorlijk boos op je... Je zal ze er\nflink van langs moeten geven.\n\n<0x10009:0x00ffff00>Maar zag je dat ze met een <color red<hoorn>coloroff> om\nversterkingen riepen toen je ze een pak\nslaag kwam geven?\n\nDat is niet een eerlijk gevecht als je 't mij\nvraagt. Die hoornblazer met dat <color red<blauwe\nhoofddeksel>coloroff><sound 4> is vast de baas.")
          					goto flw_114
          				}
          			}
          		  case 1:
/*< 15>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "Ik heb een goed idee! Waarom verjaag jij\ndie schurken niet voor eens en voor\naltijd? <0x10009:0x00141209>Hm, alsof je dat zou kunnen...")
          		}
          	}
          }

          void entrypoint_300_21() {
/*<184>*/ 	start()
/*<193>*/ 	switch (scene_flags[65 /* 0x9 02 */]) {
          	  case 0:
/*<194>*/ 		switch (scene_flags[97 /* 0xD 02 */]) {
          		  case 0:
/*<196>*/ 			printf(/* textboxtype: 0, unk: 1, line: 88 */ "Het ligt misschien voor de hand, maar je\nkunt<color green< >coloroff><color yellow<bombloemen>coloroff> <color green<oppakken en\nneerleggen>coloroff> met (A), net zoals je potten\nkunt neerzetten.\nAls je er een vasthoudt, kun je 'm gooien\nof rollen.\n\n\nAls je vergeten bent hoe je dit doet, druk\ndan op <icon 19> voor meer informatie onder\n'Hulp'.<0x10011:0x0bcd>\n\nOefen maar eens met de <color yellow<bombloemen>coloroff> die\nhier groeien.")
          		  case 1:
/*<195>*/ 			printf(/* textboxtype: 0, unk: 0, line: 89 */ "<0x10009:0x00150d11>Zo te zien heb je geen <color yellow<bommenzak>coloroff>...\nDat is pech!\n\n\n<0x10009:0x00110dff>Zonder een <color yellow<bommenzak>coloroff> kun je die <color yellow<bom-\nbloemen >coloroff>niet veilig meenemen wanneer je\nop pad gaat. Iedere <color blue<Mogma >coloroff>heeft er\neentje, ze zijn zo handig!\n<0x10009:0x00ffffff>Hè, wat?<pause 20> Kijk me niet zo aan, zeg!\n\n\n\n<0x10009:0x00141209>Nee, nee en nog eens nee! Ik ga je echt\nniet mijn zak geven. Je zult het helaas\nmoeten doen met de bommen die je in de\nbuurt vindt.")
/*<197>*/ 			scene_flags[4 'Eldin Volcano'][97 /* 0xD 02 */] = true;
          		}
          	  case 1:
/*<185>*/ 		printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00150d11>Huh? Wie ben jij nou weer? Jou heb ik\nhier nog niet eerder gezien...\n\n\nHo! Wacht eens even! <0x10009:0x00110d12>Ben jij een maat van\ndie rooie griezels?\n[1-]Echt niet! [2-]Rode griezels?")
/*<186>*/ 		switch (choice(2)) {
          		  case 0:
/*<187>*/ 			printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10009:0x00ffff07>O, nee? <pause 15>Tja, je ziet er in elk geval niet uit\nals zo'n rooie griezel. Zo afstotelijk ben je\nnu ook weer niet.\n\n<0x10009:0x0015ff00>Dus wat moet je? Ben je hier om wat\n<color yellow<bombloemen>coloroff> te plukken?\n[1-]Bom-wattuh?[2-]Ja.")
          			flw_189:
/*<189>*/ 			switch (choice(2)) {
          			  case 0:
/*<190>*/ 				printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00ffff00><color yellow<Bombloemen>coloroff>, je weet wel. <0x1000A:0x001100cd>Die knallers van\nbloemen die hier groeien.")
/*<201>*/ 				set_camera(-1, -1)
/*<198>*/ 				printf(/* textboxtype: 0, unk: 0, line: 83 */ "Met (A) raap je er een op, de lont wordt\ndan gelijk aangestoken. En vervolgens...\nBOEM! Bij dit bloemetje wil je dus niet te\nlang stilstaan. Ze zijn heel gevaarlijk.\n<0x10009:0x0011080b>Maar je leert vanzelf hoe je ze het beste\nkunt gebruiken. Wij <color blue<Mogma's >coloroff>gebruiken\nze voor van alles en nog wat!\n\n<0x10009:0x00ffffff>Je kunt ze <color green<gooien>coloroff> en <color green<rollen>coloroff>, net als\npotten en vazen. Probeer hier maar eens\nuit waar zo'n <color yellow<bombloem >coloroff>goed voor is.\n\n<0x10006:0xffcd>Hm...<pause 15><0x10006:0x00cd><0x10009:0x00110d11> Huh? Je weet toch wel hoe je iets\nkunt <color green<rollen en gooien>coloroff>?\n[1-]Tuurlijk.[2-]Nou, nee...")
          				flw_283:
/*<283>*/ 				switch (choice(2)) {
          				  case 0:
/*<284>*/ 					printf(/* textboxtype: 0, unk: 0, line: 86 */ "<0x10009:0x00090809>Tuurlijk, joh! Je kunt dingen <color green<hoog optillen>coloroff>\nom ze te gooien en dingen <color green<laag optillen\n>coloroff>om ze te rollen. Maar dat weet toch ook\niedereen wel!")
          					flw_192:
/*<192>*/ 					scene_flags[4 'Eldin Volcano'][65 /* 0x9 02 */] = true;
          				  case 1:
/*<285>*/ 					printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00141215>Je hebt dus geen flauw benul?<pause 15> Geen zorgen,\nmaat. Ik vertel je alles wat je moet weten.\n\n\n<0x10009:0x000908ff>Wanneer je een <color yellow<bombloem >coloroff>beet hebt, hou\nje 'm <color green<omhoog>coloroff>.\n\n\nDe richting van je worp verschijnt dan\nzodat je alleen nog maar moet zorgen dat\nde worp op je doelwit eindigt.\n\nDe richting verschijnt ook als je <color green<omlaag\n>coloroff>richt. <color green<Je kunt de bom >coloroff>dan in de gekozen\nrichting <color green<rollen>coloroff>.\n\n<0x10009:0x001108ff>Wanneer je een <color red<hoge>coloroff> plek wilt bereiken, is\ngooien het beste, maar bij <color red<grotere\nafstanden >coloroff>of <color red<nauwe openingen>coloroff> is het\nmisschien handiger om de bom te rollen.")
          					goto flw_192
          				}
          			  case 1:
/*<191>*/ 				printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x0011020b>Dat verwachtte ik al. Er groeien hier wel\nflinke knallers, hoor.\n\n\n<0x10009:0x00ffffff><0x1000A:0x001100cd>Kijk daar maar eens! Daar groeien er een\npaar! Pluk er zoveel je wilt.")
/*<200>*/ 				set_camera(-1, -1)
/*<199>*/ 				printf(/* textboxtype: 0, unk: 1, line: 85 */ "Wanneer je een bloem oppakt met (A)\nbegint de lont te branden. Niet veel later\nontploft de bloem. Ook als je de bloem nog\nvasthoudt!\nJe kunt de bloem <color green<gooien>coloroff> of <color green<rollen>coloroff>, net als\nandere dingen die je op kunt pakken.\nProbeer het maar eens.\n\n<0x10006:0xffcd>Hm...<pause 15><0x10006:0x00cd><0x10009:0x00110d11> Huh? Je weet wel <color green<hoe je iets rolt>coloroff>,\ntoch?\n[1-]Ja.[2-]Geen idee...")
          				goto flw_283
          			}
          		  case 1:
/*<188>*/ 			printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00ffff00>Heb je die monsters niet gezien? Die met\ndie grote zwaarden? Ze zitten echt overal!\nOngelofelijk dat je die nog niet bent\ntegengekomen.\n<0x10009:0x0015ff07>Pas op voor die schurken, want ze zijn\nbeslist geen vriendelijke types.\n\n\nDus wat kwam je hier doen? Ben je hier\nvoor de <color yellow<bombloemen>coloroff>?\n[1-]Bom-wattuh?[2-]Ja.")
          			goto flw_189
          		}
          	}
          }

          void entrypoint_300_05() {
/*< 10>*/ 	start()
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 17, 'next': 210, 'param3': 32}
/*<210>*/ 	make_actor_do_something(0, 0)
/*<162>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 3075, 'next': 11, 'param3': 13}
/*< 11>*/ 	printf(/* textboxtype: 0, unk: 0, line: 47 */ "Hé, hé, HÉ! Wie problemen komt zoeken\nop onze stek, die krijgt ze!")
/*<211>*/ 	make_actor_do_something(0, 17)
/*<302>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4361, 'param2': 2062, 'next': 117, 'param3': 13}
/*<117>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "WACHT! Jij bent geen...<pause 15> Hé, <color blue<Lóhd>coloroff>, ik\ngeloof niet dat hij zo'n rooie griezel is.")
/*<212>*/ 	make_actor_do_something(0, 0)
/*<118>*/ 	printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00010800>J-J-Ja, ik denk dat je gelijk hebt... Maar\nhij hoeft ons nog niet zo te laten\nschrikken!\n\n<0x10009:0x00110d01>Sorry, maat. Ik ben erg gespannen door al\ndie monsters die opeens opduiken en\nrotzooi komen trappen.\n\n<0x10009:0x00150800>Ik begin gewoon al rood te zien als ik me\nvoorstel dat ze hier durven te komen! Dus\nik sta klaar om ze ervan langs te geven.\nJa, ik dus, <color blue<Lóhd>coloroff>.")
/*<213>*/ 	make_actor_do_something(0, 17)
/*<164>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4372, 'param2': 4629, 'next': 119, 'param3': 13}
/*<119>*/ 	printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10008:0xffcd>Tuurlijk, meneer Durft-niet-in-het-donker-te-\ngraven...")
/*<165>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4353, 'param2': -1, 'next': 214, 'param3': 13}
/*<214>*/ 	make_actor_do_something(0, 0)
/*<163>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 120, 'param3': 13}
/*<120>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "Hoe dan ook, als je op zoek bent naar\nschatten, kun je beter uit de buurt van die\nrooie types blijven.")
/*<312>*/ 	scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          }

          void entrypoint_300_22() {
/*<202>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 2, unk: 0, line: 12 */ "Attentie, <0x10012:0x0000000b>meester. De lucht in de ruimte\nrecht voor ons is <color red<extreem heet>coloroff>.\n\n\nVolgens mijn berekeningen is de kans dat\nuw kleding direct vlam vat 95%. Pas zeer\ngoed op voor u verder gaat.\n\nWellicht kunt u veilig de tunnel door\n<color green<rennen>coloroff>. Bepaal eerst welke kant u op gaat\nrennen door te <color red<detecteren >coloroff>voordat u naar\nbinnen gaat.")
/*<209>*/ 	scene_flags[4 'Eldin Volcano'][101 /* 0xD 20 */] = true;
          }

          void entrypoint_300_06() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 1, unk: 2, line: 114 */ "<0x10009:0x00000002>Jij, jij bent de uitverkoren held van de\ngodin...")
          }

          void entrypoint_300_23() {
/*<215>*/ 	start()
/*<216>*/ 	switch (temp_flags[33 /* 0x5 02 */]) {
          	  case 0:
/*<299>*/ 		switch (zone_temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<301>*/ 			printf(/* textboxtype: 0, unk: 0, line: 92 */ "Doe me een plezier en wapper het stof niet\noveral heen door hier rond te gaan <color green<rollen>coloroff>,\noké?")
          		  case 1:
/*<218>*/ 			printf(/* textboxtype: 0, unk: 1, line: 91 */ "O, je bent er weer? Let maar niet op\nmij, ik ben hier gewoon in mijn huis!\n\n\n<0x10009:0x10110d0e>Huh? Hoe bedoel je? Ik had hier niet\nhelemaal naartoe hoeven te graven?\n\n\n<0x10009:0x10150809>Kijk, ik weet dat het een bende is, maar\ndeze bende is wel mijn huis! En ik wil het\nweten als er iemand op bezoek is.\n\n<0x10009:0x100909ff>O, en dat je helemaal uitgerust bent, wil\nniet zeggen dat je hier maar wat rond kunt\ngaan <color green<rollen>coloroff>!")
/*<300>*/ 			zone_temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*<217>*/ 		printf(/* textboxtype: 1, unk: 0, line: 90 */ "Hé! Welkom in mijn stekkie! Ga lekker\nzitten, ontspan.\n\n\n<0x10009:0x1011080e>Wat? Natuurlijk is dit mijn huis!\n\n\n\n<0x10009:0x1015080a>Ja, oké, die rooie griezels hebben het\ngebouwd, maar ze zijn ervandoor gegaan!\nDus niks aan het handje, toch?\n\n<0x10009:0x100908ff><color blue<Mogma's >coloroff>leven onder de grond, dus we\nhebben niet echt \"huizen\" zoals jullie.\n<0x10009:0x1015080d>Ik wilde gewoon weten hoe het voelt om\niemand over de vloer te hebben...")
/*<219>*/ 		temp_flags[33 /* 0x5 02 */] = true;
          	}
          }

