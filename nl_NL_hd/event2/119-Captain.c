          void entrypoint_119_10() {
/*<113>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<112>*/ 		printf(/* textboxtype: 25, unk: 1, line: 28 */ "<0x10009:0x00170209><0x10008:0x02cd>Mooi!")
/*<124>*/ 		set_camera(3, 0)
/*<125>*/ 		printf(/* textboxtype: 0, unk: 25, line: 32 */ "<0x10009:0x00171a08>Dat zag er heel goed uit!\n\n\n\n<0x10009:0x00090200>Zullen we tenslotte nog een <color green<genadeslag\n>coloroff>proberen?\n[1-]Natuurlijk![2]Nee, dank je.")
          	  case 1:
/*<121>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00091d04>Wat is er, <heroname>? Zo ken ik je\nniet.")
/*<122>*/ 		set_camera(3, 0)
/*<123>*/ 		printf(/* textboxtype: 25, unk: 1, line: 31 */ "<0x10009:0x00081d01>Ga midden in een groep vijanden staan en\nzwaai op het juiste moment met je zwaard.\nZo doe je een echte draaiaanval.\n\n<0x10009:0x00090200>Wil je het nog eens proberen?\n[1-]Ja![2]Nee...")
          	}
          }

          void entrypoint_119_11() {
/*<115>*/ 	start()
/*<111>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00080200>Mooi! Ik zet een ring van stammen om\nje heen. Het is de bedoeling dat je ze met\neen <color green<draaiaanval >coloroff>allemaal doormidden\nhakt zonder dat je van je plek beweegt.")
/*<165>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': -1, 'param3': 60}
          }

          void entrypoint_119_12() {
/*<126>*/ 	start()
/*<127>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00081d03>Goed! <color red<Focus >coloroff>met (Z) op een vijand die op\nde grond ligt en<color red< >coloroff>spring boven op de vijand\nvoor een <color green<genadeslag>coloroff>.<0x10011:0x07cd>\n\n<0x10009:0x00091d00>Doe eerst een horizontale slag tegen die\nboomstam. Sla na een succesvolle slag toe\nmet een genadeslag om je tegenstander\neen vernietigende klap te geven!")
          }

          void entrypoint_119_13() {
/*<128>*/ 	start()
/*<129>*/ 	printf(/* textboxtype: 25, unk: 1, line: 34 */ "<0x10009:0x00171a09><0x10008:0x01cd>Zo doe je dat! Mooi!")
/*<130>*/ 	set_camera(3, 0)
/*<131>*/ 	printf(/* textboxtype: 0, unk: 25, line: 35 */ "<0x10009:0x00190200>Een <color green<genadeslag>coloroff> werkt ook heel goed\nnadat je met succes je <color red<schild >coloroff>gebruikt hebt\nof nadat je met een mooie <color green<draaiaanval\n>coloroff>een vijand op zijn rug hebt laten belanden.\n<0x10009:0x001c0200>Maar monsters blijven natuurlijk niet\nnetjes op hun rug liggen wachten! Je zult\nsnel toe moeten slaan, voordat ze weer\novereind komen!")
          }

          void entrypoint_119_01() {
          	start()
/*< 68>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 70>*/ 		printf(/* textboxtype: 0, unk: 25, line: 50 */ "<0x10009:0x00091901>Doe de waard van De Oranje Poen de\ngroeten van me, oké?")
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
/*< 58>*/ 					printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00000003>Zeg... Heb je nog wat meer van die\nloeihete pompoensoep bij je? Die is zooo\nlekker...\n[1-]Eh... hier.[2-]...")
/*< 59>*/ 					switch (choice(2)) {
          					  case 0:
/*< 61>*/ 						printf(/* textboxtype: 0, unk: 25, line: 47 */ "<0x10009:0x00171909>O! Echt?! Sorry dat ik gelijk aannam\ndat hij wel voor mij zou zijn...\n\n\nMaar ik zeg er geen nee tegen!")
/*<138>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 108, 'param3': 47}
/*<108>*/ 						make_actor_do_something(0, 0)
/*< 62>*/ 						make_actor_do_something(1, 0)
/*<119>*/ 						{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 99, 'param3': 15}
/*< 99>*/ 						set_camera(10, 0)
/*<100>*/ 						{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 139, 'param3': 13}
/*<139>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 102, 'param3': 48}
/*<102>*/ 						wait_frames(96)
/*<101>*/ 						{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5651, 'next': 103, 'param3': 13}
/*<103>*/ 						printf(/* textboxtype: 0, unk: 25, line: 44 */ "Mmmmmm!<0x10005:0x001e0000>")
/*<104>*/ 						set_camera(11, 0)
/*< 63>*/ 						printf(/* textboxtype: 1, unk: 0, line: 48 */ "Ah! Dat was genieten!\n\n\n\n<0x10009:0x00171900>Er gaat niets boven Bhas' pompoensoep.\nDaar mag je me voor wakker maken!")
/*<154>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 144, 'param3': 47}
/*<144>*/ 						set_camera(12, 0)
/*<143>*/ 						make_actor_do_something(2, 0)
/*<155>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 142, 'param3': 48}
/*<142>*/ 						printf(/* textboxtype: 25, unk: 1, line: 49 */ "<0x10009:0x00080200>Dank je wel, <heroname>! Pak aan,\nhier heb je je beloning.")
/*<105>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 64, 'param3': 42}
/*< 64>*/ 						give_item(4 0x04);
/*< 71>*/ 						zone_temp_flags[1 /* 0x1 02 */] = true;
          					  case 1:
/*< 60>*/ 						printf(/* textboxtype: 25, unk: 1, line: 46 */ "<0x10006:0xfccd>... ...<0x10006:0x00cd>\n\n\n<0x10009:0x00081900>HA! Dat was maar een grapje!")
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
/*< 37>*/ 					printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00081901>Hallo! <0x30001:0x><heroname>! Oefen je nog\nsteeds veel met je zwaard?\n\n\n<0x10009:0x00000200>Wacht. Ik ruik iets...\n\n\n\n<0x10009:0x00001909>Die hartig-zoete geur! Is dat mijn\nfavoriete <color red<pompoensoep>coloroff>?!\n\n\n<0x10009:0x00000200>Ik heb de waard van De Oranje Poen\ngevraagd me wat soep te brengen, maar\ndie soep is er nog niet...\n\nWat?! Jij komt de pompoensoep van De\nOranje Poen bij mij bezorgen?\n[1-]Dat klopt![2]Eh, nee.")
/*< 41>*/ 					switch (choice(2)) {
          					  case 0:
/*< 42>*/ 						printf(/* textboxtype: 0, unk: 25, line: 38 */ "<0x10009:0x00171909>JA! Geef me die soep!\n[1-]Alstublieft![2]Nee.")
/*< 44>*/ 						switch (choice(2)) {
          						  case 0:
/*<135>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 107, 'param3': 47}
/*<107>*/ 							make_actor_do_something(0, 0)
/*< 48>*/ 							make_actor_do_something(1, 0)
/*<118>*/ 							{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 95, 'param3': 15}
/*< 95>*/ 							set_camera(10, 0)
/*< 91>*/ 							{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 136, 'param3': 13}
/*<136>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 93, 'param3': 48}
/*< 93>*/ 							wait_frames(96)
/*< 92>*/ 							{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5655, 'next': 94, 'param3': 13}
/*< 94>*/ 							printf(/* textboxtype: 0, unk: 25, line: 44 */ "Mmmmmm!<0x10005:0x001e0000>")
/*< 96>*/ 							set_camera(11, 0)
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00000013>Mmm! Dit is goddelijk!\n\n\n\n<0x10009:0x00171900>Er gaat niets boven hete pompoensoep!")
/*<151>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 141, 'param3': 47}
/*<141>*/ 							make_actor_do_something(2, 0)
/*<145>*/ 							set_camera(12, 0)
/*<152>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 140, 'param3': 48}
/*<140>*/ 							printf(/* textboxtype: 25, unk: 1, line: 43 */ "<0x10009:0x00081900>Goed gedaan! Bedank de waard maar\nnamens mij!")
/*< 51>*/ 							story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */] = true;
/*< 66>*/ 							zone_temp_flags[1 /* 0x1 02 */] = true;
/*<153>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*< 47>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00001d00>Wat?! Heeft Bhas je niet gevraagd die\nsoep bij mij te bezorgen? Denk je soms\ndat dit grappig is? Pompoensoep is NIET\niets om grappen over te maken!\n<0x10009:0x00081d00>Als deze soep niet goed meer is, dan zul\nje nieuwe voor me moeten halen!\n\n\nIk hoop voor je dat de soep nog heet is!")
          						}
          					  case 1:
/*< 40>*/ 						printf(/* textboxtype: 25, unk: 1, line: 37 */ "<0x10009:0x000e1d00>Ik heb Bhas gevraagd om de soep\nonmiddellijk te brengen. <0x10009:0x00081d00>Je wilt mij echt\nniet meemaken als ik m'n dagelijkse\nportie soep heb gemist!")
          					}
          				  case 1:
/*< 35>*/ 					switch (adventure_pouch_has(3 0x0003)) {
          					  case 0:
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00081901>Hallo! <0x30001:0x><heroname>! Oefen je nog\nsteeds veel met je zwaard?\n\n\n<0x10009:0x00000200>Wacht. Ik ruik iets...\n\n\n\n<0x10009:0x00001909>Die hartig-zoete geur! Is dat mijn\nfavoriete <color red<pompoensoep>coloroff>?!\n\n\n<0x10009:0x00000200>Ik heb de waard van De Oranje Poen\ngevraagd me wat soep te brengen, maar\ndie soep is er nog niet...\n\nWat?! Jij komt de pompoensoep van De\nOranje Poen bij mij bezorgen?\n[1-]Dat klopt![2]Eh, nee.")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
/*< 43>*/ 							printf(/* textboxtype: 0, unk: 25, line: 38 */ "<0x10009:0x00171909>JA! Geef me die soep!\n[1-]Alstublieft![2]Nee.")
/*< 45>*/ 							switch (choice(2)) {
          							  case 0:
/*<132>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 106, 'param3': 47}
/*<106>*/ 								make_actor_do_something(0, 0)
/*< 49>*/ 								make_actor_do_something(1, 0)
/*<117>*/ 								{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 97, 'param3': 15}
/*< 97>*/ 								set_camera(10, 0)
/*< 88>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 133, 'param3': 13}
/*<133>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 90, 'param3': 48}
/*< 90>*/ 								wait_frames(96)
/*< 89>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4118, 'next': 147, 'param3': 13}
/*<147>*/ 								set_camera(11, 0)
/*<146>*/ 								printf(/* textboxtype: 25, unk: 1, line: 40 */ "Bah! Wat een teleurstelling...<pause 20> De soep is\nkoud!")
/*<148>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 149, 'param3': 47}
/*<149>*/ 								{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 7424, 'next': 134, 'param3': 13}
/*<134>*/ 								make_actor_do_something(2, 0)
/*< 98>*/ 								set_camera(12, 0)
/*<150>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 50, 'param3': 48}
/*< 50>*/ 								printf(/* textboxtype: 0, unk: 25, line: 41 */ "Er zijn twee dingen die ik absoluut niet\nkan uitstaan; koude soep en luie types.\nGa onmiddellijk nieuwe soep voor me\nhalen en zorg ervoor dat hij heet is!")
/*<137>*/ 								{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          							  case 1:
/*< 46>*/ 								printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00001d00>Wat?! Heeft Bhas je niet gevraagd die\nsoep bij mij te bezorgen? Denk je soms\ndat dit grappig is? Pompoensoep is NIET\niets om grappen over te maken!\n<0x10009:0x00081d00>Als deze soep niet goed meer is, dan zul\nje nieuwe voor me moeten halen!\n\n\nIk hoop voor je dat de soep nog heet is!")
          							}
          						  case 1:
/*< 38>*/ 							printf(/* textboxtype: 25, unk: 1, line: 37 */ "<0x10009:0x000e1d00>Ik heb Bhas gevraagd om de soep\nonmiddellijk te brengen. <0x10009:0x00081d00>Je wilt mij echt\nniet meemaken als ik m'n dagelijkse\nportie soep heb gemist!")
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
/*< 25>*/ 	printf(/* textboxtype: 0, unk: 25, line: 5 */ "<0x10009:0x0b0d0002>Hé! <0x1000D:0x1900><0x30001:0x><heroname>!")
/*< 31>*/ 	{'type': 'type3', 'subType': 1, 'param1': 11, 'param2': 0, 'next': 72, 'param3': 16}
/*< 72>*/ 	set_camera(1, 0)
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00081d00>Het is verboden zwaarden mee naar\nbuiten te nemen.\n\n\nWaar denk je dat je mee bezig bent?\nDacht je met dat zwaard naar buiten\nte kunnen sluipen?")
/*< 73>*/ 	set_camera(2, 0)
/*< 29>*/ 	make_actor_do_something(3, 11)
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 11, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf(/* textboxtype: 25, unk: 1, line: 7 */ "<0x10009:0x00000005>Wat? <pause 40>Je Loftwing is vermist? <pause 40>En je wilt\nernaar op zoek gaan?\n\n\nHm, misschien kan ik voor deze ene keer\neen uitzondering maken. <0x10009:0x00090e00>Maar onthoud\ndat Skyloft een vredige plek is. Alleen\nridders dragen een zwaard!\nDus waag het niet om daarbuiten als een\nwilde met je zwaard te zwaaien! Ik wil\nhierdoor niet in de problemen komen. Is\ndat duidelijk?\nMaar oefen misschien eerst met deze\nboomstammen en beloof me om dat\nzwaard alleen te gebruiken als je niet\nanders kunt, begrepen?")
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
/*< 17>*/ 			printf(/* textboxtype: 25, unk: 1, line: 13 */ "<0x10009:0x00000005>O? Je wilt meer over de <color red<kunst van het\nverdedigen>coloroff> weten?\n[1-]Iets praktisch.[2-]De basis.[3]Nee, dank je.")
/*< 19>*/ 			switch (choice(3)) {
          			  case 0:
/*<167>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 9, 'next': 20, 'param3': 60}
/*< 20>*/ 				printf(/* textboxtype: 0, unk: 25, line: 14 */ "<color red<Iets praktisch>coloroff>? Goed dan!\n\n\n\n<0x10009:0x00191d00>Als je je schild omhoog houdt, vlak voor\neen vijand toeslaat, <color green<weer je de aanval van\nje vijand af>coloroff> met de kracht van je\nschildarm.\n<0x10009:0x001c1d00>Deze techniek heet de <color red<schildaanval>coloroff>. Een\nvijand die door een schildaanval wordt\ngetroffen, wankelt naar achteren en is\neen makkelijk doelwit.\n<0x10009:0x000d0200>Deze techniek is erg nuttig tegen vijanden\ndie dingen naar je gooien of die zich\nsteevast tegen je aanvallen weten te\nverdedigen.")
          				flw_21:
/*< 21>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000e0200>In een echt gevecht heb je een perfecte\ntiming nodig om je schild goed in te\nkunnen zetten. Je wilt echt niet het juiste\nmoment missen, geloof me.\n<0x10009:0x00080200>Waarom probeer je de dingen die je hebt\ngeleerd niet eens uit op die <color red<boomstam\nvoor schildtraining>coloroff>?")
          			  case 1:
/*<166>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 18, 'param3': 60}
/*< 18>*/ 				printf(/* textboxtype: 0, unk: 25, line: 11 */ "<0x10009:0x001c0200>Wanneer je je wilt verdedigen, haal dan je\n<color red<schild>coloroff> tevoorschijn. Makkelijk zat, ik weet\nhet, maar je moet ergens beginnen.\n\n<0x10009:0x000e0200><color green<Zwaai met je zwaard >coloroff>om je schild te laten\nzakken. Druk op (B) om zowel je zwaard\nals je schild weg te doen.\n\n<0x10009:0x00080200>Wees wel voorzichtig met het aanvallen\nwanneer je al verdedigt. Telkens als je\n<color green<met je zwaard uithaalt>coloroff>, beweeg je je schild\nopzij en<color red< ontstaat een opening>coloroff>!")
          				goto flw_21
          			  case 2:
/*<160>*/ 				printf(/* textboxtype: 0, unk: 25, line: 17 */ "<0x10009:0x00090200>Aha... Je hebt geen zin in uitleg, maar\nleert liever door het zelf te doen. Laat die\nboomstammen maar eens wat zien dan!")
          			}
          		  case 1:
/*< 22>*/ 			switch (scene_flags[59 /* 0x6 08 */]) {
          			  case 0:
/*< 14>*/ 				printf(/* textboxtype: 25, unk: 1, line: 10 */ "<0x10009:0x00000009>Goh, <heroname>, wat een prachtig\nschild heb je daar! <0x10009:0x00190200>Nou, het wordt tijd dat\nik je de <color red<kunst van het verdedigen >coloroff>leer. We\nbeginnen met de <color red<beginnerstraining>coloroff>!")
          				flw_15:
/*< 15>*/ 				printf(/* textboxtype: 0, unk: 25, line: 11 */ "<0x10009:0x001c0200>Wanneer je je wilt verdedigen, haal dan je\n<color red<schild>coloroff> tevoorschijn. Makkelijk zat, ik weet\nhet, maar je moet ergens beginnen.\n\n<0x10009:0x000e0200><color green<Zwaai met je zwaard >coloroff>om je schild te laten\nzakken. Druk op (B) om zowel je zwaard\nals je schild weg te doen.\n\n<0x10009:0x00080200>Wees wel voorzichtig met het aanvallen\nwanneer je al verdedigt. Telkens als je\n<color green<met je zwaard uithaalt>coloroff>, beweeg je je schild\nopzij en<color red< ontstaat een opening>coloroff>!")
/*< 16>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00091d00>Probeer dat eerst maar eens!")
/*< 23>*/ 				scene_flags[0 'Skyloft'][60 /* 0x6 10 */] = true;
/*<164>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': -1, 'param3': 60}
          			  case 1:
/*<157>*/ 				printf(/* textboxtype: 0, unk: 25, line: 8 */ "<0x10009:0x00081d04><0x30001:0x><heroname>, rector Gaepora heeft me\nverteld wat er gebeurd is. Ik maak me\nzorgen om Zelda...\n\nWat er precies allemaal aan de hand is,\nweet ik ook niet...\n\n\nMaar één ding weet ik wel; het zwaard dat\nje daar hebt, komt niet uit Skyloft. Dat is\neen <color red<eeuwenoud voorwerp >coloroff>dat alleen de\nuitverkorene kan gebruiken.\nDat jij degene bent met het zwaard,\nverklaart een boel.")
/*<159>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00001d04>Hé, <heroname>! Ik vroeg me zojuist\naf of ik nog wat voor je kon betekenen en\ntoen...\n\nToen bedacht ik dit! <0x10009:0x00191d00>Ik ga je inwijden in\nde geheime <color red<kunst van het verdedigen>coloroff>!\n\n\n<0x10009:0x00000200>Laten we eerst met de <color red<basis>coloroff> beginnen!")
          				goto flw_15
          			}
          		}
          	  case 1:
/*< 11>*/ 		switch (scene_flags[59 /* 0x6 08 */]) {
          		  case 0:
/*< 12>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00191d01>De kunst van het schild is er een van\nverdediging. Als je aanvallen en je\nverdediging niet in balans zijn, dan maak\nje geen kans in een echt gevecht.\n<0x10009:0x00080e00>Je kunt bij de <color red<bazaar >coloroff>een<color red< schild>coloroff> kopen.\nGebruik altijd een schild bij het trainen.\nZo leer je ook beter met een zwaard\nomgaan!\n<0x10009:0x00091d00>Wees een verstandige knul en laat dat\nadvies goed tot je doordringen.")
          		  case 1:
/*<  8>*/ 			switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          			  case 0:
/*<  9>*/ 				printf(/* textboxtype: 0, unk: 25, line: 8 */ "<0x10009:0x00081d04><0x30001:0x><heroname>, rector Gaepora heeft me\nverteld wat er gebeurd is. Ik maak me\nzorgen om Zelda...\n\nWat er precies allemaal aan de hand is,\nweet ik ook niet...\n\n\nMaar één ding weet ik wel; het zwaard dat\nje daar hebt, komt niet uit Skyloft. Dat is\neen <color red<eeuwenoud voorwerp >coloroff>dat alleen de\nuitverkorene kan gebruiken.\nDat jij degene bent met het zwaard,\nverklaart een boel.")
/*<158>*/ 				printf(/* textboxtype: 25, unk: 1, line: 16 */ "<0x10009:0x00001d00>Ik wou dat ik je nog ergens mee kon\nhelpen, <heroname>, maar helaas...\nOf wacht! Er is wel iets... Ja! Haal een\n<color red<schild >coloroff>en kom dan terug!\n<0x10009:0x00191d00>Dan leer ik je de geheime <color red<kunst van het\nverdedigen>coloroff>! Dan ben je op elk gevecht\nvoorbereid.")
/*< 10>*/ 				scene_flags[0 'Skyloft'][59 /* 0x6 08 */] = true;
          			  case 1:
/*<  5>*/ 				switch (scene_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<  6>*/ 					printf(/* textboxtype: 25, unk: 1, line: 1 */ "<0x10009:0x00000005>Wat zeg je? Je wilt graag meer leren over\nzwaardvechten?\n[1-]Ja![2]Nee.")
/*<  4>*/ 					switch (choice(2)) {
          					  case 0:
/*<  3>*/ 						printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00090203>Oké, de grondbeginselen van de zwaard-\nkunst... Uiteraard is het belangrijk om\nna te denken over de richting waarin je\nje zwaard zwaait.\nZwaai recht omhoog voor een <color green<verticale\nslag>coloroff>, zwaai recht opzij voor een\n<color green<horizontale slag>coloroff>. Stoot naar voren voor\neen <color green<steekaanval>coloroff>!\n<0x10009:0x00170200>En tenslotte is er de <color green<draaiaanval>coloroff>, een\ngeavanceerde techniek. Dit is de perfecte\naanval voor als je omringd bent door\nvijanden.\n<0x10009:0x00181d00>Onthoud deze technieken en je zult wie\ndan ook aankunnen.\n\n\n<0x10009:0x00001d04>En onthoud de basis! Druk altijd op<color red< >coloroff>(Z)\nom op een vijand te <color red<focussen>coloroff> zodra die\nverschijnt.<0x10011:0x07cd>")
          						flw_7:
/*<  7>*/ 						printf(/* textboxtype: 25, unk: 1, line: 4 */ "<0x10009:0x001c1d03>Probeer maar eens wat uit op deze\n<color red<boomstammen>coloroff> hier!\n\n\n<0x10009:0x00090200>Als je niet meer weet hoe je je zwaard\nmoet gebruiken, kun je <icon 19> gebruiken om\n<color red<Hulp >coloroff>te krijgen.<0x10011:0x0bcd>\n\n<0x10009:0x00080200>Als je die stammen gespleten hebt, zal ik\nwat stammen neerzetten om je <color red<speciale\ntechniek>coloroff> op uit te oefenen.")
/*<163>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': -1, 'param3': 60}
          					  case 1:
/*<  2>*/ 						printf(/* textboxtype: 0, unk: 25, line: 2 */ "<0x10009:0x000e1a08>Ja, je weet al goed hoe je met een zwaard\nmoet omgaan, of niet?\n\n\n<0x10009:0x00080200>Maar zonder oefenen kom je nergens! Je\nkunt geen meesterzwaardvechter worden\ndoor een beetje voor je uit te staren.\n\n<0x10009:0x00191d00>Je moet aan je basis blijven werken.\nGebruik (Z) om<color red< te focussen op vijanden>coloroff>.\nHet lijkt misschien niet veel, maar een\nechte zwaardvechter doet niet anders!<0x10011:0x07cd>")
          						goto flw_7
          					}
          				  case 1:
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000003>Hé, <heroname>!\n\n\n\n<0x10009:0x00090200>Ben je hier om nog even met het zwaard\nte trainen? Ik ben onder de indruk, hoor,\ndat je dat nog even doet voordat de\nVleugelceremonie begint...\nHet zwaard ligt in de kamer hierachter.\nHaal het zwaard en kom dan hierheen.\n\n\nIk blijf hier nog wel even, dus als je\nvragen hebt over hoe je een zwaard\ngebruikt, hoor ik het graag.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_119_04() {
/*< 76>*/ 	start()
/*< 84>*/ 	printf(/* textboxtype: 25, unk: 1, line: 19 */ "<0x10009:0x00010201>Dat is een boomstam om je <color red<verticale slag>coloroff>\nop te oefenen. Houd je zwaard recht\nomhoog en zwaai het vervolgens omlaag\nom de stam door te hakken!")
          }

          void entrypoint_119_05() {
/*< 80>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 25, line: 20 */ "<0x10009:0x00190203>Dat is een boomstam om je <color red<horizontale\nslag >coloroff>op te oefenen. Houd je zwaard\nhorizontaal en zwaai het opzij om toe te\nslaan!")
          }

          void entrypoint_119_06() {
/*< 81>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x001d0202>Dat is een boomstam om je <color red<diagonale\nslag >coloroff>op te oefenen. Zwaai je zwaard\ndiagonaal om de stam langs de snee\ndoormidden te hakken.")
          }

          void entrypoint_119_07() {
/*< 82>*/ 	start()
/*< 87>*/ 	printf(/* textboxtype: 25, unk: 1, line: 22 */ "<0x10009:0x00080203>Dat is een boomstam om je <color red<steekaanval >coloroff>op\nte oefenen. Beweeg je zwaard daarvoor\nmet een korte stoot voorwaarts. Kies\nHULP voor meer informatie hierover.")
          }

          void entrypoint_119_08() {
/*< 83>*/ 	start()
/*<161>*/ 	switch (adventure_pouch_has(0 0x0000)) {
          	  case 0:
/*< 79>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00190202>Dat is een boomstam om je te leren\nverdedigen.\n\n\n<0x10009:0x001c1d00>Raak de stam met je zwaard en voer\nvervolgens een <color red<schildaanval >coloroff>uit wanneer\nde stam op je af zwaait.")
          	  case 1:
/*< 77>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<162>*/ 			printf(/* textboxtype: 25, unk: 1, line: 25 */ "<0x10009:0x00191d02>Dat is een boomstam om je <color red<verdediging\n>coloroff>op te oefenen, maar je hebt geen <color red<schild\n>coloroff>bij je. Die stam kogelt je nu zo omver,\ndus blijf er maar uit de buurt.")
          		  case 1:
/*< 78>*/ 			printf(/* textboxtype: 0, unk: 25, line: 23 */ "<0x10009:0x00191d02>Dat is een boomstam om je <color red<verdediging>coloroff> op te\noefenen, dus je moet een <color red<schild>coloroff> vasthouden. Die\nstam kogelt je nu zo omver, dus blijf er maar\nuit de buurt als je je nog niet kunt verdedigen.")
          		}
          	}
          }

          void entrypoint_119_09() {
/*<109>*/ 	start()
/*<114>*/ 	printf(/* textboxtype: 0, unk: 25, line: 29 */ "<0x10009:0x000a0213>Goed gedaan, <heroname>!")
/*<116>*/ 	set_camera(3, 0)
/*<110>*/ 	printf(/* textboxtype: 0, unk: 25, line: 26 */ "<0x10009:0x00081908>Je bent een geboren zwaardvechter. Je\nleert snel en goed, dus ik kan me geen\nbetere leerling wensen!\n\n<0x10009:0x00090200>Ben je klaar om de <color green<draaiaanval>coloroff> uit te\nproberen?\n[1-]Ja![2]Nog niet.")
          }

