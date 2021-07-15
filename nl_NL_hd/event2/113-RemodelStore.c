          void entrypoint_113_33() {
/*<174>*/ 	start()
/*<177>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHeuj, knul! Je komt wat spullen tekort\nvolgens mij. Je hebt niet genoeg <y<Lizalfos-\nstaarten>>.\n\nVolgens mijn grootvaders notities zijn\ndat staarten van grote hagedisachtige\nmonsters.")
/*<178>*/ 	printf("\x0E\x01\x09\x04\x07\x700Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<176>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 175, 'param3': 12}
/*<175>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_34() {
/*<179>*/ 	start()
/*<182>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CJe hebt niet genoeg materialen, knul. Tja,\nje hebt niet genoeg <y<Eldin-erts>>.\n\n\nVolgens mijn grootvaders notities vind je\ndat spul diep in vurige bergen.")
/*<187>*/ 	printf("\x0E\x01\x09\x04\x07\x700Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<181>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 180, 'param3': 12}
/*<180>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_35() {
/*<183>*/ 	start()
/*<241>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*<242>*/ 		printf("\x0E\x01\x09\x04\x0E\xE0CHeuj, knul! Zo te zien kom je wat spullen\ntekort. Je hebt niet genoeg <y<oerbloemen>>.\n\n\nVolgens mijn grootvaders notities\ngroeiden deze bloemen ooit in een land\nmet veel zand. Je hebt er ook eentje\ngebruikt om Schrootbot te fiksen!")
          		flw_188:
/*<188>*/ 		printf("\x0E\x01\x09\x04\x07\x700Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<185>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 12}
/*<184>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<186>*/ 		printf("\x0E\x01\x09\x04\x0E\xE0CHeuj, knul! Zo te zien kom je wat spullen\ntekort. Je hebt niet genoeg <y<oerbloemen>>.\n\n\nVolgens mijn grootvaders notities\nbloeiden die in een land met veel zand,\nmaar niemand weet of ze daar nog\nbestaan.")
          		goto flw_188
          	}
          }

          void entrypoint_113_01() {
          	start()
/*< 92>*/ 	switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          	  case 0:
/*< 93>*/ 		printf("\x0E\x01\x09\x04\x00\x03Heuj, knul! Gedraagt <b<Schrootbot>> zich een\nbeetje? Kan ik iets voor je doen?\n[1]Iets verbeteren.[2]Schild repareren.[3-]Nee, bedankt.")
          		flw_4:
/*<  4>*/ 		switch (choice(3)) {
          		  case 0:
/*< 31>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<  2>*/ 				printf("\x0E\x01\x09\x04\x00\x09Ik ga meteen aan de slag! Dit kan ik op\ndit moment voor je verbeteren.")
/*<  5>*/ 				make_actor_do_something(0, 0)
          			  case 1:
/*< 32>*/ 				printf("\x0E\x01\x09\x04\x0E\xE0CHeuj, knul! Je hebt op dit moment niets\nbij je dat ik kan verbeteren... Waarom ga\nje niet eerst naar Rupins winkel om wat\nte kopen?")
          			}
          		  case 1:
/*< 69>*/ 			switch (context_related2(2)) {
          			  case 0:
/*< 68>*/ 				printf("\x0E\x01\x09\x04\x00\x09Deze schilden kan ik op dit moment voor\nje repareren.")
/*< 71>*/ 				make_actor_do_something(10, 0)
          			  case 1:
/*< 70>*/ 				printf("\x0E\x01\x09\x04\x0E\xE0CMaak je een geintje? Je hebt helemaal\ngeen beschadigde schilden!\n\n\nHeb je niet wat beters te doen of zo? Dat\nkomt hier een beetje hardwerkende lui als\nik lastigvallen... Hmmgrrbl.")
          			}
          		  case 2:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x0E\xE0CWat krijgen we... Als je niks hebt waar ik\naan kan sleutelen, waarom ben je dan\nhier?")
          		}
          	  case 1:
/*< 54>*/ 		switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          		  case 0:
/*< 51>*/ 			printf("\x0E\x01\x09\x04\x00\x1104Dus... Let goed op <b<Schrootbot >>voor me,\noké? O, en trouwens, hij kan gedachten\nlezen door een soort straling of zo...\n\n\x0E\x01\x09\x04\x08\x700Dus als je hem nodig hebt, weet hij je\nprecies te vinden!\n\n\nHij is soms wel een beetje kortaf, maar\nhij is een harde werker als hij in een\ngoede bui is. <pause1E>Goed, tot later maar weer!")
/*< 55>*/ 			printf("\x0E\x01\x09\x04\x07\x700Kan ik weer iets voor je verbeteren? Ik\nrepareer ook schilden!\n[1]Iets verbeteren.[2]Schild repareren.[3-]Nee, bedankt.")
          			goto flw_4
          		  case 1:
/*< 33>*/ 			switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          			  case 0:
/*< 39>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 40, 'param3': 31}
/*< 40>*/ 				printf("\x0E\x01\x09\x04\x00\x03Heuj, knul! Hoe is het? Is er iets aan\nde hand? Je ziet eruit alsof het erg\ndringend is.\n\nO, ik weet het denk ik al. Je gaat me\nom een gunst vragen, of niet?\n[1]Ja...[2-]Nee...")
/*< 41>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          					  case 0:
/*< 38>*/ 						printf("\x0E\x01\x09\x04\x00\x01Als je wilt dat ik <b<Schrootbot>> hier weer aan\nde praat krijg, moet je me een <y<oerbloem\n>>brengen. Maar ik heb geen idee hoe je er\neen vindt.[1]Ik heb er een![2-]Ik ook niet.")
          						flw_84:
/*< 84>*/ 						switch (choice(2)) {
          						  case 0:
/*< 85>*/ 							printf("\x0E\x01\x09\x04\x07\x717WAT?! Je hebt er eentje?! Dat kan toch\nniet waar zijn?! Dit is geweldig!")
/*< 34>*/ 							switch (context_related2(1)) {
          							  case 0:
/*< 35>*/ 								printf("\x0E\x01\x09\x04\x0E\xE0CHé\x0E\x01\x06\x02\xFDCD... Probeer je me nu in de maling te\nnemen? Je hebt helemaal geen bloem\nbij je! Erg flauw, knul.")
/*< 37>*/ 								story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
          							  case 1:
/*< 98>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 101, 'param3': 47}
/*<101>*/ 								set_camera(4, 0)
/*<100>*/ 								{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 99, 'param3': 15}
/*< 99>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 42, 'param3': 48}
/*< 42>*/ 								printf("\x0E\x01\x09\x04\x00\x18Dus dit is een <y<oerbloem>>?! Er lekt een\nolieachtige vloeistof uit de steel! Super,\nhiermee kunnen we <b<Schrootbot>> repareren!\n\n\x0E\x01\x09\x04\x07\x700Wacht hier! Ik heb hem in een paar tellen\nweer in topconditie!")
/*<112>*/ 								{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 61, 'param3': 42}
/*< 61>*/ 								make_actor_do_something(2, 0)
          							}
          						  case 1:
/*< 86>*/ 							printf("\x0E\x01\x09\x04\x0F\x916Ja, wie zegt dat nou iets? Maar als ik ooit\nzo'n <y<oerbloem>> vind...")
/*< 91>*/ 							story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
/*<158>*/ 							zone_temp_flags[3 /* 0x1 08 */] = false;
          						}
          					  case 1:
/*< 52>*/ 						printf("\x0E\x01\x09\x04\x10\x1008Huh? <pause28>Kom je vanwege die oude robot\nvan mijn grootvader?\n\n\n\x0E\x01\x09\x04\x00\xE00Nee, dat zal wel niet... Je kwam hier\ngewoon om te lachen om die grote man\ndie nog in zijn grootvaders sprookjes\ngelooft, of niet?\nJe bent niet de eerste...<pause28> Wacht... Dat is\nniet de reden? Je wilt de robot gebruiken\nom iets op te halen, van onder de wolken?\n\n\x0E\x01\x09\x04\x07\x700M-Maar, dat b-betekent... Dat betekent\ndat je mijn grootvaders verhalen gelooft?\nEcht waar?!")
/*< 53>*/ 						printf("\x0E\x01\x09\x04\x0D\x900Ik ben zo blij dat iemand me eindelijk\ngelooft! Maar ik weet niet of ik je kan\nhelpen. Grootvaders robot is namelijk,\ntja... Die is helaas...")
/*< 94>*/ 						set_camera(3, 0)
/*< 95>*/ 						printf("Kijk zelf maar!\n\n\n\nZijn naam is <b<Schrootbot>>. Een passende\nnaam, want hij ligt er tegenwoordig echt\nals schroot bij...\n\nOoit was het een fantastische robot die\nwaar dan ook naartoe kon gaan en\nwerkelijk alles kon tillen!\n\nMaar zoals je ziet\x0E\x01\x06\x02\xFFCD...\x0E\x01\x06\x02Í is er niet veel meer\nvan over dan een roestend geraamte...")
/*< 96>*/ 						set_camera(-1, 0)
/*< 97>*/ 						printf("\x0E\x01\x09\x04\x0D\xE00Opa vertelde mij ooit dat je hem misschien\nmet een extract van een <y<oerbloem>> weer\naan de praat kunt krijgen.\n\nDat is een soort brandstof voor deze\nrobot. \x0E\x01\x09\x04\x0F\xE00Maar ik zou niet weten wat voor\nbloem hij nu weer bedoelde.\n[1]Deze bloem![2-]Ik ook niet.")
          						goto flw_84
          					}
          				  case 1:
          					flw_25:
/*< 25>*/ 					zone_temp_flags[4 /* 0x1 10 */] = false;
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x00\x01Heuj, welkom! Dit is mijn werkplaats. Met\nde spullen die je tijdens je reizen vindt,\nkan ik hier je uitrusting verbeteren!\n\nAls je schild er slecht aan toe is, kan ik\ndat ook voor je repareren. Dus wat mag\nhet vandaag zijn?\n[1]Iets verbeteren.[2]Schild repareren.[3-]Niets.")
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
/*<192>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHeuj, knul! Zo te zien kom je wat spullen\ntekort. Je hebt niet genoeg <y<barnstenen\namuletten>>.\n\n\nVolgens mijn grootvaders notities kun je\n<y<barnstenen amuletten >>op allerlei plekken\nvinden. Ze zijn niet bijzonder zeldzaam.")
/*<193>*/ 	printf("\x0E\x01\x09\x04\x07\x700Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<191>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 190, 'param3': 12}
/*<190>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_02() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("\x0E\x01\x09\x04\x08\x806Prima. Wil je dat ik dit voor je verbeter?\nJe kunt daarna niet meer terug, oké?\n[1]Doe het![2-]Nee, toch niet.")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
/*<128>*/ 		make_actor_do_something(3, 0)
/*< 10>*/ 		printf("\x0E\x01\x09\x04\x07\x70EOké! Wacht hier even!")
/*<102>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 		make_actor_do_something(1, 0)
/*< 14>*/ 		printf("\x0E\x01\x09\x04\x08\x809Zo, ik ben klaar! Hier, dit is voor jou!")
/*< 26>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 11>*/ 		printf("\x0E\x01\x09\x04\x0E\xE05Bedenk snel wat je precies wilt, knul! Kies\ndan maar wat anders uit.")
/*<103>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 18, 'param3': 12}
/*< 18>*/ 		make_actor_do_something(0, 0)
          	}
          }

          void entrypoint_113_37() {
/*<194>*/ 	start()
/*<197>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CIk zie dat je niet genoeg materialen hebt,\nknul. Yep, je hebt niet genoeg <y<droom-\namuletten>>.\n\nVolgens mijn grootvaders notities vind je\ndie in een 'spirituele wereld'. Het klinkt\nallemaal erg raadselachtig.")
/*<198>*/ 	printf("\x0E\x01\x09\x04\x07\x700Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<196>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 195, 'param3': 12}
/*<195>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_03() {
/*<  9>*/ 	start()
/*<104>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 28>*/ 		printf("\x0E\x01\x09\x04\x08\x800O, bedankt! Tot snel weer, hè?\x0E\x01\x09\x04\x00\x02")
/*<123>*/ 		story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
          		flw_143:
/*<143>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
/*<149>*/ 			switch (story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */]) {
          			  case 0:
          			  case 1:
/*<145>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 51}
/*<144>*/ 				printf("Attentie, \x0E\x01\x12\x04\x00\x0Bmeester. Met uw onlangs verbeterde zwaard\nkunt u nu ook <r<schatten>> detecteren.\n\n\nKies voordat u de detectiefunctie gebruikt, deze\nnieuwe optie uit de lijst van opgeslagen doelen.")
/*<146>*/ 				story_flags[102 /* us: 805A9ADE 0x08, jp: 805ACD5E 0x08 */] = true;
/*<157>*/ 				open_dowsing_wheel(18)
/*<147>*/ 				story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */] = true;
/*<148>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          			}
          		  case 1:
          		}
          	  case 1:
/*< 13>*/ 		printf("\x0E\x01\x09\x04\x09\x90DHo, eens even... Heb je je bedacht?\nAlle staalvonken...\n\n\n\x0E\x01\x09\x04ÿ\xFF00Eh, goed dan. Als je toch een klusje voor\nme hebt, weet je me te vinden, knul!\x0E\x01\x09\x04\x00\x02")
          		goto flw_143
          	}
          }

          void entrypoint_113_20() {
/*< 58>*/ 	start()
/*< 60>*/ 	printf("\x0E\x01\x12\x04\x00e\x0E\x01\x09\x04\x00\x0FNou, zeg\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í En hoppa, alsjeblieft!\x0E\x01\x05\x04\x1E\x00")
          }

          void entrypoint_113_38() {
/*<199>*/ 	start()
/*<202>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHeuj, knul! Zo te zien kom je wat spullen\ntekort. Je hebt niet genoeg <y<monstergelei>>.\n\n\nVolgens mijn grootvaders notities komt\ndat smerige spul van zachte, slijmerige\nmonsters.")
/*<207>*/ 	printf("\x0E\x01\x09\x04\x07\x700Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<201>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 12}
/*<200>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_04() {
/*< 15>*/ 	start()
/*<152>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 16>*/ 		printf("Als je nog iets hebt waar je aan wilt laten\nwerken, laat me dat dan zeker weten!")
/*< 17>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<151>*/ 		printf("Huh? Ik kan de spullen die je bij je hebt,\nniet verder verbeteren. Ach, tot ziens dan\nmaar!")
          	}
          }

          void entrypoint_113_21() {
/*< 59>*/ 	start()
/*<111>*/ 	set_camera(5, 0)
/*< 62>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 22, 'next': 63, 'param3': 32}
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 0, 'next': 43, 'param3': 16}
/*< 43>*/ 	printf("\x0E\x01\x09\x04\x161A\x200Dank je, BZZRT! Mijn tank zit weer vol\nenergie. Ik ben overal klaar voor, zzzzt!")
/*<118>*/ 	set_camera(8, 0)
/*<119>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 113, 'param3': 16}
/*<113>*/ 	printf("<pause1E>\x0E\x01\x09\x04\x160C\x900Huh?<pause1E> Wie is dit klein geschapen individu\nin groene kleren?")
/*<120>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 44, 'param3': 50}
/*< 44>*/ 	printf("\x0E\x01\x09\x04\x08\x110AWAUW! Hij praat! Dit is niet te geloven!\nHij is echt gerepareerd!\n\n\nHé, deze knul heeft me het materiaal\ngebracht waarmee ik je gerepareerd heb.\nBedank hem maar eens even!")
/*< 64>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 45, 'param3': 16}
/*< 45>*/ 	printf("\x0E\x01\x09\x04\x160B\x900Hm. Weet je zeker dat hij het was, grrzt?\n\n\n\n\x0E\x01\x09\x04\x160C\x900Dan moet ik je helaas hierbij bedanken\nvoor je hulp en inspanningen, vrrrrrrt-\nTJONK.")
/*< 65>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 46, 'param3': 50}
/*< 46>*/ 	printf("\x0E\x01\x09\x04\x09\x952Hé, joh! Zo praat je toch niet tegen\ndegene die net je leven gered heeft, of\nwel?\n\n\x0E\x01\x09\x04\x07\x700Hoe dan ook, deze knul wil dat je wat\nspullen voor hem tilt en jij gaat hem dus\nhelpen, begrepen?")
/*< 66>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 47, 'param3': 16}
/*< 47>*/ 	printf("\x0E\x01\x09\x04\x160B\x900Hmpf. Dit individu heeft mijn systemen\nhersteld, maar ik heb geen interesse om\nzijn bevelen te volgen, zrrt.\n\n\x0E\x01\x09\x04\x160C\x900Kinderen helpen staat onderaan mijn lijst\nvan prioriteiten, dzzt!")
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 114, 'param3': 51}
/*<114>*/ 	set_camera(6, 0)
/*< 67>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 48, 'param3': 16}
/*< 48>*/ 	printf("\x0E\x01\x12\x04\x00\x01Meester Link...\n\n\n\nIk neem een signaal waar van onderdelen van de\nwindmolen. U kunt dit signaal mogelijk ook met uw\nzwaard <r<<pling>detecteren>> om de gevallen <r<propeller >>te zoeken.")
/*<136>*/ 	story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<137>*/ 	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<138>*/ 	story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<139>*/ 	story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<140>*/ 	story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<141>*/ 	story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<155>*/ 	open_dowsing_wheel(12)
/*<154>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<156>*/ 	printf("De propeller is echter te groot voor ons om mee naar\nboven te brengen.")
/*<125>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 22, 'next': 115, 'param3': 17}
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 3, 'next': 49, 'param3': 50}
/*< 49>*/ 	printf("\x0E\x01\x09\x04\x161A\x200Wah?! Wie bent u? \x0E\x01\x09\x04\x160E\x200ZRRPT-FWOESSSJ!")
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	printf("\x0E\x01\x09\x04\x160E\x200U heet... Fi? Dzzt! Zal ik u liever\nmeesteres Fi noemen? Kan ik u van\ndienst zijn, meesteres Fi?")
/*<116>*/ 	printf("\x0E\x01\x09\x04\x160C\x200Be-<pause14>Begrepen, vrrt!\n\n\n\n\x0E\x01\x09\x04\x160E\x200Ik draag alles wat u maar wilt, ongeacht\ngewicht en ongeacht afstand... vwwt!")
/*< 87>*/ 	printf("\x0E\x01\x06\x02\xFCCD\x0E\x01\x12\x04\x00\x14......\x0E\x01\x06\x02Í")
/*<131>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf("\x0E\x01\x12\x04\x00\x01Meester...\n\n\n\nWij hebben nu een manier om de windmolenpropeller\nterug te brengen naar Skyloft. Ik stel voor dat u nu\nop zoek gaat naar de <b<propeller>>.")
/*< 57>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 90, 'param3': 36}
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 127, 'param3': 16}
/*<127>*/ 	set_camera(11, 0)
/*< 89>*/ 	printf("\x0E\x01\x09\x04\x160C\x200Meester Broekie! Ik sta voor je klaar! Ik\nben nu in staat de gedachten van\nmeesteres Fi op te vangen, vrrt!\n\n\x0E\x01\x09\x04\x160E\x200Vraag meesteres Fi om me te roepen\nwanneer je me nodig hebt, dan kom ik\nmeteen, bzzt!")
/*< 50>*/ 	story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */] = true;
/*<135>*/ 	set_camera(8, 0)
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 50}
/*<134>*/ 	printf("\x0E\x01\x09\x04\x07\x700Dus hoe wilde je spullen vinden die naar\nbeneden zijn gevallen?\n\n\nHm. Je kunt altijd nog de <r<waarzegger>> om\nhulp vragen...\n\n\nHet lijkt een beetje een vreemde vogel,\nmaar hij is heel goed in het vinden van\ndingen die kwijt zijn.")
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 142, 'param3': 42}
/*<142>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<153>*/ 	zone_temp_flags[3 /* 0x1 08 */] = false;
          }

          void entrypoint_113_39() {
/*<203>*/ 	start()
/*<206>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CIk denk dat je nog wat materialen nodig\nhebt, knul. Yep, je hebt niet genoeg\n<y<monsterklauwen>>.\n\nVolgens mijn grootvaders notities zijn\n<y<monsterklauwen>> van vliegende\nmonsters afkomstig. Ook het soort dat\n's nachts tevoorschijn komt.")
/*<239>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<240>*/ 		printf("\x0E\x01\x09\x04\x10\xE11Hm... nu ik eraan denk, er zijn de laatste\npaar nachten wel erg weinig monsters\nactief!")
          		flw_208:
/*<208>*/ 		printf("\x0E\x01\x09\x04\x07\x700Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<205>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 204, 'param3': 12}
/*<204>*/ 		make_actor_do_something(0, 0)
          	  case 1:
          		goto flw_208
          	}
          }

          void entrypoint_113_05() {
/*< 19>*/ 	start()
/*< 21>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHeuj, knul! Zonder de juiste schatten kan\nik dat ding niet verbeteren!\n\n\n\x0E\x01\x09\x04\x07\x700Kies voor nu wat anders dat ik voor je\nkan verbeteren!")
/*<105>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 24, 'param3': 12}
/*< 24>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_06() {
/*< 20>*/ 	start()
/*< 22>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHeuj, knul! Je hebt niet genoeg rupees.\nEn ik doe dit werk niet voor gratis!\n\n\n\x0E\x01\x09\x04\x07\x700Kies iets anders dat ik voor je kan\nverbeteren!")
/*<106>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 23, 'param3': 12}
/*< 23>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_40() {
/*<209>*/ 	start()
/*<212>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHeuj, knul! Zo te zien kom je wat spullen\ntekort. Je hebt niet genoeg <y<monster-\nhoorns>>.\n\nVolgens grootvaders notities vind je die\ndingen door monsters te verslaan die ze\ngebruiken om hun vrienden om hulp te\nvragen.")
/*<213>*/ 	printf("\x0E\x01\x09\x04\x07\x700Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<211>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 210, 'param3': 12}
/*<210>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_07() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHeuj, knul! Je hebt op dit moment niets\nbij je dat ik kan verbeteren... Waarom ga\nje niet eerst naar Rupins winkel om wat\nte kopen?")
          }

          void entrypoint_113_41() {
/*<214>*/ 	start()
/*<217>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CJe komt wat materialen tekort, knul. Yep,\nje hebt niet genoeg <y<schedelsieraden>>.\n\n\nVolgens mijn grootvaders notities vind je\ndie soms wanneer je vijanden uitschakelt\ndie knotsen gebruiken...")
/*<218>*/ 	printf("\x0E\x01\x09\x04\x07\x700Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<216>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 215, 'param3': 12}
/*<215>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_08() {
/*< 72>*/ 	start()
/*< 77>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	printf("\x0E\x01\x09\x04\x08\x800Oké. Dus dat schild kan wel een reparatie\ngebruiken... Dat is dan <r<10 rupees>>.\n[1]Oké![2-]Laat maar.")
/*< 74>*/ 	switch (choice(2)) {
          	  case 0:
/*< 81>*/ 		switch (has_rupees(10)) {
          		  case 0:
/*< 83>*/ 			rupees += -10;
/*< 78>*/ 			printf("\x0E\x01\x09\x04\x07\x70EOké! Wacht hier even!")
/*<132>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 121, 'param3': 12}
/*<121>*/ 			story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = true;
/*< 79>*/ 			make_actor_do_something(11, 0)
/*< 80>*/ 			printf("\x0E\x01\x09\x04\x08\x809Zo, ik ben klaar! Hier, dit is voor jou!")
          		  case 1:
/*< 82>*/ 			printf("\x0E\x01\x09\x04\x0E\xE0CHeuj, knul! Je hebt niet genoeg rupees!\nGa die eerst maar eens regelen.")
          		}
          	  case 1:
/*< 75>*/ 		printf("Geen interesse? Kan ik misschien iets\nanders voor je repareren?")
/*<133>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 12}
/*< 76>*/ 		make_actor_do_something(10, 0)
          	}
          }

          void entrypoint_113_42() {
/*<219>*/ 	start()
/*<222>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHeuj, knul! Zo te zien kom je wat spullen\ntekort. Je hebt niet genoeg <y<kwaadaardige\nkristallen>>.\n\nVolgens mijn grootvaders notities vind je\ndie wanneer je vijanden verslaat die in\nstaat zijn je te vervloeken...")
/*<227>*/ 	printf("\x0E\x01\x09\x04\x07\x700Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<221>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 220, 'param3': 12}
/*<220>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_09() {
/*<124>*/ 	start()
/*<122>*/ 	story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
/*<107>*/ 	switch (context_related2(2)) {
          	  case 0:
/*<108>*/ 		printf("\x0E\x01\x09\x04\x08\x800Heuj, knul! Kan ik nog andere schilden\nvoor je fiksen?")
/*<110>*/ 		make_actor_do_something(10, 0)
          	  case 1:
/*<109>*/ 		printf("\x0E\x01\x09\x04\x08\x800Heuj, knul! Je hebt geen schilden meer\ndie ik kan repareren. Dus tot later, hè!")
          	}
          }

          void entrypoint_113_43() {
/*<223>*/ 	start()
/*<226>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHeuj, knul! Zo te zien kom je wat spullen\ntekort. Je hebt niet genoeg <y<blauwe vogel-\nveren>>.\n\nVolgens notities van mijn grootvader zijn\nze afkomstig van zeldzame kleine blauwe\nvogels uit het bos. Je zult ze met een\nnet moeten vangen!")
/*<228>*/ 	printf("\x0E\x01\x09\x04\x07\x700Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<225>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 12}
/*<224>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_44() {
/*<229>*/ 	start()
/*<232>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHeuj, knul! Zo te zien kom je wat spullen\ntekort. Je hebt niet genoeg <y<gouden\nschedelsieraden>>.\n\n<y<Gouden schedelsieraden>> zijn schedel-\nsieraden, maar dan bedekt met een laagje\ngoud. Ze zijn enorm zeldzaam!")
/*<233>*/ 	printf("\x0E\x01\x09\x04\x07\x700Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<231>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 230, 'param3': 12}
/*<230>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_45() {
/*<234>*/ 	start()
/*<237>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHeuj, knul! Zo te zien kom je wat spullen\ntekort. Je hebt niet genoeg <y<godinnen-\npluimen>>.\n\nZe zijn extreem zeldzaam en ook heel\nkostbaar, dat is in elk geval wat er in\nmijn grootvaders notities staat.")
/*<238>*/ 	printf("\x0E\x01\x09\x04\x07\x700Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<236>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 235, 'param3': 12}
/*<235>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_30() {
/*<159>*/ 	start()
/*<162>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHeuj, knul! Je hebt niet genoeg spullen\nvoor me. Je hebt nog wat <y<hoornaarlarven\n>>nodig.\n\nVolgens de aantekeningen van mijn groot-\nvader kun je die dingen vinden in hun\nnesten, op dichtbeboste plekken.")
/*<167>*/ 	printf("\x0E\x01\x09\x04\x07\x700Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<161>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 160, 'param3': 12}
/*<160>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_31() {
/*<163>*/ 	start()
/*<166>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHeuj, knul! Volgens mij kom je wat\nspullen tekort. Je hebt niet genoeg <y<vogel-\nveren>>.\n\nVolgens mijn grootvaders notities zijn\nzulke veren afkomstig van kleine vogels\ndie in beboste gebieden leven. Probeer er\neen te vangen met een net.")
/*<168>*/ 	printf("\x0E\x01\x09\x04\x07\x700Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<165>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 12}
/*<164>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_32() {
/*<169>*/ 	start()
/*<172>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CJe komt wat spullen tekort, knul. Yep, je\nhebt zo te zien niet genoeg <y<bollen tuimel-\nkruid>>.\n\nVolgens mijn grootvaders notities rolt\n<y<tuimelkruid>> rond door de woestijn. Je\nhebt een net nodig om het te pakken te\nkrijgen.")
/*<173>*/ 	printf("\x0E\x01\x09\x04\x07\x700Dus, kan ik nog iets anders voor je\nbetekenen?")
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	make_actor_do_something(0, 0)
          }

