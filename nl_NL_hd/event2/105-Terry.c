          void entrypoint_105_35() {
/*< 40>*/ 	start()
/*< 47>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 84, 'param3': 13}
/*< 84>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_41:
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "Dat is een <color yellow<levensmedaille>coloroff>! Hij heeft\neen mysterieus en mystiek effect op\nde drager!\n\nWat voor een effect? Goeie vraag, maar\nik weet het niet. Als je 'm koopt, kom je er\nzelf wel achter.\n\nIk verkoop 'm voor <color red<800 rupees>coloroff>, al is dat\neigenlijk een koopje! Wat zeg je ervan?\n[1-]Verkocht![2]Nee, bedankt.")
          		flw_13:
/*< 13>*/ 		switch (choice(2)) {
          		  case 0:
/*< 15>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 14>*/ 			entrypoint_105_08();
          		}
          	  case 1:
/*< 83>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 86>*/ 			printf(/* textboxtype: 0, unk: 1, line: 28 */ "Dat is een <color yellow<levensmedaille>coloroff>! Hij heeft\neen mysterieus en mystiek effect op\nde drager!\n\nWat voor een effect? Goeie vraag, maar\nik weet het niet. Als je 'm koopt, kom je er\nzelf wel achter.\n\nVandaag geef ik je 50% korting en\nverkoop ik 'm niet voor <color red<800 rupees>coloroff>,\nmaar voor slechts <color red<400 rupees>coloroff>! Wat\nzeg je ervan?[1-]Verkocht![2]Nee, bedankt.")
          			goto flw_13
          		  case 1:
          			goto flw_41
          		}
          	}
          }

          void entrypoint_105_01() {
          	start()
/*< 64>*/ 	switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          	  case 0:
/*< 66>*/ 		switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          		  case 0:
/*<168>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 67, 'param3': 13}
/*< 67>*/ 			printf(/* textboxtype: 0, unk: 0, line: 5 */ "O, hallo! Ik ben zo blij om je weer in\nBeedles wolkenwinkel te zien! Laat het\nme gerust weten als je interesse in een\nvan mijn artikelen hebt.")
          		  case 1:
/*<167>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 65, 'param3': 13}
/*< 65>*/ 			printf(/* textboxtype: 0, unk: 1, line: 4 */ "O! Jij bent de geweldige jongen die mijn\n<color blue<gigantor>coloroff> heeft gevonden!\n\n\nOm je te bedanken mag je een van deze\nartikelen voor de helft van de prijs kopen.\nJe mag zelf kiezen welk van de artikelen\nhet wordt.")
          		}
          	  case 1:
/*<161>*/ 		switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          		  case 0:
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 164, 'param3': 31}
/*<164>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 162, 'param3': 13}
/*<162>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "O! Welkom!\n\n\n\nWat?! Heb je iets interessants gevonden?\nAls ik er nu over probeer te praten,\nstorten we neer...\n\nWe kunnen er later vandaag wel over\npraten. Als je wilt, kun je op dat bed\ndaar uitrusten tot mijn werk erop zit.")
          		  case 1:
/*<163>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<166>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 165, 'param3': 13}
/*<165>*/ 				printf(/* textboxtype: 0, unk: 1, line: 7 */ "O! Hartelijk welkom!\n\n\n\nIk heb je hulp nodig! Mijn <color blue<gigantor\n>coloroff>is vermist!\n\n\nMisschien lijkt het alsof ik met mijn\nalleen bezig ben met deze winkel in de\nlucht houden, maar ik kan enkel aan\nmijn tor denken!")
          			  case 1:
/*<193>*/ 				switch (scene_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<195>*/ 					switch (zone_temp_flags[13 /* 0x0 20 */]) {
          					  case 0:
          						flw_1:
/*<  1>*/ 						printf(/* textboxtype: 1, unk: 0, line: 0 */ "Wil je weten waarom ik op een fiets zit?\n[1-]Ja, waarom?[2]Niet echt.")
/*< 25>*/ 						switch (choice(2)) {
          						  case 0:
/*< 26>*/ 							printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10007:0x00000015>Jij bent nieuwsgierig, zeg!\n\n\n\nIk fiets om elektriciteit te genereren\nzodat mijn winkel in de lucht blijft!\nDaarnaast hou ik zo mijn prachtige\nfiguur.\nJa, mijn leefstijl mag ik best <color blue<milieu-\nvriendelijk>coloroff> noemen! Maar met jou\naan boord moet ik vanwege het extra\ngewicht heel wat harder fietsen.")
          							flw_27:
/*< 27>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "O, sorry! <0x10006:0xfecd>Het was niet mijn bedoeling\nom zo onvriendelijk te klinken! Kijk\nrustig rond. Ik heb allerlei fantastische\nwaren!")
/*<192>*/ 							scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
/*<194>*/ 							zone_temp_flags[13 /* 0x0 20 */] = true;
          						  case 1:
/*< 87>*/ 							{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1558, 'next': 28, 'param3': 13}
/*< 28>*/ 							printf(/* textboxtype: 0, unk: 0, line: 2 */ "Goed! Maar leid me niet af!\n\n\n\nMet jou aan boord moet ik extra hard\nfietsen om te compenseren voor het\nEXTRA GEWICHT...")
/*< 88>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -256, 'next': 27, 'param3': 13}
          							goto flw_27
          						}
          					  case 1:
/*<185>*/ 						switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          						  case 0:
/*<184>*/ 							switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          							  case 0:
/*<191>*/ 								{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2838, 'next': 188, 'param3': 13}
/*<188>*/ 								switch (zone_temp_flags[12 /* 0x0 10 */]) {
          								  case 0:
/*<190>*/ 									printf(/* textboxtype: 1, unk: 0, line: 9 */ "O! Als je wilt, kun je wel een dutje op dat\nbed daar doen. We praten vanavond wel,\nwanneer ik niet meer hoef te fietsen.")
          								  case 1:
/*<186>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 187, 'param3': 31}
/*<187>*/ 									printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00000b00>O<pause 10>.<pause 10>.<pause 10>.<pause 10> Welkom,<pause 20> vereerde klant<pause 10>.<pause 10>.<pause 10>.<pause 10>\n\n\n\nWat?<pause 20> Ik lijk niet op mezelf?\n\n\n\nIk kan ook niets voor jou verbergen, hè?\n\n\n\nNou, ik kan er nu niet over praten, want\nik ben te druk aan het fietsen. Waarom\nga je niet even op het bed liggen, dan kun\nje uitrusten. We praten vanavond wel.")
/*<189>*/ 									zone_temp_flags[12 /* 0x0 10 */] = true;
          								}
          							  case 1:
          								goto flw_1
          							}
          						  case 1:
          							goto flw_1
          						}
          					}
          				  case 1:
          					goto flw_1
          				}
          			}
          		}
          	}
          }

          void entrypoint_105_36() {
/*<135>*/ 	start()
/*<137>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 138, 'param3': 12}
/*<138>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 149, 'param3': 13}
/*<149>*/ 	zone_temp_flags[11 /* 0x0 08 */] = true;
/*<140>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_145:
/*<145>*/ 		printf(/* textboxtype: 0, unk: 0, line: 29 */ "Met dat ding daar kun je een extra\nvoorwerp bij je dragen in je\n<color yellow<buidel>coloroff>!\n\nVoor een avonturier als jij is dit vast\neen geweldig artikel. En dat voor slechts\n<color red<600 rupees>coloroff>.\n\nWat zeg je? De prijs was eerst lager?\nDat heb je vast verkeerd gezien! Wat zeg\nje ervan? Slechts <color red<600 rupees>coloroff>!\n[1-]Oké![2]Nee, bedankt.")
          		goto flw_13
          	  case 1:
/*<139>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<146>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "Met dat ding daar kun je een extra\nvoorwerp bij je dragen in je\n<color yellow<buidel>coloroff>!\n\nVoor een avonturier als jij is dit vast\neen geweldig artikel. En dat voor\nslechts <color red<300 rupees>coloroff>.\n\nNormaal gesproken kost het <color red<600\nrupees>coloroff>, dus dit is een mooie deal.\nWat zeg je ervan? Voor <color red<300 rupees>coloroff>?\n[1-]Oké![2]Nee, bedankt.")
          			goto flw_13
          		  case 1:
          			goto flw_145
          		}
          	}
          }

          void entrypoint_105_02() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10007:0x00000015>O! Ben je helemaal hierheen gekomen?\nDat gebeurt niet vaak!\n\n\nBeedles wolkenwinkel heeft alles dat je\nnodig zou kunnen hebben. Neem maar\neens een kijkje.\n\nEn als je iets wilt kopen, is dat hartstikke\nmooi.")
          }

          void entrypoint_105_37() {
/*<136>*/ 	start()
/*<141>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 12}
/*<142>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 144, 'param3': 13}
/*<144>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_147:
/*<147>*/ 		printf(/* textboxtype: 0, unk: 1, line: 31 */ "Hiermee krijg je ruimte voor een extra\nvoorwerp in je <color yellow<buidel>coloroff>. Ik heb er niet meer\nvan, daarom is dit artikel wat, eh, duur!\n\nHet kost <color red<1200 rupees>coloroff>. Als ik jou was,\nzou ik goed over deze aankoop nadenken...\n[1-]Verkocht![2]Nee, bedankt.")
          		goto flw_13
          	  case 1:
/*<143>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<148>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "Hiermee krijg je ruimte voor een extra\nvoorwerp in je <color yellow<buidel>coloroff>. Ik heb er niet meer\nvan, daarom is dit artikel wat, eh, duur!\n\nNormaal gesproken vraag ik er <color red<1200\nrupees>coloroff> voor, maar vandaag is hij voor jou\nvoor <color red<600 Rupees>coloroff>.\n\nDat is alsnog niet goedkoop, dus als\nik jou was, zou ik goed over deze aankoop\nnadenken...\n[1-]Verkocht![2]Nee, bedankt.")
          			goto flw_13
          		  case 1:
          			goto flw_147
          		}
          	}
          }

          void entrypoint_105_38() {
/*<177>*/ 	start()
/*<178>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 179, 'param3': 12}
/*<179>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 181, 'param3': 13}
/*<181>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_182:
/*<182>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "Dat is een <color yellow<insectenmedaille>coloroff>. Daarmee\nzie je op je kaart waar insecten te\nvinden zijn.\n\nHij is behoorlijk duur, maar als je graag\ninsecten vangt, kun je niet zonder! Hij\nkost <color red<1000 rupees>coloroff>. Wat zeg je ervan?\n[1-]Oké![2]Nee, bedankt.")
          		goto flw_13
          	  case 1:
/*<180>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<183>*/ 			printf(/* textboxtype: 0, unk: 1, line: 34 */ "Dat is een <color yellow<insectenmedaille>coloroff>. Daarmee\nzie je op je kaart waar insecten te\nvinden zijn.\n\nHij is behoorlijk duur, maar als je graag\ninsecten vangt, kun je niet zonder!\n\n\nNormaal gesproken kost hij <color red<1000 rupees>coloroff>,\nmaar vandaag betaal je er slechts <color red<500\nrupees >coloroff>voor. Wat zeg je ervan?\n[1-]Oké![2]Nee, bedankt.")
          			goto flw_13
          		  case 1:
          			goto flw_182
          		}
          	}
          }

          void entrypoint_105_05() {
/*<  2>*/ 	start()
/*< 48>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 4, 'param3': 13}
/*<  4>*/ 	printf(/* textboxtype: 0, unk: 0, line: 11 */ "O! Je <color red<buidel >coloroff>is vol! Je kunt er niets meer\nin doen.\n\n\nEn je ruimte in de voorwerpenbank is\nook vol?\n\n\nNou, ga dan maar snel ruimte maken in\nje <color red<buidel >coloroff>of de <color red<voorwerpenbank>coloroff> en kom\ndaarna snel terug!")
          }

          void entrypoint_105_06() {
/*<  3>*/ 	start()
/*< 89>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1558, 'next': 35, 'param3': 13}
/*< 35>*/ 	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
          	  case 0:
          		flw_5:
/*<  5>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "O nee, je hebt niet genoeg rupees! Zeg,\nals dat een grapje van je is, vind ik het\nniet grappig!")
/*<151>*/ 		zone_temp_flags[10 /* 0x0 04 */] = false;
/*<152>*/ 		zone_temp_flags[11 /* 0x0 08 */] = false;
          	  case 1:
/*<169>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          			goto flw_5
          		  case 1:
/*< 32>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          			goto flw_5
          		}
          	}
          }

          void entrypoint_105_07() {
/*<  6>*/ 	start()
/*< 90>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 1304, 'next': 7, 'param3': 13}
/*<  7>*/ 	switch (random(2)) {
          	  case 0:
/*<  8>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "O! Enorm bedankt! Je hebt me de kracht\ngegeven om te blijven fietsen!")
          		flw_33:
/*< 33>*/ 		zone_temp_flags[1 /* 0x1 02 */] = false;
/*< 34>*/ 		story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */] = true;
/*<200>*/ 		scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
/*<156>*/ 		entrypoint_105_11();
          	  case 1:
/*<  9>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "O! Echt iets voor jou!")
          		goto flw_33
          	}
          }

          void entrypoint_105_08() {
/*< 10>*/ 	start()
/*< 95>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 37, 'param3': 13}
/*< 37>*/ 	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
          	  case 0:
          		flw_11:
/*< 11>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "O! Kijk maar even rond, hoor!")
/*<153>*/ 		zone_temp_flags[10 /* 0x0 04 */] = false;
/*<154>*/ 		zone_temp_flags[11 /* 0x0 08 */] = false;
          	  case 1:
/*<170>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          			goto flw_11
          		  case 1:
/*< 36>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          			goto flw_11
          		}
          	}
          }

          void entrypoint_105_09() {
/*< 29>*/ 	start()
/*< 91>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 30, 'param3': 13}
/*< 30>*/ 	printf(/* textboxtype: 0, unk: 1, line: 16 */ "O! Wacht eventjes!")
          }

          void entrypoint_105_10() {
/*< 38>*/ 	start()
/*< 92>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 28, 'next': 31, 'param3': 13}
/*< 31>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "Weet je wel hoe zwaar je bent? Ik moet\nextra hard fietsen als jij hier bent.\n\n\nEn dan heb je het lef om te vertrekken\nzonder iets te hebben gekocht? Verdwijn!")
/*<201>*/ 	scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
          }

          void entrypoint_105_11() {
/*<155>*/ 	start()
/*< 93>*/ 	switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          	  case 0:
/*< 94>*/ 		story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */] = true;
          		flw_157:
/*<157>*/ 		switch (zone_temp_flags[10 /* 0x0 04 */]) {
          		  case 0:
/*<158>*/ 			story_flags[746 /* us: 805A9B29 0x04, jp: 805ACDA9 0x04 */] = true;
          			flw_159:
/*<159>*/ 			switch (zone_temp_flags[11 /* 0x0 08 */]) {
          			  case 0:
/*<160>*/ 				story_flags[747 /* us: 805A9B29 0x08, jp: 805ACDA9 0x08 */] = true;
          			  case 1:
          			}
          		  case 1:
          			goto flw_159
          		}
          	  case 1:
          		goto flw_157
          	}
          }

          void entrypoint_105_30() {
/*< 12>*/ 	start()
/*<171>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 31, 'next': 18, 'param3': 13}
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "O! Helaas betekent dat bordje dat het\nbetreffende artikel is uitverkocht.\n\n\nDankzij jou gaan de zaken een stuk\nbeter dan normaal, waardoor ik nu snel\ndoor mijn voorraad heen ben.")
          }

          void entrypoint_105_31() {
/*< 16>*/ 	start()
/*< 43>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 49, 'param3': 12}
/*< 49>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 150, 'param3': 13}
/*<150>*/ 	zone_temp_flags[10 /* 0x0 04 */] = true;
/*< 69>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_19:
/*< 19>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "Daarmee kun je meer voorwerpen in\nje <color red<<color yellow<buidel<color red< >coloroff>bij je dragen!\n\n\nDat komt ongetwijfeld van pas tijdens\nje reizen! En dat voor slechts <color red<300 rupees>coloroff>.\n[1-]Verkocht![2]Nee, bedankt.")
          		goto flw_13
          	  case 1:
/*< 68>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 74>*/ 			printf(/* textboxtype: 0, unk: 0, line: 20 */ "Daarmee kun je een extra voorwerp in je\n<color red<<color yellow<buidel<color red< >coloroff>bij je dragen!\n\n\nTijdens je reizen komt zoiets vast goed\nvan pas. En dit artikel krijg je deze keer\nvoor slechts <color red<150 rupees>coloroff>.\n[1-]Verkocht![2]Nee, bedankt.")
          			goto flw_13
          		  case 1:
          			goto flw_19
          		}
          	}
          }

          void entrypoint_105_32() {
/*< 17>*/ 	start()
/*< 44>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 70, 'param3': 12}
/*< 70>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 76, 'param3': 13}
/*< 76>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_20:
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "O! Wat heb jij een goeie smaak! Wat\nglanst het mooi, hè? Ik heb het hier in\nde buurt gevonden.\n\nEerlijk gezegd heb ik geen idee wat het\ndoet, maar voor slechts <color red<1600 rupees\n>coloroff>is het voor jou!\n[1-]Oké![2]Nee, bedankt.")
          		goto flw_13
          	  case 1:
/*< 75>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 77>*/ 			printf(/* textboxtype: 0, unk: 1, line: 22 */ "O! Wat heb jij een goeie smaak! Wat\nglanst het mooi, hè? Ik heb het hier in\nde buurt gevonden.\n\nEerlijk gezegd heb ik geen idee wat het\ndoet. Normaal gesproken vraag ik er\n<color red<1600 rupees>coloroff> voor!\n\nMaar voor jou gaat er vandaag de helft\nvan af, dus kost het maar <color red<800 rupees>coloroff>.\nWat vind je daarvan?\n[1-]Verkocht![2]Nee, bedankt.")
          			goto flw_13
          		  case 1:
          			goto flw_20
          		}
          	}
          }

          void entrypoint_105_33() {
/*< 21>*/ 	start()
/*< 45>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 71, 'param3': 12}
/*< 71>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 79, 'param3': 13}
/*< 79>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_22:
/*< 22>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "Dat is een <color yellow<extra beurs>coloroff>. Hij is enorm\npraktisch!\n\n\nHiermee kun je 300 extra rupees in je\nbeurs hebben!\n\n\nJe hoeft voorlopig geen rupees meer te\nlaten liggen omdat je ze niet mee kunt\nnemen!\n\nEn voor zo'n nuttig artikel als dit vraag\nik toch slechts <color red<100 Rupees>coloroff>. Wat zeg je\nervan?\n[1-]Ik koop 'm![2]Nee, bedankt.")
          		goto flw_13
          	  case 1:
/*< 78>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "Dat is een <color yellow<extra beurs>coloroff>. Hij is enorm\npraktisch!\n\n\nHiermee kun je 300 extra rupees in je\nbeurs hebben!\n\n\nJe hoeft voorlopig geen rupees meer te\nlaten liggen omdat je ze niet mee kunt\nnemen!\n\nEn voor zo'n nuttig artikel als dit vraag ik\nnormaal gesproken <color red<100 Rupees>coloroff>, maar\nvandaag betaal je er slechts <color red<50 rupees\n>coloroff>voor. Wat zeg je ervan?\n[1-]Ik koop 'm![2]Nee, bedankt.")
          			goto flw_13
          		  case 1:
          			goto flw_22
          		}
          	}
          }

          void entrypoint_105_50() {
/*< 50>*/ 	start()
/*<175>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
/*<176>*/ 		printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000018>O! Wat is dit fijn! Ik kan je niet genoeg\nbedanken!\n\n\nMijn geliefde <color blue<gigantor>coloroff>... Ik word het\nnooit moe om naar hem te kijken.")
          	  case 1:
/*<105>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<106>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000018>O! Hartstikke bedankt! Ik zal het nooit\nvergeten!\n\n\nOm je te bedanken geef ik je korting op je\nvolgende aankoop, zodat je maar de halve\nprijs hoeft te betalen, Kom dus snel nog\neens terug.")
          		  case 1:
/*<107>*/ 			switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          			  case 0:
/*<199>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 31}
/*<129>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 130, 'param3': 47}
/*<130>*/ 				{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 132, 'param3': 15}
/*<132>*/ 				set_camera(3, 0)
/*<131>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 117, 'param3': 48}
/*<117>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 538, 'next': 108, 'param3': 13}
/*<108>*/ 				printf(/* textboxtype: 0, unk: 1, line: 43 */ "Ja, kan ik je ergens mee helpen? O, wil\nje me iets laten zien?")
/*<128>*/ 				set_camera(2, 0)
/*<118>*/ 				printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x001a0815>O, zie ik het goed en heb je echt mijn\ngeliefde <color blue<gigantor>coloroff> gevonden?!")
/*<120>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 127, 'param3': 47}
/*<127>*/ 				story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */] = true;
/*<122>*/ 				{'type': 'type3', 'subType': 4, 'param1': 31, 'param2': 3328, 'next': 123, 'param3': 13}
/*<123>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 134, 'param3': 48}
/*<134>*/ 				wait_frames(50)
/*<121>*/ 				set_camera(1, 0)
/*<119>*/ 				printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00000f00>Je hebt hem gevonden! Mijn lieve, lieve\nhuisdier. Toffe tor, hartelijk bedankt!\n\n\nDe volgende keer dat je in mijn winkel\nbent, mag je een van mijn artikelen voor\nde halve prijs kopen.\n\n<0x10009:0x00000018>Dat is de beste manier waarop ik je kan\nbedanken!")
/*<133>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 115, 'param3': 42}
/*<115>*/ 				give_gratitude_crystals();
          			  case 1:
/*< 99>*/ 				switch (scene_flags[14 /* 0x0 40 */]) {
          				  case 0:
/*<111>*/ 					switch (zone_temp_flags[4 /* 0x1 10 */]) {
          					  case 0:
/*<113>*/ 						switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          						  case 0:
/*<198>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 114, 'param3': 31}
/*<114>*/ 							printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x0000001e>Vind alsjeblieft mijn geliefde <color blue<gigantor>coloroff>!")
          						  case 1:
/*<203>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 112, 'param3': 31}
/*<112>*/ 							printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x0000001e>Zou je misschien naar mijn geliefde\n<color blue<gigantor>coloroff> willen zoeken? Ik zou je zo\ndankbaar zijn!\n[1-]Natuurlijk![2]Liever niet.")
          							flw_57:
/*< 57>*/ 							switch (choice(2)) {
          							  case 0:
/*< 60>*/ 								printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00110220>O? Echt waar? Hartelijk bedankt!\nJe hebt geen idee hoeveel dit voor\nmij betekent!")
/*< 61>*/ 								printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x001d0200>Mijn geliefde <color blue<gigantor>coloroff>... Vind hem zo\nsnel mogelijk. Hij moet ergens zijn...\nen helemaal in zijn eentje. <0x10009:0x00110b00>Help mij,\nalsjeblieft!")
/*< 62>*/ 								story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */] = true;
/*<110>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 59>*/ 								printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00010021>Dat kun jij wel makkelijk zeggen, maar\nik kan niet zonder mijn geliefde\nhuisdier!")
/*<109>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							}
          						}
          					  case 1:
/*<100>*/ 						switch (zone_temp_flags[3 /* 0x1 08 */]) {
          						  case 0:
/*<126>*/ 							switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          							  case 0:
/*<125>*/ 								printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x0000001e>Als je terug naar Skyloft wilt gaan,\nhoef je alleen maar op het bed te gaan\nliggen en tot de ochtend te slapen.")
          								flw_98:
/*< 98>*/ 								zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 55>*/ 								switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          								  case 0:
/*< 54>*/ 									switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          									  case 0:
/*< 58>*/ 										switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          										  case 0:
/*<196>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 63, 'param3': 31}
/*< 63>*/ 											printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00010b00>Trouwens..\n\n\n\n<0x10009:0x001d0b00>Over mijn geliefde <color blue<gigantor>coloroff>... Heb je hem\nal gevonden?")
          										  case 1:
/*<197>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 56, 'param3': 31}
/*< 56>*/ 											printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00010600>Als je het goed vindt, deel ik iets\npersoonlijks met jou...\n\n\n<0x10009:0x00000b00>Mijn geliefde <color blue<gigantor >coloroff>is verdwenen,\nmet kooi en al...\n\n\n<0x10009:0x001d0b00>Het is een regelrechte tragedie! Wat\nmoet ik zonder mijn zeldzame,\nvriendelijke beestje?\n[1-]Ik ga op zoek![2]Het komt goed.")
          											goto flw_57
          										}
          									  case 1:
/*<124>*/ 										printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00000c00>Hm<0x10006:0xfbcd>...")
          									}
          								  case 1:
          								}
          							  case 1:
/*<101>*/ 								printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x0000001e>Zeg, wat kijk je verwonderd? Hoewel,\nik snap het wel. Je kijkt tenslotte naar\neen klein wondertje.\n\n<0x10009:0x001c0a00>Toffe tor, dit is een <color blue<gigantor>coloroff>.\n\n\n\n<0x10009:0x001b0500>Hij is mijn huisdier en ook mijn\ndierbaarste bezit.\n\n\nIk kan wel de hele nacht naar hem\nstaren...")
          								goto flw_98
          							}
          						  case 1:
/*<102>*/ 							printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x0000001e>Toen je gisteren op mijn bed ging liggen,\nverwachtte ik niet dat je nu pas wakker\nzou worden. Je hebt geslapen als een mot!\n\n<0x10009:0x00000b00>Jammer dat je qua gewicht niet op een\nmot lijkt! Het fietsen kost me nogal wat\nenergie met jou aan boord.\n\n<0x10009:0x00000200>Maar dat is geen probleem, toffe tor!\nIk begin er zelfs al aan te wennen.\nDankzij jou krijg ik een geweldige\nconditie!")
          							goto flw_98
          						}
          					}
          				  case 1:
/*<173>*/ 					switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          					  case 0:
/*<172>*/ 						switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          						  case 0:
/*<174>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 116, 'param3': 31}
          							flw_116:
/*<116>*/ 							story_flags[283 /* us: 805A9AFB 0x20, jp: 805ACD7B 0x20 */] = true;
/*< 53>*/ 							printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x0000021e>Hé, toffe tor, je bent wakker! Je lag zo\nlekker te slapen dat ik het niet over m'n\nhart kon verkrijgen om je wakker te\nmaken.\n<0x10009:0x00000500>Maar eerlijk gezegd maak je de winkel\nwel ietsjes zwaarder... Haha!\n[1-]Toffe tor?[2-]Waar ben ik?")
/*< 51>*/ 							switch (choice(2)) {
          							  case 0:
/*< 52>*/ 								printf(/* textboxtype: 1, unk: 0, line: 36 */ "O, sorry, dat glipte er zo uit. Je vindt\nhet niet erg, hoop ik? Het zit zo, ik ben\ndol op insecten, vooral op mijn gigantor.\n\n<0x10009:0x00001000>Sommigen lachen erom<0x10006:0xfbcd>...<0x10006:0x00cd> <pause 30><0x10009:0x00000200>maar alleen\nmuggenzifters lijken zich er echt aan\nte storen! Haha!")
/*<103>*/ 								printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000200>Dit is mijn eilandje. Zodra de avond\naanbreekt, kom ik hierheen.\n\n\n<0x10009:0x00000200>Het is niets bijzonders, maar ik\nkan me hier fijn ontspannen.\n\n\nJe weet vast dat Loftwings 's avonds niet\nvliegen, dus... ik zal je morgenochtend wel\nterug naar Skyloft moeten brengen.\n\nGa weer op het bed liggen zodra je hier\nklaar bent en je wordt morgen wakker\nop Skyloft.")
          								flw_97:
/*< 97>*/ 								scene_flags[21 'The Sky'][14 /* 0x0 40 */] = true;
          								goto flw_98
          							  case 1:
/*< 96>*/ 								printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000200>Dit is mijn eilandje. Zodra de avond\naanbreekt, kom ik hierheen.\n\n\n<0x10009:0x00000200>Het is niets bijzonders, maar ik\nkan me hier fijn ontspannen.\n\n\nJe weet vast dat Loftwings 's avonds niet\nvliegen, dus... ik zal je morgenochtend wel\nterug naar Skyloft moeten brengen.\n\nGa weer op het bed liggen zodra je hier\nklaar bent en je wordt morgen wakker\nop Skyloft.")
/*<104>*/ 								printf(/* textboxtype: 1, unk: 0, line: 36 */ "O, sorry, dat glipte er zo uit. Je vindt\nhet niet erg, hoop ik? Het zit zo, ik ben\ndol op insecten, vooral op mijn gigantor.\n\n<0x10009:0x00001000>Sommigen lachen erom<0x10006:0xfbcd>...<0x10006:0x00cd> <pause 30><0x10009:0x00000200>maar alleen\nmuggenzifters lijken zich er echt aan\nte storen! Haha!")
          								goto flw_97
          							}
          						  case 1:
          							goto flw_116
          						}
          					  case 1:
          						goto flw_116
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_105_34() {
/*< 39>*/ 	start()
/*< 46>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 72, 'param3': 12}
/*< 72>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 82, 'param3': 13}
/*< 82>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_42:
/*< 42>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "Dat is een <color yellow<net>coloroff>. Weet je wel,\nom insecten mee te vangen.\n\n\nOké, daar zijn er hier niet veel van,\nmaar als je ergens bent waar wel\ninsecten zijn, komt het goed van\npas!\nEn het kost maar <color red<50 rupees>coloroff>, tel je\nwinst maar uit dus! Wat zeg je\nervan?\n[1-]Ik koop het![2]Nee, bedankt.")
          		goto flw_13
          	  case 1:
/*< 81>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 85>*/ 			printf(/* textboxtype: 2, unk: 0, line: 26 */ "")
          			goto flw_13
          		  case 1:
          			goto flw_42
          		}
          	}
          }

