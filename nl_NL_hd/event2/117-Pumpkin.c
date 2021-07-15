          void entrypoint_117_40() {
/*< 38>*/ 	start()
/*<348>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<350>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<351>*/ 			printf("\x0E\x01\x09\x04\x11\x1153Oooo, nu is het genoeg, hoor! Dit is de\nlaatste druppel!")
          		  case 1:
          			flw_493:
/*<493>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<614>*/ 				switch (scene_flags[69 /* 0x9 20 */]) {
          				  case 0:
/*<613>*/ 					switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          					  case 0:
/*<616>*/ 						printf("\x0E\x01\x09\x04\x00\x01Ik hoorde dat jij voor die mooie kroon-\nluchter hebt gezorgd.\n\n\n\x0E\x01\x09\x04\x00\x300Probeer je soms indruk te maken op\nKala, of zo?")
          					  case 1:
          						flw_617:
/*<617>*/ 						switch (scene_flags[5 /* 0x1 20 */]) {
          						  case 0:
/*<494>*/ 							printf("\x0E\x01\x09\x04\x00\x01Dus al dat gezwets over demonen was\ngewoon bijgeloof, of niet?!\n\n\n\x0E\x01\x09\x04\x00\x300Die ouwe probeert alleen maar\ninteressant te doen!")
          						  case 1:
          							flw_41:
/*< 41>*/ 							printf("\x0E\x01\x09\x04\x00\x01Moet je horen!\n\n\n\nDie ouwe man daar zegt dat hij een\ndemon gezien heeft!\n\n\n\x0E\x01\x09\x04\n\x300Hij probeert natuurlijk indruk te maken\nop Kala. Maar met dat griezelige gedoe\nmaakt hij bij haar geen kans!")
          						}
          					}
          				  case 1:
/*<615>*/ 					scene_flags[21 'The Sky'][69 /* 0x9 20 */] = true;
          					goto flw_617
          				}
          			  case 1:
/*< 71>*/ 				switch (scene_flags[5 /* 0x1 20 */]) {
          				  case 0:
/*< 72>*/ 					printf("\x0E\x01\x09\x04\x11\x1104Wacht? Je gelooft toch niet in die ouwe\nman zijn onzinverhaal over demonen,\nof wel?\n\n\x0E\x01\x09\x04\n\x300Huh?! Probeer jij soms ook indruk te\nmaken op Kala?")
          				  case 1:
          					goto flw_41
          				}
          			}
          		}
          	  case 1:
          		goto flw_493
          	}
          }

          void entrypoint_117_23() {
/*<292>*/ 	start()
/*<176>*/ 	printf("\x0E\x01\x09\x04\x07\x803Ik ben zo blij dat je me deze lieve mol\ngebracht hebt om me te helpen!\n\n\nIk ga hem bij allerlei dingen om hulp\nvragen! \x0E\x01\x09\x04\x13\x800Opnieuw,<pause05> heel,<pause05> heel,<pause05> heel,<pause05>\nHEEL erg <pause05>bedankt!")
/*<166>*/ 	story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */] = true;
/*<468>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<505>*/ 	temp_flags[17 /* 0x3 02 */] = true;
/*<386>*/ 	give_gratitude_crystals();
          }

          void entrypoint_117_41() {
/*<107>*/ 	start()
/*<108>*/ 	printf("\x0E\x01\x09\x04\x00\x08Oooo ja, hoor! Ik zal jullie eens wat\nlaten zien!")
          }

          void entrypoint_117_24() {
/*<307>*/ 	start()
/*<327>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<328>*/ 		printf("\x0E\x01\x09\x04\x00\x04Dus, wat mag het zijn?\n[1]Ik kom harp spelen.[2]Soep.[3-]Niets.")
          		flw_312:
/*<312>*/ 		switch (choice(3)) {
          		  case 0:
/*<542>*/ 			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          			  case 0:
/*<324>*/ 				printf("\x0E\x01\x09\x04\x0E\x1000Geweldig! Mijn klanten en Kala zullen\nheel blij zijn om dat te horen!")
/*<325>*/ 				entrypoint_117_32();
          			  case 1:
/*<543>*/ 				printf("\x0E\x01\x09\x04\x0C\x700O, sorry, Kala treedt alleen 's avonds\nlaat op.\n\n\nKom vanavond terug, oké?")
          			}
          		  case 1:
/*<315>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 316, 'param3': 12}
/*<316>*/ 			printf("\x0E\x01\x09\x04\x08\x1004Ik ben blij dat een jonge knul als jij de\nverfijnde smaak kan waarderen!\n\n\nVoor maar <r<10 rupees >>heb je al een fles.\nWat zeg je ervan?\n[1]Een fles graag![2-]Nee, bedankt.")
/*<317>*/ 			switch (choice(2)) {
          			  case 0:
/*<318>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*<320>*/ 					switch (adventure_pouch_has(1 0x0001)) {
          					  case 0:
/*<535>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 322, 'param3': 42}
/*<322>*/ 						give_item(195 0xC3);
/*<550>*/ 						rupees += -10;
/*<552>*/ 						printf("Deze soep moet warm gedronken worden!\nIn nog geen vijf minuten is de soep\nal te koud.")
          					  case 1:
/*<321>*/ 						printf("\x0E\x01\x09\x04\x00\x700Je hebt geen fles bij je?\n\n\n\nSoep drinken gaat lastig als je niks hebt\nom uit te drinken! Kom weer langs\nwanneer je een fles gevonden hebt!")
          					}
          				  case 1:
/*<319>*/ 					printf("\x0E\x01\x09\x04\x0C\x700Je hebt niet genoeg rupees bij je. Ach,\ndan kom je toch een andere keer weer?")
          				}
          			  case 1:
/*<323>*/ 				printf("\x0E\x01\x09\x04\x0D\xA00Toe nou! Wat wil je nu precies?")
          			}
          		  case 2:
/*<313>*/ 			printf("\x0E\x01\x09\x04\x08\x1000Al goed, al goed. Als je niets nodig hebt,\nga dan lekker ergens zitten en ontspan.\nJe hebt het verdiend!\n\n\x0E\x01\x09\x04\x00\x700O, en vergeet niet om Kala even gedag\nte zeggen, oké?")
          		}
          	  case 1:
/*<309>*/ 		printf("\x0E\x01\x09\x04\x00\x01Hallo, Link! Wat vind je\nvan de nieuwe kroonluchter?\n\n\n\x0E\x01\x09\x04\x0B\x1100Wat een schoonheid, hè? En hij heeft\nme ook flink wat gekost!")
/*<326>*/ 		scene_flags[21 'The Sky'][22 /* 0x3 40 */] = true;
/*<310>*/ 		printf("\x0E\x01\x09\x04\x0D\x1006Wat? Vind je dat ik teveel betaald heb?\n\n\n\n\x0E\x01\x09\x04\x08\x09Ach, boehoe... Dankzij jouw harde\nwerk kon ik me deze schoonheid van\neen kroonluchter gewoon veroorloven.\n\x0E\x01\x09\x04\x0C\x900Dus afblijven!")
/*<311>*/ 		printf("\x0E\x01\x09\x04\x08\x700Maar goed, wat kan ik vandaag voor je\nbetekenen? Als je naar werk op zoek\nbent, heb ik hier nog wel ergens een\nklusje voor je. Net als vroeger, hè?\n\x0E\x01\x09\x04\x0E\x700En natuurlijk krijg je deze keer\ngewoon betaald. Dus, wil je weer op die\nharp van je spelen? Of kom je voor\nwat heerlijke soep?[1]Ik kom harp spelen.[2]Soep graag.[3-]Geen tijd.")
          		goto flw_312
          	}
          }

          void entrypoint_117_42() {
/*<121>*/ 	start()
/*<126>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 142, 'param3': 32}
/*<142>*/ 	printf("\x0E\x01\x09\x04\x07\x701Hoi! Heb je het al gehoord? Ze heeft\nhém om hulp gevraagd voor de\npompoenoogst!")
/*<127>*/ 	{'type': 'type3', 'subType': 1, 'param1': 27, 'param2': 0, 'next': 122, 'param3': 16}
/*<122>*/ 	printf("\x0E\x01\x09\x04\x1B09\x702Ik kan dat veldje sowieso veel beter\nen sneller omspitten dan die molman\ndaar!")
/*<128>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 27, 'next': 177, 'param3': 16}
/*<177>*/ 	{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 2048, 'next': 123, 'param3': 13}
/*<123>*/ 	printf("\x0E\x01\x09\x04\x00\x08Wat? Echt? Te gek!")
/*<178>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 129, 'param3': 13}
/*<129>*/ 	{'type': 'type3', 'subType': 1, 'param1': 27, 'param2': 0, 'next': 124, 'param3': 16}
/*<124>*/ 	printf("\x0E\x01\x09\x04\x1B07\x705Hahaha! Kala's wens is mijn bevel!\nOf ze me nu de akker op of\neen brandend huis in stuurt!")
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 27, 'next': 179, 'param3': 16}
/*<179>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 2048, 'next': 125, 'param3': 13}
/*<125>*/ 	printf("\x0E\x01\x09\x04\x1A00\x09Hehe! Nou, hopelijk kom je nog vaker\nhelpen!")
/*<180>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 143, 'param3': 13}
/*<143>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 144, 'param3': 16}
/*<144>*/ 	printf("Wat lief van jullie!\x0E\x01\x09\x04\x07\x703")
          }

          void entrypoint_117_08() {
/*<283>*/ 	start()
/*<165>*/ 	printf("\x0E\x01\x09\x04\x00\x09Hoera! Je hebt iemand gevonden!")
/*<167>*/ 	printf("\x0E\x01\x09\x04\x01\x705Maar, wacht eens... Is dit een persoon?\n\n\n\n\x0E\x01\x09\x04\x07\x700O, je bedoelt dat deze mol het veldje\nvoor me om gaat spitten!")
          }

          void entrypoint_117_25() {
/*<394>*/ 	start()
          	flw_34:
/*< 34>*/ 	switch (context_related3(0)) {
          	  case 0:
/*< 90>*/ 		switch (scene_flags[6 /* 0x1 40 */]) {
          		  case 0:
/*<200>*/ 			switch (zone_temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<201>*/ 				printf("\x0E\x01\x09\x04\x07\x703Wauw, wat fijn! En een geluk dat ik op\nje kan rekenen!\n[1]Mooi![2-]Nou, eigenlijk...")
/*<202>*/ 				switch (choice(2)) {
          				  case 0:
/*<515>*/ 					printf("\x0E\x01\x09\x04\x13\x809Ik wist wel dat je me niet in de steek\nzou laten!\x0E\x01\x05\x04\x1E\x00")
          					flw_87:
/*< 87>*/ 					printf("\x0E\x01\x09\x04\x07\x700<r<Loop langzaam>> wanneer je meerdere\npompoenen tegelijk draagt.\n\n\nAls ze naar links hangen, ga dan naar\nlinks. Als ze naar rechts hangen, naar\nrechts. Neem voorzichtig de tijd!\n\n\x0E\x01\x09\x04\x01\x700En raak niet in paniek, blijf rustig.\nAnders laat je ze zeker vallen. Dus...\n<pause14>Succes!")
/*<  2>*/ 					make_actor_do_something(0, 0)
          				  case 1:
          					flw_397:
/*<397>*/ 					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          					  case 0:
/*<513>*/ 						switch (random(2)) {
          						  case 0:
/*<395>*/ 							printf("\x0E\x01\x09\x04\x01\x1606Nee?! Ik had echt gedacht dat je ons\nwel zou helpen...")
          						  case 1:
/*<514>*/ 							printf("\x0E\x01\x09\x04\x01\x1611Jeetje... Saai, hoor!")
          						}
          					  case 1:
/*<  5>*/ 						printf("\x0E\x01\x09\x04\x01\x1606Echt? Wacht maar tot papa hier van\nhoort!")
          					}
          				}
          			  case 1:
/*<499>*/ 				switch (temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<500>*/ 					printf("\x0E\x01\x09\x04\x07\x808Ik hoop maar dat ik weer op je kan\nrekenen bij de volgende oogst...\n\x0E\x01\x06\x02\xFBCDO\x0E\x01\x06\x02Í sterke\x0E\x01\x06\x02Í ridder!")
          				  case 1:
/*<508>*/ 					switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          					  case 0:
/*<509>*/ 						printf("\x0E\x01\x09\x04\x01\x700Wauw! Je komt als geroepen! Wat dacht\nje ervan om de handen uit de mouwen\nte steken?\n\n\x0E\x01\x09\x04\x07\x700Wil je niet tegen betaling wat voor mij\nnaar de berging dragen?\n[1]Prima![2-]Nee, dank je.")
          						flw_3:
/*<  3>*/ 						switch (choice(2)) {
          						  case 0:
/*<  4>*/ 							printf("\x0E\x01\x09\x04\x07\x703Wat goed! Ik laat je zien waar ik de\npompoenen wil hebben.")
/*< 88>*/ 							set_camera(1, 0)
/*< 86>*/ 							printf("Zie je die berging daar? Daar moeten de\npompoenen heen.")
/*< 89>*/ 							set_camera(-1, 0)
          							goto flw_87
          						  case 1:
          							goto flw_397
          						}
          					  case 1:
/*<398>*/ 						switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          						  case 0:
/*<469>*/ 							printf("\x0E\x01\x09\x04\x00\x0FNu de pompoenen geoogst zijn, moet\nhet veld omgeploegd worden voordat\nwe de zaadjes kunnen planten!\n\nKende ik maar iemand die goed is in\nhet omspitten van aarde...")
/*<396>*/ 							printf("\x0E\x01\x09\x04\x01\x700O ja! Ik wilde je nog om een gunst\nvragen. Ik had niet genoeg tijd om alle\npompoenen te plukken, dus...\n\n\x0E\x01\x09\x04\x07\x700Zou jij me willen helpen het laatste stel\nnaar de berging te dragen? Ik beloof\ndat het de moeite waard zal zijn!\n[1]Prima![2-]Nee.")
          							goto flw_3
          						  case 1:
/*< 92>*/ 							printf("\x0E\x01\x09\x04\x00\x01Echt? Je wilt ons helpen met de\npompoenoogst?\n\n[1]Jazeker![2-]Nee.")
          							goto flw_3
          						}
          					}
          				}
          			}
          		  case 1:
/*<605>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 91, 'param3': 31}
/*< 91>*/ 			scene_flags[21 'The Sky'][6 /* 0x1 40 */] = true;
/*<  1>*/ 			printf("\x0E\x01\x09\x04\x01\x701Het ziet ernaar uit dat je ons gaat\n<r<helpen bij de pompoenoogst>>! We\nkunnen je hulp goed gebruiken.\n\n\x0E\x01\x09\x04\x07\x700Het is alsof er een gewicht van mijn\nschouders valt. Die pompoenen zijn\nniet bepaald licht!\n\n\x0E\x01\x09\x04\x01\x1600Is dat zo? Jij denkt het dit een eitje\nzal zijn?\n\n\n\x0E\x01\x09\x04\x01\x700Hihi... Goed, laten we het spannender\nmaken. Ik daag je uit <r<vijf pompoenen\ntegelijk te dragen>>!\n\n\x0E\x01\x09\x04\x07\x1600Maar wel voorzichtig hoor! Als je te\nsnel gaat, vallen de pompoenen straks\nnog...\n[1]Kom maar op![2-]Laat maar.")
          			goto flw_3
          		}
          	  case 1:
/*<389>*/ 		switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          		  case 0:
/*<391>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 390, 'param3': 12}
/*<390>*/ 			printf("\x0E\x01\x09\x04\x13\x809Ik wist wel dat het je zou lukken!\nJe hebt alle pompoenen voor me\nweggebracht. Op jou kan ik rekenen!\n\n\x0E\x01\x09\x04\x07\x800Alsjeblieft, 50 rupees voor je harde\nwerk.")
/*<392>*/ 			rupees += 50;
/*<497>*/ 			printf("\x0E\x01\x09\x04\x07\x800Heel,<pause0F> heel,<pause0F> HEEL<pause0F> erg bedankt!\nHopelijk kom je snel weer langs!")
/*<393>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 498, 'param3': 12}
          			flw_498:
/*<498>*/ 			temp_flags[16 /* 0x3 01 */] = true;
/*<512>*/ 			zone_temp_flags[2 /* 0x1 04 */] = false;
          		  case 1:
/*< 35>*/ 			printf("\x0E\x01\x09\x04\x13\x809Ik wist wel dat het je zou lukken!\nJe droeg ze allemaal in één keer!\n\n\n\x0E\x01\x09\x04\x01\x700Dan ben je nu gelijk klaar met helpen!\n\n\n\n\x0E\x01\x09\x04\x19\x800Heel,<pause0F> heel<pause0F> erg<pause0F> bedankt<pause0F>!")
/*< 83>*/ 			story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */] = true;
          			goto flw_498
          		}
          	  case 2:
/*< 36>*/ 		printf("\x0E\x01\x09\x04\x01\x1611O nee! Je hebt ze laten vallen...\nJe moet echt voorzichtiger zijn.\n\n\n\x0E\x01\x09\x04\x07\x700Kom naar me toe als je het nog eens\nwilt proberen.")
/*<199>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          	}
          }

          void entrypoint_117_43() {
/*<131>*/ 	start()
/*<132>*/ 	printf("\x0E\x01\x09\x04\x00\x06Pfoe... Ik voel me als herboren na zo'n\ndagje m'n klauwen vuil maken!\n\n\n\x0E\x01\x09\x04\x0C\xD00En als ik dat meisje zie, gossie. Dan\nben ik gelijk niet moe meer!\n\n\n\x0E\x01\x09\x04\x01\x900Zeg<pause0A>.<pause0A>.<pause0A>.<pause0A> Denk je dat ze misschien een\noogje op me heeft?\n\n\n\x0E\x01\x09\x04\x0C\xD00Ik zeg het je, die is verliefd!\n\n\n\n\x0E\x01\x09\x04\x09\xD0BWeet je, als ik zo aan haar denk... dan wil\nik morgen nog harder m'n best doen!")
          }

          void entrypoint_117_09() {
/*<284>*/ 	start()
/*<168>*/ 	printf("\x0E\x01\x09\x04\x00\nMan, man, man! Je wilt me hele dagen\nop een veldje laten ploeteren?!\n\n\nHeb je me daarvoor dat hele eind de\nlucht in gesleept?")
          }

          void entrypoint_117_26() {
/*<431>*/ 	start()
          	flw_73:
/*< 73>*/ 	switch (choice(2)) {
          	  case 0:
/*<314>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 74, 'param3': 12}
/*< 74>*/ 		printf("\x0E\x01\x09\x04\x08\x1004Ik ben blij dat een jonge knul als jij de\nverfijnde smaak kan waarderen!\n\n\nVoor maar <r<10 rupees >>heb je al een fles.\nWat zeg je ervan?\n[1]Een fles graag![2-]Nee, bedankt.")
/*<112>*/ 		switch (choice(2)) {
          		  case 0:
/*<113>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*<115>*/ 				switch (adventure_pouch_has(1 0x0001)) {
          				  case 0:
/*<531>*/ 					printf("Nou, eindelijk! Pak aan!")
/*<530>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 117, 'param3': 42}
/*<117>*/ 					give_item(195 0xC3);
/*<549>*/ 					rupees += -10;
/*<551>*/ 					printf("Deze soep moet warm gedronken worden!\nIn nog geen vijf minuten is de soep\nal te koud.")
          				  case 1:
/*<116>*/ 					printf("\x0E\x01\x09\x04\x00\x700Je hebt geen fles bij je?\n\n\n\nSoep drinken gaat lastig als je niks hebt\nom uit te drinken! Kom weer langs\nwanneer je een fles gevonden hebt!")
          				}
          			  case 1:
/*<114>*/ 				printf("\x0E\x01\x09\x04\x0C\x700Je hebt niet genoeg rupees bij je. Ach,\ndan kom je toch een andere keer weer?")
          			}
          		  case 1:
          			flw_434:
/*<434>*/ 			switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          			  case 0:
          				flw_437:
/*<437>*/ 				printf("\x0E\x01\x09\x04\x10\x705Ha! Geen probleem hoor! Je kunt hier\nmeer dan alleen soep drinken. Hou een\npraatje met de vaste klanten, of de\nnieuwe. Maak het je gemakkelijk!\nMaar kom hier geen rotzooi trappen.\n\n\n\n\x0E\x01\x09\x04\x08\x700En kom zeker niet aan m'n speciaal op\nmaat gemaakte en zeer, zeer kostbare\nkroonluchter!\n\n\x0E\x01\x09\x04\x00\x900Als ik je aan m'n kroonluchter zie komen,\ndan zwaait er wat! Als ik hem ook maar\nenigszins zie schommelen...")
          			  case 1:
/*<435>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<439>*/ 					printf("\x0E\x01\x09\x04\x10\x905Oké. Hm, je kunt voor ons werken om\ndie kroonluchter te vergoeden.\n\n\n\x0E\x01\x09\x04\x00\x700Kom over een tijdje maar terug, dan\nheb ik wel wat werk voor je. Oké?")
          				  case 1:
/*<436>*/ 					switch (scene_flags[25 /* 0x2 02 */]) {
          					  case 0:
/*<438>*/ 						printf("\x0E\x01\x09\x04\x10\x905Oké. Hm, je kunt voor ons werken om\ndie kroonluchter te vergoeden.\n\n\n\x0E\x01\x09\x04\x00\x700Kom over een tijdje maar terug, dan\nheb ik wel wat werk voor je. Oké?")
          					  case 1:
          						goto flw_437
          					}
          				}
          			}
          		}
          	  case 1:
          		goto flw_434
          	}
          }

          void entrypoint_117_44() {
/*<134>*/ 	start()
/*<136>*/ 	switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
          	  case 0:
/*<138>*/ 		switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          		  case 0:
/*<140>*/ 			switch (story_flags[470 /* us: 805A9B0E 0x04, jp: 805ACD8E 0x04 */]) {
          			  case 0:
/*<141>*/ 				printf("\x0E\x01\x09\x04\x01\x70FKen je echt iemand die dat voor me zou\ndoen?\n\n\n\x0E\x01\x09\x04\x07\x700Ach, ik blijf in elk geval duimen dat\ner iemand langskomt die kan helpen...")
          			  case 1:
/*<139>*/ 				printf("\x0E\x01\x09\x04\x00\x0FNu de pompoenen geoogst zijn, moet\nhet veld omgeploegd worden voordat\nwe de zaadjes kunnen planten!\n\nKende ik maar iemand die goed is in\nhet omspitten van aarde...")
          			}
          		  case 1:
/*<135>*/ 			printf("\x0E\x01\x09\x04\x01\x701Wilde je ons misschien helpen bij de\npompoenoogst?\n\n\n\x0E\x01\x09\x04\x07\x700Het is daar nu een beetje laat voor...\nKom morgenochtend weer terug, dan\nheb ik hier wel wat voor je te doen,\ngoed?")
          		}
          	  case 1:
/*<423>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<137>*/ 			printf("\x0E\x01\x09\x04\x00\x01O! De ridder die de kroonluchter heeft\ngesloopt! Je bent het nog steeds goed\naan het maken?\n\n\x0E\x01\x09\x04\x01\x700Trouwens... <pause1E>Papa wilde je spreken.\n\n\n\n\x0E\x01\x09\x04\x07\x700Ga maar snel naar hem toe om hem te\nvragen hoe je kunt helpen.")
          		  case 1:
/*<424>*/ 			printf("\x0E\x01\x09\x04\x00\x01O, als dat niet de dappere vernietiger\nder kroonluchters is! Nog altijd druk?")
          		}
          	}
          }

          void entrypoint_117_27() {
/*<448>*/ 	start()
/*<456>*/ 	set_camera(30, 0)
/*<450>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 452, 'param3': 32}
/*<452>*/ 	{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 282, 'next': 453, 'param3': 15}
/*<453>*/ 	{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 26, 'next': 451, 'param3': 14}
/*<451>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': -1, 'next': 473, 'param3': 16}
/*<473>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<472>*/ 		printf("\x0E\x01\x09\x04\x1A00\x01Blijf daar niet zo zitten! Als je niet nu\nmeteen naar papa gaat, dan... dan zwaait\ner wat!\n\n\x0E\x01\x09\x04\x1A1A\x800Je wilt hem niet boos maken!")
          		flw_454:
/*<454>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 282, 'next': 539, 'param3': 14}
/*<539>*/ 		{'type': 'type3', 'subType': 1, 'param1': 7, 'param2': 0, 'next': 455, 'param3': 40}
/*<455>*/ 		{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 26, 'next': -1, 'param3': 15}
          	  case 1:
/*<449>*/ 		printf("\x0E\x01\x09\x04\x1A00\x01Welkom! Dit is <r<De Oranje Poen>>,\nwaar de beste pompoensoep van het hele\nhemelrijk geserveerd wordt!\n\n\x0E\x01\x09\x04\x1A1A\x800Er is hier niet zoveel te doen, dus ga\nzitten en ontspan! Maak het je\ngemakkelijk!")
          		goto flw_454
          	}
          }

          void entrypoint_117_10() {
/*<  6>*/ 	start()
/*<118>*/ 	switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          	  case 0:
/*<214>*/ 		entrypoint_117_11();
          	  case 1:
          		flw_520:
/*<520>*/ 		scene_flags[21 'The Sky'][33 /* 0x5 02 */] = true;
/*< 12>*/ 		switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          		  case 0:
/*<306>*/ 			switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          			  case 0:
/*<308>*/ 				entrypoint_117_24();
          			  case 1:
/*< 14>*/ 				switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          				  case 0:
/*< 18>*/ 					printf("\x0E\x01\x09\x04\x00\x0EJe had heel wat goed te maken, maar\nje hebt hard gewerkt, jongen. Dat van\ndie kroonluchter zit nu wel weer goed.\nZand erover!\nIk dacht zelfs soms dat je ervandoor\nzou gaan! Maar je hebt al het werk\ngedaan dat we je vroegen te doen.\n\n\x0E\x01\x09\x04\x00\x1000Ha! Hopelijk kan ik je snel weer eens\nbegroeten, maar dan als een klant!")
          				  case 1:
/*< 15>*/ 					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          					  case 0:
/*< 80>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<266>*/ 							switch (scene_flags[21 /* 0x3 20 */]) {
          							  case 0:
/*<516>*/ 								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          								  case 0:
/*<267>*/ 									printf("\x0E\x01\x09\x04\x00\x01Hallo! Je wilt dus nog een keer voor\nmijn kleine Kala spelen?\n[1]Reken maar![2]Leg uit![3-]Nee.")
/*<268>*/ 									switch (choice(3)) {
          									  case 0:
/*<270>*/ 										printf("\x0E\x01\x09\x04\x00\x0ESuper! Ik hoopte al dat je zo zou\nreageren.")
          										flw_383:
/*<383>*/ 										story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = true;
          										flw_546:
/*<546>*/ 										set_camera(9, 0)
/*<293>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 294, 'param3': 32}
/*<294>*/ 										{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 26, 'next': 295, 'param3': 15}
/*<295>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 261, 'param3': 16}
/*<261>*/ 										printf("\x0E\x01\x09\x04\x0D\x02Goed dan. Hé! Kala! Heb je even?")
/*<300>*/ 										set_camera(10, 0)
/*<298>*/ 										{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 297, 'param3': 16}
/*<297>*/ 										printf("\x0E\x01\x09\x04\x1A00\x08Ja, papa! Wat is er?")
/*<301>*/ 										set_camera(11, 0)
/*<302>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 299, 'param3': 50}
/*<299>*/ 										{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 26, 'next': 262, 'param3': 17}
/*<262>*/ 										printf("\x0E\x01\x09\x04\x0B\xB00Deze knul gaat je op zijn instrument\nbegeleiden terwijl je zingt! Dus laat je\npapa jouw beeldschone stem weer eens\nhoren, oké? Zing iets moois voor ons.")
/*<303>*/ 										set_camera(12, 0)
/*<296>*/ 										{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 100, 'next': 263, 'param3': 16}
/*<263>*/ 										printf("Geen probleem! Laten we beginnen.")
/*<246>*/ 										make_actor_do_something(0, 0)
          									  case 1:
/*<545>*/ 										printf("\x0E\x01\x09\x04\x00\x0EGoed... Ik leg het je nog één keer uit.")
          										flw_265:
/*<265>*/ 										printf("\x0E\x01\x09\x04\x00\x700Wanneer Kala zingt, zwaaien de klanten\nmet hun armen. Als je het even niet\nmeer weet, kun je gewoon hun ritme\naanhouden.\n\x0E\x01\x09\x04\x0F\x700Kies de klant die je het makkelijkst\nbij kunt houden en speel de harp in\nhet tempo dat de klant aangeeft.\n\nMaak je niet druk over de richting\nwaarin je arm beweegt. Ga gewoon niet\nte snel of te langzaam en speel met\nmooie, lange, zwierende uithalen!\n\x0E\x01\x09\x04\x08\x700Als de klanten niet bewegen, dan is dat\nje kans om wat te improviseren. Speel\nop zo'n moment hoe je maar wilt!\n\nHet gaat dus allemaal om het ritme.\nHelder?\n[1]Oké![2-]Nog niet.")
/*<260>*/ 										switch (choice(2)) {
          										  case 0:
          											goto flw_383
          										  case 1:
/*<264>*/ 											printf("Luisterde je soms niet naar wat ik je\nzonet vertelde? Oké, luister!")
          											goto flw_265
          										}
          									  case 2:
/*<269>*/ 										printf("\x0E\x01\x09\x04\x00\x04Geen probleem. Rust eerst maar eens\ngoed uit en kom later weer langs!")
          									}
          								  case 1:
/*<519>*/ 									printf("\x0E\x01\x09\x04\x00\x01O, jij bent het! <pause1E>Ha! Ik ken die blik.\nJij kunt niet wachten om voor ons wat\nop die harp te spelen, of wel?\n\nSorry, maar overdag moeten we het\npodium klaarmaken.\n\n\nKom 's avonds terug!")
          								}
          							  case 1:
/*<604>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 517, 'param3': 31}
/*<517>*/ 								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          								  case 0:
/*<197>*/ 									{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4096, 'next': 19, 'param3': 13}
/*< 19>*/ 									printf("\x0E\x01\x09\x04\x00\x01Daar ben je weer! Hm, ja, eens zien...\nWat was die klus die ik voor je had...\n\n\n\x0E\x01\x09\x04\x0D\x700O! Wat is dat voor een bijzonder\ninstrument dat je daar hebt?\n\n\n\x0E\x01\x09\x04\x00\x1100Kijk eens aan! Nou, je wist het misschien\nniet, maar Kala kan heel goed zingen!\n\n\n\x0E\x01\x09\x04\x00\x700Het is niet eens zo lang geleden dat ze\nhier haar laatste optreden deed!\n\n\n\x0E\x01\x09\x04\x08\x00Helaas is haar partner toen weggegaan,\ndus sindsdien heeft ze niet meer\ngezongen in De Oranje Poen.\n\nHé, wat zeg je ervan om samen met\nKala op te treden?\n[1]Prima![2-]Liever niet.")
/*< 53>*/ 									switch (choice(2)) {
          									  case 0:
/*< 54>*/ 										printf("\x0E\x01\x09\x04\x00\x100ESuper! Zo mag ik het horen!\n\n\n\n\x0E\x01\x09\x04\x0D\xA00Maar zorg dat het vanuit je hart komt,\noké? Ik wil dat je je uiterste best doet.")
          										goto flw_265
          									  case 1:
/*<198>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 55, 'param3': 13}
/*< 55>*/ 										printf("\x0E\x01\x09\x04\x00\x11Waarom verdoe ik mijn tijd met jou?\nHeb je ook maar een schrijntje\nverantwoordelijkheidsgevoel onder\ndie groene muts van je?")
          									}
          								  case 1:
/*<518>*/ 									printf("\x0E\x01\x09\x04\x00\x01Daar ben je weer! Hm, waarmee kan ik\nje dit keer aan het werk zetten?\n\n\n\x0E\x01\x09\x04\x00\x700O, wacht, je hebt dat bijzondere\nmuziekinstrument bij je...\n\n\n\x0E\x01\x09\x04\x0B\x1000Dat is het! Ik heb de perfecte klus voor\nje!\n\n\n\x0E\x01\x09\x04\x00\x700Maar het is een klus die je alleen\n's avonds kunt doen.\n\n\nWacht tot het donker is en kom dan\nweer hierheen, oké?")
          								}
          							}
          						  case 1:
/*<433>*/ 							switch (scene_flags[26 /* 0x2 04 */]) {
          							  case 0:
/*< 81>*/ 								printf("\x0E\x01\x09\x04\x00\x06Ik ben er nog niet uit wat je voor ons\nkunt betekenen! Kom later nog eens\nlangs.\n\nOf wil je misschien wat pompoensoep\nkopen, zodat onze omzet iets hoger is\nvandaag?\n[1]Vooruit.[2-]Nee dank je.")
/*<442>*/ 								entrypoint_117_26();
          							  case 1:
/*<440>*/ 								printf("\x0E\x01\x09\x04\x0B\x100EIndrukwekkend! Je hulp is goed van\npas gekomen bij de pompoenoogst!\n\n\n\x0E\x01\x09\x04\x00\x700Maar je bent er nog niet. Nee, je hebt\nnog wel wat goed te maken voor ik dat\nmet die kroonluchter kan vergeten!\n\n\x0E\x01\x09\x04\x08\x00Geef me wat tijd om na te denken over\nde klus waar ik je hierna voor nodig heb.\nKom over een tijdje maar weer langs.")
/*<441>*/ 								scene_flags[21 'The Sky'][26 /* 0x2 04 */] = true;
          							}
          						}
          					  case 1:
/*< 16>*/ 						switch (story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */]) {
          						  case 0:
/*< 49>*/ 							switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
          							  case 0:
/*<194>*/ 								{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 50, 'param3': 13}
/*< 50>*/ 								printf("Ga naar buiten en praat met Kala.\nWe hebben je hulp nodig bij de\npompoenoogst!")
/*<196>*/ 								{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1792, 'next': 195, 'param3': 13}
/*<195>*/ 								printf("Trouwens, we werken alleen overdag\nop onze akker!\n\n\nIn het donker kan er van alles misgaan,\nweet je?")
          							  case 1:
/*< 78>*/ 								switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          								  case 0:
/*<603>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 192, 'param3': 31}
/*<192>*/ 									{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4110, 'next': 563, 'param3': 13}
/*<563>*/ 									switch (scene_flags[25 /* 0x2 02 */]) {
          									  case 0:
/*<562>*/ 										printf("Ha! Je bent net op tijd, net op tijd voor\neen nieuwe klus!\n\n\nWe hebben je <r<hulp bij de pompoenoogst\nnodig>>! En wel zonder gemor, gezeur of\ngetreuzel, is dat helder?\n[1]Ja...[2-]Nee!")
          										flw_47:
/*< 47>*/ 										switch (choice(2)) {
          										  case 0:
/*< 51>*/ 											printf("\x0E\x01\x09\x04\x08\x704Dit is een eitje voor iemand als jij.\nKala is al de hele dag pompoenen aan\nhet oogsten buiten.\n\nDraag ze voor haar naar de berging.\n<b<Kala>> legt je de rest wel uit!")
/*<133>*/ 											printf("Trouwens, we werken alleen overdag\nop onze akker!\n\n\nIn het donker kan er van alles misgaan,\nweet je?")
/*< 52>*/ 											story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */] = true;
          										  case 1:
/*<193>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 48, 'param3': 13}
/*< 48>*/ 											printf("\x0E\x01\x09\x04\x00\x11Waarom verdoe ik mijn tijd met jou?\nHeb je ook maar een schrijntje\nverantwoordelijkheidsgevoel onder\ndie groene muts van je?")
          										}
          									  case 1:
/*< 20>*/ 										printf("Kijk aan! Je hebt de soep zonder\nproblemen bij Aerend bezorgd?\n\n\n\x0E\x01\x09\x04\x0C\x700Eens zien, ik zal de vergoeding voor\ndat klusje van je schulden afhalen.\n\n\n\x0E\x01\x09\x04\x0F\x900Maar denk maar niet dat daarmee alles\nweer goed is!\n\n\nEerst heb ik je <r<hulp bij de pompoenoogst>> n\nnodig! En daar kom je niet onderuit,\nhoor je?\n[1]Oké...[2-]Echt niet!")
          										goto flw_47
          									}
          								  case 1:
/*<428>*/ 									switch (scene_flags[25 /* 0x2 02 */]) {
          									  case 0:
/*<430>*/ 										printf("\x0E\x01\x09\x04\x00\x06Huh? Wat is er? Ik moet nog eventjes\nnadenken over je volgende klus!\n\n\nWaarom?! Omdat jij mij gaat betalen\nvoor die kroonluchter!\n\n\nDus, kom je onze omzet vandaag nog\nwat verhogen door een fles heerlijke\npompoensoep te kopen?\n[1]Jazeker.[2-]Nee.")
/*<432>*/ 										entrypoint_117_26();
          									  case 1:
/*< 79>*/ 										printf("\x0E\x01\x09\x04\x0B\x100EHa! Je hebt Aerend de soep bezorgd!\n\n\n\nIk zal de vergoeding voor dit klusje van\nje schulden afhalen...\n\n\n\x0E\x01\x09\x04\x08\x700Maar je bent hier nog niet klaar! Ik\nben al aan het denken waar ik je hulp\nnog meer bij nodig heb.\n\nDat gaat echter nog wat tijd kosten,\ndus kom later nog eens terug!")
/*<429>*/ 										scene_flags[21 'The Sky'][25 /* 0x2 02 */] = true;
          									}
          								}
          							}
          						  case 1:
/*< 27>*/ 							switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          							  case 0:
/*< 24>*/ 								switch (adventure_pouch_has(2 0x0002)) {
          								  case 0:
/*< 25>*/ 									printf("\x0E\x01\x09\x04\x00\x01Over<r< vijf minuten>> is die soep koud!\nDus, wegwezen jij! En breng die soep\nnaar de riddercommandant!")
          								  case 1:
/*< 26>*/ 									switch (adventure_pouch_has(3 0x0003)) {
          									  case 0:
/*<160>*/ 										printf("\x0E\x01\x09\x04\x00\x08Hé! Luister jij wel? Je hebt de soep koud\nlaten worden!\n\n\nNiet te geloven... Hier, ik vul je fles\nopnieuw voor je.")
/*< 45>*/ 										switch (adventure_pouch_has(1 0x0001)) {
          										  case 0:
          											flw_532:
/*<532>*/ 											{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 29, 'param3': 42}
/*< 29>*/ 											give_item(195 0xC3);
/*<156>*/ 											printf("Maar je krijgt mijn soep niet voor niks!\nDat is dan <r<10 rupees>>!")
/*<157>*/ 											switch (has_rupees(10)) {
          											  case 0:
/*<159>*/ 												rupees += -10;
          											  case 1:
/*<190>*/ 												{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 158, 'param3': 13}
/*<158>*/ 												printf("\x0E\x01\x09\x04\x00\x0DHuh? je hebt niet eens 10 rupees?!\nTja... Wat moet ik hiermee? Voor nu\nkom je ermee weg, deze ene keer!")
          											}
          										  case 1:
/*<191>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 46, 'param3': 13}
/*< 46>*/ 											printf("Hé! Je hebt geen fles!\n\n\n\nOm soep mee te nemen heb je een fles\nnodig om te vullen met dat heerlijke spul!\nVind er ergens eentje en breng hem\nhierheen.")
          										}
          									  case 1:
/*<553>*/ 										switch (adventure_pouch_has(1 0x0001)) {
          										  case 0:
/*< 28>*/ 											printf("\x0E\x01\x09\x04\x00\x07Wat zeg je? Je hebt geen hete\npompoensoep meer?\n\n\n\x0E\x01\x09\x04\x0D\xA00Je wilt toch niet zeggen dat je die zelf\nopgedronken hebt, of wel?\n\n\nHmpf, gedane zaken nemen geen keer,\ndat is zo. Hier heb je een nieuwe fles!")
          											goto flw_532
          										  case 1:
/*<556>*/ 											printf("\x0E\x01\x09\x04\x00\x07Wat zeg je? Je hebt geen hete\npompoensoep meer?\n\n\n\x0E\x01\x09\x04\x0D\xA00Je wilt toch niet zeggen dat je het zelf\nopgedronken hebt, of wel? Hm, daar is nu\nniets meer aan te doen. Hier, ik vul de\nfles opnieuw voor je.")
/*<555>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 554, 'param3': 13}
/*<554>*/ 											printf("Hé! Je hebt geen fles!\n\n\n\nOm soep mee te nemen heb je een fles\nnodig om te vullen met dat heerlijke spul!\nVind er ergens eentje en breng hem\nhierheen.")
          										}
          									}
          								}
          							  case 1:
/*<589>*/ 								switch (scene_flags[48 /* 0x7 01 */]) {
          								  case 0:
/*<590>*/ 									switch (adventure_pouch_has(1 0x0001)) {
          									  case 0:
/*<593>*/ 										printf("\x0E\x01\x09\x04\x00\x01O, je hebt een fles bij je, zoals ik je\ngevraagd heb. Super!")
          										flw_189:
/*<189>*/ 										{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4100, 'next': 22, 'param3': 13}
/*< 22>*/ 										printf("Goed, hier heb je de <y<hete pompoensoep>>!\n\n\n\n\x0E\x01\x09\x04\x00\x700Breng die maar naar de ridder-\ncommandant!")
/*<533>*/ 										{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 30, 'param3': 42}
/*< 30>*/ 										give_item(195 0xC3);
/*< 77>*/ 										printf("\x0E\x01\x09\x04\x01\x700Maar, moet je horen, knul. De ridder-\ncommandant HAAT koude soep!\n\n\nDus zorg dat je deze soep bezorgt terwijl\ndie nog heet is.\n\n\nJe zult het dus in, eh, <r<minder dan vijf\nminuten >>moeten doen, anders is de soep\nkoud!")
/*< 31>*/ 										story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */] = true;
          									  case 1:
/*<592>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2309, 'next': 591, 'param3': 13}
/*<591>*/ 										printf("Hé! Je hebt geen fles!\n\n\n\nOm soep mee te nemen heb je een fles\nnodig om te vullen met dat heerlijke spul!\nVind er ergens eentje en breng hem\nhierheen.")
          									}
          								  case 1:
/*<602>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 155, 'param3': 31}
/*<155>*/ 									switch (scene_flags[8 /* 0x0 01 */]) {
          									  case 0:
/*<185>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2317, 'next': 154, 'param3': 13}
/*<154>*/ 										printf("Ben je er klaar voor? Het wordt tijd dat\nje die schuld gaat afbetalen.\n[1]Ja![2-]Hm...")
          										flw_75:
/*< 75>*/ 										switch (choice(2)) {
          										  case 0:
/*<187>*/ 											{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4110, 'next': 76, 'param3': 13}
/*< 76>*/ 											printf("Dat is maar goed ook, ik hou je eraan!\n\n\n\n\x0E\x01\x09\x04\x00\x700Ik ga je gelijk aan het werk zetten, je\nhebt nog een hoop te doen. Ik wil dat je\nm'n beroemde soep bij <r<Aerend>>,\n<r<Skyloft's riddercommandant>>, bezorgt!\n\x0E\x01\x09\x04\x08\x700De riddercommandant is een vaste\nklant. Hij zweert bij pompoensoep voor\neen goed begin aan zijn dag.\n\nWat zeg je ervan? Heb je tijd om de\nriddercommandant wat soep te gaan\nbezorgen?\n[1]Ja hoor![2-]Nog niet.")
/*<274>*/ 											scene_flags[21 'The Sky'][20 /* 0x3 10 */] = true;
          											flw_17:
/*< 17>*/ 											switch (choice(2)) {
          											  case 0:
/*< 43>*/ 												switch (adventure_pouch_has(1 0x0001)) {
          												  case 0:
          													goto flw_189
          												  case 1:
/*<188>*/ 													{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2309, 'next': 44, 'param3': 13}
/*< 44>*/ 													printf("Hé! Je hebt geen fles!\n\n\n\nOm soep mee te nemen heb je een fles\nnodig om te vullen met dat heerlijke spul!\nVind er ergens eentje en breng hem\nhierheen.")
/*<588>*/ 													scene_flags[21 'The Sky'][48 /* 0x7 01 */] = true;
          												}
          											  case 1:
/*<275>*/ 												printf("\x0E\x01\x09\x04\x0D\xA0DNou? Ben je een man van je woord?\nIk wil dat je deze soep naar de\nriddercommandant brengt! Helder?\n[1]Helder![2-]Wacht...")
          												goto flw_17
          											}
          										  case 1:
/*<186>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 23, 'param3': 13}
/*< 23>*/ 											printf("WAT ZEG JE ME NOU?! Het gore lef!\nDat komt hier binnen, maakt een bende\nen denkt ook nog dat hij ermee weg kan\nkomen!")
/*<153>*/ 											scene_flags[21 'The Sky'][8 /* 0x0 01 */] = true;
          										}
          									  case 1:
/*<184>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2317, 'next': 21, 'param3': 13}
/*< 21>*/ 										printf("Ben je nu helemaal gek geworden?!\nWat moet dit nu weer voorstellen?\n\n\nJe hebt mijn kostbare, op maat\ngemaakte kroonluchter vernield!\n\n\nHmgrrmpf. Wacht maar, jij gaat voor\nmij werken tot je alle rupees die dat\nding mij gekost heeft, terug hebt\nverdiend! Is dat helder?\nBen je klaar om te boeten voor wat je\ngedaan hebt?\n[1]Natuurlijk![2-]Echt niet!")
          										goto flw_75
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		  case 1:
/*<559>*/ 			switch (zone_temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<557>*/ 				printf("\x0E\x01\x09\x04\x00\x01Welkom! Jij ziet eruit alsof je wel een\nflink portie heerlijke <r<pompoensoep\n>>kunt gebruiken!\n[1]Vooruit.[2-]Nee, dank je.")
          				flw_558:
/*<558>*/ 				zone_temp_flags[4 /* 0x1 10 */] = true;
          				goto flw_73
          			  case 1:
/*< 13>*/ 				printf("\x0E\x01\x09\x04\x00\x01Welkom in de favoriete hangplek van\niedere Loftwingrijder, De Oranje Poen!\n\n\nAlleen hier kun je onze beroemde\nhemelse <r<pompoensoep>> uitproberen!\n\n\nDus... Begin je al te watertanden bij\nde gedachte aan die heerlijke soep?\n[1]Een beetje.[2-]Nee.")
          				goto flw_558
          			}
          		}
          	}
          }

          void entrypoint_117_45() {
/*<145>*/ 	start()
/*<147>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 151, 'param3': 32}
/*<151>*/ 	printf("\x0E\x01\x09\x04\x00\x01Soms snap ik Kala niet. Waarom vraagt\nze mij niet gewoon om hulp op haar\npompoenveldje?")
/*<148>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 425, 'param3': 16}
/*<425>*/ 	printf("\x0E\x01\x09\x04\x1A00\x03Nee, dat kan ik toch niet toestaan...\nKlanten horen niet op het veldje mijn\nwerk te doen!")
/*<181>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6657, 'param2': -256, 'next': 149, 'param3': 13}
/*<149>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 426, 'param3': 16}
/*<426>*/ 	printf("\x0E\x01\x09\x04\x00\x02Nee, joh! Geen probleem! Mij kun je\ntenminste vertrouwen en ik werk ook\nveel harder dan die molman!")
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 182, 'param3': 16}
/*<182>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6675, 'param2': 2048, 'next': 146, 'param3': 13}
/*<146>*/ 	printf("\x0E\x01\x09\x04\x1A00\x09Hehe! Nou, hopelijk kom je nog vaker\nhelpen!")
/*<183>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6657, 'param2': -256, 'next': 152, 'param3': 13}
/*<152>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 427, 'param3': 16}
/*<427>*/ 	printf("\x0E\x01\x09\x04\x09\x705Ha! Ik doe toch niets liever? Voor jouw\nlach heb ik alles over!")
          }

          void entrypoint_117_28() {
/*<457>*/ 	start()
/*<560>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<561>*/ 		printf("\x0E\x01\x09\x04\x00\x03Hallo, harde werker. Je hebt je flink in\nhet zweet gewerkt voor ons.\n\n\nJe bent hier altijd welkom, of het nu\nals klusjesman is, of als klant!\n\n\nAls je nog graag wat klusjes komt doen\nnet als vroeger, dan heb ik wel wat voor\nje! Ik betaal je er dit keer zelfs voor.")
          	  case 1:
/*<474>*/ 		switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          		  case 0:
/*<475>*/ 			printf("\x0E\x01\x09\x04\x00\x03Hé, wat zit je daar te navelstaren? Heb\nje niet wat beters te doen soms?")
          		  case 1:
/*<458>*/ 			printf("\x0E\x01\x09\x04\x00\x03Hé, wat zit je daar nu te zitten?\n\n\n\n\x0E\x01\x09\x04\x0D\x700Ach, we hebben allemaal weleens zo'n\nmomentje, dat is waar. Zak maar eens\ngoed onderuit dan.\n\n\x0E\x01\x09\x04\x00\x1000Ontspan! Neem je tijd!")
          		}
          	}
          }

          void entrypoint_117_11() {
/*<213>*/ 	start()
/*<211>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*<216>*/ 		entrypoint_117_12();
          	  case 1:
/*<208>*/ 		switch (story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */]) {
          		  case 0:
/*<212>*/ 			printf("\x0E\x01\x09\x04\x00\x04Ik breng <b<Levias >>normaal zijn soep\nmidden in die donderwolk, op een eiland\nwaar altijd een <r<regenboog>> te zien is.<pling>\n\n\x0E\x01\x09\x04\x00\x700Wanneer je het ziet, weet je direct wat\nik bedoel. Succes!")
          		  case 1:
/*<209>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 459, 'param3': 31}
/*<459>*/ 			switch (story_flags[367 /* us: 805A9B03 0x20, jp: 805ACD83 0x20 */]) {
          			  case 0:
/*<460>*/ 				printf("\x0E\x01\x09\x04\x0F\x90DHè, wat heeft dit te betekenen? Ik doe\nal die moeite om de perfecte portie\nsoep te maken en je gaat hem niet eens\nbezorgen?\n\x0E\x01\x09\x04\n\x00Die robot van je heeft de soep net hier\nteruggebracht!\n[1]Sorry![2]Deze keer doe ik het!")
/*<461>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_462:
/*<462>*/ 					printf("\x0E\x01\x09\x04\x0D\x900Al goed, ik maak nog een portie klaar.\nMaar alleen omdat het voor Levias is!")
/*<463>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 23, 'next': 464, 'param3': 32}
/*<464>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 471, 'param3': 32}
          					flw_471:
/*<471>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1013, 'next': 470, 'param3': 24}
/*<470>*/ 					printf("\x0E\x01\x09\x04\x00\x900Goed, wacht hier! Ik voel inspiratie\nopborrelen voor een portie soep zoals\nik die nog nooit gemaakt heb!")
/*<340>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 223, 'param3': 16}
/*<223>*/ 					{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 228, 'param3': 47}
/*<228>*/ 					{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 256, 'next': 229, 'param3': 15}
/*<229>*/ 					{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 230, 'param3': 15}
/*<230>*/ 					set_camera(2, 0)
/*<338>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4096, 'next': 523, 'param3': 13}
/*<523>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 108, 'next': 524, 'param3': 24}
/*<524>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 224, 'param3': 6}
/*<224>*/ 					{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 547, 'param3': 48}
/*<547>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 548, 'param3': 6}
/*<548>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 217, 'param3': 24}
/*<217>*/ 					printf("\x0E\x01\x09\x04\x0B\x1009Voilà! Zie hier!\n\n\n\n\x0E\x01\x09\x04\x0F\x1100Ik maak deze soep nu al meer dan\n10 jaar, maar deze portie moet de beste\nportie <y<pompoensoep >>zijn die ik ooit\nopgediend heb!")
/*<382>*/ 					make_actor_do_something(3, 23)
/*<218>*/ 					{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 525, 'param3': 51}
/*<525>*/ 					{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 256, 'next': 219, 'param3': 13}
/*<219>*/ 					printf("\x0E\x01\x12\x04\x00\x01Meester, ik roep de robot voor u.")
/*<336>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 23, 'next': 536, 'param3': 17}
/*<536>*/ 					make_actor_do_something(0, 3)
/*<344>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 337, 'param3': 6}
/*<337>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 23, 'next': 345, 'param3': 17}
/*<345>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 341, 'param3': 6}
/*<341>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 23, 'next': 220, 'param3': 17}
/*<220>*/ 					printf("\x0E\x01\x12\x04\x00dO, meesteres Fi! Ik ben èèèèèèèèr, bzzzrt!")
/*<225>*/ 					make_actor_do_something(1, 23)
/*<221>*/ 					printf("\x0E\x01\x12\x04\x00dO, nog meer zware materialen...\nGeen zorgen! Ik kan elk gewicht tillen!\n\n\nIk wacht buiten. Ik sta klaar om u\nte begeleiden zodra u er klaar voor bent,\nzzzzzt!")
/*<226>*/ 					make_actor_do_something(2, 23)
/*<343>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 231, 'param3': 36}
/*<231>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 342, 'param3': 16}
/*<342>*/ 					set_camera(5, 0)
/*<222>*/ 					printf("\x0E\x01\x09\x04\x00\x04Ik breng <b<Levias >>normaal zijn soep\nmidden in die donderwolk, op een eiland\nwaar altijd een <r<regenboog>> te zien is.<pling>\n\n\x0E\x01\x09\x04\x00\x700Wanneer je het ziet, weet je direct wat\nik bedoel. Succes!")
/*<210>*/ 					story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = true;
/*<385>*/ 					story_flags[367 /* us: 805A9B03 0x20, jp: 805ACD83 0x20 */] = true;
/*<467>*/ 					story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
/*<232>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
          					goto flw_462
          				}
          			  case 1:
/*<521>*/ 				switch (scene_flags[33 /* 0x5 02 */]) {
          				  case 0:
/*<203>*/ 					printf("\x0E\x01\x09\x04\x00\x01Is er wat? Je kijkt of je met iets heel\nernstigs bezig bent.\n[1]Nou...[2-]Echt?")
          					flw_204:
/*<204>*/ 					switch (choice(2)) {
          					  case 0:
/*<206>*/ 						printf("\x0E\x01\x09\x04\x0D\xD04<b<Levias>>\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Ja die ken ik. Hoezo?\n\n\n\n\x0E\x01\x09\x04\x00\x700O, daar verras je me een beetje mee...\nIk wist niet dat er iets aan de hand was.\n\n\n\x0E\x01\x09\x04\x08\x700Ik breng hem elk jaar een heel vat\nvan mijn <r<pompoensoep>>!\n\n\nDe laatste tijd hangt daarginds een\nenorme donderwolk, dus ik heb hem\ndit jaar nog geen soep gebracht. Het\nzit me flink dwars!")
/*<227>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 23, 'next': 339, 'param3': 32}
/*<339>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 207, 'param3': 32}
/*<207>*/ 						printf("\x0E\x01\x09\x04\x0D\xD08Je wilt mijn soep voor mij naar Levias\ntoe brengen?\n\n\n\x0E\x01\x09\x04\x00\x700\x0E\x01\x06\x02\xFDCDMaar, eh... \x0E\x01\x06\x02ÍIk weet niet hoe je van plan\nbent die enorme donderwolk door te\nvliegen...\n\n\x0E\x01\x09\x04\x0B\x1000Maar als je een plan hebt, dan doe ik\nalles wat nodig is om Levias een portie\nvan mijn beste soep ooit te sturen!")
          						goto flw_471
          					  case 1:
/*<564>*/ 						switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          						  case 0:
          							flw_205:
/*<205>*/ 							printf("\x0E\x01\x09\x04\x00\x05O! Het zal wel niets zijn dan. In dat\ngeval: ga lekker ergens zitten en ontspan\nje maar eens goed.")
          						  case 1:
/*<346>*/ 							switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          							  case 0:
/*<347>*/ 								printf("\x0E\x01\x09\x04\x00\x04In dat geval... Waarom doe je niet\ngelijk een klusje om die kapotte\nkroonluchter te vergoeden?")
          							  case 1:
          								goto flw_205
          							}
          						}
          					}
          				  case 1:
/*<522>*/ 					printf("\x0E\x01\x09\x04\x00\x01Welkom in De Oranje Poen! De favoriete\nrustplaats voor Loftwings en hun\npartners.\n\nNatuurlijk kun je alleen hier onze\nberoemde zelfgemaakte pompoensoep\nuitproberen!\n\nMaar, aan je gezicht te zien ben je\nergens mee bezig onder die groene\nmuts van jou...\n[1]Nou...[2-]Echt?")
          					goto flw_204
          				}
          			}
          		}
          	}
          }

          void entrypoint_117_46() {
/*<399>*/ 	start()
/*<403>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<404>*/ 		printf("O nee! Ik ga ervan langs krijgen...\n\n\n\nIk had niet zo hebberig moeten zijn!")
          	  case 1:
/*<411>*/ 		switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          		  case 0:
/*<420>*/ 			printf("Als het op reparaties aankomt, is\n<b<Leeuwik>> de beste.\n\n\nHij kan vast ook de windmolen van\nSkyloft repareren!")
          		  case 1:
/*<412>*/ 			switch (story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */]) {
          			  case 0:
/*<419>*/ 				printf("Ik heb <b<Turel >>al een tijd niet meer in de\nbazaar gezien...\n\n\nErg jammer. Zijn voorspellingen\nklopten altijd precies! Eigenlijk best\neng, hè?")
          			  case 1:
/*<413>*/ 				switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          				  case 0:
/*<418>*/ 					printf("<b<Kala>> heeft het heel druk met al haar\nwerk voor de Poen.\n\n\nKon er maar iemand die gaten voor\nhaar graven...")
          				  case 1:
/*<414>*/ 					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          					  case 0:
/*<417>*/ 						printf("Zeg, heb je <b<Cornuylius>>' planten-\nverzameling weleens gezien?\n\n\nIk vraag me af of hij onlangs nog een\nnieuwe soort ontdekt heeft...")
          					  case 1:
/*<415>*/ 						switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          						  case 0:
/*<400>*/ 							printf("Zeg, weet jij niet toevallig hoe het met\n<b<Dodoh>> is? Je hebt niks gehoord?\n\n\nDe laatste keer dat ik hem zag, was hij\ndruk aan het bouwen. Hij wilde een\nplek waar iedereen welkom is om zich\nheerlijk te ontstressen.")
          						  case 1:
/*<416>*/ 							printf("Wauw! Ik wist niet dat mensen boven\nDe Oranje Poen skydiven!\n\n\nIk hoorde dat je soms tijdens het\nskydiven kleurrijke wezens tegen kunt\nkomen.\n\nMisschien zijn ze een goed voorteken?\nWaarom zou zoiets kleurrijks anders\ntevoorschijn komen?")
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_117_29() {
/*<476>*/ 	start()
/*<486>*/ 	set_camera(31, 0)
/*<477>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 484, 'param3': 32}
/*<484>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 282, 'next': 485, 'param3': 15}
/*<485>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 26, 'next': 478, 'param3': 14}
/*<478>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': -1, 'next': 483, 'param3': 16}
/*<483>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<482>*/ 		printf("\x0E\x01\x09\x04\x1A00\x01Blijf daar niet zo zitten! Als je niet nu\nmeteen naar papa gaat, dan... dan zwaait\ner wat!\n\n\x0E\x01\x09\x04\x1A1A\x800Je wilt hem niet boos maken!")
          		flw_480:
/*<480>*/ 		{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 282, 'next': 481, 'param3': 14}
/*<481>*/ 		{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 26, 'next': -1, 'param3': 15}
          	  case 1:
/*<479>*/ 		printf("\x0E\x01\x09\x04\x1A00\x01Welkom! Dit is <r<De Oranje Poen>>,\nwaar de beste pompoensoep van het hele\nhemelrijk geserveerd wordt!\n\n\x0E\x01\x09\x04\x1A1A\x800Er is hier niet zoveel te doen, dus ga\nzitten en ontspan! Maak het je\ngemakkelijk!")
          		goto flw_480
          	}
          }

          void entrypoint_117_12() {
/*<215>*/ 	start()
          	goto flw_520
          }

          void entrypoint_117_47() {
/*<405>*/ 	start()
/*<407>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<408>*/ 		printf("Wat? Heb ik wat van je aan?")
          	  case 1:
/*<406>*/ 		printf("Oeh, ja... Ik kom hier elke nacht\nheerlijk ontspannen!")
          	}
          }

          void entrypoint_117_30() {
/*< 39>*/ 	start()
/*<352>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<353>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<354>*/ 			printf("\x0E\x01\x09\x04\x0B\x704Wat doe je nou?! Je liet me rot\nschrikken! Mijn arme hart.\n\n\n\x0E\x01\x09\x04\n\x700O, ja, wat was er aan de hand? Je\nbracht me helemaal van mijn à propos.")
          			flw_56:
/*< 56>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*< 62>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*<610>*/ 					switch (scene_flags[70 /* 0x9 40 */]) {
          					  case 0:
/*<609>*/ 						switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          						  case 0:
/*<612>*/ 							printf("\x0E\x01\x09\x04\x00\x04Het is wat hè, zo'n enorme kroonluchter?\nHet licht is alleen wel wat te fel voor mijn\narme oude ogen.")
          						  case 1:
          							flw_70:
/*< 70>*/ 							printf("\x0E\x01\x09\x04\x0B\xC04Echt waar? Je hebt tegen de grafsteen\ngeduwd?\n\n\n\x0E\x01\x09\x04\n\xF00En?! Zag je die vreselijke demon?\nHuh?! Was je niet bang?\n\n\nHa! Mij hou je niet voor de gek!\nJe deed het vast in je broek van angst.")
          						}
          					  case 1:
/*<611>*/ 						scene_flags[21 'The Sky'][70 /* 0x9 40 */] = true;
          						goto flw_70
          					}
          				  case 1:
/*< 69>*/ 					switch (scene_flags[5 /* 0x1 20 */]) {
          					  case 0:
/*<585>*/ 						printf("\x0E\x01\x09\x04\x00\x01Huh? Was het de eerste keer niet\nhelemaal duidelijk?\n\n\n[1]Holst van de nacht?[2]Begraafplaats?")
/*<586>*/ 						switch (choice(2)) {
          						  case 0:
/*<587>*/ 							printf("\x0E\x01\x09\x04\x0B\x704Ja. Ga terug naar Skyloft en <g<slaap in\neen bed>> tot het <r<nacht>> is.\n\n\nSkyloft is 's nachts totaal anders dan\noverdag...\n\n\n\x0E\x01\x09\x04\n\xF00Maar ik denk dat je beter niet kunt\ngaan. Ik wil niet verantwoordelijk zijn\nals je iets vreselijks overkomt.")
          						  case 1:
/*< 67>*/ 							printf("\x0E\x01\x09\x04\x0B\x704Nou, zie je... het gebeurde in het holst\nvan de nacht. Ik stootte tegen de\n<r<grafsteen die het dichtst bij de boom\nstaat>>. Door de <r<schok >>lichtte de steen op!\nToen ik de steen, die nu griezelig licht\ngaf, wat beter bekeek en <r<tegen de\nsteen duwde>>, opende spontaan de\ndeur van de schuur die ernaast staat!\nEn daar zag ik het... Het vreselijke\nmonster! Het woont in die schuur!\n\n\n\x0E\x01\x09\x04\n\xF00Blijf weg van die schuur! Ik meen het.\nIk sta niet in voor wat er gebeurt als je\ndat monster opzoekt!")
          						}
          					  case 1:
/*<606>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 42, 'param3': 31}
/*< 42>*/ 						printf("\x0E\x01\x09\x04\x0B\x704Jij bezit de blik van een naïeve jongeman\ndie de verhalen van een oude man wel\nserieus kan nemen. Dus zeg eens, heb\nje van de demon van Skyloft gehoord?\nZo'n duivels monster heb je nog nooit\ngezien, eerlijk waar! Dat kan ook niet.\nWant niemand die de demon gezien\nheeft kon het navertellen!\n\x0E\x01\x09\x04\x0B\x700W-Wat? Je wilt weten hoe ik je iets kan\nvertellen over het zien van een monster\nwaarover niemand iets kan navertellen?\n[1]Ja.[2-]Nee.")
/*< 63>*/ 						switch (choice(2)) {
          						  case 0:
/*< 64>*/ 							printf("\x0E\x01\x09\x04\n\xF00Nou, kijk... Ik zag die demon wel, maar ik\nkon maar net op tijd wegkomen. Ik heb\nrazendsnelle reflexen, dus ik was er\nmeteen vandoor!\n\x0E\x01\x09\x04\x0B\x700Zonder die snelle reflexen had ik niet\neens genoeg tijd gehad om te gillen!")
          							flw_66:
/*< 66>*/ 							printf("\x0E\x01\x09\x04\x0B\x700Hoe dan ook, ik heb dat ding gezien,\necht!\n\n\nEr staat een grote boom op de\nbegraafplaats. Ik liep <r<midden in de\nnacht >>voorbij de boom, toen ik het zag.\n\nHet monster <r<sloeg tegen>> <r<grafsteen die het\ndichtst bij de boom staat>>, en die lichtte\nop!\n\nDaarna <r<duwde hij tegen de grafsteen>>\nen ging de deur van de schuur die daar\nvlakbij staat uit zichzelf open...\n\nHet monster ging de schuur in en... hij\ndeed de deur weer achter zich dicht.\nVerrassend beleefd, voor een demon...\n\n\x0E\x01\x09\x04\x0B\x700Deze arme oude ogen hadden nog nooit\nzoiets vreselijks gezien! Je doet er\ngoed aan om niet <r<midden in de nacht\nnaar de begraafplaats>> te gaan!")
/*< 68>*/ 							scene_flags[21 'The Sky'][5 /* 0x1 20 */] = true;
/*<577>*/ 							story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */] = true;
          						  case 1:
/*< 65>*/ 							printf("Nou, als je me zo blijft onderbreken,\ndan vertel ik je niks meer, hoor!")
          							goto flw_66
          						}
          					}
          				}
          			  case 1:
/*< 57>*/ 				printf("\x0E\x01\x09\x04\x00\x01Jij gelooft me, of niet soms?!\n[1]Wat moet ik geloven?[2]Tuurlijk![3-]Nee.")
/*< 58>*/ 				switch (choice(3)) {
          				  case 0:
/*< 59>*/ 					printf("\x0E\x01\x09\x04\x0B\x703Er verschuilt zich ergens in Skyloft\neen verschrikkelijke demon!\n\n\nHet scheelde maar een haar of dat\nmonster had me in één keer opgeslokt!\n\n\n\x0E\x01\x09\x04\x0B\x700Jij hebt duidelijk al wat training gehad,\nals ridder, maar pas toch maar goed\nop! Anders peuzelt hij je zo op!")
          				  case 1:
/*< 60>*/ 					printf("\x0E\x01\x09\x04\x0B\xE04Hahaha, ja hè?! Je bent een goeie knul.")
          				  case 2:
/*< 61>*/ 					printf("\x0E\x01\x09\x04\n\xF03Hm.<pause14>.<pause14>.<pause14> De jeugd van tegenwoordig...\njullie zouden wat respect moeten tonen\nvoor oudere mensen!")
          				}
          			}
          		  case 1:
          			goto flw_56
          		}
          	  case 1:
          		goto flw_56
          	}
          }

          void entrypoint_117_13() {
/*<285>*/ 	start()
/*<173>*/ 	printf("\x0E\x01\x09\x04\x00\x08Succes, meneer de <pause0A>mol<pause0A>-meneer!")
          }

          void entrypoint_117_48() {
/*<421>*/ 	start()
/*<501>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<502>*/ 		printf("\x0E\x01\x09\x04\x00\x01Allemachtig! Ik heb Kala al heel lang niet\nmeer zo mooi horen zingen. Mijn hart\ngaat tekeer. B-Ben ik WEER verliefd?")
          	  case 1:
/*<422>*/ 		printf("\x0E\x01\x09\x04\x00\x01Hé, wist je dit al?\n\n\n\n<b<Kala>> zingt soms vanaf dat podium daar\nwat liedjes voor ons tweeën.\n\n\n\x0E\x01\x09\x04\x09\x700Kon er maar iemand een mooie melodie\nspelen om haar stem te begeleiden...")
          	}
          }

          void entrypoint_117_31() {
/*< 37>*/ 	start()
/*<503>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<504>*/ 		printf("\x0E\x01\x09\x04\x00\x04Jazeker! Ik krijg kippenvel van haar\nschitterende stem! Ik heb nog nooit\niets mooiers gehoord. Compleet anders\ndan het gekras van mijn vrouw...")
          	  case 1:
/*<401>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<402>*/ 			printf("\x0E\x01\x09\x04\x0B\x704Wat doe je nou?! Je liet me rot\nschrikken! Mijn arme hart.\n\n\n\x0E\x01\x09\x04\n\x700O, ja, wat was er aan de hand? Je\nbracht me helemaal van mijn à propos.")
          		  case 1:
/*<495>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<496>*/ 				printf("\x0E\x01\x09\x04\x00\x04Kala heeft een schitterende stem!\nMaar<pause0A>.<pause0A>.<pause0A>. haar partner is ervandoor,\ndus ze heeft al een hele tijd niet meer\ngezongen.\nIk zou haar zo graag nog een keer\nhoren zingen.")
          			  case 1:
/*< 40>*/ 				printf("\x0E\x01\x09\x04\x00\x04Je hebt 's nachts niks te zoeken op de\nstraten van Skyloft! Als je me iets wilt\nvragen, kun je me overdag aanspreken.")
          			}
          		}
          	}
          }

          void entrypoint_117_14() {
/*<286>*/ 	start()
/*<174>*/ 	printf("\x0E\x01\x09\x04\x00\x05Wat?! Maar... Ja, goed, maar... Ach...\nIk zal het op z'n minst eens proberen.")
          }

          void entrypoint_117_15() {
/*<287>*/ 	start()
/*<169>*/ 	printf("\x0E\x01\x09\x04\x00\x09Hé! Dus, wat denk je?!")
          }

          void entrypoint_117_32() {
/*<544>*/ 	start()
          	goto flw_546
          }

          void entrypoint_117_50() {
/*<109>*/ 	start()
/*<111>*/ 	printf("\x0E\x01\x09\x04\x00\x12\x0E\x01\x08\x02\x2CDW-WAT KRIJGEN WE\nNOU?!\n\n\n\x0E\x01\x08\x02ÍJij daar, kom onmiddellijk naar\nbeneden!")
/*<110>*/ 	story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */] = true;
/*<349>*/ 	zone_temp_flags[3 /* 0x1 08 */] = true;
          }

          void entrypoint_117_16() {
/*<288>*/ 	start()
/*<170>*/ 	printf("\x0E\x01\x09\x04\x00\x09Wauw! Moet je dat zien! Geweldig!")
          }

          void entrypoint_117_51() {
/*<271>*/ 	start()
/*<276>*/ 	set_camera(3, 0)
/*<277>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 272, 'param3': 13}
/*<272>*/ 	printf("Wacht eens even, jij, hmmgrmpf!\n\n\n\nJe dacht toch niet echt dat je hier mijn\nkroonluchter kon komen slopen en er\nmee weg zou komen?!")
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_17() {
/*<289>*/ 	start()
/*<171>*/ 	printf("\x0E\x01\x09\x04\x00\x06Ja, toch? Nou, het was een eitje,\necht waar.\n\n\nWant rondwoelen in de aarde is\nkinderspel voor een Mogma!")
          }

          void entrypoint_117_52() {
/*<273>*/ 	start()
/*<280>*/ 	set_camera(4, 0)
/*<281>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 279, 'param3': 13}
/*<279>*/ 	printf("Wacht eens even, jij, hmmgrmpf!\n\n\n\nJe dacht toch niet echt dat je hier mijn\nkroonluchter kon komen slopen en er\nmee weg zou komen?!")
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_18() {
/*<290>*/ 	start()
/*<172>*/ 	printf("\x0E\x01\x09\x04\x00\nWauw! Doe het nog een keertje!\nNog één keer, toe?")
          }

          void entrypoint_117_01() {
          	start()
/*< 82>*/ 	switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          	  case 0:
/*< 93>*/ 		switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          		  case 0:
/*< 94>*/ 			switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          			  case 0:
/*< 95>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*< 96>*/ 					switch (story_flags[470 /* us: 805A9B0E 0x04, jp: 805ACD8E 0x04 */]) {
          					  case 0:
/*< 98>*/ 						switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          						  case 0:
/*<506>*/ 							switch (temp_flags[17 /* 0x3 02 */]) {
          							  case 0:
/*<100>*/ 								printf("\x0E\x01\x09\x04\x13\x808Hij heeft echt groene vingers, eh, of\nklauwen? Hij doet met gemak het werk\nvan honderd mensen! Ik ben zo blij dat\nhij hier is.")
          							  case 1:
/*<510>*/ 								switch (zone_temp_flags[7 /* 0x1 80 */]) {
          								  case 0:
          									flw_388:
/*<388>*/ 									entrypoint_117_25();
          								  case 1:
/*<507>*/ 									printf("\x0E\x01\x09\x04\x13\x808Hihihi! Sinds de mol-meneer me helpt,\ngaat het werk op het veldje supergoed!\n\n\nWe kunnen nu veel meer pompoenen\nverbouwen en oogsten!")
/*<511>*/ 									zone_temp_flags[7 /* 0x1 80 */] = true;
          									goto flw_388
          								}
          							}
          						  case 1:
/*<607>*/ 							switch (story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */]) {
          							  case 0:
/*<608>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 31}
          							  case 1:
/*<598>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 234, 'param3': 31}
/*<234>*/ 								printf("\x0E\x01\x09\x04\x0B\xE0FIk hoop maar dat je snel iemand kunt\nvinden...")
/*<233>*/ 								switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          								  case 0:
          								  case 1:
/*<235>*/ 									{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 236, 'param3': 51}
/*<236>*/ 									printf("Met uw huidige instellingen kunt u niet\nhet individu <pling><r<detecteren >>waarnaar deze\npersoon op zoek is.\n\nWilt u uw instellingen wijzigen om\n<r<iemand die het veld om kan spitten>>,\nte kunnen <pling><r<detecteren>>?\n[1]Ja.[2-]Niet nu.")
/*<237>*/ 									switch (choice(2)) {
          									  case 0:
/*<239>*/ 										story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = true;
/*<240>*/ 										story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<241>*/ 										story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<242>*/ 										story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<243>*/ 										story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<244>*/ 										story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<575>*/ 										open_dowsing_wheel(15)
/*<576>*/ 										printf("\x0E\x01\x12\x04\x00\x05Begrepen, meester.\n\n\n\nUw instellingen zijn aangepast zodat u\nhet individu kunt <pling><r<detecteren >>waarnaar\ndeze persoon op zoek is.")
          										flw_245:
/*<245>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          									  case 1:
/*<238>*/ 										printf("\x0E\x01\x12\x04\x00\x05Goed, meester. Ik zal uw instellingen\nvoor het <pling>detecteren aanpassen.")
          										goto flw_245
          									}
          								}
          							}
          						}
          					  case 1:
/*< 97>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 99, 'param3': 31}
/*< 99>*/ 						printf("\x0E\x01\x09\x04\x00\x01Bedankt nog voor je hulp met de\npompoenoogst.\n\n\nDankzij jou kunnen we nu de nieuwe\nzaadjes gaan planten!\n\n\n\x0E\x01\x09\x04\x01\x100<pause1E>Hm. Het veldje moet alleen nog omgespit\nworden. \x0E\x01\x09\x04\x0B\xE00En dat is zwaar werk!\n\n\n\x0E\x01\x09\x04\x07\x700Kende ik maar iemand die het veldje\nzonder moeite om kon spitten...\n[1]Ik weet iemand![2-]Tja...")
/*<101>*/ 						switch (choice(2)) {
          						  case 0:
/*<103>*/ 							printf("\x0E\x01\x09\x04\x07\x809Echt waar?! O, dan wil ik die persoon\nheel graag om hulp vragen!\n\n\x0E\x01\x09\x04\x01\x700\nVraag diegene direct om hierheen te\nkomen wanneer je hem of haar weer ziet,\noké?")
/*<120>*/ 							{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 119, 'param3': 51}
/*<119>*/ 							printf("Ik acht het 90% zeker dat dit verzoek op\neen of andere manier gerelateerd is\naan <y<dankbaarheidskristallen>>.\n\nU kunt uw zwaard zo kalibreren dat u\nde persoon waar het meisje naar op\nis, kunt <pling><r<detecteren>>.\n\nAls u echter al naar een ander object\nop zoek bent voor iemand, dan zult u\ndat object niet meer kunnen detecteren\nnadat u het zwaard opnieuw instelt.\nWeet u zeker dat u <r<iemand die het\nveld om kan spitten>>, als doelwit wilt\ninstellen?\n[1]Ja.[2-]Nog niet.")
/*<594>*/ 							switch (choice(2)) {
          							  case 0:
/*<595>*/ 								printf("\x0E\x01\x12\x04\x00\x05Begrepen, meester. Ik zal <r<iemand die\nhet veld om kan spitten>>, als doelwit\ninstellen.")
/*<565>*/ 								story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = true;
/*<566>*/ 								story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<567>*/ 								story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<568>*/ 								story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<569>*/ 								story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<570>*/ 								story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<574>*/ 								open_dowsing_wheel(15)
          								flw_572:
/*<572>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 571, 'param3': 36}
/*<571>*/ 								story_flags[470 /* us: 805A9B0E 0x04, jp: 805ACD8E 0x04 */] = true;
/*<597>*/ 								{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 573, 'param3': 16}
/*<573>*/ 								printf("\x0E\x01\x09\x04\x01\x70FKen je echt iemand die dat voor me zou\ndoen?\n\n\n\x0E\x01\x09\x04\x07\x700Ach, ik blijf in elk geval duimen dat\ner iemand langskomt die kan helpen...")
          							  case 1:
/*<596>*/ 								printf("\x0E\x01\x12\x04\x00\x05Begrepen, meester. Praat opnieuw met\ndit meisje als u de persoon in kwestie\nalsnog als doelwit in wilt stellen.")
          								goto flw_572
          							}
          						  case 1:
/*<102>*/ 							printf("\x0E\x01\x09\x04\x01\x1611Nou ja?! Je helpt toch wel een dame in\nnood? Zodat ze niet in haar eentje een\nveld om moet spitten? Wat is er nu\nridderlijker dan dat?")
          						}
          					}
          				  case 1:
          					flw_387:
/*<387>*/ 					entrypoint_117_25();
          				}
          			  case 1:
          				goto flw_387
          			}
          		  case 1:
          			goto flw_387
          		}
          	  case 1:
/*< 84>*/ 		switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
          		  case 0:
          			goto flw_34
          		  case 1:
/*<540>*/ 			switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          			  case 0:
/*< 85>*/ 				printf("\x0E\x01\x09\x04\x00\x01O! De ridder die de kroonluchter heeft\ngesloopt! Je bent het nog steeds goed\naan het maken?\n\n\x0E\x01\x09\x04\x01\x700Trouwens... <pause1E>Papa wilde je spreken.\n\n\n\n\x0E\x01\x09\x04\x07\x700Ga maar snel naar hem toe om hem te\nvragen hoe je kunt helpen.")
          			  case 1:
/*<541>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hihi. Het is de dappere ridder die de\nverschrikkelijke kroonluchter heeft\nverslagen! Nog druk bezig?\n\n\x0E\x01\x09\x04\x01\x700Het seizoen is bijna om, dus het wordt\ntijd voor de pompoenoogst...<pause1E>\n\n\n\x0E\x01\x09\x04\x07\x700Hoe ga ik al die zware pompoenen nu\nweer naar binnen krijgen...")
          			}
          		}
          	}
          }

          void entrypoint_117_19() {
/*<291>*/ 	start()
/*<175>*/ 	printf("\x0E\x01\x09\x04\x00\x0COooh, ja hoor! Daar ga ik!")
          }

          void entrypoint_117_53() {
/*<355>*/ 	start()
/*<356>*/ 	set_camera(13, 0)
/*<357>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 359, 'param3': 40}
/*<359>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 361, 'param3': 6}
/*<361>*/ 	set_camera(14, 0)
/*<360>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 358, 'param3': 40}
/*<358>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_02() {
/*<  8>*/ 	start()
/*< 32>*/ 	switch (context_related2(0)) {
          	  case 0:
/*<  9>*/ 		printf("\x0E\x01\x09\x04\x13\x809Ik wist wel dat het je zou lukken!\nJe droeg ze allemaal in één keer!\n\n\n\x0E\x01\x09\x04\x01\x700Dan ben je nu gelijk klaar met helpen!\n\n\n\n\x0E\x01\x09\x04\x19\x800Heel,<pause0F> heel<pause0F> erg<pause0F> bedankt<pause0F>!")
          	  case 1:
/*< 33>*/ 		printf("\x0E\x01\x09\x04\x01\x1611O nee! Je hebt ze laten vallen...\nJe moet echt voorzichtiger zijn.\n\n\n\x0E\x01\x09\x04\x07\x700Kom naar me toe als je het nog eens\nwilt proberen.")
          	}
          }

          void entrypoint_117_54() {
/*<362>*/ 	start()
/*<526>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 527, 'param3': 32}
/*<527>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 363, 'param3': 17}
/*<363>*/ 	set_camera(15, 0)
/*<364>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 366, 'param3': 40}
/*<366>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 368, 'param3': 6}
/*<368>*/ 	set_camera(16, 0)
/*<367>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 365, 'param3': 40}
/*<365>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_03() {
/*<  7>*/ 	start()
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x01\x1611O nee! Je hebt ze laten vallen...\nJe moet echt voorzichtiger zijn.\n\n\n\x0E\x01\x09\x04\x07\x700Kom naar me toe als je het nog eens\nwilt proberen.")
          }

          void entrypoint_117_20() {
/*< 11>*/ 	start()
/*<104>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<409>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<106>*/ 			printf("\x0E\x01\x09\x04\x10\x1604O! Doe maar niet alsof het een ongeluk\nwas. Ik heb daarboven zelfs bordjes met\nwaarschuwingen opgehangen!\n\n\x0E\x01\x09\x04\x1A\x1600Probeer maar niet om mij de schuld te\ngeven. Je zult er nog wel flink van langs\nkrijgen van papa!")
          		  case 1:
/*<537>*/ 			switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          			  case 0:
/*<410>*/ 				printf("\x0E\x01\x09\x04\x00\x01Kijk wie we daar hebben. Welkom!\n\n\n\nPapa heeft me alles verteld! Je moet\nhard werken om te betalen voor een\nnieuwe kroonluchter!\n\n\x0E\x01\x09\x04\x1A\x800Het gaat zwaar worden, maar zet hem\nop!")
          				flw_491:
/*<491>*/ 				switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          				  case 0:
          				  case 1:
/*<490>*/ 					switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          					  case 0:
/*<492>*/ 						printf("\x0E\x01\x09\x04\x1A\x1000O, nee! Er is iets met Levias gebeurd?\n\n\n\nPapa heeft Levias jarenlang ieder jaar\nzijn pompoensoep gebracht, weet je?\nJaar na jaar na jaar. Misschien kan hij\nje helpen?")
          					  case 1:
          					}
          				}
          			  case 1:
/*<538>*/ 				printf("\x0E\x01\x09\x04\x10\x1604O! Doe maar niet alsof het een ongeluk\nwas. Ik heb daarboven zelfs bordjes met\nwaarschuwingen opgehangen!\n\n\x0E\x01\x09\x04\x1A\x1600Probeer maar niet om mij de schuld te\ngeven. Je zult er nog wel flink van langs\nkrijgen van papa!")
          				goto flw_491
          			}
          		}
          	  case 1:
/*<489>*/ 		switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          		  case 0:
          			flw_105:
/*<105>*/ 			printf("\x0E\x01\x09\x04\x00\x01Wel, wel... Aan je mooie uniform te\nzien ben jij een van de ridders van\nSkyloft, of niet?\n\n\x0E\x01\x09\x04\x1A\x800Maak het jezelf gemakkelijk!\n\n\n\n\x0E\x01\x09\x04\x0D\x700Trouwens, haal je maar niks in je hoofd\nover die rupees op de kroonluchter...\n\n\n\x0E\x01\x09\x04\x10\x00Als je die naar beneden probeert te\nkrijgen, zal papa niet blij met je zijn!\n\n\nMisschien dacht je eraan ergens\ntegenaan te stoten om zo de\nkroonluchter te laten schudden...\n\n\x0E\x01\x09\x04\x1A\x1600Haal je\x0E\x01\x06\x02\xFCCD niks\x0E\x01\x06\x02Í in je hoofd! Oké?")
          		  case 1:
/*<487>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<488>*/ 				printf("\x0E\x01\x09\x04\x00\x01O, hallo!\n\n\n\nWelkom bij De Oranje Poen! Ga lekker\nergens zitten en ontspan je maar!<pause1E>\nO? Gaat het? Je bent wat pips.")
          			  case 1:
          				goto flw_105
          			}
          		}
          	}
          }

          void entrypoint_117_55() {
/*<369>*/ 	start()
/*<370>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 372, 'param3': 40}
/*<372>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 374, 'param3': 6}
/*<374>*/ 	set_camera(17, 0)
/*<373>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 371, 'param3': 40}
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_04() {
/*<163>*/ 	start()
/*<161>*/ 	printf("Ik kom de oude Mogma brengen, zzzrt!")
          }

          void entrypoint_117_21() {
/*<247>*/ 	start()
/*<248>*/ 	switch (context_related4(1)) {
          	  case 0:
/*<249>*/ 		printf("\x0E\x01\x09\x04\x17\x1411O... Ik dacht dat je met zo'n mooi\ninstrument ook wel heel mooie muziek\nzou kunnen spelen...\n\n\x0E\x01\x09\x04\x01\x1600De klanten leken ook niet tevreden...")
          		flw_252:
/*<252>*/ 		scene_flags[21 'The Sky'][21 /* 0x3 20 */] = true;
/*<384>*/ 		story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = false;
          	  case 1:
/*<599>*/ 		printf("\x0E\x01\x09\x04\x17\x1411Hm... Je speelde wel op je harp...\nDenk ik... Soort van...\n\n\n\x0E\x01\x09\x04\x01\x1600Wat moet ik zeggen... Je 'optreden'\nwas niet echt geweldig.")
          		goto flw_252
          	  case 2:
/*<250>*/ 		printf("\x0E\x01\x09\x04\x16\x1309Wauw! Je bent beter dan ik dacht!\nMisschien heb ik je onderschat.\n\x0E\x01\x09\x04\x07\x700Hopelijk kunnen we snel weer eens\neen duet opdragen voor de klanten!")
          		goto flw_252
          	  case 3:
/*<251>*/ 		printf("\x0E\x01\x09\x04\x15\xD0ADat was niet geweldig... Dat was het\nbeste dat ik ooit gehoord heb! Je speelt\nzelfs nog mooier, nog beter, dan ik kan\nzingen!\n\x0E\x01\x09\x04\x07\x800Ik ben vanaf nu je grootste fan! Ik\nhoop dat je snel weer een keertje komt\nom voor ons te spelen!")
          		goto flw_252
          	}
          }

          void entrypoint_117_56() {
/*<375>*/ 	start()
/*<528>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 529, 'param3': 32}
/*<529>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 376, 'param3': 17}
/*<376>*/ 	set_camera(18, 0)
/*<377>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 379, 'param3': 40}
/*<379>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 381, 'param3': 6}
/*<381>*/ 	set_camera(19, 0)
/*<380>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 378, 'param3': 40}
/*<378>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_05() {
/*<164>*/ 	start()
/*<162>*/ 	printf("Groeten en veel liefs aan Fi, bzzzzzzt!")
          }

          void entrypoint_117_22() {
/*<253>*/ 	start()
/*<329>*/ 	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          	  case 0:
/*<330>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<331>*/ 			printf("\x0E\x01\x09\x04\n\x90DEn wat moest dat nu weer voorstellen?!\nDoor jouw 'begeleiding' klonk zelfs Kala's\nstem slecht!\n\n\x0E\x01\x09\x04\x0D\x00Luister goed. Ik ga je niet voor dit\nsoort fratsen betalen. Begrepen?!")
          		  case 1:
/*<600>*/ 			printf("\x0E\x01\x09\x04\x00\x10Dit bedoel ik niet gemeen, maar je kunt\nbeter eerst nog wat oefenen. Ik ga mijn\nzuurverdiende rupees niet weggeven\nvoor zo'n teleurstellend optreden.")
          		  case 2:
/*<333>*/ 			printf("\x0E\x01\x09\x04\x00\x0EDat kon er mee door. Maar je zou een\nenorme lach op het gezicht van Kala\ntoveren als je nog net iets beter speelt.\n\n\x0E\x01\x09\x04\x0E\x700Voor dat optreden geef ik je <r<20 rupees>>.\nHier, pak aan.")
/*<334>*/ 			rupees += 20;
          		  case 3:
/*<332>*/ 			printf("\x0E\x01\x09\x04\x0B\x100C\x0E\x03\x01\x00Link, dat was een geweldig\noptreden! \x0E\x01\x09\x04\x0C\x700Daar geef ik je graag <r<50 rupees>>\nvoor!")
/*<335>*/ 			rupees += 50;
          		}
          	  case 1:
/*<255>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<254>*/ 			printf("\x0E\x01\x09\x04\x0F\xA0DWat in de naam van de witte wolken\nwas dat?! Noem je DAT muziek?\n\n\n\x0E\x01\x09\x04\n\x900Wat?! Denk maar niet dat we nu quitte\nstaan! Ben je helemaal gek?! Daar ga\nik niet voor betalen! Hmpf, probeer\nhet later maar opnieuw.")
          		  case 1:
/*<601>*/ 			printf("\x0E\x01\x09\x04\x00\x10Het was niet echt bijzonder, maar voor\neen eerste keer was het best oké!")
          			flw_258:
/*<258>*/ 			printf("\x0E\x01\x09\x04\x0B\x700Goed dan, na die klus staan we quitte!\nJe hoeft niet meer voor me te werken.\nGoed gedaan!\n\n\x0E\x01\x09\x04\x0E\x1100Hm. Het wordt tijd dat ik een nieuwe\nkroonluchter koop om die oude te\nvervangen! Dan ziet het er hier gelijk\neen stuk chiquer uit.\n\x0E\x01\x09\x04\x0D\x700En voor al het werk dat je hier voor\nons gedaan hebt, wil ik je nog een\nkleine beloning geven. Pak aan!")
/*<534>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 305, 'param3': 42}
/*<305>*/ 			give_item(94 0x5E);
/*<304>*/ 			printf("\x0E\x01\x09\x04\x01\x700Kom snel weer eens langs. En ja, als\nklant dit keer.")
/*<259>*/ 			story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */] = true;
          		  case 2:
/*<256>*/ 			printf("\x0E\x01\x09\x04\x00\x0ENiet slecht, hoor! Het is je gelukt.")
          			goto flw_258
          		  case 3:
/*<257>*/ 			printf("\x0E\x01\x09\x04\x0B\x100CWauw... Ik kreeg zelfs heel even een\nstofje in mijn oog tijdens je optreden!\nZulk talent had ik niet verwacht.")
          			goto flw_258
          		}
          	}
          }

          void entrypoint_117_57() {
/*<443>*/ 	start()
/*<465>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<466>*/ 		printf("\x0E\x01\x09\x04\x03\x80CO jee... Je hebt je dit keer echt in de\nnesten gewerkt, hè?\n\n\n\x0E\x01\x09\x04\x00\x100Bereid je maar voor om er flink van\nlangs te krijgen!")
          	  case 1:
/*<579>*/ 		switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          		  case 0:
/*<584>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hé, Link. Heb je al een heel\nzootje insecten gevangen? Als je niet\nweet wat je ermee moet, dan neem ik ze\ngraag van je over, hoor.\n\x0E\x01\x09\x04\x12\x00Maar niet hier. Zoek me op in m'n kamer\nop de academie...")
          		  case 1:
/*<578>*/ 			switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          			  case 0:
/*<581>*/ 				switch (zone_temp_flags[5 /* 0x1 20 */]) {
          				  case 0:
/*<583>*/ 					printf("\x0E\x01\x09\x04\x12\x01Je vliegt veel, echt VEEL sneller als je\ndoor die gaten vliegt. Maar het is iets\nvoor zeer ervaren vliegers.\n\n\x0E\x01\x09\x04\x03\x104Je knalt namelijk veel sneller tegen\neen rots. En dan vlieg je opeens niet\nmeer... Hehehe...")
          				  case 1:
/*<580>*/ 					printf("\x0E\x01\x09\x04\x00\x01Hé, Link. Dit wil je vast\nwel weten!\n\n\nZie je weleens die<r< grote rotsen met\ngaten >>wanneer je door de lucht vliegt?\n\n\nIn die gaten schuilt een mysterieuze\nkracht, als van een wervelwind, of zo.\nWanneer je er doorheen vliegt, ga je\n<r<tijdelijk >>veel harder.\n\x0E\x01\x09\x04\x12\x00Ervaren Loftwings en hun partners\nleggen zo veel sneller lange afstanden\naf.")
/*<582>*/ 					zone_temp_flags[5 /* 0x1 20 */] = true;
          				}
          			  case 1:
/*<444>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hé, Link!\n\n\n\n\x0E\x01\x09\x04\x12\x00Ik had niet gedacht jou hier tegen het\nlijf te lopen. Je vraagt je zeker af wat\nik hier doe?\n[1]Ja.[2]Niet echt.")
/*<445>*/ 				switch (choice(2)) {
          				  case 0:
/*<446>*/ 					printf("\x0E\x01\x09\x04\x03\x104Ik heb het je volgens mij al eens eerder\nverteld, maar ik hou dus echt heel erg van\ninsecten.\n\nDus ik zoek insecten op, overal waar ze\nte vinden zijn.\n\n\n\x0E\x01\x09\x04\x04\x100Je zou het ook moeten proberen. Met\neen net kun je ze dan vangen. Als je nog\ngeen insectennet hebt, kun je er bij Beedle\neen kopen.\n\x0E\x01\x09\x04\x12\x100Die zweterige zwendelaar vliegt nu\nvast ergens boven Skyloft rond...")
          				  case 1:
/*<447>*/ 					printf("\x0E\x01\x09\x04\x04\x805Niet echt?\n\n\n\n\x0E\x01\x09\x04\x04\x100Ik wist wel dat je geen echte liefhebber\nzoals ik was...")
          				}
          			}
          		}
          	}
          }

