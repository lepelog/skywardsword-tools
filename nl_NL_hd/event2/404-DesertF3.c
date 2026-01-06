          void entrypoint_404_03() {
/*<  3>*/ 	start()
/*< 43>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*< 44>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "Ik ben dol op het uitzicht hier.")
          	  case 1:
/*< 50>*/ 		check_item_flag(198, 1)
/*< 51>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          		  case 0:
/*< 52>*/ 			printf(/* textboxtype: 0, unk: 1, line: 19 */ "Brrroem! Is dat wat ik denk dat het is?!<pause 30>\nGa er snel mee naar <color blue<meester Donderdraak>coloroff>,\nvwwiep-vwwiep!")
          		  case 1:
/*< 30>*/ 			check_item_flag(497, 1)
/*< 31>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          			  case 0:
/*<111>*/ 				switch (scene_flags[23 /* 0x3 80 */]) {
          				  case 0:
/*<113>*/ 					printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00030c00>Ik denk niet dat de zaailing in <color blue<Lanayru\n>coloroff>ooit uit zal groeien tot een boom die\nvruchten draagt, vrrm...\n\n<0x10009:0x00000900>We hebben je hulp nodig, brrzrrt! <0x10009:0x00030900>Meester\nDonderdraak heeft een <color red<levensboomvrucht>coloroff>\nnodig om te kunnen genezen!")
          				  case 1:
/*< 70>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 31}
/*< 32>*/ 					printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00030900>Wat doe je met de levensboomzaailing,\nvrrm?!<pause 30> <color blue<Meester Donderdraak>coloroff> heeft voor\nzijn genezing een <color red<levensboomvrucht >coloroff>nodig!\n\n<0x10009:0x00030900>Tenzij... Probeer je mijn meester soms te\nhelpen, bzzzzt?\n[1-]Ja![2-]Nee, niet echt...")
/*<131>*/ 					switch (choice(2)) {
          					  case 0:
/*<132>*/ 						printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00030900>Echt waar, vrrm?! Dank je wel, zrrt! Zorg\ndat je de zaailing plant op een plek waar\nhij goed kan groeien, vwwoep.\n\n<0x10009:0x00030900>Ik vrees dat dat in <color red<Lanayru onmogelijk\nzal zijn>coloroff>,<sound 4> brrzrrt. We rekenen op je, vwwiep!")
          						flw_72:
/*< 72>*/ 						scene_flags[9 'Lanayru Gorge'][11 /* 0x0 08 */] = true;
/*<112>*/ 						scene_flags[9 'Lanayru Gorge'][23 /* 0x3 80 */] = true;
          					  case 1:
/*<133>*/ 						printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00030900>Nou, nu jij hem ontworteld hebt, moet je er\nook zelf voor zorgen vrrm! Zorg dat je de\nzaailing plant op een plek waar hij snel\nkan groeien, vwwoep.\n<0x10009:0x00030900>Dat betekent dat je<color red< een andere plek dan\nLanayru moet vinden>coloroff>, bzzt!<sound 4> We rekenen op\nje, vwwiep!")
          						goto flw_72
          					}
          				}
          			  case 1:
/*<  4>*/ 				printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00030c00><color blue<Meester Donderdraak>coloroff> is er al tijden slecht\naan toe.<pause 15> Helaas groeien bomen niet al te\nbest op deze grond, zrrt.<pause 30> <0x10009:0x00010c00>Hadden we maar\nmeer tijd, vrrm...")
          			}
          		}
          	}
          }

          void entrypoint_404_55() {
/*<106>*/ 	start()
/*<108>*/ 	switch (scene_flags[107 /* 0xC 08 */]) {
          	  case 0:
/*<123>*/ 		switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          		  case 0:
/*<124>*/ 			printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x2f080d09>Het is duidelijk dat je archeologie een\nwarm hart toedraagt, vriend! Ik hoor het\ngraag als je meer te weten komt over de\nlegende van de drie draken!")
          			flw_99:
/*< 99>*/ 			scene_flags[9 'Lanayru Gorge'][107 /* 0xC 08 */] = true;
/*<110>*/ 			scene_flags[9 'Lanayru Gorge'][108 /* 0xC 10 */] = true;
          		  case 1:
/*<109>*/ 			printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x2f000006>Is er nog iets anders waarmee ik je kan\nhelpen? Als je meer te weten komt over de\nlegende van de drie draken, moet je het me\nzeker komen vertellen!")
          			goto flw_99
          		}
          	  case 1:
/*<107>*/ 		printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x2f000d0a>Ik krijg bijna nooit bezoekers!<pause 30> Ik ben\n<color blue<Golo>coloroff> en ik doe onderzoek naar de <color red<legende\nvan de drie draken>coloroff>. Een daarvan schijnt\nhier te leven!\n<0x10009:0x2f000007>Op het eerste gezicht lijkt er hier niets\nwat de moeite waard is, maar ik weet\nzeker dat ik iets zal vinden als ik goed\nzoek!\nDus jij bent <heroname>? Hmm...\nDat is niet bepaald een makkelijke naam\nom uit te spreken.\n\n<0x10009:0x2f010d00>Waarvoor ben jij hier, <heroname>?\n\n\n\n<0x10009:0x2f000007>Ben je op zoek naar een <color blue<heilige vlam>coloroff>? Er\ngaat een vaag belletje rinkelen,<pause 25> denk ik...\n\n\n<0x10009:0x2f0f0709>Goeie goro,<pause 25> <0x10009:0x2f000d00>Ik weet nu waar je het over\nhebt! Daar heb ik over gelezen in\nboekrollen over de <color blue<Lanayru-zandzee>coloroff>.\n\n<0x10009:0x2f080d00>Ik kan me niet precies herinneren waar\nhet over ging, maar als je in die richting\ngaat, dan kom je vanzelf bij de Lanayru-\nzandzee uit.")
/*<125>*/ 		set_camera(2, 0)
/*<126>*/ 		set_camera(-1, 0)
/*<128>*/ 		printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x2f080d00>Voor de doorgang naar de Lanayru-\nzandzee heb je deze sleutel nodig!")
/*<127>*/ 		give_item(1 0x01);
/*<129>*/ 		printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x2f080d09>Succes bij je zoektocht!")
          		goto flw_99
          	}
          }

          void entrypoint_404_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "...")
          }

          void entrypoint_404_56() {
/*<143>*/ 	start()
/*<155>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<156>*/ 		printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x2f080709>Ben je bij de draak gekomen,\n<heroname>?<pause 84>\n\n\n<0x10009:0x2f010805><0x10008:0x02cd>Ik ben er jaloers van!<pause 90>\n\n\n\n<0x10009:0x2f0f0706><0x10008:0x02cd>Je hebt me zo de loef\nafgestoken!")
          		flw_154:
/*<154>*/ 		scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
          	  case 1:
/*<147>*/ 		switch (scene_flags[35 /* 0x5 08 */]) {
          		  case 0:
/*<149>*/ 			printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x2f080d0a>Ik heb een gang gemaakt naar het gebied\nwaar de <color red<donderdraak>coloroff> leeft, maar...<pause 45>\n<0x10006:0xffcd><0x10009:0x2f0d0800>de doorgang is te smal voor mij.\n<0x10006:0xffcd><0x10009:0x2f080700>Wat moet ik nu?")
          			goto flw_154
          		  case 1:
/*<150>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<158>*/ 				printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x2f080d02>Goed je te zien, <heroname>.\n\n\n\nHeb je uiteindelijk die <color blue<heilige vlam\n>coloroff>gevonden waar je naar zocht? Wat, echt?\nIs het je gelukt?! Dat is geweldig! Nou,\nvertel me alles! Hoe was het?\n<0x10009:0x2f080407>Wauw.<pause 20>.<pause 20>.<pause 20> Dus na al die omzwervingen\nheb je de vlam eindelijk gevonden!\n\n\n<0x30001:0x><heroname>, ik moet zeggen...\ndat ik diep onder de indruk van je ben!")
/*<170>*/ 				printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x2f080d0a>Maar ik heb ook niet stilgezeten! Ik heb\nontdekt dat hierachter inderdaad een\ngeheim gebied ligt! Er is een <color red<smalle holte>coloroff>\n<sound 4>waar ik net iets te fors voor ben!\n<0x10009:0x2f000d00>Mijn hypothese is dat deze gang naar de\nverblijfplaats van de <color red<donderdraak>coloroff> leidt,\neen van de drie draken uit de legendes.\n\n<0x10009:0x2f000800>En ik ben er zeker van dat die robots\ner ook iets mee te maken hebben.<pause 15>\n\n\n<0x10009:0x2f010807><0x10006:0xffcd>De <color red<donderdraak>coloroff>, een stelletje robots, en\nchronokristallen<pause 20>.<pause 20>.<pause 20>.\n\n\n<0x10009:0x2f080708><0x10008:0x02cd>Wat een verhaal!")
/*<146>*/ 				printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00080d00>O, bijna vergeten, <heroname>!\nHerinner je je nog dat opgravingsproject\nwaarin je hebt geïnvesteerd?<pause 20>\n\nNou, dat was een doorslaand succes! Ik\nheb een enorme afzetting van chrono-\nkristallen gevonden.<0x10009:0x2f000d01> Nu kan ik je inleg\ntienvoudig terugbetalen!")
/*<145>*/ 				rupees += 100;
          				flw_148:
/*<148>*/ 				scene_flags[9 'Lanayru Gorge'][35 /* 0x5 08 */] = true;
          				goto flw_154
          			  case 1:
/*<157>*/ 				printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x2f080d02>Goed je te zien, <heroname>.\n\n\n\nHeb je uiteindelijk die <color blue<heilige vlam\n>coloroff>gevonden waar je naar zocht? Wat, echt?\nIs het je gelukt?! Dat is geweldig! Nou,\nvertel me alles! Hoe was het?\n<0x10009:0x2f080407>Wauw.<pause 20>.<pause 20>.<pause 20> Dus na al die omzwervingen\nheb je de vlam eindelijk gevonden!\n\n\n<0x30001:0x><heroname>, ik moet zeggen...\ndat ik diep onder de indruk van je ben!")
/*<171>*/ 				printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x2f080d0a>Maar ik heb ook niet stilgezeten! Ik heb\nontdekt dat hierachter inderdaad een\ngeheim gebied ligt! Er is een <color red<smalle holte>coloroff>\n<sound 4>waar ik net iets te fors voor ben!\n<0x10009:0x2f000d00>Mijn hypothese is dat deze gang naar de\nverblijfplaats van de <color red<donderdraak>coloroff> leidt,\neen van de drie draken uit de legendes.\n\n<0x10009:0x2f000800>En ik ben er zeker van dat die robots\ner ook iets mee te maken hebben.<pause 15>\n\n\n<0x10009:0x2f010807><0x10006:0xffcd>De <color red<donderdraak>coloroff>, een stelletje robots, en\nchronokristallen<pause 20>.<pause 20>.<pause 20>.\n\n\n<0x10009:0x2f080708><0x10008:0x02cd>Wat een verhaal!")
          				goto flw_148
          			}
          		}
          	}
          }

          void entrypoint_404_05() {
/*<  7>*/ 	start()
/*< 45>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*<135>*/ 		switch (temp_flags[63 /* 0x6 80 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "Meester Donderdraak is weer op krachten,\nen dat is helemaal dankzij jou, brrzrrt! We\nzijn je voor eeuwig dankbaar, vwwiep!")
          		  case 1:
/*<136>*/ 			printf(/* textboxtype: 0, unk: 0, line: 26 */ "Ben je hier om meester Donderdraak te\nbezoeken, vwwoep?")
          		}
          	  case 1:
/*< 53>*/ 		check_item_flag(198, 1)
/*< 54>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          		  case 0:
/*< 55>*/ 			printf(/* textboxtype: 0, unk: 1, line: 25 */ "Meester Donderdraak zal weer op krachten\nkomen zodra hij een <color red<levensboomvrucht>coloroff> eet,\nvrrm!")
          		  case 1:
/*< 35>*/ 			check_item_flag(497, 1)
/*< 36>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 14}) {
          			  case 0:
/*< 38>*/ 				printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00030c00>In dit gebied kunnen hooguit bloemen en\ngras groeien, zrrt.<pause 30> <0x10009:0x00010c00>Als we geen manier\nvinden om de zaailing snel te laten groeien,\n<0x10006:0xfecd>gaat onze meester het niet redden, bzzt...")
          			  case 1:
/*< 33>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<168>*/ 					switch (scene_flags[23 /* 0x3 80 */]) {
          					  case 0:
/*<169>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000000>Ik maak me zorgen om de huidige toestand\nvan meester Donderdraak, vrrrp. Als we\ngeen <color red<levensboomvrucht>coloroff> voor hem vinden,\nzullen zijn systemen het begeven, brrrt.")
          					  case 1:
/*< 37>*/ 						printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00030900>Om meester Donderdraak te helpen\nhebben we een <color red<levensboomzaailing>coloroff>\ngeplant. Een vrucht van die boom schijnt\niedere ziekte te kunnen genezen, vrrm.")
          					}
          				  case 1:
/*<  8>*/ 					printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00030c00>De situatie is kritiek, vrrrrm! <color blue<Meester\nDonderdraak>coloroff> is ernstig ziek, bzzt.<pause 15>\n\n\n<0x10009:0x00030c00>En we mogen niets doen met dit chronokristal\nzonder toestemming van meester\nDonderdraak, vrrm.<pause 30>\n\n<0x10009:0x00010c00>Maar dat van het chronokristal is natuurlijk\nlang niet het ergste, brrzrrt...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_57() {
/*<151>*/ 	start()
/*<152>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x2f0c0d01><0x10006:0xffcd><0x10008:0x01cd><0x10009:0x2f000001>Hé, ben jij dat, <heroname>?\n\n\n\n<0x10006:0xffcd><0x10008:0x01cd>Dat komt mooi uit!<pause 15> Ik moet je\nnamelijk spreken!<pause 15>\n\n\n<0x10006:0x02cd><0x10008:0x01cd>Als je een moment hebt, kun je dan\neven hier komen?")
/*<153>*/ 	scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
/*<159>*/ 	story_flags[829 /* us: 805A9B33 0x20, jp: 805ACDB3 0x20 */] = true;
/*<160>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<161>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<162>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

          void entrypoint_404_06() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 0, unk: 1, line: 28 */ "...")
          }

          void entrypoint_404_58() {
/*<163>*/ 	start()
/*<164>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x2f080709>Hé, <heroname>! Ik heb hierachter\neen doorgang gevonden!\n\n\nMaar deze rots is keihard. Het gaat nog\nwel een tijdje duren voordat ik daar\ndoorheen ben.")
          }

          void entrypoint_404_07() {
/*< 11>*/ 	start()
/*< 24>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 25>*/ 		printf(/* textboxtype: 0, unk: 1, line: 31 */ "Zorg dat je in de buurt van de wagen\nblijft, vrrm!")
          	  case 1:
/*< 71>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 31}
/*< 12>*/ 		printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00030900>Er zijn hier veel grote chronokristallen, zrrt.<pause 30>\n<0x10009:0x00000900>Heb jij net als wij toestemming gekregen\nvan <color blue<meester Donderdraak>coloroff> om hier te\nkomen, vrrm?\n<0x10009:0x00010900>We zijn namelijk net van plan om dit\nchronokristal naar meester Donderdraak te\nbrengen, vwwiep.")
/*< 18>*/ 		temp_flags[0 /* 0x1 01 */] = true;
/*< 87>*/ 		set_camera(1, 0)
/*< 86>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10005:0x00280000>Langs het spoor zijn veel monsters, vrrm.<pause 15>\n<0x10009:0x00030c00>Wees dus heel voorzichtig, bzrt!")
          	}
          }

          void entrypoint_404_08() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "...")
          }

          void entrypoint_404_09() {
/*< 15>*/ 	start()
/*< 47>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*<134>*/ 		switch (temp_flags[63 /* 0x6 80 */]) {
          		  case 0:
/*< 48>*/ 			printf(/* textboxtype: 0, unk: 1, line: 37 */ "Meester Donderdraak maakt het\nuitstekend, vwwiep!")
          		  case 1:
/*<137>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "Meester Donderdraak is weer zo sterk als\nvoorheen, vrroem!")
          		}
          	  case 1:
/*< 56>*/ 		check_item_flag(198, 1)
/*< 57>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          		  case 0:
/*< 58>*/ 			printf(/* textboxtype: 0, unk: 0, line: 38 */ "Rrrring! Waar heb je die vrucht vandaan,\nbrrt?!<pause 45> Is die voor <color blue<meester Donderdraak>coloroff>,\nvwwoep?!")
          		  case 1:
/*< 27>*/ 			check_item_flag(197, 1)
/*< 28>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00030c00>De grond in <color blue<Lanayru>coloroff> is niet geschikt voor\nbomen, zrrt.<pause 30> <0x10009:0x00030900>Ken jij een plaats waar bomen\nsnel kunnen groeien, vwiep?")
          			  case 1:
/*< 26>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*< 29>*/ 					printf(/* textboxtype: 0, unk: 0, line: 35 */ "Aan de andere kant van de brug hebben\nwe een <color red<levensboomzaailing>coloroff>, geplant, brrt.\nEen vrucht van zo'n boom kan iedere\nziekte genezen, vrrm.<pause 30>\n<0x10009:0x00000c00>Maar bomen hebben moeite om hier te\ngroeien, vwwiep...")
          				  case 1:
/*< 16>*/ 					printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00030900>We hebben toestemming van meester\nDonderdraak om <color blue<chronokristallen>coloroff> op te\ngraven, vwwiep.\n\n<pause 30><0x10009:0x00030c00>Helaas is <color blue<meester Donderdraak>coloroff> heel erg\nziek, brrzrrt.<pause 15> Ik maak me zorgen om hem,\nvrrm.<pause 30> <0x10009:0x00010c00>Als het zo doorgaat, zal onze meester\nophouden te functioneren, vwwiep...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_10() {
/*< 94>*/ 	start()
/*<116>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<118>*/ 		printf(/* textboxtype: 0, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
          	  case 1:
/*<115>*/ 		switch (scene_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*<119>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*<121>*/ 				printf(/* textboxtype: 0, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
          			  case 1:
/*<117>*/ 				printf(/* textboxtype: 0, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
/*<120>*/ 				scene_flags[9 'Lanayru Gorge'][26 /* 0x2 04 */] = true;
          			}
          		  case 1:
/*< 96>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 97>*/ 				printf(/* textboxtype: 0, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
          			  case 1:
/*<114>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 95, 'param3': 31}
/*< 95>*/ 				printf(/* textboxtype: 0, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
/*<100>*/ 				scene_flags[9 'Lanayru Gorge'][18 /* 0x3 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_404_11() {
/*<138>*/ 	start()
/*<140>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x000b0901><0x30001:0x><heroname>! Je hebt mijn leven\ngered! Daarvoor moet ik je belonen!\n\n\n<0x10009:0x00000900>Geef me even de tijd om me voor te\nbereiden. Ik weet zeker dat je het de\nmoeite waard zult vinden!")
/*<139>*/ 	scene_flags[9 'Lanayru Gorge'][29 /* 0x2 20 */] = true;
          }

          void entrypoint_404_30() {
/*< 19>*/ 	start()
/*< 20>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*< 21>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 22>*/ 			story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
          			flw_79:
/*< 79>*/ 			story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */] = true;
/*< 23>*/ 			temp_flags[63 /* 0x6 80 */] = true;
/*<122>*/ 			entrypoint_006_04();
          		  case 1:
          			goto flw_79
          		}
          	  case 1:
          		goto flw_79
          	}
          }

          void entrypoint_404_31() {
/*< 80>*/ 	start()
/*< 91>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*< 81>*/ 	printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10005:0x004b0000>Dit is de <color blue<Lanayru-kloof>coloroff>. Volgens de\nlegendes leeft hier een draak die trouw is\naan de godin.")
          }

          void entrypoint_404_32() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10005:0x005a0000>Aan de omgeving te zien deed een oude\nbeschaving hier aan opgravingen om\nhoogwaardige chronokristallen te winnen.")
          }

          void entrypoint_404_50() {
/*< 17>*/ 	start()
/*< 68>*/ 	switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          	  case 0:
/*< 69>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x2f080d09>Het is duidelijk dat je archeologie een\nwarm hart toedraagt, vriend! Ik zal hier\ngoed gebruik van maken en hopelijk levert\ndat binnenkort wat moois op!")
          	  case 1:
/*< 61>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 62, 'param3': 12}
/*< 62>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x2f000d09>Jij... bent niet toevallig geïnteresseerd in\nopgravingen, of wel?<pause 60> Dat ben je wel?!\nNou, dan vind je dit vast reuze-\ninteressant!<pause 60>\n<0x10009:0x2f000d07>Helaas kunnen dit soort opgravingen vrij\nveel kosten...<pause 30> Maar, ze kunnen ook\nlucratief zijn. Zou je misschien 10 rupees\nin mijn opgraving willen investeren?[1-]Ja hoor![2]Nee, ik ben niet gek.")
/*< 59>*/ 		switch (choice(2)) {
          		  case 0:
/*< 63>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*< 64>*/ 				rupees += -10;
/*< 66>*/ 				printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x2f020208>Dank je wel! Ik zal hier goed gebruik van\nmaken!")
/*< 67>*/ 				story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */] = true;
          				flw_98:
/*< 98>*/ 				scene_flags[9 'Lanayru Gorge'][106 /* 0xC 04 */] = true;
          			  case 1:
/*< 65>*/ 				printf(/* textboxtype: 0, unk: 1, line: 43 */ "Goro toch, zoveel rupees heb je niet. Maar\nkom gerust nog eens terug als je me wilt\nsteunen. Mijn onderzoek hangt ervan af!")
          				goto flw_98
          			}
          		  case 1:
/*< 60>*/ 			printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x2f010805><0x10006:0xffcd>Dat is jammer...<pause 30> Er is tegenwoordig maar\nweinig animo om archeologisch onderzoek\nfinancieel te ondersteunen.")
          			goto flw_98
          		}
          	}
          }

          void entrypoint_404_33() {
/*< 84>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10005:0x005a0000>Daardoor ligt er nu overal in dit gebied\noud mijnbouwgereedschap, zoals\nmijnwagens en spoorbanen.")
          }

          void entrypoint_404_51() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 0, unk: 0, line: 65 */ "Rechtdoor naar de Lanayru-\nzandzee, een uitgestrekte oceaan\nvan zand. In die omgeving zijn\nook vele oude ruïnes te vinden.")
          }

          void entrypoint_404_34() {
/*<166>*/ 	start()
/*<167>*/ 	printf(/* textboxtype: 0, unk: 1, line: 64 */ "Sommige Bokoblins dragen een monsterhoorn aan hun\nriem.\n\n\nMet je <color also red<zweep>coloroff> kun je die mogelijk van ze afpakken.")
          }

          void entrypoint_404_52() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf(/* textboxtype: 1, unk: 0, line: 66 */ "Rechtdoor naar de Lanayru-\nwoestijn. Het avontuur wacht\nvoor diegenen die de mysteriën\nvan de groeve willen ontrafelen.")
          }

          void entrypoint_404_01() {
          	start()
/*< 88>*/ 	check_item_flag(198, 1)
/*< 89>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 36}) {
          	  case 0:
/*<165>*/ 		story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = false;
/*< 90>*/ 		changeScene(18, 0) // 
          	  case 1:
/*< 40>*/ 		check_item_flag(497, 1)
/*< 41>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          		  case 0:
/*<103>*/ 			switch (scene_flags[22 /* 0x3 40 */]) {
          			  case 0:
/*<105>*/ 				printf(/* textboxtype: 0, unk: 0, line: 8 */ "Wat zeg je, <heroname>? Wil je een\nplek zoeken waar de zaailing <color red<sneller zal\ngroeien>coloroff>?\n\n<0x10009:0x00110804>Daar zou je me enorm mee helpen. <color red<Eén\nlevensboomvrucht >coloroff>zou voor mij voldoende\nzijn om volledig op te knappen.\n\n<0x10009:0x00080a00>Als ik jou was, zou ik zoeken naar een\nplaats waar <color red<de grond zeer vruchtbaar is>coloroff>.")
          			  case 1:
/*< 42>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00080a03>Dag, <heroname>.<pause 15> Bedriegen mijn\nogen me of heb je de <color red<levensboomzaailing\n>coloroff>meegenomen?\n\nDaar kom je te laat mee, jonkie.<pause 30> Tegen de\ntijd dat dat een boom met vruchten is, is\nmijn leven allang voorbij.<0x10009:0x0008110c> Kuch... kuch...\n\nHet spijt me zeer. Onder betere omstandig-\nheden had ik ieder lied voor je gezongen\ndat ik ken.<pause 30> <0x10009:0x00081102>Kuch... kuch...")
/*<104>*/ 				scene_flags[9 'Lanayru Gorge'][22 /* 0x3 40 */] = true;
          			}
          		  case 1:
/*<141>*/ 			switch (story_flags[794 /* us: 805A9B2F 0x04, jp: 805ACDAF 0x04 */]) {
          			  case 0:
/*<142>*/ 				printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x30001:0x><heroname>... Met een\n<color blue<levensboomvrucht>coloroff> zou je me enorm...\nhelpen.")
          			  case 1:
/*<101>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<102>*/ 					printf(/* textboxtype: 0, unk: 1, line: 7 */ "De robots hebben voor mij een\n<color red<levensboomzaailing>coloroff> geplant. Het schijnt dat\niedere ziekte genezen kan worden met een\nvrucht van zo'n boom...\nZe hebben de zaailing daar verderop\ngeplant.<pause 20> Kuch...<0x10009:0x0008110c><pause 30> <0x10009:0x00000000>Maar die wil niet groeien.<pause 30>\nKuch...<0x10009:0x0008110c><pause 45> <0x10009:0x00110804>Dit is het einde voor mij.<pause 20>")
          				  case 1:
/*<  1>*/ 					printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00110804><0x10008:0x02cd><0x10006:0xffcd>Kuch, kuch...<pause 30>\n\n\n\n<0x10009:0x00080a03>O, hallo...<pause 20> Ik heb al... heel lang geen\nbezoekers gehad.\n\n\n<0x10009:0x00080a00>Jij bent een mens, nietwaar? Er zal wel\neen bijzondere reden zijn waarom je hier\nbent.\n\n<pause 15>.<pause 15>.<pause 15>.\n\n\n\n<0x10009:0x0011080c>Aha, je naam is <heroname> en je komt\nuit de lucht... <0x10006:0xffcd>Kuch...<pause 15> Dat is toch niet je\nvolledige naam?\n\n<0x10009:0x00080a00>Wat dacht je ervan als ik je net zo'n\nmodelnummer geef als mijn vrienden?\n<color red<LW-<heroname>-16>coloroff>.<pause 20>.<pause 20>.<pause 20>\n\nO. Ik kan aan je zien dat je dat maar niks\nvindt.<pause 15> Wat jammer... <pause 15><0x10009:0x00080802>Kuch... kuch... Goed,\nwat kan ik voor je betekenen?\n\n<0x10009:0x00080a03>O...<pause 30> Wil je dat ik je een lied leer? Kuch...")
/*<130>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00080a00>Wacht eens. Zei je niet dat je uit de lucht\nkomt, <heroname>? Betekent dat dat\njij de held bent die door de godin is\nuitverkoren?\nAha... Wat bijzonder...\n\n\n\n<0x10009:0x000a0a00>Ik moet me alleen verontschuldigen. Ik ben\nnamelijk niet in staat om je te helpen.\n\n\n<0x10009:0x000a0a00>Ik heb nog wel de puf voor een kort\ngesprek, maar zoals je merkt ben ik ernstig\nziek.<pause 30> <0x10009:0x0000000c>Kuch...\n\n<0x10009:0x000a0a00>In deze staat gaat het me niet lukken om\neen lied te zingen.\n\n\n<0x10009:0x00110804>Ik schaam me diep dat ik de taak die de\ngodin me heeft toevertrouwd, niet kan\nvervullen... Kuch...")
/*< 34>*/ 					story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_53() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 0, unk: 1, line: 67 */ "Voor me ligt de Lanayru-mijn.\nHier zal ik het mysterie achter\nde chronokristallen oplossen!")
          }

          void entrypoint_404_02() {
/*<  2>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0, line: 12 */ "...")
          }

          void entrypoint_404_54() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 0, unk: 0, line: 68 */ "Dit gebied is alleen toegankelijk\nmet toestemming van <color blue<meester\nDonderdraak>coloroff>,<color blue< Lanayru>coloroff>.")
          }

