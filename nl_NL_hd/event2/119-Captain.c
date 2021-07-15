          void entrypoint_119_10() {
/*<113>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<112>*/ 		printf("\x0E\x01\x09\x04\x17\x209\x0E\x01\x08\x02\x2CDMooi!")
/*<124>*/ 		set_camera(3, 0)
/*<125>*/ 		printf("\x0E\x01\x09\x04\x17\x1A08Dat zag er heel goed uit!\n\n\n\n\x0E\x01\x09\x04\x09\x200Zullen we tenslotte nog een <g<genadeslag\n>>proberen?\n[1]Natuurlijk![2-]Nee, dank je.")
          	  case 1:
/*<121>*/ 		printf("\x0E\x01\x09\x04\x09\x1D04Wat is er, Link? Zo ken ik je\nniet.")
/*<122>*/ 		set_camera(3, 0)
/*<123>*/ 		printf("\x0E\x01\x09\x04\x08\x1D01Ga midden in een groep vijanden staan en\nzwaai op het juiste moment met je zwaard.\nZo doe je een echte draaiaanval.\n\n\x0E\x01\x09\x04\x09\x200Wil je het nog eens proberen?\n[1]Ja![2-]Nee...")
          	}
          }

          void entrypoint_119_11() {
/*<115>*/ 	start()
/*<111>*/ 	printf("\x0E\x01\x09\x04\x08\x200Mooi! Ik zet een ring van stammen om\nje heen. Het is de bedoeling dat je ze met\neen <g<draaiaanval >>allemaal doormidden\nhakt zonder dat je van je plek beweegt.")
/*<165>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': -1, 'param3': 60}
          }

          void entrypoint_119_12() {
/*<126>*/ 	start()
/*<127>*/ 	printf("\x0E\x01\x09\x04\x08\x1D03Goed! <r<Focus >>met (Z) op een vijand die op\nde grond ligt en<r< >>spring boven op de vijand\nvoor een <g<genadeslag>>.\x0E\x01\x11\x02\x7CD\n\n\x0E\x01\x09\x04\x09\x1D00Doe eerst een horizontale slag tegen die\nboomstam. Sla na een succesvolle slag toe\nmet een genadeslag om je tegenstander\neen vernietigende klap te geven!")
          }

          void entrypoint_119_13() {
/*<128>*/ 	start()
/*<129>*/ 	printf("\x0E\x01\x09\x04\x17\x1A09\x0E\x01\x08\x02\x1CDZo doe je dat! Mooi!")
/*<130>*/ 	set_camera(3, 0)
/*<131>*/ 	printf("\x0E\x01\x09\x04\x19\x200Een <g<genadeslag>> werkt ook heel goed\nnadat je met succes je <r<schild >>gebruikt hebt\nof nadat je met een mooie <g<draaiaanval\n>>een vijand op zijn rug hebt laten belanden.\n\x0E\x01\x09\x04\x1C\x200Maar monsters blijven natuurlijk niet\nnetjes op hun rug liggen wachten! Je zult\nsnel toe moeten slaan, voordat ze weer\novereind komen!")
          }

          void entrypoint_119_01() {
          	start()
/*< 68>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 70>*/ 		printf("\x0E\x01\x09\x04\x09\x1901Doe de waard van De Oranje Poen de\ngroeten van me, oké?")
          	  case 1:
/*< 53>*/ 		switch (story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */]) {
          		  case 0:
/*< 54>*/ 			switch (adventure_pouch_has(2 0x0002)) {
          			  case 0:
/*< 67>*/ 				switch (zone_temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
          					flw_57:
/*< 57>*/ 					entrypoint_119_03();
          				  case 1:
/*< 58>*/ 					printf("\x0E\x01\x09\x04\x00\x03Zeg... Heb je nog wat meer van die\nloeihete pompoensoep bij je? Die is zooo\nlekker...\n[1]Eh... hier.[2]...")
/*< 59>*/ 					switch (choice(2)) {
          					  case 0:
/*< 61>*/ 						printf("\x0E\x01\x09\x04\x17\x1909O! Echt?! Sorry dat ik gelijk aannam\ndat hij wel voor mij zou zijn...\n\n\nMaar ik zeg er geen nee tegen!")
/*<138>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 108, 'param3': 47}
/*<108>*/ 						make_actor_do_something(0, 0)
/*< 62>*/ 						make_actor_do_something(1, 0)
/*<119>*/ 						{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 99, 'param3': 15}
/*< 99>*/ 						set_camera(10, 0)
/*<100>*/ 						{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 139, 'param3': 13}
/*<139>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 102, 'param3': 48}
/*<102>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 96, 'next': 101, 'param3': 6}
/*<101>*/ 						{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5651, 'next': 103, 'param3': 13}
/*<103>*/ 						printf("Mmmmmm!\x0E\x01\x05\x04\x1E\x00")
/*<104>*/ 						set_camera(11, 0)
/*< 63>*/ 						printf("Ah! Dat was genieten!\n\n\n\n\x0E\x01\x09\x04\x17\x1900Er gaat niets boven Bhas' pompoensoep.\nDaar mag je me voor wakker maken!")
/*<154>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 144, 'param3': 47}
/*<144>*/ 						set_camera(12, 0)
/*<143>*/ 						make_actor_do_something(2, 0)
/*<155>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 142, 'param3': 48}
/*<142>*/ 						printf("\x0E\x01\x09\x04\x08\x200Dank je wel, Link! Pak aan,\nhier heb je je beloning.")
/*<105>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 64, 'param3': 42}
/*< 64>*/ 						give_item(4 0x04);
/*< 71>*/ 						zone_temp_flags[1 /* 0x1 02 */] = true;
          					  case 1:
/*< 60>*/ 						printf("\x0E\x01\x06\x02\xFCCD... ...\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\x08\x1900HA! Dat was maar een grapje!")
/*< 65>*/ 						zone_temp_flags[2 /* 0x1 04 */] = true;
          					}
          				}
          			  case 1:
          				goto flw_57
          			}
          		  case 1:
/*< 33>*/ 			switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          			  case 0:
/*< 34>*/ 				switch (adventure_pouch_has(2 0x0002)) {
          				  case 0:
/*< 37>*/ 					printf("\x0E\x01\x09\x04\x08\x1901Hallo! \x0E\x03\x01\x00Link! Oefen je nog\nsteeds veel met je zwaard?\n\n\n\x0E\x01\x09\x04\x00\x200Wacht. Ik ruik iets...\n\n\n\n\x0E\x01\x09\x04\x00\x1909Die hartig-zoete geur! Is dat mijn\nfavoriete <r<pompoensoep>>?!\n\n\n\x0E\x01\x09\x04\x00\x200Ik heb de waard van De Oranje Poen\ngevraagd me wat soep te brengen, maar\ndie soep is er nog niet...\n\nWat?! Jij komt de pompoensoep van De\nOranje Poen bij mij bezorgen?\n[1]Dat klopt![2-]Eh, nee.")
/*< 41>*/ 					switch (choice(2)) {
          					  case 0:
/*< 42>*/ 						printf("\x0E\x01\x09\x04\x17\x1909JA! Geef me die soep!\n[1]Alstublieft![2-]Nee.")
/*< 44>*/ 						switch (choice(2)) {
          						  case 0:
/*<135>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 107, 'param3': 47}
/*<107>*/ 							make_actor_do_something(0, 0)
/*< 48>*/ 							make_actor_do_something(1, 0)
/*<118>*/ 							{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 95, 'param3': 15}
/*< 95>*/ 							set_camera(10, 0)
/*< 91>*/ 							{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 136, 'param3': 13}
/*<136>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 93, 'param3': 48}
/*< 93>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 96, 'next': 92, 'param3': 6}
/*< 92>*/ 							{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5655, 'next': 94, 'param3': 13}
/*< 94>*/ 							printf("Mmmmmm!\x0E\x01\x05\x04\x1E\x00")
/*< 96>*/ 							set_camera(11, 0)
/*< 52>*/ 							printf("\x0E\x01\x09\x04\x00\x13Mmm! Dit is goddelijk!\n\n\n\n\x0E\x01\x09\x04\x17\x1900Er gaat niets boven hete pompoensoep!")
/*<151>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 141, 'param3': 47}
/*<141>*/ 							make_actor_do_something(2, 0)
/*<145>*/ 							set_camera(12, 0)
/*<152>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 140, 'param3': 48}
/*<140>*/ 							printf("\x0E\x01\x09\x04\x08\x1900Goed gedaan! Bedank de waard maar\nnamens mij!")
/*< 51>*/ 							story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */] = true;
/*< 66>*/ 							zone_temp_flags[1 /* 0x1 02 */] = true;
/*<153>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*< 47>*/ 							printf("\x0E\x01\x09\x04\x00\x1D00Wat?! Heeft Bhas je niet gevraagd die\nsoep bij mij te bezorgen? Denk je soms\ndat dit grappig is? Pompoensoep is NIET\niets om grappen over te maken!\n\x0E\x01\x09\x04\x08\x1D00Als deze soep niet goed meer is, dan zul\nje nieuwe voor me moeten halen!\n\n\nIk hoop voor je dat de soep nog heet is!")
          						}
          					  case 1:
/*< 40>*/ 						printf("\x0E\x01\x09\x04\x0E\x1D00Ik heb Bhas gevraagd om de soep\nonmiddellijk te brengen. \x0E\x01\x09\x04\x08\x1D00Je wilt mij echt\nniet meemaken als ik m'n dagelijkse\nportie soep heb gemist!")
          					}
          				  case 1:
/*< 35>*/ 					switch (adventure_pouch_has(3 0x0003)) {
          					  case 0:
/*< 36>*/ 						printf("\x0E\x01\x09\x04\x08\x1901Hallo! \x0E\x03\x01\x00Link! Oefen je nog\nsteeds veel met je zwaard?\n\n\n\x0E\x01\x09\x04\x00\x200Wacht. Ik ruik iets...\n\n\n\n\x0E\x01\x09\x04\x00\x1909Die hartig-zoete geur! Is dat mijn\nfavoriete <r<pompoensoep>>?!\n\n\n\x0E\x01\x09\x04\x00\x200Ik heb de waard van De Oranje Poen\ngevraagd me wat soep te brengen, maar\ndie soep is er nog niet...\n\nWat?! Jij komt de pompoensoep van De\nOranje Poen bij mij bezorgen?\n[1]Dat klopt![2-]Eh, nee.")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
/*< 43>*/ 							printf("\x0E\x01\x09\x04\x17\x1909JA! Geef me die soep!\n[1]Alstublieft![2-]Nee.")
/*< 45>*/ 							switch (choice(2)) {
          							  case 0:
/*<132>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 106, 'param3': 47}
/*<106>*/ 								make_actor_do_something(0, 0)
/*< 49>*/ 								make_actor_do_something(1, 0)
/*<117>*/ 								{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 97, 'param3': 15}
/*< 97>*/ 								set_camera(10, 0)
/*< 88>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 133, 'param3': 13}
/*<133>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 90, 'param3': 48}
/*< 90>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 96, 'next': 89, 'param3': 6}
/*< 89>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4118, 'next': 147, 'param3': 13}
/*<147>*/ 								set_camera(11, 0)
/*<146>*/ 								printf("Bah! Wat een teleurstelling...<pause14> De soep is\nkoud!")
/*<148>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 149, 'param3': 47}
/*<149>*/ 								{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 7424, 'next': 134, 'param3': 13}
/*<134>*/ 								make_actor_do_something(2, 0)
/*< 98>*/ 								set_camera(12, 0)
/*<150>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 50, 'param3': 48}
/*< 50>*/ 								printf("Er zijn twee dingen die ik absoluut niet\nkan uitstaan; koude soep en luie types.\nGa onmiddellijk nieuwe soep voor me\nhalen en zorg ervoor dat hij heet is!")
/*<137>*/ 								{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          							  case 1:
/*< 46>*/ 								printf("\x0E\x01\x09\x04\x00\x1D00Wat?! Heeft Bhas je niet gevraagd die\nsoep bij mij te bezorgen? Denk je soms\ndat dit grappig is? Pompoensoep is NIET\niets om grappen over te maken!\n\x0E\x01\x09\x04\x08\x1D00Als deze soep niet goed meer is, dan zul\nje nieuwe voor me moeten halen!\n\n\nIk hoop voor je dat de soep nog heet is!")
          							}
          						  case 1:
/*< 38>*/ 							printf("\x0E\x01\x09\x04\x0E\x1D00Ik heb Bhas gevraagd om de soep\nonmiddellijk te brengen. \x0E\x01\x09\x04\x08\x1D00Je wilt mij echt\nniet meemaken als ik m'n dagelijkse\nportie soep heb gemist!")
          						}
          					  case 1:
/*< 56>*/ 						entrypoint_119_03();
          					}
          				}
          			  case 1:
/*< 69>*/ 				entrypoint_119_03();
          			}
          		}
          	}
          }

          void entrypoint_119_02() {
/*< 24>*/ 	start()
/*< 30>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 11, 'next': 25, 'param3': 32}
/*< 25>*/ 	printf("\x0E\x01\x09\x04\xB0D\x02Hé! \x0E\x01\x0D\x02\x1900\x0E\x03\x01\x00Link!")
/*< 31>*/ 	{'type': 'type3', 'subType': 1, 'param1': 11, 'param2': 0, 'next': 72, 'param3': 16}
/*< 72>*/ 	set_camera(1, 0)
/*< 28>*/ 	printf("\x0E\x01\x09\x04\x08\x1D00Het is verboden zwaarden mee naar\nbuiten te nemen.\n\n\nWaar denk je dat je mee bezig bent?\nDacht je met dat zwaard naar buiten\nte kunnen sluipen?")
/*< 73>*/ 	set_camera(2, 0)
/*< 29>*/ 	make_actor_do_something(3, 11)
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 11, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x00\x05Wat? <pause28>Je Loftwing is vermist? <pause28>En je wilt\nernaar op zoek gaan?\n\n\nHm, misschien kan ik voor deze ene keer\neen uitzondering maken. \x0E\x01\x09\x04\x09\xE00Maar onthoud\ndat Skyloft een vredige plek is. Alleen\nridders dragen een zwaard!\nDus waag het niet om daarbuiten als een\nwilde met je zwaard te zwaaien! Ik wil\nhierdoor niet in de problemen komen. Is\ndat duidelijk?\nMaar oefen misschien eerst met deze\nboomstammen en beloof me om dat\nzwaard alleen te gebruiken als je niet\nanders kunt, begrepen?")
/*< 74>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 27, 'param3': 42}
/*< 27>*/ 	story_flags[199 /* us: 805A9AEF 0x02, jp: 805ACD6F 0x02 */] = true;
/*< 75>*/ 	scene_flags[0 'Skyloft'][56 /* 0x6 01 */] = true;
          }

          void entrypoint_119_03() {
/*< 55>*/ 	start()
/*< 13>*/ 	switch (adventure_pouch_has(9 0x0009)) {
          	  case 0:
/*<156>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*< 17>*/ 			printf("\x0E\x01\x09\x04\x00\x05O? Je wilt meer over de <r<kunst van het\nverdedigen>> weten?\n[1]Iets praktisch.[2]De basis.[3-]Nee, dank je.")
/*< 19>*/ 			switch (choice(3)) {
          			  case 0:
/*<167>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 9, 'next': 20, 'param3': 60}
/*< 20>*/ 				printf("<r<Iets praktisch>>? Goed dan!\n\n\n\n\x0E\x01\x09\x04\x19\x1D00Als je je schild omhoog houdt, vlak voor\neen vijand toeslaat, <g<weer je de aanval van\nje vijand af>> met de kracht van je\nschildarm.\n\x0E\x01\x09\x04\x1C\x1D00Deze techniek heet de <r<schildaanval>>. Een\nvijand die door een schildaanval wordt\ngetroffen, wankelt naar achteren en is\neen makkelijk doelwit.\n\x0E\x01\x09\x04\x0D\x200Deze techniek is erg nuttig tegen vijanden\ndie dingen naar je gooien of die zich\nsteevast tegen je aanvallen weten te\nverdedigen.")
          				flw_21:
/*< 21>*/ 				printf("\x0E\x01\x09\x04\x0E\x200In een echt gevecht heb je een perfecte\ntiming nodig om je schild goed in te\nkunnen zetten. Je wilt echt niet het juiste\nmoment missen, geloof me.\n\x0E\x01\x09\x04\x08\x200Waarom probeer je de dingen die je hebt\ngeleerd niet eens uit op die <r<boomstam\nvoor schildtraining>>?")
          			  case 1:
/*<166>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 18, 'param3': 60}
/*< 18>*/ 				printf("\x0E\x01\x09\x04\x1C\x200Wanneer je je wilt verdedigen, haal dan je\n<r<schild>> tevoorschijn. Makkelijk zat, ik weet\nhet, maar je moet ergens beginnen.\n\n\x0E\x01\x09\x04\x0E\x200<g<Zwaai met je zwaard >>om je schild te laten\nzakken. Druk op (B) om zowel je zwaard\nals je schild weg te doen.\n\n\x0E\x01\x09\x04\x08\x200Wees wel voorzichtig met het aanvallen\nwanneer je al verdedigt. Telkens als je\n<g<met je zwaard uithaalt>>, beweeg je je schild\nopzij en<r< ontstaat een opening>>!")
          				goto flw_21
          			  case 2:
/*<160>*/ 				printf("\x0E\x01\x09\x04\x09\x200Aha... Je hebt geen zin in uitleg, maar\nleert liever door het zelf te doen. Laat die\nboomstammen maar eens wat zien dan!")
          			}
          		  case 1:
/*< 22>*/ 			switch (scene_flags[59 /* 0x6 08 */]) {
          			  case 0:
/*< 14>*/ 				printf("\x0E\x01\x09\x04\x00\x09Goh, Link, wat een prachtig\nschild heb je daar! \x0E\x01\x09\x04\x19\x200Nou, het wordt tijd dat\nik je de <r<kunst van het verdedigen >>leer. We\nbeginnen met de <r<beginnerstraining>>!")
          				flw_15:
/*< 15>*/ 				printf("\x0E\x01\x09\x04\x1C\x200Wanneer je je wilt verdedigen, haal dan je\n<r<schild>> tevoorschijn. Makkelijk zat, ik weet\nhet, maar je moet ergens beginnen.\n\n\x0E\x01\x09\x04\x0E\x200<g<Zwaai met je zwaard >>om je schild te laten\nzakken. Druk op (B) om zowel je zwaard\nals je schild weg te doen.\n\n\x0E\x01\x09\x04\x08\x200Wees wel voorzichtig met het aanvallen\nwanneer je al verdedigt. Telkens als je\n<g<met je zwaard uithaalt>>, beweeg je je schild\nopzij en<r< ontstaat een opening>>!")
/*< 16>*/ 				printf("\x0E\x01\x09\x04\x09\x1D00Probeer dat eerst maar eens!")
/*< 23>*/ 				scene_flags[0 'Skyloft'][60 /* 0x6 10 */] = true;
/*<164>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': -1, 'param3': 60}
          			  case 1:
/*<157>*/ 				printf("\x0E\x01\x09\x04\x08\x1D04\x0E\x03\x01\x00Link, rector Gaepora heeft me\nverteld wat er gebeurd is. Ik maak me\nzorgen om Zelda...\n\nWat er precies allemaal aan de hand is,\nweet ik ook niet...\n\n\nMaar één ding weet ik wel; het zwaard dat\nje daar hebt, komt niet uit Skyloft. Dat is\neen <r<eeuwenoud voorwerp >>dat alleen de\nuitverkorene kan gebruiken.\nDat jij degene bent met het zwaard,\nverklaart een boel.")
/*<159>*/ 				printf("\x0E\x01\x09\x04\x00\x1D04Hé, Link! Ik vroeg me zojuist\naf of ik nog wat voor je kon betekenen en\ntoen...\n\nToen bedacht ik dit! \x0E\x01\x09\x04\x19\x1D00Ik ga je inwijden in\nde geheime <r<kunst van het verdedigen>>!\n\n\n\x0E\x01\x09\x04\x00\x200Laten we eerst met de <r<basis>> beginnen!")
          				goto flw_15
          			}
          		}
          	  case 1:
/*< 11>*/ 		switch (scene_flags[59 /* 0x6 08 */]) {
          		  case 0:
/*< 12>*/ 			printf("\x0E\x01\x09\x04\x19\x1D01De kunst van het schild is er een van\nverdediging. Als je aanvallen en je\nverdediging niet in balans zijn, dan maak\nje geen kans in een echt gevecht.\n\x0E\x01\x09\x04\x08\xE00Je kunt bij de <r<bazaar >>een<r< schild>> kopen.\nGebruik altijd een schild bij het trainen.\nZo leer je ook beter met een zwaard\nomgaan!\n\x0E\x01\x09\x04\x09\x1D00Wees een verstandige knul en laat dat\nadvies goed tot je doordringen.")
          		  case 1:
/*<  8>*/ 			switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          			  case 0:
/*<  9>*/ 				printf("\x0E\x01\x09\x04\x08\x1D04\x0E\x03\x01\x00Link, rector Gaepora heeft me\nverteld wat er gebeurd is. Ik maak me\nzorgen om Zelda...\n\nWat er precies allemaal aan de hand is,\nweet ik ook niet...\n\n\nMaar één ding weet ik wel; het zwaard dat\nje daar hebt, komt niet uit Skyloft. Dat is\neen <r<eeuwenoud voorwerp >>dat alleen de\nuitverkorene kan gebruiken.\nDat jij degene bent met het zwaard,\nverklaart een boel.")
/*<158>*/ 				printf("\x0E\x01\x09\x04\x00\x1D00Ik wou dat ik je nog ergens mee kon\nhelpen, Link, maar helaas...\nOf wacht! Er is wel iets... Ja! Haal een\n<r<schild >>en kom dan terug!\n\x0E\x01\x09\x04\x19\x1D00Dan leer ik je de geheime <r<kunst van het\nverdedigen>>! Dan ben je op elk gevecht\nvoorbereid.")
/*< 10>*/ 				scene_flags[0 'Skyloft'][59 /* 0x6 08 */] = true;
          			  case 1:
/*<  5>*/ 				switch (scene_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x00\x05Wat zeg je? Je wilt graag meer leren over\nzwaardvechten?\n[1]Ja![2-]Nee.")
/*<  4>*/ 					switch (choice(2)) {
          					  case 0:
/*<  3>*/ 						printf("\x0E\x01\x09\x04\x09\x203Oké, de grondbeginselen van de zwaard-\nkunst... Uiteraard is het belangrijk om\nna te denken over de richting waarin je\nje zwaard zwaait.\nZwaai recht omhoog voor een <g<verticale\nslag>>, zwaai recht opzij voor een\n<g<horizontale slag>>. Stoot naar voren voor\neen <g<steekaanval>>!\n\x0E\x01\x09\x04\x17\x200En tenslotte is er de <g<draaiaanval>>, een\ngeavanceerde techniek. Dit is de perfecte\naanval voor als je omringd bent door\nvijanden.\n\x0E\x01\x09\x04\x18\x1D00Onthoud deze technieken en je zult wie\ndan ook aankunnen.\n\n\n\x0E\x01\x09\x04\x00\x1D04En onthoud de basis! Druk altijd op<r< >>(Z)\nom op een vijand te <r<focussen>> zodra die\nverschijnt.\x0E\x01\x11\x02\x7CD")
          						flw_7:
/*<  7>*/ 						printf("\x0E\x01\x09\x04\x1C\x1D03Probeer maar eens wat uit op deze\n<r<boomstammen>> hier!\n\n\n\x0E\x01\x09\x04\x09\x200Als je niet meer weet hoe je je zwaard\nmoet gebruiken, kun je \x0E\x02\x04\x02\x13CD gebruiken om\n<r<Hulp >>te krijgen.\x0E\x01\x11\x02\xBCD\n\n\x0E\x01\x09\x04\x08\x200Als je die stammen gespleten hebt, zal ik\nwat stammen neerzetten om je <r<speciale\ntechniek>> op uit te oefenen.")
/*<163>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': -1, 'param3': 60}
          					  case 1:
/*<  2>*/ 						printf("\x0E\x01\x09\x04\x0E\x1A08Ja, je weet al goed hoe je met een zwaard\nmoet omgaan, of niet?\n\n\n\x0E\x01\x09\x04\x08\x200Maar zonder oefenen kom je nergens! Je\nkunt geen meesterzwaardvechter worden\ndoor een beetje voor je uit te staren.\n\n\x0E\x01\x09\x04\x19\x1D00Je moet aan je basis blijven werken.\nGebruik (Z) om<r< te focussen op vijanden>>.\nHet lijkt misschien niet veel, maar een\nechte zwaardvechter doet niet anders!\x0E\x01\x11\x02\x7CD")
          						goto flw_7
          					}
          				  case 1:
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x00\x03Hé, Link!\n\n\n\n\x0E\x01\x09\x04\x09\x200Ben je hier om nog even met het zwaard\nte trainen? Ik ben onder de indruk, hoor,\ndat je dat nog even doet voordat de\nVleugelceremonie begint...\nHet zwaard ligt in de kamer hierachter.\nHaal het zwaard en kom dan hierheen.\n\n\nIk blijf hier nog wel even, dus als je\nvragen hebt over hoe je een zwaard\ngebruikt, hoor ik het graag.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_119_04() {
/*< 76>*/ 	start()
/*< 84>*/ 	printf("\x0E\x01\x09\x04\x01\x201Dat is een boomstam om je <r<verticale slag>>\nop te oefenen. Houd je zwaard recht\nomhoog en zwaai het vervolgens omlaag\nom de stam door te hakken!")
          }

          void entrypoint_119_05() {
/*< 80>*/ 	start()
/*< 85>*/ 	printf("\x0E\x01\x09\x04\x19\x203Dat is een boomstam om je <r<horizontale\nslag >>op te oefenen. Houd je zwaard\nhorizontaal en zwaai het opzij om toe te\nslaan!")
          }

          void entrypoint_119_06() {
/*< 81>*/ 	start()
/*< 86>*/ 	printf("\x0E\x01\x09\x04\x1D\x202Dat is een boomstam om je <r<diagonale\nslag >>op te oefenen. Zwaai je zwaard\ndiagonaal om de stam langs de snee\ndoormidden te hakken.")
          }

          void entrypoint_119_07() {
/*< 82>*/ 	start()
/*< 87>*/ 	printf("\x0E\x01\x09\x04\x08\x203Dat is een boomstam om je <r<steekaanval >>op\nte oefenen. Beweeg je zwaard daarvoor\nmet een korte stoot voorwaarts. Kies\nHULP voor meer informatie hierover.")
          }

          void entrypoint_119_08() {
/*< 83>*/ 	start()
/*<161>*/ 	switch (adventure_pouch_has(0 0x0000)) {
          	  case 0:
/*< 79>*/ 		printf("\x0E\x01\x09\x04\x19\x202Dat is een boomstam om je te leren\nverdedigen.\n\n\n\x0E\x01\x09\x04\x1C\x1D00Raak de stam met je zwaard en voer\nvervolgens een <r<schildaanval >>uit wanneer\nde stam op je af zwaait.")
          	  case 1:
/*< 77>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<162>*/ 			printf("\x0E\x01\x09\x04\x19\x1D02Dat is een boomstam om je <r<verdediging\n>>op te oefenen, maar je hebt geen <r<schild\n>>bij je. Die stam kogelt je nu zo omver,\ndus blijf er maar uit de buurt.")
          		  case 1:
/*< 78>*/ 			printf("\x0E\x01\x09\x04\x19\x1D02Dat is een boomstam om je <r<verdediging>> op te\noefenen, dus je moet een <r<schild>> vasthouden. Die\nstam kogelt je nu zo omver, dus blijf er maar\nuit de buurt als je je nog niet kunt verdedigen.")
          		}
          	}
          }

          void entrypoint_119_09() {
/*<109>*/ 	start()
/*<114>*/ 	printf("\x0E\x01\x09\x04\n\x213Goed gedaan, Link!")
/*<116>*/ 	set_camera(3, 0)
/*<110>*/ 	printf("\x0E\x01\x09\x04\x08\x1908Je bent een geboren zwaardvechter. Je\nleert snel en goed, dus ik kan me geen\nbetere leerling wensen!\n\n\x0E\x01\x09\x04\x09\x200Ben je klaar om de <g<draaiaanval>> uit te\nproberen?\n[1]Ja![2-]Nog niet.")
          }

