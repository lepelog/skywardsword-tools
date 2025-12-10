          void entrypoint_102_15() {
/*<183>*/ 	start()
/*<184>*/ 	printf(/* textboxtype: 1, unk: 1, line: 45 */ "Als je op je Loftwing vliegt, kun je op <icon 19>\ndrukken om de besturing opnieuw te\nbekijken.<0x10011:0x0bcd>\n\nJe kunt ook <color green<aanvallen>coloroff>, waardoor je kort\n<color red<sneller vliegt>coloroff>. En je kunt ook <color red<afremmen>coloroff>.\nProbeer het maar eens!")
/*<240>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 241, 'param3': 60}
/*<241>*/ 	{'type': 'type3', 'subType': 0, 'param1': -1, 'param2': -1, 'next': -1, 'param3': 63}
          }

          void entrypoint_102_16() {
/*<223>*/ 	start()
/*<224>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "Ik heb nog een tip voor je, voor als je\necht <color red<heel snel wilt gaan >coloroff>met je vogel,\n<heroname>!\n\nVlieg eerst <color red<een flink stuk omhoog>coloroff> en duik\ndaarna omlaag om sneller te gaan. Heb je\nhet begrepen? Opstijgen en duiken. Oké?\nZo vlieg je snel!")
          }

          void entrypoint_102_01() {
          	start()
/*<199>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 26, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x30001:0x><heroname>, ik blijf hier bij mijn\nLoftwing om te kijken of ze niet gewond\nis. Ik spreek je later, oké?\n\n<0x10009:0x00000500>Ik hoop dat iemand in de stad weet waar\njouw Loftwing is gebleven.")
          }

          void entrypoint_102_02() {
/*<  2>*/ 	start()
/*< 77>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 15, 'param3': 32}
/*< 15>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 100, 'next': 103, 'param3': 17}
/*<103>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 1, 'next': 78, 'param3': 17}
/*< 78>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': -1, 'next': 3, 'param3': 16}
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "Hé, <heroname>, ik dacht al dat je\nhier zou zijn.\n\n\n<0x1000A:0x001700cd>Ze zeiden dat je bij de waterval was, dus\nik ben hierheen gevlogen om vanuit de\nlucht mee te zoeken.\n\nHeb je al iets ontdekt over je Loftwing?")
/*< 76>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x01000514>Nee dus...\n\n\n\n<0x10009:0x01000c00>Maar ik heb Ganderd en zijn vrienden\nhier weleens rond zien hangen, dus wie\nweet ontdekken we iets.")
/*<138>*/ 	set_camera(22, 0)
/*<202>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 203, 'param3': 24}
/*<203>*/ 	wait_frames(30)
/*<137>*/ 	{'type': 'type3', 'subType': 4, 'param1': 260, 'param2': 528, 'next': 135, 'param3': 13}
/*<135>*/ 	printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10006:0xfccd>Huh?<0x10006:0x00cd>")
/*<170>*/ 	set_camera(25, 0)
/*<171>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x01001500>Wie... Wie zei dat?\n\n\n\n<0x10009:0x01001500>Wie roept er mijn naam?")
/*<139>*/ 	set_camera(24, 0)
/*<141>*/ 	{'type': 'type3', 'subType': 4, 'param1': 268, 'param2': 5376, 'next': 136, 'param3': 13}
/*<136>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "O<pause 20>, sorry, <heroname>. Ik was even\nafgeleid. Laten we gaan!")
/*<140>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_102_03() {
/*<  4>*/ 	start()
/*<201>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1004, 'next': 102, 'param3': 24}
/*<102>*/ 	set_camera(4, 0)
/*< 19>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 16, 'param3': 32}
/*< 16>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 257, 'next': 79, 'param3': 15}
/*< 79>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 100, 'next': 80, 'param3': 15}
/*< 80>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 356, 'next': 181, 'param3': 14}
/*<181>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': 104, 'param3': 40}
/*<104>*/ 	{'type': 'type3', 'subType': 4, 'param1': 273, 'param2': 4864, 'next': 81, 'param3': 13}
/*< 81>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 1, 'next': 105, 'param3': 14}
/*<105>*/ 	set_camera(1, 0)
/*< 20>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 99, 'next': 106, 'param3': 50}
/*<106>*/ 	{'type': 'type3', 'subType': 4, 'param1': 270, 'param2': 4360, 'next': 5, 'param3': 13}
/*<  5>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "Kijk! Daar is hij!")
/*< 21>*/ 	set_camera(2, 0)
/*< 14>*/ 	printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00090500><0x10008:0x01cd>Ja, hij is het echt,\n<heroname>!")
/*< 17>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 100, 'next': 18, 'param3': 17}
/*< 18>*/ 	set_camera(3, 0)
/*<172>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_102_04() {
/*<  6>*/ 	start()
/*< 73>*/ 	switch (scene_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*< 74>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00001514>O jeetje, dat was geen beste landing.\n\n\n\n<0x10009:0x00000c00>Denk eraan dat je <color red<tijdens het duiken>coloroff> van\nrichting kunt veranderen door je lichaam\nte <color green<kantelen>coloroff>.\n\nJe wilt het vast nog een keer proberen.\nDeze keer zal ik je niet duwen, dus spring\nzelf maar als je er klaar voor bent!\n\n<color green<Sprint >coloroff>over de rand om naar beneden te\nduiken en hou, vlak voor je bij de grond\nbent, <icon 41> ingedrukt om je parachutedoek\nte openen!<0x10011:0x0fcd>\nO, en vergeet niet dat je veilig in het\n<color red<midden van dat ronde patroon daar\nbeneden moet landen>coloroff>.")
/*< 75>*/ 		scene_flags[0 'Skyloft'][3 /* 0x1 08 */] = false;
/*<235>*/ 		switch (story_flags[1110 /* us: 805A9B54 0x10, jp: 805ACDD4 0x10 */]) {
          		  case 0:
          		  case 1:
/*<236>*/ 			story_flags[1110 /* us: 805A9B54 0x10, jp: 805ACDD4 0x10 */] = true;
/*<237>*/ 			story_flags[832 /* us: 805A9B32 0x01, jp: 805ACDB2 0x01 */] = true;
          		}
          	  case 1:
/*< 10>*/ 		switch (story_flags[39 /* us: 805A9AE5 0x20, jp: 805ACD65 0x20 */]) {
          		  case 0:
/*<173>*/ 			printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000004>Oké, laten we het nog een keer proberen!\nDeze keer zal ik je niet duwen. Verzamel\nal je moed en SPRING!\n\n<color green<Ren>coloroff> maar gewoon over de rand om een\nduik te maken.\n\n\nO, en vergeet niet <icon 41> ingedrukt te\nhouden vlak voordat je bij de grond bent.\nAnders val je zo op je snufferd.<0x10011:0x0fcd>\n\nDe bedoeling is dat je veilig in het <color red<midden\nvan dat ronde patroon landt>coloroff>!")
          		  case 1:
/*<  8>*/ 			switch (story_flags[26 /* us: 805A9ADA 0x04, jp: 805ACD5A 0x04 */]) {
          			  case 0:
/*<  9>*/ 				printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x000f0513>Wat gemeen om hem zo op te sluiten!\n\n\n\n<0x30001:0x><heroname>, kun je iets doen om die\nplanken weg te halen?")
          			  case 1:
/*<  7>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000006>Waar wacht je nog op, <heroname>?\nLaten we je Loftwing zoeken!")
          			}
          		}
          	}
          }

          void entrypoint_102_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */] = true;
/*< 13>*/ 	changeScene(9, 0) // 
          }

          void entrypoint_102_06() {
/*< 22>*/ 	start()
/*<191>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1001, 'next': 23, 'param3': 24}
/*< 23>*/ 	printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x000c0e09>Je Loftwing is echt geweldig, vooral als\nje bedenkt wat hem deze ochtend allemaal\nis overkomen.\n\n<0x10009:0x00000c00>Ik zal alvast naar mijn vader vliegen om\nhem te vertellen wat er is gebeurd.")
/*< 64>*/ 	set_camera(10, 0)
/*<143>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 4864, 'next': 60, 'param3': 13}
/*< 60>*/ 	{'type': 'type3', 'subType': 2, 'param1': 16, 'param2': 0, 'next': 42, 'param3': 14}
/*< 42>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 43, 'param3': 32}
/*< 43>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 44, 'param3': 32}
/*< 44>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': 144, 'param3': 32}
/*<144>*/ 	set_camera(9, 0)
/*<142>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 4, 'next': 93, 'param3': 14}
/*< 93>*/ 	set_camera(12, 0)
/*< 45>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 24, 'param3': 16}
/*< 24>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x04000004>Hé, daar hebben we <heroname>!")
/*<146>*/ 	set_camera(9, 0)
/*< 94>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1038, 'param2': 11776, 'next': 145, 'param3': 13}
/*<145>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x04000000>Ah, je hebt eindelijk die domme vogel van\nje gevonden?\n\n\n<0x1000A:0x000b00cd>Het zal tijd worden. We zijn inmiddels\nalweer afgekoeld van onze warming-up,\nomdat die vogel van jou geen idee heeft\nhoe laat het is.\nWe moesten een eeuwigheid wachten,\nomdat ze de race voor een zielenpiet als jij\nhebben uitgesteld.")
/*< 95>*/ 	set_camera(12, 0)
/*< 96>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12606, 'next': 25, 'param3': 13}
/*< 25>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "Je bent bijna volwassen en toch heb je\naltijd Zelda nodig om je handje vast te\nhouden.\n\nHet zou me niets verbazen als je aan het\nontbijt ook uren zit te twijfelen wat je op\nje brood moet doen.\n\nEn die zelfvoldane houding van je begint\nme ook de keel uit te hangen. \"Zelda en ik\nzijn BESTE vrienden! We kennen elkaar\nal HEEL HEEL lang!\"\n<0x10006:0xfccd>Pfff...<0x10006:0x00cd> Je vindt jezelf heel wat, <0x10009:0x04000017>hè?<pause 60> <0x10009:0x040b0aff>Dan\nheb ik nieuws voor je! Je bent een slaap-\nkop die helemaal niks voorstelt!")
/*< 65>*/ 	set_camera(13, 0)
/*< 46>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 6, 'next': 48, 'param3': 16}
/*< 48>*/ 	{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 5, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x0500000e>Ganderd blijft er maar over doorgaan dat\nZelda zijn vriendin wordt. Hij is echt\nhelemaal weg van haar.")
/*< 47>*/ 	{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 5, 'next': 27, 'param3': 16}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x06000014>Hahaha...")
/*< 50>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 66, 'param3': 17}
/*< 66>*/ 	set_camera(12, 0)
/*< 49>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 28, 'param3': 16}
/*< 28>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x040d0b00>Ik waarschuw je maar alvast dat er gauw\neen einde komt aan dat droomwereldje\nvan je.\n\n<0x10009:0x04000b00>Zelda speelt vandaag de rol van de godin\ntijdens de ceremonie en ik zal degene zijn\ndie de <color yellow<parachutedoek >coloroff>van haar\nontvangt.\nZe heeft hem zelf gemaakt! Mooi niet dat\nik een of ander watje zo'n prijs van me af\nlaat pakken!")
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 5, 'next': 29, 'param3': 17}
/*< 29>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x04041700>Ja, die doek... Die parachutedoek van\nZelda... Hahaha...\n\n\nIk weet zeker dat ze aan mij dacht toen ze\nhem aan het maken was...\n\n\nJa, ik zie het al voor me. Ik word de grote\nwinnaar en dan volgt de ceremonie op het\nbeeld van de godin met Zelda... Alleen zij\nen ik... En niemand die ons stoort.\nEindelijk kunnen we alleen samen zijn...\nHet is haast alsof ik er nu al sta...")
/*<107>*/ 	set_camera(17, 0)
/*<108>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1048, 'param2': 5644, 'next': 109, 'param3': 13}
/*<109>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "Hahaha... Hahahaha! Jahaaa!")
/*< 51>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 4, 'next': 110, 'param3': 50}
/*<110>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1296, 'param2': 3865, 'next': 111, 'param3': 13}
/*<111>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1552, 'param2': 2060, 'next': 67, 'param3': 13}
/*< 67>*/ 	set_camera(18, 0)
/*< 30>*/ 	printf(/* textboxtype: 0, unk: 1, line: 28 */ "Ganderd! Pssst, Ganderd! <pause 30>Achter je!<pause 30> Draai je\neens om!")
/*< 52>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 5, 'next': 31, 'param3': 16}
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x04000000><0x1000A:0x000b00cd>WAT?! Zien jullie niet dat ik even...")
/*< 61>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 0, 'next': 92, 'param3': 15}
/*< 92>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 4, 'next': 97, 'param3': 17}
/*< 97>*/ 	set_camera(14, 0)
/*< 53>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 32, 'param3': 17}
/*< 32>*/ 	printf(/* textboxtype: 1, unk: 1, line: 30 */ "<0x10009:0x04191715>AH!")
/*< 54>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 6, 'next': 147, 'param3': 16}
/*<147>*/ 	{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 4103, 'next': 90, 'param3': 13}
/*< 90>*/ 	set_camera(19, 0)
/*< 33>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "Kun je me uitleggen wat je bedoelt met:\n\"Eindelijk kunnen we alleen samen zijn\"?")
/*< 68>*/ 	set_camera(15, 0)
/*< 55>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 34, 'param3': 16}
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x04ffff0d>O, eh... Niks bijzonders. Gewoon dat, eh...\n\n\n\n<0x10009:0x04000000><0x30001:0x><heroname>! Ja, mijn makker heeft\nzijn rooie vogel terug, dus ik zei dat ik blij\nben dat het nu een eerlijke race wordt\ntussen ons!")
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 86, 'param3': 17}
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 1, line: 33 */ "<0x10009:0x04000000>Ik moet gaan, Zelda. Ik hoop dat je naar\nme kijkt tijdens de race. Ik zal degene zijn\ndie allemaal gevaarlijke stunts uithaalt.")
/*< 62>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 4, 'next': 56, 'param3': 14}
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 4, 'next': 91, 'param3': 16}
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 4, 'next': 98, 'param3': 17}
/*< 98>*/ 	set_camera(18, 0)
/*< 35>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x05050013><0x10009:0x06070000>Hé, Ganderd!<0x10005:0x00140000> Wacht op ons!")
/*< 99>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1298, 'param2': 4352, 'next': 100, 'param3': 13}
/*<100>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1553, 'param2': 4096, 'next': 114, 'param3': 13}
/*<114>*/ 	make_actor_do_something(0, 5)
/*<115>*/ 	make_actor_do_something(0, 6)
/*<116>*/ 	wait_frames(50)
/*<205>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 206, 'param3': 16}
/*<206>*/ 	wait_frames(5)
/*< 69>*/ 	set_camera(16, 0)
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00091014>\"Een eerlijke race\"... Laat me niet lachen.\n\n\n\n<0x10009:0x0000ff00>Laat je niet op je kop zitten door die\nsukkels, <heroname>! Vlieg gewoon\nzo goed als je kunt!\n\nIk weet dat je die gasten kunt verslaan en\nik denk dat jij dat diep vanbinnen ook\nweet.\n[1-]Ja![2-]Nou, eh...[3-]En daarna?")
/*< 57>*/ 	switch (choice(3)) {
          	  case 0:
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 1, line: 36 */ "<0x10009:0x000c0e00>Zo mag ik het horen, <heroname>!\nGeloof me, je kunt dit makkelijk winnen.")
          		flw_101:
/*<101>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': -256, 'next': 207, 'param3': 13}
/*<207>*/ 		make_actor_do_something(0, 0)
/*< 58>*/ 		{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': -1, 'next': 221, 'param3': 16}
/*<221>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 112, 'next': 40, 'param3': 24}
/*< 40>*/ 		printf(/* textboxtype: 1, unk: 1, line: 39 */ "De Vleugelceremonie gaat nu beginnen!\nAlle deelnemende studenten moeten zich\nnu hier komen melden.")
/*< 59>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 41, 'param3': 16}
/*< 41>*/ 		printf(/* textboxtype: 0, unk: 1, line: 40 */ "De race kan beginnen. Succes, <heroname>!")
/*< 70>*/ 		changeScene(18, 0) // 
          	  case 1:
/*< 38>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x000c1500>Je hoeft niet nerveus te zijn. Je kunt dit\nmakkelijk winnen!")
          		goto flw_101
          	  case 2:
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00100e04>Kom op, <heroname>! Probeer een\nkeertje bij de les te blijven.")
          		goto flw_101
          	}
          }

          void entrypoint_102_07() {
/*< 71>*/ 	start()
/*< 72>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "")
          }

          void entrypoint_102_08() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 1, unk: 2, line: 42 */ "<0x30001:0x><heroname>, laten we een paar basis-\noefeningen doen om te zien of je vogel\nniet gewond is.")
/*< 84>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "Je kunt met je Loftwing in elke denkbare\nrichting vliegen. Wanneer hij omhoog vliegt,\nremt hij langzaam af.\n\nAls je <color red<sneller >coloroff>wilt gaan, zorg dan dat de\nsnavel van je Loftwing omhoog wijst zodat\nje omhoog gaat. Eenmaal <color red<hogerop>coloroff> duik je\nomlaag om snel vaart te maken!\nDus, nog één keer, vlieg eerst omhoog en\nduik dan omlaag om snel te gaan! Zo zorg\nje dat je vogel zijn topsnelheid haalt.")
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "Hoe voelt het? Heeft hij geen last bij het\nvliegen?")
/*<239>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 3, 'next': 242, 'param3': 60}
/*<242>*/ 	{'type': 'type3', 'subType': 0, 'param1': -1, 'param2': -1, 'next': -1, 'param3': 63}
          }

          void entrypoint_102_09() {
/*< 88>*/ 	start()
/*< 89>*/ 	printf(/* textboxtype: 1, unk: 0, line: 47 */ "Wat een opluchting! Ik weet niet hoe jij\nerover denkt, <heroname>, maar\nvolgens mij is je Loftwing prima in orde.\n\nMijn vader en de anderen maken zich vast\nzorgen om je vogel, dus laten we ze snel\nhet goede nieuws gaan vertellen!")
          }

          void entrypoint_102_10() {
/*<112>*/ 	start()
/*<117>*/ 	set_camera(26, 0)
/*<119>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 32}
/*<120>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': -1, 'next': 113, 'param3': 16}
/*<113>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "")
/*<118>*/ 	set_camera(-1, 0)
          }

          void entrypoint_102_11() {
/*<121>*/ 	start()
/*<200>*/ 	{'type': 'type3', 'subType': 4, 'param1': 256, 'param2': 2, 'next': 122, 'param3': 13}
/*<122>*/ 	printf(/* textboxtype: 1, unk: 1, line: 48 */ "<0x1000D:0x1906><0x10008:0x01cd><0x30001:0x><heroname>!")
          }

          void entrypoint_102_12() {
/*<123>*/ 	start()
/*<208>*/ 	story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */] = true;
/*<127>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<128>*/ 		story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */] = true;
/*<150>*/ 		switch (story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */]) {
          		  case 0:
/*<151>*/ 			story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */] = true;
          			flw_152:
/*<152>*/ 			switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          			  case 0:
/*<153>*/ 				story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */] = true;
          				flw_195:
/*<195>*/ 				switch (story_flags[725 /* us: 805A9B24 0x20, jp: 805ACDA4 0x20 */]) {
          				  case 0:
          					flw_174:
/*<174>*/ 					switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          					  case 0:
/*<175>*/ 						switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          						  case 0:
/*<176>*/ 							story_flags[376 /* us: 805A9B02 0x40, jp: 805ACD82 0x40 */] = true;
          							flw_131:
/*<131>*/ 							switch (story_flags[545 /* us: 805A9B17 0x04, jp: 805ACD97 0x04 */]) {
          							  case 0:
/*<197>*/ 								switch (story_flags[725 /* us: 805A9B24 0x20, jp: 805ACDA4 0x20 */]) {
          								  case 0:
          									flw_159:
/*<159>*/ 									switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
          									  case 0:
/*<160>*/ 										story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */] = true;
/*<162>*/ 										story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
          										flw_166:
/*<166>*/ 										switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          										  case 0:
/*<167>*/ 											story_flags[638 /* us: 805A9B1D 0x01, jp: 805ACD9D 0x01 */] = true;
          											flw_182:
/*<182>*/ 											story_flags[653 /* us: 805A9B1C 0x20, jp: 805ACD9C 0x20 */] = false;
/*<186>*/ 											story_flags[632 /* us: 805A9B1A 0x04, jp: 805ACD9A 0x04 */] = false;
/*<194>*/ 											story_flags[679 /* us: 805A9B22 0x02, jp: 805ACDA2 0x02 */] = true;
/*<215>*/ 											switch (story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */]) {
          											  case 0:
/*<217>*/ 												switch (story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */]) {
          												  case 0:
          													flw_225:
/*<225>*/ 													switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          													  case 0:
/*<230>*/ 														switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          														  case 0:
/*<226>*/ 															story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */] = true;
          															flw_227:
/*<227>*/ 															switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          															  case 0:
/*<229>*/ 																switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          																  case 0:
/*<228>*/ 																	story_flags[393 /* us: 805A9B0C 0x08, jp: 805ACD8C 0x08 */] = true;
          																	flw_231:
/*<231>*/ 																	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          																	  case 0:
/*<232>*/ 																		story_flags[1200 /* us: 805A9B61 0x40, jp: 805ACDE1 0x40 */] = true;
          																	  case 1:
          																	}
          																  case 1:
          																	goto flw_231
          																}
          															  case 1:
          																goto flw_231
          															}
          														  case 1:
          															goto flw_227
          														}
          													  case 1:
          														goto flw_227
          													}
          												  case 1:
/*<216>*/ 													story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = true;
          													goto flw_225
          												}
          											  case 1:
          												goto flw_225
          											}
          										  case 1:
          											goto flw_182
          										}
          									  case 1:
          										goto flw_166
          									}
          								  case 1:
/*<132>*/ 									switch (story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */]) {
          									  case 0:
          										goto flw_159
          									  case 1:
/*<133>*/ 										switch (story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */]) {
          										  case 0:
          											goto flw_159
          										  case 1:
/*<134>*/ 											scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = true;
          											goto flw_159
          										}
          									}
          								}
          							  case 1:
          								goto flw_159
          							}
          						  case 1:
          							goto flw_131
          						}
          					  case 1:
          						goto flw_131
          					}
          				  case 1:
          					goto flw_174
          				}
          			  case 1:
          				goto flw_195
          			}
          		  case 1:
          			goto flw_152
          		}
          	  case 1:
          		goto flw_174
          	}
          }

          void entrypoint_102_13() {
/*<124>*/ 	start()
/*<209>*/ 	story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */] = false;
/*<125>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<126>*/ 		story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */] = true;
/*<148>*/ 		switch (story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */]) {
          		  case 0:
/*<149>*/ 			story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */] = true;
          			flw_154:
/*<154>*/ 			switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          			  case 0:
/*<155>*/ 				story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */] = true;
          				flw_196:
/*<196>*/ 				switch (story_flags[725 /* us: 805A9B24 0x20, jp: 805ACDA4 0x20 */]) {
          				  case 0:
          					flw_198:
/*<198>*/ 					switch (story_flags[725 /* us: 805A9B24 0x20, jp: 805ACDA4 0x20 */]) {
          					  case 0:
          						flw_156:
/*<156>*/ 						switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          						  case 0:
/*<220>*/ 							switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          							  case 0:
/*<157>*/ 								story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */] = true;
          								flw_158:
/*<158>*/ 								switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          								  case 0:
/*<219>*/ 									switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          									  case 0:
/*<218>*/ 										story_flags[393 /* us: 805A9B0C 0x08, jp: 805ACD8C 0x08 */] = true;
          										flw_161:
/*<161>*/ 										switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
          										  case 0:
/*<163>*/ 											story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */] = true;
/*<164>*/ 											story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
          											flw_165:
/*<165>*/ 											switch (story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */]) {
          											  case 0:
/*<185>*/ 												story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */] = false;
          												flw_168:
/*<168>*/ 												switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          												  case 0:
/*<169>*/ 													story_flags[638 /* us: 805A9B1D 0x01, jp: 805ACD9D 0x01 */] = true;
          													flw_177:
/*<177>*/ 													switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          													  case 0:
          														flw_192:
/*<192>*/ 														switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          														  case 0:
/*<193>*/ 															story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */] = true;
          															flw_213:
/*<213>*/ 															switch (story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */]) {
          															  case 0:
/*<214>*/ 																story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = false;
          																flw_233:
/*<233>*/ 																switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          																  case 0:
/*<234>*/ 																	story_flags[1200 /* us: 805A9B61 0x40, jp: 805ACDE1 0x40 */] = true;
          																	flw_238:
/*<238>*/ 																	temp_flags[53 /* 0x7 20 */] = false;
          																  case 1:
          																	goto flw_238
          																}
          															  case 1:
          																goto flw_233
          															}
          														  case 1:
          															goto flw_213
          														}
          													  case 1:
/*<222>*/ 														switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
          														  case 0:
/*<178>*/ 															switch (story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */]) {
          															  case 0:
          																goto flw_192
          															  case 1:
/*<179>*/ 																story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = true;
          																goto flw_192
          															}
          														  case 1:
          															goto flw_192
          														}
          													}
          												  case 1:
          													goto flw_177
          												}
          											  case 1:
          												goto flw_168
          											}
          										  case 1:
          											goto flw_165
          										}
          									  case 1:
          										goto flw_161
          									}
          								  case 1:
          									goto flw_161
          								}
          							  case 1:
          								goto flw_158
          							}
          						  case 1:
          							goto flw_158
          						}
          					  case 1:
/*<130>*/ 						switch (scene_flags[65 /* 0x9 02 */]) {
          						  case 0:
/*<129>*/ 							scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = false;
          							goto flw_156
          						  case 1:
          							goto flw_156
          						}
          					}
          				  case 1:
          					goto flw_198
          				}
          			  case 1:
          				goto flw_196
          			}
          		  case 1:
          			goto flw_154
          		}
          	  case 1:
/*<212>*/ 		switch (story_flags[725 /* us: 805A9B24 0x20, jp: 805ACDA4 0x20 */]) {
          		  case 0:
          			goto flw_198
          		  case 1:
/*<210>*/ 			story_flags[301 /* us: 805A9AFD 0x80, jp: 805ACD7D 0x80 */] = false;
/*<211>*/ 			scene_flags[0 'Skyloft'][66 /* 0x9 04 */] = false;
          			goto flw_198
          		}
          	}
          }

          void entrypoint_102_14() {
/*<180>*/ 	start()
/*<204>*/ 	set_camera(30, 0)
/*<189>*/ 	printf(/* textboxtype: 0, unk: 1, line: 49 */ "Dit is het dagboek van Zelda. Het laatste\nstuk is van de dag voor de Vleugel-\nceremonie. Wil je dit gedeelte lezen?\n[1-]Ja![2]Nee.")
/*<190>*/ 	switch (choice(2)) {
          	  case 0:
/*<187>*/ 		printf(/* textboxtype: 1, unk: 1, line: 51 */ "Morgen is de Vleugelceremonie! Eindelijk\nkan <heroname> een ridder worden!\n\n\nIk kan niet wachten op zijn promotie,\nmaar ik maak me een beetje zorgen of hij\nde race wel zal winnen.\n\nDe laatste tijd is <heroname> minder\nserieus bij zijn trainingen. Iemand moet\nerop letten dat hij zijn kans niet laat\nvergaan!\nDaarom ga ik hem morgen heel vroeg\nwakker maken. Dan heeft hij nog tijd voor\neen laatste training. De dag erna mag hij\nweer uitslapen.\nHet zou jammer zijn als we aan het einde\nde ceremonie niet samen kunnen doen...")
          	  case 1:
/*<188>*/ 		printf(/* textboxtype: 1, unk: 0, line: 50 */ "Misschien maar beter van niet...")
          	}
          }

