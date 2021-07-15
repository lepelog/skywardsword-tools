          void entrypoint_304_14() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (scene_flags[107 /* 0xC 08 */]) {
          	  case 0:
/*< 63>*/ 		printf("\x0E\x01\x09\x04\x0C\xE09Hier komt de legende dan nog één keer:\n\n\n\n\"Zoek je de koning zijn schat?\nDan vind je vast wel wat\nals je heel ijverig speurt naar\n<r<twee beelden tegenover elkaar>>.\nEen van die beelden staat te pitten.\n<r<Ga snel in zijn open muil zitten>>,\nwant daarbinnen vind je het pad\ndat leidt naar de koning zijn schat.\"\n\x0E\x01\x09\x04\x09\x908Misschien zijn het maar wat verzinsels voor\nbaby-Mogma's, maar we zullen altijd\nblijven zoeken. Vandaag is daar geen\nuitzondering op.")
          	  case 1:
/*< 98>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 99, 'param3': 49}
/*< 99>*/ 		printf("\x0E\x01\x0B\x04\x00\x3F4\x0E\x01\x09\x04ÿ\xFF02Ghahaha... Ja! Eindelijk buiten!")
/*<100>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 17}
/*< 59>*/ 		printf("\x0E\x01\x08\x02\x2CD\x0E\x01\x09\x04\n\x5304Wat in tunnelsnaam...\n\n\n\n\x0E\x01\x08\x02Í\x0E\x01\x09\x04\x09\x9FFLaat me niet zo schrikken, zeg! Ik dacht\ndat je zo'n griezel was!\n\n\n\x0E\x01\x09\x04\x0B\xC07Maar, hé, wat is dit nu?\n\n\n\nDat is een heel fraai paar <y<graafhand-\nschoenen >>dat je daar hebt...\n\n\n\x0E\x01\x09\x04ÿ\xFF0AMaar wie ben je eigenlijk? En wat doe je\nhier?\n[1]Ik ben op zoek![2]Nou...")
/*< 60>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_62:
/*< 62>*/ 			printf("\x0E\x01\x09\x04\x0C\xD05Hm... Ik snap het wel, hoor.\n\n\n\n\x0E\x01\x09\x04\x0C\xD07Wat? En ik?\n\n\n\n\x0E\x01\x09\x04\x09\x90AO, ja, ik heet <b<Gaud>>. Ik ben de grote baas\nvan de Mogma's.\n\n\nDe graafhandschoenen die je daar hebt...\nDie heb ik uitgevonden!\n\n\n\x0E\x01\x09\x04\x09\x90BHahaha!")
/*< 61>*/ 			printf("\x0E\x01\x09\x04\x0C\x409Nou, neem me niet kwalijk, maat, maar je\nziet er niet uit als het soort schatzoeker dat\nik hierheen zou sturen...\n\n\x0E\x01\x09\x04\x09\xE08Maar goed, misschien verras je me wel. We\nzullen het zien.\n\n\nWant weet je wat ze zeggen over deze\ntunnels? Er zou hier ergens een verborgen\nruïne zijn, vol met schatten.\n\nMaar niemand die de ruïne heeft\ngevonden, heeft het kunnen navertellen.\n\n\nTalloze schatzoekers zijn hier verdwenen!\nPOEF! En weg waren ze.\n\n\n\x0E\x01\x09\x04\x0C\x409Dus geloof deze ouwe schatgraver maar.\nJe kunt beter teruggaan naar waar je\nvandaan komt en de rest van je leven veilig\ngravend doorbrengen...\n\x0E\x01\x09\x04ÿ\xFF08Hm. Het maakt niet uit wat ik zeg, of wel?\nJe bent niet van plan om op te geven.\n[1]Klopt aardig.[2]...")
/*< 80>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_76:
/*< 76>*/ 				printf("\x0E\x01\x09\x04\x09\x905Goed dan... Ik zal je een oude schatzoekers-\nlegende vertellen die al generaties lang\nvan Mogma op Mogma wordt\ndoorgegeven.\n\x0E\x01\x09\x04ÿ\xFF0BElke zichzelf respecterende Mogma kent\n'm...\n\n\n\x0E\x01\x09\x04\x0C\xD0AHet gaat zo...\n\n\n\n\"Zoek je de koning zijn schat?\nDan vind je vast wel wat\nals je heel ijverig speurt naar\n<r<twee beelden tegenover elkaar>>.\nEen van die beelden staat te pitten.\n<r<Ga snel in zijn open muil zitten>>,\nwant daarbinnen vind je het pad\ndat leidt naar de koning zijn schat.\"\n\x0E\x01\x09\x04ÿ\x509Knoop dat goed in je oren, dan kom je\ner wel.\n[1]Dank je wel.[2]Nog één keer!")
          				flw_78:
/*< 78>*/ 				switch (choice(2)) {
          				  case 0:
/*< 79>*/ 					printf("\x0E\x01\x09\x04\x09\x905Een paar van mijn beste Mogma's zijn hier\nin de omgeving op zoek naar de schat.\n\n\nAls je verdwaald bent, kun je ze om de\nweg vragen.")
/*< 64>*/ 					scene_flags[15 'Eldin: Fire Sanctuary'][107 /* 0xC 08 */] = true;
          				  case 1:
/*< 77>*/ 					printf("\x0E\x01\x09\x04ÿ\x07Hahaha. Je bent wel vastberaden, zeg!\n\n\n\nGoed. Nog een keer...\n\n\n\n\x0E\x01\x09\x04\x0C\xD0A\"Zoek je de koning zijn schat?\nDan vind je vast wel wat\nals je heel ijverig speurt naar\n<r<twee beelden tegenover elkaar>>.\nEen van die beelden staat te pitten.\n<r<Ga snel in zijn open muil zitten>>,\nwant daarbinnen vind je het pad\ndat leidt naar de koning zijn schat.\"\n\x0E\x01\x09\x04\x09\x109Heb je het onthouden?\n[1]Ja.[2]Nog één keer.")
          					goto flw_78
          				}
          			  case 1:
          				goto flw_76
          			}
          		  case 1:
          			goto flw_62
          		}
          	}
          }

          void entrypoint_304_15() {
/*< 65>*/ 	start()
/*< 66>*/ 	printf("Draag het licht naar alle beelden.\nHet aantal vleugels dat ze bezitten,\nbepaalt de volgorde die je moet\nnemen. Ga van laag naar hoog.\nAls alle beelden zijn verlicht, zal de\nkoningsschat van jou zijn.")
          }

          void entrypoint_304_16() {
/*< 67>*/ 	start()
/*< 82>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 85>*/ 		printf("\x0E\x01\x09\x04\x1B\xA02Die handschoenen waren misschien wel de\nbeste uit mijn hele verzameling.")
          	  case 1:
/*< 83>*/ 		printf("\x0E\x01\x09\x04\x1B\xA01Hé daar, maat! Hoe bevallen die hand-\nschoenen?\n\n\nDruk op (Z) wanneer je onder de grond\ndruk aan het graven bent om te zien wat\ner boven de grond gebeurt.\x0E\x01\x11\x02\x7CD\n\nIk let op mezelf, ook als ik delf! Zo word je\nniet onaangenaam verrast.")
/*< 84>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_304_17() {
/*< 68>*/ 	start()
/*<170>*/ 	switch (story_flags[84 /* us: 805A9AE8 0x01, jp: 805ACD68 0x01 */]) {
          	  case 0:
/*<171>*/ 		printf("\x0E\x01\x09\x04\x1B\xA0DNeeeee... Waarom kan er niet gewoon één\nding goed gaan?! Dit moet mij weer\noverkomen!")
          	  case 1:
/*< 87>*/ 		switch (zone_temp_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x1B\xA0EHeb je al ontdekt waar de schat van die\nkaart te vinden is?")
          		  case 1:
/*< 88>*/ 			printf("\x0E\x01\x09\x04\x1B\xB12Serieus? Waar heb je die kaart dan voor\nnodig? En dat noemt zichzelf een\navonturier... Ha!\n\n\x0E\x01\x09\x04\x1B\xA0DBah... Ik lijk nu vast dommer dan het\nachtereind van een Moblin...")
/*< 89>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	}
          }

          void entrypoint_304_18() {
/*< 69>*/ 	start()
/*< 92>*/ 	switch (zone_temp_flags[2 /* 0x1 04 */]) {
          	  case 0:
/*< 90>*/ 		printf("\x0E\x01\x09\x04\x0F\xF09Zolang die monsters daar nog rondlopen,\nmoeten we allebei goed oppassen!")
          	  case 1:
/*< 91>*/ 		printf("\x0E\x01\x09\x04\x0F\xF0BHé daar! Hoe gaat het?\n\n\n\nHeb je de monsters gezien op die plek waar\nik het over had?\n\n\n\x0E\x01\x09\x04\x0E\xE0AAlle tunnels nog aan toe, ik vraag me af\nwaar die types naar op zoek zijn...")
/*< 93>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          	}
          }

          void entrypoint_304_01() {
/*< 14>*/ 	start()
/*< 10>*/ 	switch (scene_flags[100 /* 0xD 10 */]) {
          	  case 0:
/*<101>*/ 		switch (scene_flags[50 /* 0x7 04 */]) {
          		  case 0:
/*<105>*/ 			switch (scene_flags[108 /* 0xC 10 */]) {
          			  case 0:
/*<103>*/ 				printf("\x0E\x01\x09\x04\x3311\x120FHé, maat!\n\n\n\nJij hebt ervoor gezorgd dat de lava\nis gezakt, of niet?\n\n\n\x0E\x01\x09\x04\x3311\x1213Kun je, als je toch bezig bent, ook iets aan\ndeze ketting doen voor me?")
          			  case 1:
/*<138>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 139, 'param3': 32}
/*<139>*/ 				{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 137, 'param3': 16}
/*<137>*/ 				set_camera(6, 0)
/*<102>*/ 				printf("\x0E\x01\x09\x04\x3311\x1208Hé!\n\n\n\nDat zag ik wel, hoor! Hoe je die lava-\nmonsters er van langs gaf! Briljant!\n\n\n\x0E\x01\x09\x04\x3311\x1213Trouwens, je kunt nog een ding voor me\ndoen, nu je toch bezig ben. Help me even\nnaar beneden, oké?")
/*<104>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][108 /* 0xC 10 */] = true;
/*<176>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		  case 1:
/*<114>*/ 			{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 1536, 'next': 12, 'param3': 13}
/*< 12>*/ 			printf("\x0E\x01\x09\x04\x13\x1317Ai! Heet!\n\n\n\nHé, jij! Sta niet zo te staren! Scheer je\nweg, kssst!")
          		}
          	  case 1:
/*<115>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 113, 'param3': 32}
/*<113>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13311, 'param2': 1536, 'next': 111, 'param3': 13}
/*<111>*/ 		set_camera(3, 0)
/*< 11>*/ 		printf("\x0E\x01\x09\x04\x3313\x1917Oe, dat ziet er HEET uit! Een warm bad is\nfijn voor mijn arme schouders, maar dit is\nwat veel van het goeie!")
/*<112>*/ 		set_camera(4, 0)
/*<117>*/ 		{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 116, 'param3': 16}
/*<116>*/ 		printf("\x0E\x01\x09\x04\x3316\x1614Wat hebben we hier? Weer een nieuwe\nbewaker?\n\n\nHa!\n\n\n\nOndervraag me zo lang als je wilt, ik\nvertel je niks!\n\n\n\x0E\x01\x09\x04\x3313\x1913Hé, dit is geen gratis voorstelling of zo!\nScheer je weg! Kssst!")
/*<118>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 13, 'param3': 42}
/*< 13>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][100 /* 0xD 10 */] = true;
          	}
          }

          void entrypoint_304_19() {
/*< 70>*/ 	start()
/*< 71>*/ 	printf("\x0E\x01\x06\x02\xFDCDGenoeg! Ik ben Ghirahim, de\ndemonenvorst!")
          }

          void entrypoint_304_02() {
/*< 30>*/ 	start()
/*< 31>*/ 	switch (scene_flags[101 /* 0xD 20 */]) {
          	  case 0:
/*< 32>*/ 		printf("\x0E\x01\x09\x04\x331B\xA05Zo, die zijn voor jou!\n\n\n\nZe hebben al die tijd begraven gelegen in\neen kist, dus ze moeten schoon zijn.\n\n\nMaar wees er zuinig op, hoor. Hand-\nschoenen zoals deze kom je maar zelden\ntegen!")
/*< 81>*/ 		printf("\x0E\x01\x09\x04\x331B\x502Oké dan! Ik hou het voor gezien! Tot\nlater!")
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x330B\x208Helemaal mooi! Je hebt me gered!\n\n\n\n\x0E\x01\x09\x04\x08\xAFFIk weet niet wie je bent of waar je vandaan\nkwam, maar ik sta bij je in het krijt, maat!\n\n\nBen jij hier ook naar schatten op zoek?\n[1]Ja![2]Schatten?")
/*< 16>*/ 		switch (choice(2)) {
          		  case 0:
/*<119>*/ 			printf("\x0E\x01\x09\x04\x08\x509Hahaha! Weet ik toch, maat! Wat heb je\nhier anders te zoeken?")
          			flw_17:
/*< 17>*/ 			printf("Je gezicht spreekt boekdelen! Je bent hier\nvanwege de \"legende van het <r<dromende\nstandbeeld>>\", of niet soms?\n\nMaar je kunt toch niet gaan schatgraven\nmet die versleten oude graafhandschoenen?\n\n\n\x0E\x01\x09\x04\x3308\x90BWeet je wat? Als dank voor je hulp geef ik\nje een paar handschoenen uit mijn geheime\nvoorraad! Wacht hier!")
/*< 29>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][101 /* 0xD 20 */] = true;
          		  case 1:
/*<120>*/ 			printf("\x0E\x01\x09\x04\x08\x509Krijg nou klauwen! Het heeft geen zin om\nte doen alsof. Waarom zou je hier anders\nnaartoe komen?")
          			goto flw_17
          		}
          	}
          }

          void entrypoint_304_20() {
/*< 72>*/ 	start()
/*< 73>*/ 	printf("Hoe sterk je zwaard is, doet er niet toe!\nJe bent niets; je bent niemand! Kleiner dan\neen mens... Een mensenkind!<pause14> En toch neem\nje het tegen mij op!")
          }

          void entrypoint_304_03() {
/*<153>*/ 	start()
/*<157>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 158, 'param3': 32}
/*<158>*/ 	{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 156, 'param3': 16}
/*<156>*/ 	set_camera(4, 0)
/*<154>*/ 	printf("\x0E\x01\x09\x04\x3311\x1208Hé!\n\n\n\nDat zag ik wel, hoor! Hoe je die lava-\nmonsters er van langs gaf! Briljant!\n\n\n\x0E\x01\x09\x04\x3311\x1213Trouwens, je kunt nog een ding voor me\ndoen, nu je toch bezig ben. Help me even\nnaar beneden, oké?")
/*<155>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][108 /* 0xC 10 */] = true;
/*<175>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_304_21() {
/*< 74>*/ 	start()
/*< 75>*/ 	printf("Jij kleine garnaal! Mijn woede zal je\nverpletteren en nog duizenden jaren\nvoelbaar zijn. Ik zal je tot in de\neeuwigheid folteren!")
/*< 97>*/ 	story_flags[84 /* us: 805A9AE8 0x01, jp: 805ACD68 0x01 */] = true;
/*<166>*/ 	story_flags[172 /* us: 805A9AE2 0x08, jp: 805ACD62 0x08 */] = false;
/*<169>*/ 	story_flags[820 /* us: 805A9B30 0x10, jp: 805ACDB0 0x10 */] = true;
/*<167>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][22 /* 0x3 40 */] = true;
/*<168>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][20 /* 0x3 10 */] = true;
          }

          void entrypoint_304_05() {
/*<  2>*/ 	start()
/*<  8>*/ 	printf("")
          }

          void entrypoint_304_22() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf("Hé daar, maat!\n\n\n\nHoe bevallen die handschoenen?\n\n\n<r<\n>>Als je eens goed <r<boven de grond>> rond wilt\nkijken, druk dan op (Z)!\x0E\x01\x11\x02\x7CD\n\n\nHelder? Druk op (Z) om <r<boven de grond\n>>rond te kijken. Niet vergeten, hoor!\x0E\x01\x11\x02\x7CD")
/*<124>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_304_06() {
/*<  7>*/ 	start()
/*<  3>*/ 	printf("")
          }

          void entrypoint_304_23() {
/*<127>*/ 	start()
/*<141>*/ 	switch (scene_flags[97 /* 0xD 02 */]) {
          	  case 0:
/*<140>*/ 		printf("\x0E\x01\x09\x04\x1B\xA01En ik? Eh, ik kijk hier nog even wat\nrond.\n\n\nEn voor ik het vergeet, ik moet de baas ook\nnog vertellen wat er gebeurd is.")
          	  case 1:
/*<132>*/ 		switch (scene_flags[119 /* 0xF 80 */]) {
          		  case 0:
/*<133>*/ 			printf("\x0E\x01\x09\x04\x1B\x1A15Wauw, je bracht zo die muur naar\nbeneden! Ik had niet gedacht dat je dat in\nje had, maat!")
          		  case 1:
/*<128>*/ 			switch (scene_flags[77 /* 0x8 20 */]) {
          			  case 0:
/*<130>*/ 				printf("\x0E\x01\x09\x04\x1B\xA02Er moet hier ergens een <r<nepmuur>> zijn of\nzoiets.\n\n\nEn aan de andere kant van die muur zit\nnog een ruimte, denk ik...\n\n\n\x0E\x01\x09\x04\x1B\x1E0ADe grond onder ons zit vol monsters, dus\nwe graven daar niet veel...\n\n\n<pling>Maar voor iemand die van avontuur houdt,\nis er misschien wel een <r<verborgen pad >>te\nvinden...")
          			  case 1:
/*<134>*/ 				switch (scene_flags[78 /* 0x8 40 */]) {
          				  case 0:
/*<136>*/ 					printf("\x0E\x01\x09\x04\x1B\xA09Heb je die van een van ons gekregen?\nGeen zorgen, maat. Ik zal 'm niet van je\nafpakken.\n\n\x0E\x01\x09\x04\x1B\xA02Echt waar, ik vermoed dat de informatie\nuit die kist jou heel goed van pas zal\nkomen.")
          				  case 1:
/*<126>*/ 					printf("...")
/*<129>*/ 					printf("\x0E\x01\x09\x04\x1B\xA09Hé! Daar ben je weer!\n\n\n\nHehehe... Ik hoorde toevallig waar jullie\nhet over hadden; ik kon het niet helpen.\n\n\nZo te horen ging een van m'n maten flink\nte keer. Sorry daarvoor.\n\n\n\x0E\x01\x09\x04\x1B\xC02Maar wat hij zei is wel echt waar, hoor!\n\n\n\nEr komt hier ergens een vreemde lucht-\nstroom deze ruimte binnen.\n\n\n\x0E\x01\x09\x04\x331B\xA0BIk weet zeker dat je iets zult hebben aan de\ninformatie in die kist.")
/*<135>*/ 					scene_flags[15 'Eldin: Fire Sanctuary'][78 /* 0x8 40 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_304_07() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("")
/*< 94>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][121 /* 0xE 02 */] = true;
/*<  6>*/ 	changeScene(1, 0) // 
          }

          void entrypoint_304_24() {
/*<106>*/ 	start()
/*<107>*/ 	printf("De brug der besluitvaardigheid.\nKies het pad waarin jij gelooft.\nBlijf voortgaan en kijk niet om.")
          }

          void entrypoint_304_08() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("Vuurheiligdom")
          }

          void entrypoint_304_25() {
/*<160>*/ 	start()
/*<159>*/ 	printf("Ik acht het 80% zeker dat de informatie\nwaarover deze persoon beschikt, nuttig voor u is.\n\n\nIk adviseer u dan ook om hem te redden en\nde informatie te verkrijgen.")
/*<164>*/ 	set_camera(7, 0)
/*<163>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 161, 'param3': 42}
/*<161>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][98 /* 0xD 04 */] = false;
          }

          void entrypoint_304_09() {
/*< 37>*/ 	start()
/*< 39>*/ 	switch (scene_flags[105 /* 0xC 02 */]) {
          	  case 0:
/*<151>*/ 		set_camera(2, 0)
/*<149>*/ 		printf("\x0E\x01\x09\x04\x11\x1213Hé! Hé! Kom op, maat! Toe nou, help me!\nBevrijd me van die ketting!\n\n\n\x0E\x01\x09\x04\x16\x1614Ik heb de gouden tip voor je als je me\nhelpt!")
/*<152>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*<110>*/ 		{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 1536, 'next': 108, 'param3': 13}
/*<108>*/ 		set_camera(1, 0)
/*<109>*/ 		set_camera(2, 0)
/*< 41>*/ 		printf("\x0E\x01\x09\x04\x11\x1213O, yeah! Je komt precies op het juiste\nmoment, maat!\n\n\n\x0E\x01\x09\x04\x16\x1614Het maakt me niet uit wie je bent of waar\nje vandaan komt, bevrijd me gewoon van\ndeze ketens!\n[1]Ik heb haast.[2]...")
/*< 42>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_43:
/*< 43>*/ 			printf("\x0E\x01\x09\x04\x11\x130FHé, ik geef je er wat voor terug, maat!\nAls je me bevrijdt, vertel ik je het <r<enorm\ngrote geheim >>van deze ruimte!\n\nHet is een geheim dat met schatten te\nmaken heeft! Oké?")
/*< 38>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][105 /* 0xC 02 */] = true;
          		  case 1:
          			goto flw_43
          		}
          	}
          }

          void entrypoint_304_10() {
/*< 50>*/ 	start()
/*< 49>*/ 	switch (scene_flags[106 /* 0xC 04 */]) {
          	  case 0:
/*< 53>*/ 		printf("\x0E\x01\x09\x04\x331B\x2203Hier! Pak aan!\n\n\n\nHier is wat supergeheime info die ik\nverzameld heb. Ik heb er heel hard voor\nmoeten zweten... en werken.\n\nIk heb deze plek wel bijna honderd keer\nverkend voordat ik erachter kwam.\n\n\nBen je er klaar voor? Hou je vast, hier\nkomt het: precies daar ergens, daarzo\nongeveer, zit een...\n\n\x0E\x01\x09\x04\x331A\x2008\x0E\x01\x08\x02\x2CD...<r<verborgen ruimte>>!\n\n\n\n...\n\n\n\n\x0E\x01\x09\x04\x331B\x50AMaar goed, in ruil voor dat geheim\nverwacht ik dat je niemand vertelt hoe je\nmij hebt aangetroffen, oké?\n[1]Afgesproken![2]...")
/*<142>*/ 		switch (scene_flags[119 /* 0xF 80 */]) {
          		  case 0:
/*<144>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][37 /* 0x5 20 */] = true;
/*<145>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][79 /* 0x8 80 */] = true;
/*<174>*/ 			story_flags[822 /* us: 805A9B30 0x40, jp: 805ACDB0 0x40 */] = true;
/*<143>*/ 			switch (choice(2)) {
          			  case 0:
/*<147>*/ 				printf("\x0E\x01\x09\x04\x331B\x2200Uitstekend! Ga maar vast en open die\nschat! En vergeet onze afspraak niet!")
          				flw_123:
/*<123>*/ 				story_flags[820 /* us: 805A9B30 0x10, jp: 805ACDB0 0x10 */] = true;
/*<165>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][98 /* 0xD 04 */] = true;
/*<173>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][99 /* 0xD 08 */] = true;
          			  case 1:
/*<148>*/ 				printf("\x0E\x01\x09\x04\x3300\x100DJij akelige schurk!")
          				goto flw_123
          			}
          		  case 1:
/*<146>*/ 			story_flags[819 /* us: 805A9B30 0x08, jp: 805ACDB0 0x08 */] = true;
/*< 54>*/ 			switch (choice(2)) {
          			  case 0:
/*< 55>*/ 				printf("\x0E\x01\x09\x04\x331B\x2200Mooi zo! Ga maar vast en maak die schat\nopen. Maar vergeet onze afspraak niet!\n\n\nTot ziens... Daaag.")
          				flw_131:
/*<131>*/ 				printf("\x0E\x01\x08\x02\x2CDO...")
          				goto flw_123
          			  case 1:
/*< 56>*/ 				printf("\x0E\x01\x09\x04\x3300\x100DWat is dit nu voor akelig gedrag? En ik\ndeed zo m'n best beleefd te blijven...")
          				goto flw_131
          			}
          		}
          	  case 1:
/*< 47>*/ 		printf("\x0E\x01\x09\x04\x330B\xA08Joehoe! Ik ben eindelijk vrij om te gaan en\nte graven waar ik wil!\n\n\n\x0E\x01\x09\x04\x3308\xA09En, ehhh... Hehe... Bedankt voor je hulp...\nSufferd!\n\n\nJe dacht toch niet echt dat ik je super-\ngeheime info over schatten ging geven?\nGeen kans, maat! Die informatie is veel te\nkostbaar!\n\x0E\x01\x09\x04\x3325\x1A06\x0E\x01\x08\x02\x2CDHuh?!\n\n\n\n\x0E\x01\x09\x04\x08\xA00Dat zijn handschoenen uit de geheime\nverzameling van mijn broer! Ken jij mijn\nbroer of zo?\n\n[1]Jazeker.[2]Ik heb 'm gered!")
/*< 48>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_51:
/*< 51>*/ 			printf("\x0E\x01\x09\x04\x3325\x1A00Wacht, wacht, wacht! Er is iets dat ik je\nnog wil geven!\n\n\n\x0E\x01\x09\x04\x00\x500Ik haal het voor je. Wacht hier!")
/*< 52>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][106 /* 0xC 04 */] = true;
          		  case 1:
          			goto flw_51
          		}
          	}
          }

          void entrypoint_304_11() {
/*<150>*/ 	start()
/*< 45>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 46>*/ 		printf("\x0E\x01\x09\x04\x11\x1312Hé! Waar denk jij zo één-twee-drie naartoe\nte gaan?\n\n\nIk heb hier een gouden tip voor je, vers van\nde pers. Je hoeft me alleen te bevrijden van\ndeze ketting!")
          		flw_44:
/*< 44>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
/*<162>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 40>*/ 		printf("\x0E\x01\x09\x04\x11\x1312Hé! Jij daar, wacht!\n\n\n\nWie doet zoiets met z'n volle verstand?\nGewoon een persoon in nood negeren?\nVerschrikkelijk. Afschuwelijk. Of niet\nsoms? Hm?\nIk heb een gouden tip voor je en je hoeft\nme alleen maar van deze ketting te\nbevrijden!")
          		goto flw_44
          	}
          }

          void entrypoint_304_12() {
/*<  9>*/ 	start()
/*< 18>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 	switch (scene_flags[103 /* 0xD 80 */]) {
          	  case 0:
/*< 23>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 21>*/ 			printf("\x0E\x01\x09\x04\x3308\x802WAAH! Jij weer?!\n\n\n\n\x0E\x01\x09\x04\x330B\x901Hehe! Blijf het vooral proberen; je krijgt\nme toch nooit te pakken!")
          		  case 1:
/*< 20>*/ 			printf("Waaaah! Een groen monster!\n\n\n\n\x0E\x01\x09\x04\x332A\x9FFO nee... Volgen ze ons nu zelfs al tot hier?\n\n\n\nMaar ik kan me nog wel eventjes amuseren\nmet deze griezel...\n\n\n\x0E\x01\x09\x04\x330B\x901Hehehe! Je staat nu op Mogma-grond,\nschurk! <r<Zolang de weg voor me niet\ngeblokkeerd wordt>>, zul je me nooit te\npakken krijgen, engerd!")
/*< 24>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		printf("\x0E\x01\x09\x04\x331A\x1A0BOef, wat is het druk! Druk, druk, druk.\nHet wordt laat vanavond, want ik heb nog\nlang niet genoeg schatten gevonden!")
          		scene_flags[15 'Eldin: Fire Sanctuary'][103 /* 0xD 80 */] = true;
          	}
          }

          void entrypoint_304_13() {
/*< 33>*/ 	start()
/*< 26>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 36>*/ 		printf("Alsjeblieft!\n\n\n\n\x0E\x01\x09\x04\x330E\xEFFTrouwens, zag jij ook die monsters die\nergens naar op zoek leken te zijn, op die\nklif daar verderop...\n\nO, dat is waar je heen gaat? Nou, pas goed\nop, hoor. Ik wil niet dat je iets akeligs\noverkomt.\n\n\x0E\x01\x09\x04\x330F\xF0BEn ik? Nou, ik ga naar de ouwe baas. Ik\nzal gelijk de deur voor je opendoen als ik\ndaar ben. Tot ziens!")
/*<121>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][33 /* 0x5 02 */] = true;
/*<122>*/ 		story_flags[821 /* us: 805A9B30 0x20, jp: 805ACDB0 0x20 */] = true;
/*<172>*/ 		story_flags[822 /* us: 805A9B30 0x40, jp: 805ACDB0 0x40 */] = true;
/*<125>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][82 /* 0xB 04 */] = true;
          	  case 1:
/*< 22>*/ 		printf("\x0E\x01\x09\x04\x3321\x1601O neeee... Je hebt me! Vooruit dan, jij\nmonster! Kook me, bak me... Ik geef me\ngewonnen!\n\n...\n\n\n\n\x0E\x01\x09\x04\x331C\x1D05Wacht? Die handschoenen...\n\n\n\nDie komen uit de geheime verzameling van\nmijn broer!\n[1]Hij gaf ze aan me.[2]Dat klopt.")
/*< 25>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_34:
/*< 34>*/ 			printf("\x0E\x01\x09\x04\x331D\x0BWAT? Jij kent mijn broer?\n\n\n\nO, jeetje. Ik dacht dat je een monster was,\nwant je bent zo groen!\n\n\n\x0E\x01\x09\x04\x3324\x2109Hé, begrijp me niet verkeerd! Ik dacht dat\nje een van die griezels was. Sorry!\n\n\nWacht, hier heb je iets om het goed te\nmaken. Eén momentje.")
/*< 35>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][104 /* 0xC 01 */] = true;
          		  case 1:
          			goto flw_34
          		}
          	}
          }

