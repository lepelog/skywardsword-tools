          void entrypoint_301_11() {
/*<107>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10012:0x0000000b>Meester, ik neem een nieuw type vijand\nwaar. Deze wezens lijken over aanzienlijke\nfysieke capaciteiten te beschikken.\n\nDruk op (Z) om op een vijand te<color green< focussen>coloroff>\nen daarna op (v) om me te roepen. Ik deel\ndan alle beschikbare informatie over die\nvijand met u.<0x10011:0x07cd><0x10011:0x09cd>")
          }

          void entrypoint_301_01() {
          	start()
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2064, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "Die vervloekte rooie types overal. En nu\nben ik ook nog m'n maat kwijt! Was ik\nhier maar nooit naartoe gekomen.")
/*< 31>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -255, 'next': 33, 'param3': 13}
/*< 33>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 32, 'param3': 17}
/*< 32>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "Hé, jij ook hier? Ben je hier om die\nvriendin van je te vinden?\n\n\nO, trouwens...<pause 15> Ik zag wel een <color red<blonde meid\ndie er vreemd uitzag>coloroff>, ergens naartoe\ngesleurd worden.\n\nMaar <0x10009:0x00141215>met al die schurken in de buurt\nkun je haar echt niet redden. Ze zitten\noveral!\n\n<0x10009:0x00ffff00>Als je leven je lief is, kun je maar beter\nnaar huis toe gaan, maat!")
/*< 23>*/ 	scene_flags[14 'Eldin: Earth Temple'][51 /* 0x7 08 */] = true;
          }

          void entrypoint_301_03() {
/*<  2>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10012:0x00000004>Meester <heroname>, Zelda heeft zich\nin het water van deze fontein spiritueel\ngereinigd.\n\nAls mijn inschattingen correct zijn, dan is\nze nu onderweg naar een gebied dat\nbekend staat als <color blue<Lanayru>coloroff>.\n\nBreng dit fragment terug naar de tempel,\nwaar een nieuwe pilaar van licht het pad\nnaar <color blue<Lanayru>coloroff> zichtbaar zal maken.\n\nIk stel voor dat u nu terugkeert naar\n<color blue<Skyloft >coloroff>en daarna verder reist naar\nLanayru.")
/*< 20>*/ 	story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */] = true;
/*< 21>*/ 	zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 60, 'param3': 36}
/*< 60>*/ 	wait_frames(15)
          }

          void entrypoint_301_04() {
/*<  4>*/ 	start()
/*< 25>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "Vervloekt! Ik heb dat ding vast net ergens\nlaten vallen...")
/*< 87>*/ 	make_actor_do_something(3, 0)
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 30, 'param3': 17}
/*< 30>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3346, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "Hé! Mooie timing, maat. Ik ben het,\n<color blue<Lóhd>coloroff>!\n\n\n<0x10009:0x00ffffff>Dat je hier toevallig nu bent, moet iets\nbetekenen, weet je. Dat is het lot of zo. Dus\nnu we een band hebben, help je me toch\nwel om m'n <color yellow<bommenzak>coloroff> terug te vinden?")
/*<102>*/ 	set_camera(16, 0)
/*<101>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "Ik was achter die rotsblokken naar schatten\nop zoek en zag opeens die griezels.<pause 15> Ik ging\ner in paniek vandoor en toen...<0x10009:0x0013100d> toen ben ik\n'm kwijtgeraakt!")
/*<104>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x000908ff>Het is een <color red<zak om bombloemen in te\nbewaren>coloroff>. Wat moet ik zonder zo'n zak\nbeginnen? O, nee! Daar ga ik nu achter\nkomen, of niet soms?\nHij ligt daarginds ergens... <pause 10><0x10009:0x00110dff>Help me uit de\nbrand en breng me mijn <color yellow<bommenzak\n>coloroff>terug, ik smeek 't je!")
          }

          void entrypoint_301_05() {
/*<  5>*/ 	start()
/*< 94>*/ 	set_camera(14, 0)
/*< 93>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 92, 'param3': 40}
/*< 92>*/ 	{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 100, 'next': 88, 'param3': 14}
/*< 88>*/ 	make_actor_do_something(3, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 95, 'param3': 17}
/*< 95>*/ 	set_camera(15, 0)
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00110d08>Hé, kijk aan! Je hebt m'n <color yellow<bommenzak>coloroff>!\n\n\n\n<0x10009:0x00ff08ff>Bedankt voor alle moeite, ik sta bij je in\nhet krijt. Maar geef me nu die zak!<pause 20>\n\n\n<0x10009:0x00110d0e>Wat krijgen we nou? Je wilt 'm lenen\nzodat je dieper de vulkaan in kunt gaan?\n\n\n<0x10009:0x00ffffff>O, dat is waar ook. Je was naar die\nvriendin van je op zoek. Je hebt wel veel\nvoor haar over, zeg...\n\n<0x10009:0x00150d11>O, wacht!<pause 15> Hoe is het met MIJN maat?\n[1-]Hij is weg...[2-]Hij is bezorgd![3-]Geen idee.")
/*< 34>*/ 	switch (choice(3)) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00131007>Echt? Je kunt echt op niemand meer\nrekenen tegenwoordig...\n\n\n<0x10009:0x00ff08ff>Wacht, dat neem ik terug. Jouw vriendin\nkan op jou rekenen, toch? Je zet je leven\nvoor haar op het spel.\n\n<0x10009:0x00141209>Maar ik laat je alsnog niet mijn zak lenen.\nNee, ik GEEF je die zak gewoon! Maar\nwees er voorzichtig mee...")
          		flw_105:
/*<105>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 19, 'param3': 42}
/*< 19>*/ 		give_item(92 0x5C);
/*< 26>*/ 		{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -245, 'next': 18, 'param3': 13}
/*< 18>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "Zo, nu heb je mijn <color yellow<bommenzak>coloroff>. Ga snel\ndie vriendin van je vinden!")
/*<106>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 36>*/ 		printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00001004>Hij maakt zich zorgen? Om mij?<pause 15> Wat voor\nmaat doet zijn maat zoiets aan?\n\n\n<0x10009:0x00ff08ff>Jij zult ook wel bezorgd zijn. Je weet niet\neens of jouw vriendin nog leeft...\n\n\n<0x10009:0x00141209>Maar ik laat je alsnog niet mijn zak lenen.\nNee, ik GEEF je die zak gewoon! Maar\nwees er voorzichtig mee...")
          		goto flw_105
          	  case 2:
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000804>Is dat zo? Hm... <pause 15>Ik hoop dat het goed met\n'm gaat. Hé... Die monsters zullen hem toch\nniet opge...\n\n<0x10009:0x000008ff>Jij zult je vast ook veel zorgen maken. Je\nweet niet eens of je maat nog leeft of niet,\nof ergens ertussenin...\n\n<0x10009:0x00141209>Maar ik laat je alsnog niet mijn zak lenen.\nNee, ik GEEF je die zak gewoon! Maar\nwees er voorzichtig mee...")
          		goto flw_105
          	}
          }

          void entrypoint_301_06() {
/*< 11>*/ 	start()
/*< 89>*/ 	make_actor_do_something(3, 0)
/*< 27>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 10, 'param3': 17}
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00110d12>Wacht even! Ik vergeet nog iets!\n\n\n\n<0x10009:0x000908ff>Er zit nog niets in die zak, dus pak aan.\nHiermee kun je gelijk aan de slag gaan.")
/*< 16>*/ 	give_item(40 0x28);
/*< 17>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "Als je bommen op zijn, zoek dan gewoon\nwat nieuwe om de zak weer mee te vullen.\n\n\n<0x10009:0x0011080b>Druk op <color green<(B)>coloroff> wanneer je een bom beet hebt\n<color green<om hem in de zak te stoppen>coloroff>.<0x10011:0x01cd>\n\n\n<0x10009:0x000908ff>Er passen <color red<maximaal 10 bommen>coloroff> in de zak.\nVergeet niet de zak te vullen als je ergens\nbombloemen tegenkomt.")
          }

          void entrypoint_301_07() {
/*<  7>*/ 	start()
/*< 90>*/ 	make_actor_do_something(3, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 9, 'param3': 17}
/*<  9>*/ 	check_item_flag(92, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*< 12>*/ 		printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00110d00>Hé, ben je eigenlijk al eens in brand\ngevlogen terwijl je met een schurk vocht?\n\n\n<0x10009:0x000908ff>Zorg dat je jezelf snel blust als dat gebeurt!\nO, en haal NOOIT een <color yellow<bom>coloroff> uit je zak\nterwijl je in brand staat, oké? Slecht idee,\nneem dat van mij aan!")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<100>*/ 			printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00150809>Dat zag er goed uit, maat! Je rolde\ndie <color yellow<bombloem >coloroff>als een doorgewinterde\navonturier!\n\n<0x10009:0x00110800>Ga zo door en breng me mijn <color yellow<bommenzak\n>coloroff>terug!")
          		  case 1:
/*< 96>*/ 			switch (temp_flags[57 /* 0x6 02 */]) {
          			  case 0:
/*< 13>*/ 				printf(/* textboxtype: 0, unk: 1, line: 7 */ "Met een explosief kom je daar wel naar\nbinnen, denk ik. Zoek anders hier in de\nbuurt naar een <color yellow<bombloem>coloroff>.")
          			  case 1:
/*< 97>*/ 				printf(/* textboxtype: 1, unk: 1, line: 6 */ "O ja... <pause 15>Jij kunt er niet een tunnel naartoe\ngraven, dus hoe kom je daar? Hmm...\n\n\n<0x10009:0x0015120c>Met een <color yellow<bombloem>coloroff> kun je misschien een\npad vrijmaken.\n\n\n<0x10009:0x0009ff00><color yellow<Bombloemen >coloroff>kun je hier vast wel ergens in\nde buurt vinden.")
/*< 98>*/ 				temp_flags[57 /* 0x6 02 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_301_08() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 0, unk: 2, line: 31 */ "Tempel der Aarde")
          }

          void entrypoint_301_09() {
/*< 39>*/ 	start()
/*< 80>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1006, 'next': 54, 'param3': 24}
/*< 54>*/ 	story_flags[686 /* us: 805A9B21 0x08, jp: 805ACDA1 0x08 */] = true;
/*< 82>*/ 	story_flags[748 /* us: 805A9B29 0x10, jp: 805ACDA9 0x10 */] = true;
/*< 50>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 13, 'next': 49, 'param3': 32}
/*< 49>*/ 	{'type': 'type3', 'subType': 1, 'param1': 13, 'param2': 99, 'next': 56, 'param3': 16}
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 1, 'next': 52, 'param3': 40}
/*< 52>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1279, 'next': 70, 'param3': 13}
/*< 70>*/ 	wait_frames(10)
/*< 51>*/ 	set_camera(2, 0)
/*< 40>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x0d0805ff>O, jij bent het...")
/*< 79>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x0d0005ff>Eens even denken<pause 1>.<pause 1>.<pause 1>.<pause 1><pause 8> Hm, nee, dat was het\nniet.<pause 20> Wat gênant... Ik ben totáál vergeten hoe\nje heet!\n\n<0x10009:0x0d0a05ff>Niet dat jouw, ongetwijfeld, sullige naam me\nook maar iets boeit. Ik heb wel wat beters aan\nmijn hoofd... Bepaalde frustraties waar ik mijn\nhart over moet luchten.")
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3339, 'param2': 3327, 'next': 72, 'param3': 13}
/*< 72>*/ 	set_camera(6, 0)
/*< 58>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x0d000900>Ik ben hiernaartoe gekomen, omdat ik hoorde\ndat mijn dienaren eindelijk de priesteres te\npakken hadden. Wat een heerlijk nieuws was\ndat... Ik heb de hele reis lopen huppelen.\nMaar wat trof ik hier aan? <0x10009:0x0d000cff>Die bemoeierige\nhelper van de godin...")
/*< 74>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3340, 'param2': 3327, 'next': 65, 'param3': 13}
/*< 65>*/ 	printf(/* textboxtype: 0, unk: 2, line: 25 */ "<0x10008:0xfecd><0x1000A:0x000c00cd>Ze heeft het weer voor elkaar...\n\n\n\n<0x10009:0x0d000cff><0x10008:0xfecd><pause 15><0x1000A:0x000d00cd>Dat... Dat...")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3341, 'param2': 3583, 'next': 66, 'param3': 13}
/*< 66>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10005:0x002d0000><0x10008:0x02cd>Dat sloofje van de godin\n<0x1000A:0x000b00cd>is er met de priesteres vandoor!")
/*< 81>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3342, 'param2': 3583, 'next': 63, 'param3': 13}
/*< 63>*/ 	printf(/* textboxtype: 2, unk: 0, line: 27 */ "<0x10008:0x01cd>Ik MOET die priesteres hebben om\nmijn meester te laten ontwaken!")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 76, 'param3': 13}
/*< 76>*/ 	set_camera(9, 0)
/*< 64>*/ 	printf(/* textboxtype: 0, unk: 2, line: 28 */ "Pfoe<pause 5>.<pause 5>.<pause 5>.<pause 5><pause 10> Ik liet me een beetje meeslepen. Ik heb\nweinig geduld voor mormels die mijn zorgvuldig\nuitgedachte plannen in het honderd laten lopen.\nZo ben ik nu eenmaal...\n<0x10009:0x0d0805ff>Maar de dag is nog niet voorbij en het is een\ngeluk bij een ongeluk dat jij hier ook heen bent\ngewaggeld. Erg lief dat je me nu wat vermaak\nkomt bieden.")
/*< 67>*/ 	set_camera(3, 0)
/*< 61>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x0d0a05ff>Er is iemand aan wie ik je wil voorstellen.\nIemand die er net als ik enorm van geniet om\npijn aan te richten.")
/*< 71>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 68, 'param3': 13}
/*< 68>*/ 	set_camera(4, 0)
/*< 62>*/ 	printf(/* textboxtype: 2, unk: 0, line: 30 */ "Kom, wees maar niet bang. Mijn vurige vriend\nkan niet wachten om je een warme knuffel\nte geven.")
/*< 47>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3337, 'param2': 1791, 'next': 69, 'param3': 13}
/*< 69>*/ 	set_camera(5, 0)
/*< 53>*/ 	wait_frames(65)
/*< 48>*/ 	story_flags[189 /* us: 805A9AE9 0x10, jp: 805ACD69 0x10 */] = true;
/*< 83>*/ 	story_flags[748 /* us: 805A9B29 0x10, jp: 805ACDA9 0x10 */] = false;
/*< 55>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
/*< 84>*/ 	switch (scene_flags[28 /* 0x2 10 */]) {
          	  case 0:
/*< 85>*/ 		zone_temp_flags[3 /* 0x1 08 */] = true;
          		flw_57:
/*< 57>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 86>*/ 		scene_flags[14 'Eldin: Earth Temple'][28 /* 0x2 10 */] = true;
          		goto flw_57
          	}
          }

          void entrypoint_301_10() {
/*< 41>*/ 	start()
/*< 42>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10012:0x0000000b>Meester, ik neem sporen van Zelda's aura\nwaar in dit gebied.")
/*< 44>*/ 	set_camera(1, 0)
/*< 43>*/ 	printf(/* textboxtype: 0, unk: 1, line: 19 */ "De energiesporen op deze ketting zijn\nbijzonder sterk. Ik acht het 95% zeker\ndat Zelda hier onlangs vastgeketend zat.")
/*< 45>*/ 	set_camera(-1, 0)
/*< 46>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "Ik kan enkel concluderen dat Zelda daarna\nontsnapt is en vervolgens dit pad heeft\ngenomen. Ik raad u aan om haast te\nmaken.")
          }

