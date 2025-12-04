          void entrypoint_302_01() {
          	start()
/*< 19>*/ 	switch (context_related3(0)) {
          	  case 0:
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3585, 'next': 16, 'param3': 13}
/*< 16>*/ 		switch (story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */]) {
          		  case 0:
/*< 14>*/ 			printf(/* textboxtype: 0, unk: 1, line: 4 */ "Welkom! Hehehe.")
/*<156>*/ 			{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 53, 'param3': 13}
          			flw_53:
/*< 53>*/ 			switch (context_related2(1)) {
          			  case 0:
/*< 84>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5640, 'next': 54, 'param3': 13}
/*< 54>*/ 				printf(/* textboxtype: 0, unk: 1, line: 7 */ "Dit is hoe het werkt: graaf zoveel\nmogelijk rupees op en doe het zonder\neen bom te raken met die mooie\ngraafhandschoentjes van je!\n<0x10009:0x00141614>O, wat krijgen we nu? Je ziet er wat\npips uit. Misschien is het beter als je\neerst je hartjes aanvult?")
/*<118>*/ 				set_camera(5, 0)
/*<119>*/ 				printf(/* textboxtype: 2, unk: 0, line: 8 */ "Je kunt dat krukje daar gebruiken, als je\nwilt. Even lekker bijkomen?")
          			  case 1:
/*< 83>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 6, 'next': 1, 'param3': 13}
/*<  1>*/ 				printf(/* textboxtype: 1, unk: 1, line: 0 */ "Hou jij van rupees? En ook van explosies?\nDan is <color blue<Delven voor durfallen>coloroff> het soort\nspel waar jij van zult houden! Op welk\nniveau wil je het proberen?[1-]Beginner.[2-]Gevorderde.[3-]Expert.[4]Ik doe niet mee.")
          				flw_85:
/*< 85>*/ 				{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 3, 'param3': 13}
/*<  3>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					switch (temp_flags[14 /* 0x0 40 */]) {
          					  case 0:
          						flw_74:
/*< 74>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 87, 'param3': 12}
/*< 87>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 59, 'param3': 13}
/*< 59>*/ 						printf(/* textboxtype: 0, unk: 1, line: 10 */ "Het kost <color red<30 rupees >coloroff>om te spelen. Wil je\neen poging wagen?\n[1-]Reken maar![2]Nee.")
/*< 88>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 37, 'param3': 13}
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*<110>*/ 							check_item_flag(501, 30)
/*<109>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 37}) {
          							  case 0:
/*< 36>*/ 								rupees += -30;
/*< 90>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 34, 'param3': 13}
/*< 34>*/ 								printf(/* textboxtype: 0, unk: 1, line: 1 */ "Ik hoop dat je veel rupees weet te\nvinden. Maar kijk uit voor explosieve\nverrassingen, verstopt in de modder!\nHehehe. Succes!")
/*< 57>*/ 								temp_flags[14 /* 0x0 40 */] = true;
/*< 33>*/ 								make_actor_do_something(0, 0)
/*< 47>*/ 								changeScene(1, 0) // 
          							  case 1:
/*< 89>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 35, 'param3': 13}
/*< 35>*/ 								printf(/* textboxtype: 1, unk: 0, line: 3 */ "Dat zijn helaas niet genoeg rupees.\nAls je wilt spelen, heb je er meer nodig!")
          							}
          						  case 1:
/*< 75>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 38, 'param3': 12}
/*< 38>*/ 							printf(/* textboxtype: 1, unk: 1, line: 15 */ "Welk niveau mag het zijn?\n[1-]Beginner.[2-]Gevorderde.[3-]Expert.[4]Niet spelen.")
          							goto flw_85
          						}
          					  case 1:
/*< 21>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "In het spel voor beginners kun je op\nminder plekken graven, maar voor\neen nieuwe speler is het ideaal!")
          						goto flw_74
          					}
          				  case 1:
/*< 62>*/ 					switch (temp_flags[15 /* 0x0 80 */]) {
          					  case 0:
          						flw_76:
/*< 76>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 91, 'param3': 12}
/*< 91>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 22, 'param3': 13}
/*< 22>*/ 						printf(/* textboxtype: 1, unk: 0, line: 12 */ "Spelen kost <color red<50 rupees>coloroff> per spel. Lijkt het\nje wat?\n[1-]Kom maar op.[2]Nee.")
/*< 92>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 31, 'param3': 13}
/*< 31>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							switch (has_rupees(50)) {
          							  case 0:
/*< 30>*/ 								rupees += -50;
/*< 96>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 27, 'param3': 13}
/*< 27>*/ 								printf(/* textboxtype: 0, unk: 1, line: 1 */ "Ik hoop dat je veel rupees weet te\nvinden. Maar kijk uit voor explosieve\nverrassingen, verstopt in de modder!\nHehehe. Succes!")
/*< 60>*/ 								temp_flags[15 /* 0x0 80 */] = true;
/*< 26>*/ 								make_actor_do_something(0, 0)
/*< 45>*/ 								changeScene(2, 0) // 
          							  case 1:
/*< 95>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 29, 'param3': 13}
/*< 29>*/ 								printf(/* textboxtype: 1, unk: 0, line: 3 */ "Dat zijn helaas niet genoeg rupees.\nAls je wilt spelen, heb je er meer nodig!")
          							}
          						  case 1:
/*< 77>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 12}
/*< 32>*/ 							printf(/* textboxtype: 1, unk: 1, line: 15 */ "Welk niveau mag het zijn?\n[1-]Beginner.[2-]Gevorderde.[3-]Expert.[4]Niet spelen.")
          							goto flw_85
          						}
          					  case 1:
/*< 63>*/ 						printf(/* textboxtype: 0, unk: 0, line: 11 */ "In het spel voor gevorderden zijn er\ngenoeg plekken om te graven, maar\nkijk uit voor de <color yellow<pechrupees>coloroff>!")
          						goto flw_76
          					}
          				  case 2:
/*< 64>*/ 					switch (temp_flags[16 /* 0x3 01 */]) {
          					  case 0:
          						flw_78:
/*< 78>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 93, 'param3': 12}
/*< 93>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 23, 'param3': 13}
/*< 23>*/ 						printf(/* textboxtype: 0, unk: 0, line: 14 */ "Het kost <color red<70 rupees>coloroff> om te spelen. Durf\nje het aan?\n[1-]Natuurlijk.[2]Nee, dank je.")
/*< 94>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 24, 'param3': 13}
/*< 24>*/ 						switch (choice(2)) {
          						  case 0:
/*<113>*/ 							check_item_flag(501, 70)
/*<112>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 39}) {
          							  case 0:
/*< 15>*/ 								rupees += -70;
/*< 98>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 6, 'param3': 13}
/*<  6>*/ 								printf(/* textboxtype: 0, unk: 1, line: 1 */ "Ik hoop dat je veel rupees weet te\nvinden. Maar kijk uit voor explosieve\nverrassingen, verstopt in de modder!\nHehehe. Succes!")
/*< 61>*/ 								temp_flags[16 /* 0x3 01 */] = true;
/*<  4>*/ 								make_actor_do_something(0, 0)
/*< 46>*/ 								changeScene(3, 0) // 
          							  case 1:
/*< 97>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 13, 'param3': 13}
/*< 13>*/ 								printf(/* textboxtype: 1, unk: 0, line: 3 */ "Dat zijn helaas niet genoeg rupees.\nAls je wilt spelen, heb je er meer nodig!")
          							}
          						  case 1:
/*< 79>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 25, 'param3': 12}
/*< 25>*/ 							printf(/* textboxtype: 1, unk: 1, line: 15 */ "Welk niveau mag het zijn?\n[1-]Beginner.[2-]Gevorderde.[3-]Expert.[4]Niet spelen.")
          							goto flw_85
          						}
          					  case 1:
/*< 65>*/ 						printf(/* textboxtype: 0, unk: 1, line: 13 */ "Bij het spel voor experts verstop ik\nmeer bommen, maar ook meer kostbare\nrupees. Er valt meer te winnen... maar\nhet spel eindigt sneller met een knal.")
          						goto flw_78
          					}
          				  case 3:
/*< 86>*/ 					{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5379, 'next': 5, 'param3': 13}
/*<  5>*/ 					printf(/* textboxtype: 0, unk: 0, line: 2 */ "Hopelijk tot snel weer!")
          				}
          			}
          		  case 1:
/*< 17>*/ 			printf(/* textboxtype: 0, unk: 0, line: 5 */ "Hallo! Wat een aangename verrassing.\nDit is je eerste keer hier?")
/*<155>*/ 			{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 154, 'param3': 13}
/*<154>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "Mijn naam is <color blue<Knollerd>coloroff>. Aangenaam!\nIk organiseer hier een spelletje dat\n<color red<Delven voor durfallen>coloroff> heet.")
/*< 18>*/ 			story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */] = true;
          			goto flw_53
          		}
          	  case 1:
/*< 69>*/ 		story_flags[185 /* us: 805A9AE9 0x01, jp: 805ACD69 0x01 */] = true;
/*<106>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 72, 'param3': 44}
/*< 72>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 20, 'param3': 12}
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 1, line: 24 */ "Het totale aantal <color red<rupees>coloroff> dat je hebt\nopgegraven, is <color red<<numeric arg0 0>>coloroff>!")
/*< 71>*/ 		make_actor_do_something(1, 0)
/*< 39>*/ 		switch (context_related3(2)) {
          		  case 0:
/*<104>*/ 			{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4628, 'next': 7, 'param3': 13}
/*<  7>*/ 			switch (context_related3(3)) {
          			  case 0:
/*< 11>*/ 				printf(/* textboxtype: 0, unk: 0, line: 17 */ "Je wist niet eens één rupee te vinden?\nHelemaal niks? Arme kleine\ndelverdrommel...")
          				flw_103:
/*<103>*/ 				{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 81, 'param3': 13}
/*< 81>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 108, 'param3': 12}
/*<108>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 50, 'param3': 45}
/*< 50>*/ 				switch (story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */]) {
          				  case 0:
          					flw_55:
/*< 55>*/ 					switch (context_related2(1)) {
          					  case 0:
/*<105>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5640, 'next': 56, 'param3': 13}
/*< 56>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "Je ziet er een beetje moe uit. Waarom\nrust je niet even uit zodat je wat extra\nhartjes hebt?")
/*<116>*/ 						set_camera(5, 0)
/*<117>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "Er staat daar een kruk. Het is geen\ntroon met zachte kussens, maar je kunt\ner goed op bijkomen.")
          					  case 1:
/*<  2>*/ 						printf(/* textboxtype: 0, unk: 1, line: 16 */ "Probeer gelijk nog een potje. Zeg maar\nwelk niveau je nu wilt proberen.\n[1-]Beginner.[2-]Gevorderde.[3-]Expert.[4]Niet spelen.")
          						goto flw_85
          					}
          				  case 1:
/*< 51>*/ 					printf(/* textboxtype: 0, unk: 0, line: 26 */ "Ik heb een tip voor je: <color red<rupees die\nweinig waard zijn>coloroff>, zijn door <color red<minder\nbommen >coloroff>omringd. Fijn, hè?\n\nMaar <color red<hoe meer een rupee waard is>coloroff>, <color red<hoe\nmeer bommen >coloroff>er in de buurt liggen.\nPas op voor de plekken rond een zeer\nkostbare rupee!\nAls je bij je eerste keer delven een bom\nvindt, zul je het helaas opnieuw moeten\nproberen. Maar trek het je niet aan!")
/*< 52>*/ 					story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */] = true;
          					goto flw_55
          				}
          			  case 1:
/*<  8>*/ 				printf(/* textboxtype: 1, unk: 1, line: 18 */ "Je hebt zo te zien flink verloren.\nTja. Dat moet flink balen zijn, bah.")
          				goto flw_103
          			  case 2:
/*< 43>*/ 				printf(/* textboxtype: 0, unk: 1, line: 19 */ "Dat was geen winstgevend potje,\nof wel? Maar dat kan de besten\noverkomen!")
          				flw_102:
/*<102>*/ 				{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 80, 'param3': 13}
/*< 80>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 12}
/*<107>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 45}
          				goto flw_55
          			}
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 0, unk: 0, line: 20 */ "Je speelt net quitte! Je bent niks kwijt,\nmaar je wint ook niks. Gelukkig heb je je\nniet hoeven vervelen. Wat een knaller, hè?")
          			goto flw_102
          		  case 2:
/*< 44>*/ 			switch (context_related2(4)) {
          			  case 0:
/*<100>*/ 				{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4363, 'next': 10, 'param3': 13}
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 1, line: 21 */ "Je hebt wat winst gemaakt. Dat was een\nsterk staaltje graafwerk!")
          				goto flw_102
          			  case 1:
/*<101>*/ 				{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4364, 'next': 40, 'param3': 13}
/*< 40>*/ 				printf(/* textboxtype: 0, unk: 1, line: 22 */ "Wauw, wat een winst! Gefeliciteerd!")
          				goto flw_102
          			}
          		}
          	  case 2:
/*<111>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 73, 'param3': 44}
/*< 73>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 159, 'param3': 12}
/*<159>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "Eens zien hoeveel rupees je deze keer\nte pakken hebt...")
/*< 70>*/ 		make_actor_do_something(1, 0)
/*< 99>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6415, 'next': 41, 'param3': 13}
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "I-Ik weet niet wat ik moet zeggen...\nJe hebt alle rupees gevonden! Hier, dit\nheb je verdiend, pak aan!")
/*< 42>*/ 		give_item(64 0x40);
          		goto flw_102
          	}
          }

          void entrypoint_302_02() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "Hartelijk bedankt voor je\ndeelname aan <color red<Delven voor\ndurfallen>coloroff>.\n\nNog een handige tip: rond <color red<rupees\nmet een lage waarde >coloroff>vind je maar\n<color red<weinig bommen>coloroff>, daar omheen kun\nje dus veiliger graven.\nMaar <color red<hoe meer een rupee waard is>coloroff>,\n<color red<hoe meer bommen >coloroff>er rondom die\nrupee liggen, dus pas goed op.\nTot snel weer!")
          }

          void entrypoint_302_03() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "Schiet eens op, joh. Je tijd is bijna om.")
          }

          void entrypoint_302_04() {
/*< 68>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "Geen getreuzel! Je hebt maar beperkt\nde tijd en die tijd is nu om!")
          }

          void entrypoint_302_05() {
/*<114>*/ 	start()
/*<115>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00080a04>O, tijd voor een pauze? Wordt het je\nallemaal iets te spannend?\n\n\nGoed, neem je tijd en praat wat met\nme, oké?\n[1-]Oké.[2]Niet nu.")
/*<120>*/ 	switch (choice(2)) {
          	  case 0:
/*<122>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x000f110c>O, goed! Oké, oké... is er iets dat je\ngraag wilt weten?<0x10009:0x00080aff>[1-]Wie ben jij?[2-]Zweef je?[3-]Is het licht hier te fel?[4]Nee hoor.<0x10009:0x001316ff>")
          		flw_123:
/*<123>*/ 		switch (choice(4)) {
          		  case 0:
/*<125>*/ 			switch (zone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00080a04>Mijn naam is <color blue<Knollerd>coloroff>! Ik organiseer\nhier het <color red<Delven voor durfallen>coloroff>! Ja, ik\nben erg belangrijk. Heheheh.\n\nJe mag me dan ook best <color blue<Meneer\nKnollerd>coloroff> noemen. Dat moet niet, <0x10009:0x00090b09>het\nmag. Dank je, knul.")
          				flw_128:
/*<128>*/ 				printf(/* textboxtype: 1, unk: 1, line: 45 */ "<0x10009:0x00131806>Dus wat wil je me verder vragen?[1-]Wie ben jij?[2-]Zweef je?[3-]Is het licht te fel voor je?[4]Niets.")
          				goto flw_123
          			  case 1:
/*<158>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<157>*/ 					printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00080a04>Mijn naam is <color blue<Knollerd>coloroff>! Ik organiseer\nhier het <color red<Delven voor durfallen>coloroff>! Ja, ik\nben erg belangrijk. Heheheh.\n\nJe mag me dan ook best <color blue<Meneer\nKnollerd>coloroff> noemen. Dat moet niet, <0x10009:0x000d0f01>het\nmag. Dank je, knul.\n\n<0x10009:0x00080a09>Ik wil dat iedereen de kans krijgt met\nzijn klauwen vol rupees naar huis te\ngaan, daarom bedacht ik <color blue<delven voor\ndurfallen>coloroff>!\n<0x10009:0x00101319>Helaas denken al mijn <color blue<Mogma\n>coloroff>-vrienden dat rupees te makkelijk te\nvinden zijn, dus ze komen nooit langs...\n\n<0x10009:0x00080aff>En daarom heb ik jouw hulp nodig!\nWord mijn terugkerende, tevreden en\nook enige klant!")
          					flw_124:
/*<124>*/ 					zone_temp_flags[0 /* 0x1 01 */] = true;
          					goto flw_128
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00080a04>Mijn naam is <color blue<Knollerd>coloroff>! Ik organiseer\nhier het <color red<Delven voor durfallen>coloroff>! Ja, ik\nben erg belangrijk. Heheheh.\n\nJe mag me dan ook best <color blue<Meneer\nKnollerd>coloroff> noemen. Dat moet niet, <0x10009:0x000d0f01>het\nmag. Dank je, knul.\n\n<0x10009:0x00080a09>Ik wil dat iedereen de kans krijgt met\nzijn klauwen vol rupees naar huis te\ngaan, daarom bedacht ik <color blue<delven voor\ndurfallen>coloroff>!\n<0x10009:0x00101319>Jammer genoeg hebben we nu last van\noverlast door <color red<griezelige rode monsters>coloroff>.\nIk kan zo niet fatsoenlijk zaken doen,\nik heb bijna geen klanten meer!\n<0x10009:0x00080aff>Kon iemand maar die lelijke <color red<torens>coloroff>\nomver trekken<sound 4>. Of opblazen! Dat zou\ndie griezels wel bang maken... Dan\nslaan ze vast massaal op de vlucht!")
          					goto flw_124
          				}
          			}
          		  case 1:
/*<130>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*<131>*/ 				printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00080a05>Nee, ik zweef niet, ik wil gewoon dat de\nklanten mijn schattige, kleine,\n<color red<prachtige klauwen>coloroff> kunnen zien.\nDus sta ik op mijn staart!")
          				goto flw_128
          			  case 1:
/*<151>*/ 				set_camera(1, 0)
/*<148>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x00141605>Nee, ik zweef niet. Ik sta op mijn\nstaart.")
/*<152>*/ 				set_camera(2, 0)
/*<149>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x0000000a>Mijn <color red<prachtige klauwen >coloroff>zijn mijn beste\neigenschap.")
/*<153>*/ 				set_camera(-1, 0)
/*<150>*/ 				printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00080aff>Ik wil dat mijn klanten de kans krijgen\ndie mooie pootjes te bewonderen. Dus\nsta ik op mijn staart. Het doet\nwonderen voor de verkoopcijfers, echt!")
/*<129>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_128
          			}
          		  case 2:
/*<133>*/ 			switch (zone_temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<135>*/ 				printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00080a09>Het licht is hier niet te fel. Ik draag de\nbril omdat hij cool is.")
          				goto flw_128
          			  case 1:
/*<145>*/ 				set_camera(3, 0)
/*<134>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x0014160a>O, je bent benieuwd naar mijn bril?\nHeheheh, ziet er vlot uit, hè? En dat\nronde frame maakt het nog modieuzer!")
/*<146>*/ 				set_camera(4, 0)
/*<143>*/ 				printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00140e0b>O, en wat dacht je van mijn <color red<snor>coloroff>? Daar\nben ik ook flink trots op! Schattig en\nmet een krul aan de uiteinden! Ik kam\nhem elke dag.")
/*<147>*/ 				set_camera(-1, 0)
/*<144>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00080aff>Maar dat spreekt voor zich. Stel je\nvoor dat ik mijn klanten afschrik met\neen onverzorgd gezicht!")
/*<132>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          				goto flw_128
          			}
          		  case 3:
/*<137>*/ 			switch (zone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<138>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<136>*/ 					switch (zone_temp_flags[2 /* 0x1 04 */]) {
          					  case 0:
/*<140>*/ 						switch (scene_flags[39 /* 0x5 80 */]) {
          						  case 0:
          							flw_139:
/*<139>*/ 							printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x00101319>Echt? Wat jammer. Nou, neem dan\nmaar even een pauze. Het <color blue<Delven voor\ndurfallen>coloroff> kan weer beginnen als je er\nklaar voor bent!")
          						  case 1:
/*<141>*/ 							printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00101319>Echt? Wat jammer, zeg...\n\n\n\n<0x10009:0x000d100c>Maar bedankt voor het stellen van die\nuitstekende vragen! Weet je, ik zal je\nnog een geheim verklappen.\n\n<0x10009:0x00080a04>Zie je die glinsterende steen die daar\nuit de muur steekt? Dat is puur\n<color red<rupee-erts>coloroff>! En dat is ook de reden\nwaarom je hier zoveel rupees vindt.\nAls je er iets tegenaan slingert, dan\nvalt dat ding zo, <color red<ploep>coloroff>,<color red< >coloroff>uit de muur.<sound 4>\nProbeer maar eens!")
/*<142>*/ 							scene_flags[4 'Eldin Volcano'][39 /* 0x5 80 */] = true;
          						}
          					  case 1:
          						goto flw_139
          					}
          				  case 1:
          					goto flw_139
          				}
          			  case 1:
          				goto flw_139
          			}
          		}
          	  case 1:
/*<121>*/ 		printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00101319>Hè... wat jammer. Hoe dan ook, ik\nhoop dat ik je weer zie als je uitgerust\nbent? Voor het <color blue<Delven voor durfallen>coloroff>?")
          	}
          }

