          void entrypoint_113_33() {
/*<174>*/ 	start()
/*<177>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x000e0e0c>Heuj, knul! Je komt wat spullen tekort\nvolgens mij. Je hebt niet genoeg <color yellow<Lizalfos-\nstaarten>coloroff>.\n\nVolgens mijn grootvaders notities zijn\ndat staarten van grote hagedisachtige\nmonsters.")
/*<178>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<176>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 175, 'param3': 12}
/*<175>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_34() {
/*<179>*/ 	start()
/*<182>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x000e0e0c>Je hebt niet genoeg materialen, knul. Tja,\nje hebt niet genoeg <color yellow<Eldin-erts>coloroff>.\n\n\nVolgens mijn grootvaders notities vind je\ndat spul diep in vurige bergen.")
/*<187>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<181>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 180, 'param3': 12}
/*<180>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_35() {
/*<183>*/ 	start()
/*<241>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*<242>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x000e0e0c>Heuj, knul! Zo te zien kom je wat spullen\ntekort. Je hebt niet genoeg <color yellow<oerbloemen>coloroff>.\n\n\nVolgens mijn grootvaders notities\ngroeiden deze bloemen ooit in een land\nmet veel zand. Je hebt er ook eentje\ngebruikt om Schrootbot te fiksen!")
          		flw_188:
/*<188>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<185>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 12}
/*<184>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<186>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x000e0e0c>Heuj, knul! Zo te zien kom je wat spullen\ntekort. Je hebt niet genoeg <color yellow<oerbloemen>coloroff>.\n\n\nVolgens mijn grootvaders notities\nbloeiden die in een land met veel zand,\nmaar niemand weet of ze daar nog\nbestaan.")
          		goto flw_188
          	}
          }

          void entrypoint_113_01() {
          	start()
/*< 92>*/ 	switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          	  case 0:
/*< 93>*/ 		printf(/* textboxtype: 18, unk: 0, line: 114 */ "<0x10009:0x00000003>Heuj, knul! Gedraagt <color blue<Schrootbot>coloroff> zich een\nbeetje? Kan ik iets voor je doen?\n[1-]Iets verbeteren.[2-]Schild repareren.[3]Nee, bedankt.")
          		flw_4:
/*<  4>*/ 		switch (choice(3)) {
          		  case 0:
/*< 31>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<  2>*/ 				printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000009>Ik ga meteen aan de slag! Dit kan ik op\ndit moment voor je verbeteren.")
/*<  5>*/ 				make_actor_do_something(0, 0)
          			  case 1:
/*< 32>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000e0e0c>Heuj, knul! Je hebt op dit moment niets\nbij je dat ik kan verbeteren... Waarom ga\nje niet eerst naar Rupins winkel om wat\nte kopen?")
          			}
          		  case 1:
/*< 69>*/ 			switch (context_related2(2)) {
          			  case 0:
/*< 68>*/ 				printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000009>Deze schilden kan ik op dit moment voor\nje repareren.")
/*< 71>*/ 				make_actor_do_something(10, 0)
          			  case 1:
/*< 70>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x000e0e0c>Maak je een geintje? Je hebt helemaal\ngeen beschadigde schilden!\n\n\nHeb je niet wat beters te doen of zo? Dat\nkomt hier een beetje hardwerkende lui als\nik lastigvallen... Hmmgrrbl.")
          			}
          		  case 2:
/*<  3>*/ 			printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x000e0e0c>Wat krijgen we... Als je niks hebt waar ik\naan kan sleutelen, waarom ben je dan\nhier?")
          		}
          	  case 1:
/*< 54>*/ 		switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          		  case 0:
/*< 51>*/ 			printf(/* textboxtype: 19, unk: 0, line: 111 */ "<0x10009:0x00001104>Dus... Let goed op <color blue<Schrootbot >coloroff>voor me,\noké? O, en trouwens, hij kan gedachten\nlezen door een soort straling of zo...\n\n<0x10009:0x00080700>Dus als je hem nodig hebt, weet hij je\nprecies te vinden!\n\n\nHij is soms wel een beetje kortaf, maar\nhij is een harde werker als hij in een\ngoede bui is. <pause 30>Goed, tot later maar weer!")
/*< 55>*/ 			printf(/* textboxtype: 0, unk: 17, line: 112 */ "<0x10009:0x00070700>Kan ik weer iets voor je verbeteren? Ik\nrepareer ook schilden!\n[1-]Iets verbeteren.[2-]Schild repareren.[3]Nee, bedankt.")
          			goto flw_4
          		  case 1:
/*< 33>*/ 			switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          			  case 0:
/*< 39>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 40, 'param3': 31}
/*< 40>*/ 				printf(/* textboxtype: 0, unk: 18, line: 97 */ "<0x10009:0x00000003>Heuj, knul! Hoe is het? Is er iets aan\nde hand? Je ziet eruit alsof het erg\ndringend is.\n\nO, ik weet het denk ik al. Je gaat me\nom een gunst vragen, of niet?\n[1-]Ja...[2]Nee...")
/*< 41>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          					  case 0:
/*< 38>*/ 						printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10009:0x00000001>Als je wilt dat ik <color blue<Schrootbot>coloroff> hier weer aan\nde praat krijg, moet je me een <color yellow<oerbloem\n>coloroff>brengen. Maar ik heb geen idee hoe je er\neen vindt.[1-]Ik heb er een![2]Ik ook niet.")
          						flw_84:
/*< 84>*/ 						switch (choice(2)) {
          						  case 0:
/*< 85>*/ 							printf(/* textboxtype: 19, unk: 0, line: 102 */ "<0x10009:0x00070717>WAT?! Je hebt er eentje?! Dat kan toch\nniet waar zijn?! Dit is geweldig!")
/*< 34>*/ 							switch (context_related2(1)) {
          							  case 0:
/*< 35>*/ 								printf(/* textboxtype: 0, unk: 0, line: 104 */ "<0x10009:0x000e0e0c>Hé<0x10006:0xfdcd>... Probeer je me nu in de maling te\nnemen? Je hebt helemaal geen bloem\nbij je! Erg flauw, knul.")
/*< 37>*/ 								story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
          							  case 1:
/*< 98>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 101, 'param3': 47}
/*<101>*/ 								set_camera(4, 0)
/*<100>*/ 								{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 99, 'param3': 15}
/*< 99>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 42, 'param3': 48}
/*< 42>*/ 								printf(/* textboxtype: 18, unk: 0, line: 108 */ "<0x10009:0x00000018>Dus dit is een <color yellow<oerbloem>coloroff>?! Er lekt een\nolieachtige vloeistof uit de steel! Super,\nhiermee kunnen we <color blue<Schrootbot>coloroff> repareren!\n\n<0x10009:0x00070700>Wacht hier! Ik heb hem in een paar tellen\nweer in topconditie!")
/*<112>*/ 								{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 61, 'param3': 42}
/*< 61>*/ 								make_actor_do_something(2, 0)
          							}
          						  case 1:
/*< 86>*/ 							printf(/* textboxtype: 0, unk: 17, line: 103 */ "<0x10009:0x000f0916>Ja, wie zegt dat nou iets? Maar als ik ooit\nzo'n <color yellow<oerbloem>coloroff> vind...")
/*< 91>*/ 							story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
/*<158>*/ 							zone_temp_flags[3 /* 0x1 08 */] = false;
          						}
          					  case 1:
/*< 52>*/ 						printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00101008>Huh? <pause 40>Kom je vanwege die oude robot\nvan mijn grootvader?\n\n\n<0x10009:0x00000e00>Nee, dat zal wel niet... Je kwam hier\ngewoon om te lachen om die grote man\ndie nog in zijn grootvaders sprookjes\ngelooft, of niet?\nJe bent niet de eerste...<pause 40> Wacht... Dat is\nniet de reden? Je wilt de robot gebruiken\nom iets op te halen, van onder de wolken?\n\n<0x10009:0x00070700>M-Maar, dat b-betekent... Dat betekent\ndat je mijn grootvaders verhalen gelooft?\nEcht waar?!")
/*< 53>*/ 						printf(/* textboxtype: 18, unk: 0, line: 99 */ "<0x10009:0x000d0900>Ik ben zo blij dat iemand me eindelijk\ngelooft! Maar ik weet niet of ik je kan\nhelpen. Grootvaders robot is namelijk,\ntja... Die is helaas...")
/*< 94>*/ 						set_camera(3, 0)
/*< 95>*/ 						printf(/* textboxtype: 0, unk: 19, line: 100 */ "Kijk zelf maar!\n\n\n\nZijn naam is <color blue<Schrootbot>coloroff>. Een passende\nnaam, want hij ligt er tegenwoordig echt\nals schroot bij...\n\nOoit was het een fantastische robot die\nwaar dan ook naartoe kon gaan en\nwerkelijk alles kon tillen!\n\nMaar zoals je ziet<0x10006:0xffcd>...<0x10006:0x00cd> is er niet veel meer\nvan over dan een roestend geraamte...")
/*< 96>*/ 						set_camera(-1, 0)
/*< 97>*/ 						printf(/* textboxtype: 0, unk: 0, line: 101 */ "<0x10009:0x000d0e00>Opa vertelde mij ooit dat je hem misschien\nmet een extract van een <color yellow<oerbloem>coloroff> weer\naan de praat kunt krijgen.\n\nDat is een soort brandstof voor deze\nrobot. <0x10009:0x000f0e00>Maar ik zou niet weten wat voor\nbloem hij nu weer bedoelde.\n[1-]Deze bloem![2]Ik ook niet.")
          						goto flw_84
          					}
          				  case 1:
          					flw_25:
/*< 25>*/ 					zone_temp_flags[4 /* 0x1 10 */] = false;
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 1, line: 0 */ "<0x10009:0x00000001>Heuj, welkom! Dit is mijn werkplaats. Met\nde spullen die je tijdens je reizen vindt,\nkan ik hier je uitrusting verbeteren!\n\nAls je schild er slecht aan toe is, kan ik\ndat ook voor je repareren. Dus wat mag\nhet vandaag zijn?\n[1-]Iets verbeteren.[2-]Schild repareren.[3]Niets.")
          					goto flw_4
          				}
          			  case 1:
          				goto flw_25
          			}
          		}
          	}
          }

          void entrypoint_113_36() {
/*<189>*/ 	start()
/*<192>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x000e0e0c>Heuj, knul! Zo te zien kom je wat spullen\ntekort. Je hebt niet genoeg <color yellow<barnstenen\namuletten>coloroff>.\n\n\nVolgens mijn grootvaders notities kun je\n<color yellow<barnstenen amuletten >coloroff>op allerlei plekken\nvinden. Ze zijn niet bijzonder zeldzaam.")
/*<193>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<191>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 190, 'param3': 12}
/*<190>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_02() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00080806>Prima. Wil je dat ik dit voor je verbeter?\nJe kunt daarna niet meer terug, oké?\n[1-]Doe het![2]Nee, toch niet.")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
/*<128>*/ 		make_actor_do_something(3, 0)
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0007070e>Oké! Wacht hier even!")
/*<102>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 		make_actor_do_something(1, 0)
/*< 14>*/ 		printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00080809>Zo, ik ben klaar! Hier, dit is voor jou!")
/*< 26>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 11>*/ 		printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x000e0e05>Bedenk snel wat je precies wilt, knul! Kies\ndan maar wat anders uit.")
/*<103>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 18, 'param3': 12}
/*< 18>*/ 		make_actor_do_something(0, 0)
          	}
          }

          void entrypoint_113_37() {
/*<194>*/ 	start()
/*<197>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x000e0e0c>Ik zie dat je niet genoeg materialen hebt,\nknul. Yep, je hebt niet genoeg <color yellow<droom-\namuletten>coloroff>.\n\nVolgens mijn grootvaders notities vind je\ndie in een 'spirituele wereld'. Het klinkt\nallemaal erg raadselachtig.")
/*<198>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<196>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 195, 'param3': 12}
/*<195>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_03() {
/*<  9>*/ 	start()
/*<104>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 28>*/ 		printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00080800>O, bedankt! Tot snel weer, hè?<0x10009:0x00000002>")
/*<123>*/ 		story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
          		flw_143:
/*<143>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
/*<149>*/ 			switch (story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */]) {
          			  case 0:
          			  case 1:
/*<145>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 51}
/*<144>*/ 				printf(/* textboxtype: 19, unk: 0, line: 129 */ "Attentie, <0x10012:0x0000000b>meester. Met uw onlangs verbeterde zwaard\nkunt u nu ook <color red<schatten>coloroff> detecteren.\n\n\nKies voordat u de detectiefunctie gebruikt, deze\nnieuwe optie uit de lijst van opgeslagen doelen.")
/*<146>*/ 				story_flags[102 /* us: 805A9ADE 0x08, jp: 805ACD5E 0x08 */] = true;
/*<157>*/ 				open_dowsing_wheel(18)
/*<147>*/ 				story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */] = true;
/*<148>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          			}
          		  case 1:
          		}
          	  case 1:
/*< 13>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x0009090d>Ho, eens even... Heb je je bedacht?\nAlle staalvonken...\n\n\n<0x10009:0x00ffff00>Eh, goed dan. Als je toch een klusje voor\nme hebt, weet je me te vinden, knul!<0x10009:0x00000002>")
          		goto flw_143
          	}
          }

          void entrypoint_113_20() {
/*< 58>*/ 	start()
/*< 60>*/ 	printf(/* textboxtype: 0, unk: 0, line: 113 */ "<0x10012:0x00000065><0x10009:0x0000000f>Nou, zeg<0x10006:0xfccd>...<0x10006:0x00cd> En hoppa, alsjeblieft!<0x10005:0x001e0000>")
          }

          void entrypoint_113_38() {
/*<199>*/ 	start()
/*<202>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x000e0e0c>Heuj, knul! Zo te zien kom je wat spullen\ntekort. Je hebt niet genoeg <color yellow<monstergelei>coloroff>.\n\n\nVolgens mijn grootvaders notities komt\ndat smerige spul van zachte, slijmerige\nmonsters.")
/*<207>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<201>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 12}
/*<200>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_04() {
/*< 15>*/ 	start()
/*<152>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 0, unk: 0, line: 11 */ "Als je nog iets hebt waar je aan wilt laten\nwerken, laat me dat dan zeker weten!")
/*< 17>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<151>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "Huh? Ik kan de spullen die je bij je hebt,\nniet verder verbeteren. Ach, tot ziens dan\nmaar!")
          	}
          }

          void entrypoint_113_21() {
/*< 59>*/ 	start()
/*<111>*/ 	set_camera(5, 0)
/*< 62>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 22, 'next': 63, 'param3': 32}
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 0, 'next': 43, 'param3': 16}
/*< 43>*/ 	printf(/* textboxtype: 0, unk: 0, line: 116 */ "<0x10009:0x161a0200>Dank je, BZZRT! Mijn tank zit weer vol\nenergie. Ik ben overal klaar voor, zzzzt!")
/*<118>*/ 	set_camera(8, 0)
/*<119>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 113, 'param3': 16}
/*<113>*/ 	printf(/* textboxtype: 18, unk: 0, line: 117 */ "<pause 30><0x10009:0x160c0900>Huh?<pause 30> Wie is dit klein geschapen individu\nin groene kleren?")
/*<120>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 44, 'param3': 50}
/*< 44>*/ 	printf(/* textboxtype: 0, unk: 19, line: 109 */ "<0x10009:0x0008110a>WAUW! Hij praat! Dit is niet te geloven!\nHij is echt gerepareerd!\n\n\nHé, deze knul heeft me het materiaal\ngebracht waarmee ik je gerepareerd heb.\nBedank hem maar eens even!")
/*< 64>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 45, 'param3': 16}
/*< 45>*/ 	printf(/* textboxtype: 0, unk: 19, line: 118 */ "<0x10009:0x160b0900>Hm. Weet je zeker dat hij het was, grrzt?\n\n\n\n<0x10009:0x160c0900>Dan moet ik je helaas hierbij bedanken\nvoor je hulp en inspanningen, vrrrrrrt-\nTJONK.")
/*< 65>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 46, 'param3': 50}
/*< 46>*/ 	printf(/* textboxtype: 0, unk: 0, line: 110 */ "<0x10009:0x00090952>Hé, joh! Zo praat je toch niet tegen\ndegene die net je leven gered heeft, of\nwel?\n\n<0x10009:0x00070700>Hoe dan ook, deze knul wil dat je wat\nspullen voor hem tilt en jij gaat hem dus\nhelpen, begrepen?")
/*< 66>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 47, 'param3': 16}
/*< 47>*/ 	printf(/* textboxtype: 0, unk: 0, line: 119 */ "<0x10009:0x160b0900>Hmpf. Dit individu heeft mijn systemen\nhersteld, maar ik heb geen interesse om\nzijn bevelen te volgen, zrrt.\n\n<0x10009:0x160c0900>Kinderen helpen staat onderaan mijn lijst\nvan prioriteiten, dzzt!")
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 114, 'param3': 51}
/*<114>*/ 	set_camera(6, 0)
/*< 67>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 48, 'param3': 16}
/*< 48>*/ 	printf(/* textboxtype: 0, unk: 0, line: 125 */ "<0x10012:0x00000001>Meester <heroname>...\n\n\n\nIk neem een signaal waar van onderdelen van de\nwindmolen. U kunt dit signaal mogelijk ook met uw\nzwaard <color red<<sound 4>detecteren>coloroff> om de gevallen <color red<propeller >coloroff>te zoeken.")
/*<136>*/ 	story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<137>*/ 	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<138>*/ 	story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<139>*/ 	story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<140>*/ 	story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<141>*/ 	story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<155>*/ 	open_dowsing_wheel(12)
/*<154>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<156>*/ 	printf(/* textboxtype: 18, unk: 0, line: 126 */ "De propeller is echter te groot voor ons om mee naar\nboven te brengen.")
/*<125>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 22, 'next': 115, 'param3': 17}
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 3, 'next': 49, 'param3': 50}
/*< 49>*/ 	printf(/* textboxtype: 19, unk: 0, line: 120 */ "<0x10009:0x161a0200>Wah?! Wie bent u? <0x10009:0x160e0200>ZRRPT-FWOESSSJ!")
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	printf(/* textboxtype: 0, unk: 17, line: 121 */ "<0x10009:0x160e0200>U heet... Fi? Dzzt! Zal ik u liever\nmeesteres Fi noemen? Kan ik u van\ndienst zijn, meesteres Fi?")
/*<116>*/ 	printf(/* textboxtype: 0, unk: 0, line: 122 */ "<0x10009:0x160c0200>Be-<pause 20>Begrepen, vrrt!\n\n\n\n<0x10009:0x160e0200>Ik draag alles wat u maar wilt, ongeacht\ngewicht en ongeacht afstand... vwwt!")
/*< 87>*/ 	printf(/* textboxtype: 0, unk: 19, line: 127 */ "<0x10006:0xfccd><0x10012:0x00000014>......<0x10006:0x00cd>")
/*<131>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf(/* textboxtype: 0, unk: 0, line: 128 */ "<0x10012:0x00000001>Meester...\n\n\n\nWij hebben nu een manier om de windmolenpropeller\nterug te brengen naar Skyloft. Ik stel voor dat u nu\nop zoek gaat naar de <color blue<propeller>coloroff>.")
/*< 57>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 90, 'param3': 36}
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 127, 'param3': 16}
/*<127>*/ 	set_camera(11, 0)
/*< 89>*/ 	printf(/* textboxtype: 18, unk: 0, line: 123 */ "<0x10009:0x160c0200>Meester Broekie! Ik sta voor je klaar! Ik\nben nu in staat de gedachten van\nmeesteres Fi op te vangen, vrrt!\n\n<0x10009:0x160e0200>Vraag meesteres Fi om me te roepen\nwanneer je me nodig hebt, dan kom ik\nmeteen, bzzt!")
/*< 50>*/ 	story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */] = true;
/*<135>*/ 	set_camera(8, 0)
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 50}
/*<134>*/ 	printf(/* textboxtype: 0, unk: 18, line: 115 */ "<0x10009:0x00070700>Dus hoe wilde je spullen vinden die naar\nbeneden zijn gevallen?\n\n\nHm. Je kunt altijd nog de <color red<waarzegger>coloroff> om\nhulp vragen...\n\n\nHet lijkt een beetje een vreemde vogel,\nmaar hij is heel goed in het vinden van\ndingen die kwijt zijn.")
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 142, 'param3': 42}
/*<142>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<153>*/ 	zone_temp_flags[3 /* 0x1 08 */] = false;
          }

          void entrypoint_113_39() {
/*<203>*/ 	start()
/*<206>*/ 	printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x000e0e0c>Ik denk dat je nog wat materialen nodig\nhebt, knul. Yep, je hebt niet genoeg\n<color yellow<monsterklauwen>coloroff>.\n\nVolgens mijn grootvaders notities zijn\n<color yellow<monsterklauwen>coloroff> van vliegende\nmonsters afkomstig. Ook het soort dat\n's nachts tevoorschijn komt.")
/*<239>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<240>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00100e11>Hm... nu ik eraan denk, er zijn de laatste\npaar nachten wel erg weinig monsters\nactief!")
          		flw_208:
/*<208>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<205>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 204, 'param3': 12}
/*<204>*/ 		make_actor_do_something(0, 0)
          	  case 1:
          		goto flw_208
          	}
          }

          void entrypoint_113_05() {
/*< 19>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x000e0e0c>Heuj, knul! Zonder de juiste schatten kan\nik dat ding niet verbeteren!\n\n\n<0x10009:0x00070700>Kies voor nu wat anders dat ik voor je\nkan verbeteren!")
/*<105>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 24, 'param3': 12}
/*< 24>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_06() {
/*< 20>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x000e0e0c>Heuj, knul! Je hebt niet genoeg rupees.\nEn ik doe dit werk niet voor gratis!\n\n\n<0x10009:0x00070700>Kies iets anders dat ik voor je kan\nverbeteren!")
/*<106>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 23, 'param3': 12}
/*< 23>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_40() {
/*<209>*/ 	start()
/*<212>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x000e0e0c>Heuj, knul! Zo te zien kom je wat spullen\ntekort. Je hebt niet genoeg <color yellow<monster-\nhoorns>coloroff>.\n\nVolgens grootvaders notities vind je die\ndingen door monsters te verslaan die ze\ngebruiken om hun vrienden om hulp te\nvragen.")
/*<213>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<211>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 210, 'param3': 12}
/*<210>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_07() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000e0e0c>Heuj, knul! Je hebt op dit moment niets\nbij je dat ik kan verbeteren... Waarom ga\nje niet eerst naar Rupins winkel om wat\nte kopen?")
          }

          void entrypoint_113_41() {
/*<214>*/ 	start()
/*<217>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x000e0e0c>Je komt wat materialen tekort, knul. Yep,\nje hebt niet genoeg <color yellow<schedelsieraden>coloroff>.\n\n\nVolgens mijn grootvaders notities vind je\ndie soms wanneer je vijanden uitschakelt\ndie knotsen gebruiken...")
/*<218>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<216>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 215, 'param3': 12}
/*<215>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_08() {
/*< 72>*/ 	start()
/*< 77>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00080800>Oké. Dus dat schild kan wel een reparatie\ngebruiken... Dat is dan <color red<10 rupees>coloroff>.\n[1-]Oké![2]Laat maar.")
/*< 74>*/ 	switch (choice(2)) {
          	  case 0:
/*< 81>*/ 		switch (has_rupees(10)) {
          		  case 0:
/*< 83>*/ 			rupees += -10;
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0007070e>Oké! Wacht hier even!")
/*<132>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 121, 'param3': 12}
/*<121>*/ 			story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = true;
/*< 79>*/ 			make_actor_do_something(11, 0)
/*< 80>*/ 			printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00080809>Zo, ik ben klaar! Hier, dit is voor jou!")
          		  case 1:
/*< 82>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x000e0e0c>Heuj, knul! Je hebt niet genoeg rupees!\nGa die eerst maar eens regelen.")
          		}
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "Geen interesse? Kan ik misschien iets\nanders voor je repareren?")
/*<133>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 12}
/*< 76>*/ 		make_actor_do_something(10, 0)
          	}
          }

          void entrypoint_113_42() {
/*<219>*/ 	start()
/*<222>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000e0e0c>Heuj, knul! Zo te zien kom je wat spullen\ntekort. Je hebt niet genoeg <color yellow<kwaadaardige\nkristallen>coloroff>.\n\nVolgens mijn grootvaders notities vind je\ndie wanneer je vijanden verslaat die in\nstaat zijn je te vervloeken...")
/*<227>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<221>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 220, 'param3': 12}
/*<220>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_09() {
/*<124>*/ 	start()
/*<122>*/ 	story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
/*<107>*/ 	switch (context_related2(2)) {
          	  case 0:
/*<108>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00080800>Heuj, knul! Kan ik nog andere schilden\nvoor je fiksen?")
/*<110>*/ 		make_actor_do_something(10, 0)
          	  case 1:
/*<109>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00080800>Heuj, knul! Je hebt geen schilden meer\ndie ik kan repareren. Dus tot later, hè!")
          	}
          }

          void entrypoint_113_43() {
/*<223>*/ 	start()
/*<226>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x000e0e0c>Heuj, knul! Zo te zien kom je wat spullen\ntekort. Je hebt niet genoeg <color yellow<blauwe vogel-\nveren>coloroff>.\n\nVolgens notities van mijn grootvader zijn\nze afkomstig van zeldzame kleine blauwe\nvogels uit het bos. Je zult ze met een\nnet moeten vangen!")
/*<228>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<225>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 12}
/*<224>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_44() {
/*<229>*/ 	start()
/*<232>*/ 	printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x000e0e0c>Heuj, knul! Zo te zien kom je wat spullen\ntekort. Je hebt niet genoeg <color yellow<gouden\nschedelsieraden>coloroff>.\n\n<color yellow<Gouden schedelsieraden>coloroff> zijn schedel-\nsieraden, maar dan bedekt met een laagje\ngoud. Ze zijn enorm zeldzaam!")
/*<233>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<231>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 230, 'param3': 12}
/*<230>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_45() {
/*<234>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x000e0e0c>Heuj, knul! Zo te zien kom je wat spullen\ntekort. Je hebt niet genoeg <color yellow<godinnen-\npluimen>coloroff>.\n\nZe zijn extreem zeldzaam en ook heel\nkostbaar, dat is in elk geval wat er in\nmijn grootvaders notities staat.")
/*<238>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<236>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 235, 'param3': 12}
/*<235>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_30() {
/*<159>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000e0e0c>Heuj, knul! Je hebt niet genoeg spullen\nvoor me. Je hebt nog wat <color yellow<hoornaarlarven\n>coloroff>nodig.\n\nVolgens de aantekeningen van mijn groot-\nvader kun je die dingen vinden in hun\nnesten, op dichtbeboste plekken.")
/*<167>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<161>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 160, 'param3': 12}
/*<160>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_31() {
/*<163>*/ 	start()
/*<166>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x000e0e0c>Heuj, knul! Volgens mij kom je wat\nspullen tekort. Je hebt niet genoeg <color yellow<vogel-\nveren>coloroff>.\n\nVolgens mijn grootvaders notities zijn\nzulke veren afkomstig van kleine vogels\ndie in beboste gebieden leven. Probeer er\neen te vangen met een net.")
/*<168>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<165>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 12}
/*<164>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_32() {
/*<169>*/ 	start()
/*<172>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x000e0e0c>Je komt wat spullen tekort, knul. Yep, je\nhebt zo te zien niet genoeg <color yellow<bollen tuimel-\nkruid>coloroff>.\n\nVolgens mijn grootvaders notities rolt\n<color yellow<tuimelkruid>coloroff> rond door de woestijn. Je\nhebt een net nodig om het te pakken te\nkrijgen.")
/*<173>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	make_actor_do_something(0, 0)
          }

