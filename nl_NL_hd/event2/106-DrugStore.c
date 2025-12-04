          void entrypoint_106_34() {
/*< 22>*/ 	start()
/*< 51>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 21, 'param3': 12}
/*< 21>*/ 	check_item_flag(153, 1)
/*< 20>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 12}) {
          	  case 0:
/*< 26>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000001>Dit mysterieuze drankje noem ik het\n<color yellow<oplapdrankje>coloroff>!\n\n\nAls je het over een gebroken schild giet,\nis het schild binnen enkele seconden weer\nzo goed als nieuw! Ongelofelijk!\n\nDaarnaast herstelt dit multifunctionele\ndrankje ook <color red<vier >coloroff>hartjes!\n\n\nKomt dit drankje niet van pas tijdens je\nreizen? Het kost maar <color red<30 rupees>coloroff>!\n[1-]Oké![2]Nee, bedankt.")
          		flw_11:
/*< 11>*/ 		switch (choice(2)) {
          		  case 0:
/*< 13>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 12>*/ 			entrypoint_106_08();
          		}
          	  case 1:
/*< 29>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00090702>Hallo, lieverd!\n\n\n\n<0x10009:0x000c0b00>O... Het spijt me. Je hebt geen leeg flesje.\nIk kan je geen drankje verkopen zonder\neen leeg flesje.\n\n<0x10009:0x000d0700>Als je meer wilt weten over hoe deze\nwinkel werkt, zeg je het maar!")
          	}
          }

          void entrypoint_106_51() {
/*< 65>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00070704>Hm, oké... Ja, ik kan dit drankje wel\nversterken. Weet je zeker dat je dat wilt?\n[1-]Ja.[2]Liever niet...")
/*< 70>*/ 	switch (choice(2)) {
          	  case 0:
/*<110>*/ 		make_actor_do_something(3, 0)
/*< 68>*/ 		printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00070700>Ja, prachtig... Een momentje... Sorry dat\nhet zo lang duurt...")
/*< 99>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 71, 'param3': 12}
/*< 71>*/ 		make_actor_do_something(1, 0)
/*< 72>*/ 		printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00070708>Het is klaar... Alsjeblieft, hopelijk zijn je\nverwachtingen niet al te hoog...")
/*< 89>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000a0a06>Ik... begrijp het. Is er nog niets anders\ndat ik voor je kan doen?")
/*<100>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 12}
/*< 78>*/ 		make_actor_do_something(0, 0)
          	}
          }

          void entrypoint_106_35() {
/*< 55>*/ 	start()
/*< 56>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 54, 'param3': 12}
/*< 54>*/ 	check_item_flag(153, 1)
/*< 53>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 18}) {
          	  case 0:
/*< 57>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x0000000b>Dat is een <color yellow<weerstandsdrankje>coloroff>. Je voelt je\ner onoverwinnelijk door, want het drankje\nzorgt ervoor dat je tijdelijk minder schade\noploopt!\nDus als je het tegen een tegenstander\nopneemt die iets te sterk voor je is,\nkomt dit drankje mooi van pas!\n\nZo'n drankje is natuurlijk niet goedkoop.\nHet kost <color red<200 rupees>coloroff>. Wil je het kopen?\n[1-]Ja, graag![2]Nee, bedankt.")
          		goto flw_11
          	  case 1:
/*< 58>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00090702>Hallo, lieverd!\n\n\n\n<0x10009:0x000c0b00>O... Het spijt me. Je hebt geen leeg flesje.\nIk kan je geen drankje verkopen zonder\neen leeg flesje.\n\n<0x10009:0x000d0700>Als je meer wilt weten over hoe deze\nwinkel werkt, zeg je het maar!")
          	}
          }

          void entrypoint_106_52() {
/*< 74>*/ 	start()
/*< 90>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 91>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00090908>Heel erg bedankt! Ja, enorm bedankt!\nKom snel nog eens terug!")
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x000a0a06>O... Je hebt toch geen interesse? Jammer...\nToch bedankt en hopelijk tot ziens.")
          	}
          }

          void entrypoint_106_01() {
          	start()
/*< 40>*/ 	switch (story_flags[35 /* us: 805A9ADD 0x08, jp: 805ACD5D 0x08 */]) {
          	  case 0:
/*<126>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
/*<127>*/ 			switch (story_flags[1075 /* us: 805A9B50 0x02, jp: 805ACDD0 0x02 */]) {
          			  case 0:
          				flw_105:
/*<105>*/ 				switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          				  case 0:
/*<109>*/ 					switch (scene_flags[85 /* 0xB 20 */]) {
          					  case 0:
          						flw_6:
/*<  6>*/ 						switch (zone_temp_flags[2 /* 0x1 04 */]) {
          						  case 0:
/*<  5>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x0000000b>Hm? Kan ik iets voor je doen?\n[1-]Vertel me meer![2]Nee, hoor.")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*<  4>*/ 								printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000004>Wat ben jij een slimme jongen, zeg! Ga maar\nvoor het drankje staan waar je meer over wilt\nweten en druk op (A).\n\nDan vertel ik je wat dat drankje voor je kan\ndoen. Maar ik verkoop enkel standaard-\ndrankjes.\n\nAls je op zoek bent naar iets dat wat krachtiger\nis...\n\n\n<0x10009:0x000d0700>...kun je een van mijn drankjes kopen en naar\nmijn man hiernaast gaan. Hij helpt je dan\nverder.\n\n<0x10009:0x000c0000>Zijn uiterlijk stelt misschien niet veel voor,\nmaar niemand mengt zulke krachtige drankjes\nals hij. En hij doet wel vaker zaken met jeugd\nals jij.")
          								flw_7:
/*<  7>*/ 								zone_temp_flags[2 /* 0x1 04 */] = true;
          							  case 1:
/*<  3>*/ 								printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x000c0b0e>Dat komt goed uit, want ik heb genoeg andere\ndingen te doen. Maar je lijkt me een aardige\njongeman, dus kom gerust nog eens langs. <0x10009:0x000d0000>Als je\neen sterker drankje wilt, praat\ndan met mijn man. Hij kan de standaard-\ndrankjes die ik hier verkoop, verbeteren door er\ningrediënten aan toe te voegen.")
          								goto flw_7
          							}
          						  case 1:
/*<  1>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Welkom, jongeman!\n\n\n\nDit is de drankjeswinkel! Ik verkoop\ndrankjes die je kunnen helpen als je\nin de problemen raakt. Wil je daar\nmeer over weten?[1-]Natuurlijk![2]Nee.")
          							goto flw_2
          						}
          					  case 1:
/*<107>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 106, 'param3': 31}
/*<106>*/ 						printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000001>Jongeman, het nieuwe recept waar ik\nal tijden aan werk, is eindelijk af! Ik\nnoem het een \"<color yellow<energiedrankje>coloroff>\"!\n\nAls je het drinkt, zakt je energie\nlangzamer dan normaal!\n\n\nIk moet toegeven dat het niet bepaald\ngoedkoop is, maar als je in de situatie\nkomt dat je energie nodig hebt, is dit\ndrankje vast de prijs waard.\nAls je interesse hebt, loop dan naar\nhet drankje toe en neem een kijkje.")
/*<108>*/ 						scene_flags[0 'Skyloft'][85 /* 0xB 20 */] = true;
/*<131>*/ 						zone_temp_flags[2 /* 0x1 04 */] = true;
          					}
          				  case 1:
          					goto flw_6
          				}
          			  case 1:
/*<128>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 31}
/*<129>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000001>Jongeman, ik heb een nieuw drankje\nvoor je! Ik noem mijn uitvinding het...\nzuurstofdrankje!\n\nAls je dit drankje drinkt, zal onder\nwater je <color blue<zuurstofmeter>coloroff> veel langzamer\nleeglopen!\n\nJe bent dan net een visje, jongeman!\nEn de prijs is absoluut redelijk, al zeg\nik het zelf.\n\nAls je er interesse in hebt, ga dan naar\nde blauwe ketel. Ik kom er dan zo snel\nmogelijk aan!")
/*<130>*/ 				story_flags[1075 /* us: 805A9B50 0x02, jp: 805ACDD0 0x02 */] = true;
/*<132>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          			}
          		  case 1:
          			goto flw_105
          		}
          	  case 1:
/*< 52>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 39, 'param3': 31}
/*< 39>*/ 		printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000002>Hé! Jij daar! Ja, jij daar! De schattige\njongen met het gouden haar!\n\n\nWelkom in de drankjeswinkel! Als je\ngewond bent, kun je onze drankjes\ndrinken om je hartjes aan te vullen.\n\n<0x10009:0x000d0700>Hé, jij bent toch een van die ridders?\nOf eentje in training? Of niet?\n\n\nIk zeg je dit: ik hoef maar naar je te\nkijken om te weten dat je liters van\nmijn drankjes nodig gaat hebben!\nDus ga hier niet met lege flessen weg!")
/*< 42>*/ 		printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x000c0b06>Oei, oei<0x10006:0xfccd>...<0x10006:0x00cd>\n\n\n\nHeb je geen leeg flesje bij je?\n\n\n\nIk kan je geen drankje verkopen als\nje geen leeg flesje hebt om het in\nte doen!\n\n<0x10009:0x0009090b>Maar om de een of andere reden mag\nik jou wel, dus krijg je van mij een\nleeg flesje dat ik hier toevallig nog\nhad liggen. Zomaar voor niks!\n<0x10009:0x00070700>Je hoort me dit niet vaak zeggen,\nmaar je kunt ook andere dingen in\nzo'n flesje doen. Het is dus handig\nom er eentje bij je te hebben.")
/*< 45>*/ 		check_item_flag(112, 1)
/*< 46>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          		  case 0:
/*< 59>*/ 			switch (is_adventure_pouch_full()) {
          			  case 0:
/*< 60>*/ 				printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x000c0b08>Lieverd, je buidel zit helemaal vol!\nJe houdt nogal van winkelen, nietwaar?\n\n\n<0x10009:0x000a0a00>Waarom breng je niet wat van je\nvoorwerpen naar dat aardige\nmeisje van de voorwerpenbank?\nZo maak je makkelijk ruimte vrij!")
          			  case 1:
/*< 44>*/ 				give_item(153 0x99);
/*< 41>*/ 				story_flags[35 /* us: 805A9ADD 0x08, jp: 805ACD5D 0x08 */] = true;
/*< 96>*/ 				switch (scene_flags[89 /* 0xA 02 */]) {
          				  case 0:
/*< 43>*/ 					printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x000d070b>Flessen kun je in je buidel doen. Druk\nop <icon 40> om in je buidel te kijken.<0x10011:0x0ecd>")
/*<114>*/ 					printf(/* textboxtype: 0, unk: 0, line: 8 */ "Als je ooit zoveel spullen hebt dat ze\nniet meer in je buidel passen, kun je\naltijd wat voorwerpen inleveren bij\nde voorwerpenbank.\n<0x10009:0x000c070b>Maar nu heb ik wel genoeg gekletst,\nwil je niet iets kopen?")
          					goto flw_7
          				  case 1:
/*< 97>*/ 					printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x000d070b>Flessen kun je in je buidel doen. Druk op\n<color green<<icon 40>>coloroff> om in je buidel te kijken.<0x10011:0x0ecd>\n\n\nHoud <icon 40> ingedrukt en kies het voorwerp\ndat je wilt gebruiken.<0x10011:0x0ecd>\n\n\nLaat <icon 40> los om het voorwerp te\nselecteren. Makkelijk, hè?<0x10011:0x0ecd>")
/*<115>*/ 					printf(/* textboxtype: 0, unk: 0, line: 8 */ "Als je ooit zoveel spullen hebt dat ze\nniet meer in je buidel passen, kun je\naltijd wat voorwerpen inleveren bij\nde voorwerpenbank.\n<0x10009:0x000c070b>Maar nu heb ik wel genoeg gekletst,\nwil je niet iets kopen?")
/*< 98>*/ 					story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<111>*/ 					scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
          				}
          			}
          		  case 1:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "")
          		}
          	}
          }

          void entrypoint_106_53() {
/*< 79>*/ 	start()
/*<112>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "Als je nog andere drankjes hebt die je wilt\nlaten versterken, kun je ze naar mij toe\nbrengen. Ik help je er graag mee...")
/*< 80>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<113>*/ 		printf(/* textboxtype: 0, unk: 1, line: 40 */ "O... Ik ben bang dat ik dit drankje niet kan\nversterken. Als je drankjes wilt kopen, moet je\nbij mijn vrouw zijn...")
          	}
          }

          void entrypoint_106_70() {
/*<133>*/ 	start()
/*<136>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 134, 'param3': 12}
/*<134>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x0000000a>O... Als je wilt dat ik dat drankje voor je\nversterk, mis je een ingrediënt, namelijk\neen <color yellow<Faron-sprinkhaan>coloroff>.\n\nVolgens mijn handboek vind je deze in\nbosrijke gebieden.")
          	flw_137:
/*<137>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070000>Het spijt me... Misschien heb je interesse in een\nander drankje?")
/*<135>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_54() {
/*< 82>*/ 	start()
/*<101>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 84, 'param3': 12}
/*< 84>*/ 	printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x0000000a>O, maar... je hebt niet genoeg\ningrediënten om dit drankje te\nversterken...\n\nHet spijt me enorm, maar... misschien heb\nje nog een ander drankje dat ik kan\nversterken?")
/*< 87>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_71() {
/*<138>*/ 	start()
/*<140>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 139, 'param3': 12}
/*<139>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x0000000a>O... Als je wilt dat ik dat drankje voor je\nversterk, mis je een ingrediënt, namelijk\neen <color yellow<woudneushoornkever>coloroff>.\n\nVolgens mijn handboek vind je deze in\nbosrijke gebieden.")
          	goto flw_137
          }

          void entrypoint_106_55() {
/*< 83>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x0000000a>O... jeetje. Ik vind dit echt heel vervelend\nom te zeggen, maar... je hebt niet genoeg\nrupees. Ik zou je graag helpen, maar...\neh...")
/*<102>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 86, 'param3': 12}
/*< 86>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_72() {
/*<141>*/ 	start()
/*<143>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 12}
/*<142>*/ 	printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x0000000a>O... Als je wilt dat ik dat drankje voor je\nversterk, mis je een ingrediënt, namelijk\neen <color yellow<Deku-hoornaar>coloroff>.\n\nVolgens mijn handboek vind je deze in\nbosrijke gebieden.")
          	goto flw_137
          }

          void entrypoint_106_56() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x0000000a>O nee... Je hebt geen drankjes die ik\nkan versterken.\n\n\n<0x10009:0x00090900>Als je drankjes wilt kopen, moet je bij\nmijn vrouw zijn...")
          }

          void entrypoint_106_73() {
/*<144>*/ 	start()
/*<146>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 145, 'param3': 12}
/*<145>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0000000a>O... Als je wilt dat ik dat drankje voor je\nversterk, mis je een ingrediënt, namelijk\neen <color yellow<Skyloft-bidsprinkhaan>coloroff>.\n\nAls ik het me goed herinner, zijn er veel\ndaarvan op Skyloft te vinden...")
          	goto flw_137
          }

          void entrypoint_106_05() {
/*< 30>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x000a0a08>Je hebt geen <color yellow<leeg flesje>coloroff> bij je. Kom maar\nterug zodra je er wel eentje hebt.")
          }

          void entrypoint_106_74() {
/*<147>*/ 	start()
/*<150>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 148, 'param3': 12}
/*<148>*/ 	printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x0000000a>O... Als je wilt dat ik dat drankje voor je\nversterk, mis je een ingrediënt, namelijk\neen <color yellow<vuurhaardsbeestje>coloroff>.\n\nVolgens mijn handboek leeft dit insect\nin een in vlammen gehulde berg op de\nwereld hieronder.")
          	flw_151:
/*<151>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070000>Het spijt me... Misschien heb je interesse in een\nander drankje?")
/*<149>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_06() {
/*< 31>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x000c0b08>Maar, lieverd, je hebt niet genoeg rupees\nbij je! Je bent een schat van een jongen,\nmaar ik moet ook aan mijn gezin denken!\n\n<0x10009:0x000a0a00>Kom maar terug zodra je wat meer\nrupees op zak hebt.")
          }

          void entrypoint_106_75() {
/*<152>*/ 	start()
/*<154>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 153, 'param3': 12}
/*<153>*/ 	printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x0000000a>O... Als je wilt dat ik dat drankje voor je\nversterk, mis je een ingrediënt, namelijk\neen <color yellow<godinnenpage>coloroff>.\n\nAls ik het me goed herinner, zijn er veel\ndaarvan op Skyloft te vinden...")
          	goto flw_151
          }

          void entrypoint_106_07() {
/*< 32>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x0009090a>Dank je wel, lieverd! Als je een sterker\ndrankje wilt, ga je maar naar mijn man.\nHij mengt graag iets voor je.")
          }

          void entrypoint_106_76() {
/*<155>*/ 	start()
/*<157>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 156, 'param3': 12}
/*<156>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x0000000a>O... Als je wilt dat ik dat drankje voor je\nversterk, mis je een ingrediënt, namelijk\neen <color yellow<Lanayru-mier>coloroff>.\n\nVolgens mijn handboek leven deze mieren\nin grote kolonies in zandige gebieden\nonder de wolken...")
          	goto flw_151
          }

          void entrypoint_106_08() {
/*< 33>*/ 	start()
/*< 77>*/ 	switch (random(2)) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x000a0a0e>Pfft! Ik hou niet van \"kijken, kijken,\nniet kopen\", lieverd.")
          	  case 1:
/*< 37>*/ 		printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x000c0b10>Wil je het niet, lieverd? Ik weet dat niet al\nmijn drankjes lekker smaken, maar ze\ndoen wel wat ze horen te doen!")
          	}
          }

          void entrypoint_106_77() {
/*<158>*/ 	start()
/*<160>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 159, 'param3': 12}
/*<159>*/ 	printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x0000000a>O... Als je wilt dat ik dat drankje voor je\nversterk, mis je een ingrediënt, namelijk\neen <color yellow<zandcicade>coloroff>.\n\nVolgens mijn handboek leven deze cicades\nin grote groepen in zandige gebieden\nonder de wolken...")
          	goto flw_151
          }

          void entrypoint_106_78() {
/*<161>*/ 	start()
/*<164>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 162, 'param3': 12}
/*<162>*/ 	printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x0000000a>O... Als je wilt dat ik dat drankje voor je\nversterk, mis je een ingrediënt, namelijk\neen <color yellow<Gerudo-libelle>coloroff>.\n\nVolgens mijn handboek leven deze libelles\nin grote groepen in zandige gebieden\nonder de wolken...")
          	flw_165:
/*<165>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070000>Het spijt me... Misschien heb je interesse in een\nander drankje?")
/*<163>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_79() {
/*<166>*/ 	start()
/*<168>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 167, 'param3': 12}
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x0000000a>O... Als je wilt dat ik dat drankje voor je\nversterk, mis je een ingrediënt, namelijk\neen <color yellow<Eldin-scarabee>coloroff>.\n\nVolgens mijn handboek leeft dit insect\nin een in vlammen gehulde berg op de\nwereld hieronder.")
          	goto flw_165
          }

          void entrypoint_106_80() {
/*<169>*/ 	start()
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x0000000a>O... Als je wilt dat ik dat drankje voor je\nversterk, mis je een ingrediënt, namelijk\neen <color yellow<wolkenhert>coloroff>.\n\nSkyloft staat bekend om dit fraaie insect,\nnietwaar?")
          	goto flw_165
          }

          void entrypoint_106_81() {
/*<172>*/ 	start()
/*<174>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 173, 'param3': 12}
/*<173>*/ 	printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x0000000a>O... Als je wilt dat ik dat drankje voor je\nversterk, mis je een ingrediënt, namelijk\neen <color yellow<hemelvuurvliegje>coloroff>.\n\nAls ik het me goed herinner, vind je deze\nalleen 's nachts op Skyloft, maar ze zijn\nerg zeldzaam.")
          	goto flw_165
          }

          void entrypoint_106_31() {
/*< 10>*/ 	start()
/*< 48>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 9, 'param3': 12}
/*<  9>*/ 	check_item_flag(153, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 4}) {
          	  case 0:
/*< 38>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000001>Dat is een <color yellow<geneesdrankje>coloroff>! Drink het,\nlieverd, om acht hartjes te herstellen.\n\n\nDat komt toch vast van plan tijdens je\navontuur? En het kost maar <color red rupee<20 rupees>coloroff>.\nWil je het kopen?\n[1-]Ja, alsjeblieft.[2]Nee, bedankt.")
          		goto flw_11
          	  case 1:
/*< 23>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00090702>Hallo, lieverd!\n\n\n\n<0x10009:0x000c0b00>O... Het spijt me. Je hebt geen leeg flesje.\nIk kan je geen drankje verkopen zonder\neen leeg flesje.\n\n<0x10009:0x000d0700>Als je meer wilt weten over hoe deze\nwinkel werkt, zeg je het maar!")
          	}
          }

          void entrypoint_106_32() {
/*< 16>*/ 	start()
/*< 15>*/ 	check_item_flag(153, 1)
/*< 14>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          	  case 0:
/*<124>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
/*< 49>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 24, 'param3': 12}
/*< 24>*/ 			printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000004>Dat is een <color yellow<zuurstofdrankje>coloroff>! Als je dat\ndrinkt, loopt je <color blue<zuurstofmeter>coloroff> tijdelijk\nlangzamer leeg als je onder water bent.\n\nHeb je interesse, lieverd? Het kost maar\n<color red rupee<20 rupees>coloroff>.\n[1-]Natuurlijk![2]Nee, bedankt.")
          			goto flw_11
          		  case 1:
/*<125>*/ 			printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000c0b04>Rustig aan, lieverd. Dit drankje is nog\nniet klaar voor gebruik, maar het\nduurt niet lang meer!\n\n<0x10009:0x00090700>Ondertussen heb ik genoeg andere\ndrankjes om uit te proberen. Kijk\nmaar eens!")
          		}
          	  case 1:
/*< 27>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00090702>Hallo, lieverd!\n\n\n\n<0x10009:0x000c0b00>O... Het spijt me. Je hebt geen leeg flesje.\nIk kan je geen drankje verkopen zonder\neen leeg flesje.\n\n<0x10009:0x000d0700>Als je meer wilt weten over hoe deze\nwinkel werkt, zeg je het maar!")
          	}
          }

          void entrypoint_106_33() {
/*< 19>*/ 	start()
/*< 18>*/ 	check_item_flag(153, 1)
/*< 17>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          	  case 0:
/*<103>*/ 		switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          		  case 0:
/*< 50>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 25, 'param3': 12}
/*< 25>*/ 			printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x0000000b>Dat fantastische elixer daar is een\n<color yellow<energiedrankje>coloroff>.\n\n\nAls je dat drinkt, loopt je <color blue<energiemeter\n>coloroff>erna tijdelijk langzamer leeg.\n\n\nHet is niet goedkoop, maar dat is het\nwel waard. Het drankje kost <color red<50 rupees>coloroff>!\n[1-]Oké![2]Nee, bedankt.")
          			goto flw_11
          		  case 1:
/*<104>*/ 			printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x000c0b04>Met dit wonderbaarlijke drankje loopt\nje <color blue<energiemeter >coloroff>tijdelijk niet leeg.\n\n\nHelaas is de formule nog niet zo goed\nals ik zou willen, dus het drankje is\nnog niet klaar.\n\n<0x10009:0x00090700>Maar neem gerust een kijkje bij mijn\nandere drankjes!")
          		}
          	  case 1:
/*< 28>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00090702>Hallo, lieverd!\n\n\n\n<0x10009:0x000c0b00>O... Het spijt me. Je hebt geen leeg flesje.\nIk kan je geen drankje verkopen zonder\neen leeg flesje.\n\n<0x10009:0x000d0700>Als je meer wilt weten over hoe deze\nwinkel werkt, zeg je het maar!")
          	}
          }

          void entrypoint_106_50() {
/*< 61>*/ 	start()
/*< 88>*/ 	zone_temp_flags[4 /* 0x1 10 */] = false;
/*<181>*/ 	switch (zone_temp_flags[7 /* 0x1 80 */]) {
          	  case 0:
          		flw_116:
/*<116>*/ 		switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          		  case 0:
/*<118>*/ 			check_item_flag(71, 1)
/*<119>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 44}) {
          			  case 0:
          				flw_62:
/*< 62>*/ 				printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000001>O... hallo... Welkom in mijn bedrijfje.\n\n\n\nIk, eh... versterk de drankjes van mijn\nvrouw door er extra ingrediënten aan\ntoe te voegen. Het stelt niet veel voor,\nmaar ik doe het graag.\n<0x10009:0x00070700>Nou... eh. Heb je drankjes waarvan\nje wilt dat ik ze versterk?\n[1-]Ja, inderdaad.[2]Nee.")
/*< 63>*/ 				switch (choice(2)) {
          				  case 0:
/*< 94>*/ 					switch (context_related2(0)) {
          					  case 0:
/*< 66>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000003>Ik kan je laten zien welke drankjes je\nbij je draagt die ik kan versterken.")
/*< 64>*/ 						make_actor_do_something(0, 0)
          					  case 1:
/*< 95>*/ 						printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x0000000a>O nee... Je hebt geen drankjes die ik\nkan versterken.\n\n\n<0x10009:0x00090900>Als je drankjes wilt kopen, moet je bij\nmijn vrouw zijn...")
          					}
          				  case 1:
/*< 67>*/ 					printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x000a0a06>Geen probleem... Ik begrijp het... Hopelijk tot\nziens...")
          				}
          			  case 1:
/*<121>*/ 				switch (zone_temp_flags[6 /* 0x1 40 */]) {
          				  case 0:
/*<123>*/ 					printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000001>In <color red<Beedles wolkenwinkel >coloroff>kun je een\n<color yellow<net >coloroff>kopen, als je er zelf geen hebt...\n\n\nBeedle vliegt meestal met zijn winkel rond\nde bazaar... Ja... Als je daar <color green<naar boven\nkijkt>coloroff>, zie je hem beslist...")
          				  case 1:
/*<117>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 120, 'param3': 31}
/*<120>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00000001>O, welkom! Wij handelen in drankjes,\nzoals je wel zult weten...\n\n\nIk kan de drankjes die mijn vrouw\nverkoopt, versterken.\n\n\n<0x10009:0x00000007>Maar, meneer, als je wilt dat ik dat\ndoe, moet je wat insecten brengen.\nNou, eh, het móét natuurlijk niet.\nMaar ik heb ze er wel voor nodig...\nIn <color red<Beedles wolkenwinkel >coloroff>kun je een\n<color yellow<net >coloroff>kopen, als je er zelf geen hebt...\n\n\n<0x10009:0x00070708>Beedle vliegt meestal met zijn\nwinkel rond de bazaar... Ja... Als je\ndaar <color green<naar boven kijkt>coloroff>, zie je hem\nbeslist...")
/*<122>*/ 					zone_temp_flags[6 /* 0x1 40 */] = true;
          				}
          			}
          		  case 1:
          			goto flw_62
          		}
          	  case 1:
/*<176>*/ 		switch (story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */]) {
          		  case 0:
/*<175>*/ 			switch (story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */]) {
          			  case 0:
          				goto flw_116
          			  case 1:
/*<177>*/ 				check_item_flag(160, 1)
/*<178>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 58}) {
          				  case 0:
/*<182>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 179, 'param3': 31}
/*<179>*/ 					printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000001>O, welkom... Sorry, zei je dat je me iets\nwilt geven?\n\n\nHet spijt me, maar ik heb het veel te druk\nop dit moment. Zou je, eh... over een tijdje\nnaar mijn huis kunnen gaan? Ik ben er\n<color red<vanavond>coloroff>.\nSorry voor het ongemak... Hopelijk tot\nvanavond.")
/*<180>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
          					goto flw_116
          				}
          			}
          		  case 1:
/*<183>*/ 			switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          			  case 0:
/*<186>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 31}
/*<184>*/ 				printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00000001>Welkom! <0x10006:0xfbcd>Pffft.<0x10006:0x00cd><0x10009:0x000a0a06> Tja...\n\n\n\n<0x10009:0x00ffff00>Sorry, ik moet niet zo zuchten als er\neen klant is... Maar weet je, ik slaap\nde laatste tijd zo slecht <color red<'s nachts>coloroff>...\n\nSorry, het is niet netjes om tegen\neen klant te klagen... Alweer...")
/*<185>*/ 				zone_temp_flags[7 /* 0x1 80 */] = true;
          				goto flw_116
          			  case 1:
          				goto flw_116
          			}
          		}
          	}
          }

