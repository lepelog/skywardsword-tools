          void entrypoint_108_03() {
/*< 32>*/ 	start()
/*<254>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 113, 'next': 33, 'param3': 24}
/*< 33>*/ 	printf("Klaar voor de start? \x0E\x01\x08\x02\x1CDAf!\x0E\x01\x05\x04\x0F\x00")
          }

          void entrypoint_108_20() {
/*<155>*/ 	start()
/*<288>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<289>*/ 		printf("\x0E\x01\x09\x04\x00\x01Al is haar standbeeld er niet meer, de\ngodin is nog steeds bij ons, in onze harten.\nVind je niet, Link?")
          	  case 1:
/*<281>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<282>*/ 			printf("\x0E\x01\x09\x04\x00\x01Het lijkt wel of je elke keer dat ik je\ntegenkom, een beetje sterker bent en\nmeer zelfvertrouwen hebt. Ga zo door,\nLink.")
          		  case 1:
/*<277>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<280>*/ 				printf("\x0E\x01\x09\x04\x00\x01Levias?!<pause28> Ik heb geruchten gehoord over\nwat er daar aan de hand is, maar dat\nzijn maar geruchten.\n\nIk heb helaas niet meer informatie over\ndit onderwerp die ik met je kan delen.\n\n\nPraat anders eens met het hoofd praktijk-\ntraining, <b<meester Cornuylius>>. Ik weet\nzeker dat hij je wel meer hierover kan\nvertellen.")
          			  case 1:
/*<278>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<279>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ik moet toegeven dat ik nu overweeg om\nook een Remlit te nemen. <pause1E>De Triforce?!\nWat is dat?<pause28> Heeft het iets met die kleine\nMia te maken?")
          				  case 1:
/*<156>*/ 					printf("\x0E\x01\x09\x04\x00\x01Op verzoek van de rector zorg ik de\nlaatste tijd voor Mia...\n\n\nHet is gevaarlijk om dat te doen, maar ze\nis zo schattig dat ik er nu zelf ook eentje\nwil hebben!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_04() {
/*< 34>*/ 	start()
/*<150>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 59, 'param3': 32}
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': -1, 'next': 152, 'param3': 50}
/*<152>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 149, 'param3': 49}
/*<149>*/ 	make_actor_do_something(0, 10)
/*<151>*/ 	{'type': 'type3', 'subType': 4, 'param1': 2578, 'param2': 2562, 'next': 35, 'param3': 13}
/*< 35>*/ 	printf("\x0E\x01\x0D\x02\x1906\x0E\x01\x08\x02\x1CDHé, Link! Kijk eens\nomhoog!")
/*< 57>*/ 	set_camera(11, 0)
/*<243>*/ 	make_actor_do_something(1, 10)
/*<212>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 10, 'next': 260, 'param3': 17}
/*<260>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<261>*/ 		printf("\x0E\x01\x09\x04\xA0E\xA01Goedemorgen, Link! Ik zie dat\nje in de <r<Heldenstand >>speelt, zeer indruk-\nwekkend!\n\nHoe dan ook, vandaag is het zover...\nVandaag zal de <r<Vleugelceremonie\n>>plaatsvinden!\n\nBen je er klaar voor? Ik wil je eerst nog\nkort spreken.\n\n\n<g<Focus>> op mij om kort met me te spreken.")
          		flw_64:
/*< 64>*/ 		scene_flags[0 'Skyloft'][36 /* 0x5 10 */] = true;
/*<291>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 253, 'param3': 60}
/*<253>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 293, 'param3': 42}
/*<293>*/ 		scene_flags[0 'Skyloft'][27 /* 0x2 08 */] = true;
          	  case 1:
/*< 56>*/ 		printf("\x0E\x01\x09\x04\xA0E\xA01Goedemorgen, Link! Vandaag\nis het zover, het is de dag van de\n<r<Vleugelceremonie>>!\n\nBen je er klaar voor? O, dat doet me\nergens aan denken. Ik wilde je namelijk\nnog wat vragen.\n\n<g<Focus>> op mij om kort met me te spreken.")
          		goto flw_64
          	}
          }

          void entrypoint_108_21() {
/*<185>*/ 	start()
/*<191>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 189, 'param3': 32}
/*<189>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 186, 'param3': 13}
/*<186>*/ 	printf("\x0E\x01\x08\x02\x1CDZeg, Link!")
/*<187>*/ 	printf("\x0E\x01\n\x04\x12Í\x0E\x01\x09\x04\n\x202Het maakt niet uit hoe hoog je denkt\nte kunnen springen. Hoe hard je ook\n<g<sprint>>, het zal je niet lukken om op die\nmanier op dat dak te komen.")
/*<190>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 192, 'param3': 17}
/*<192>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 188, 'param3': 6}
/*<188>*/ 	set_camera(19, 0)
/*<229>*/ 	printf("Er zou daar een houten kist moeten\nstaan. Pak hem vast met (A) om hem te\nverplaatsen. Zet hem op een plek waar\nje hem als opstapje kunt gebruiken.\nJe kunt op de kist klimmen door\nertegenop te <g<sprinten >>of door er een\ntijdje tegenaan te lopen met \x0E\x02\x04\x02\x9CD.")
          }

          void entrypoint_108_05() {
/*< 36>*/ 	start()
/*<266>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<267>*/ 		printf("")
/*<269>*/ 		switch (choice(2)) {
          		  case 0:
/*<270>*/ 			printf("")
          		  case 1:
/*<268>*/ 			printf("")
          		}
          	  case 1:
/*<265>*/ 		printf("")
          	}
          }

          void entrypoint_108_22() {
/*<207>*/ 	start()
/*<209>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*<210>*/ 		printf("\x0E\x01\x09\x04\x00\x01De ceremonie begint pas zodra je je\nLoftwing hebt gevonden.\n\n\nDe rest is nu niet belangrijk, dus schiet op\nen vind je Loftwing!")
          	  case 1:
/*<211>*/ 		printf("\x0E\x01\x09\x04\x00\x01De start van de ceremonie is uitgesteld\ntot je je Loftwing hebt gevonden. Is dat\ngeen goed nieuws?")
          	}
          }

          void entrypoint_108_06() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf("\x0E\x01\x09\x04\x0B\xA52Je kunt je meester niet zo negeren,\nLink!\n\n\n<r<Focus >>op mij en praat met mij!")
/*<294>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 60}
          }

          void entrypoint_108_23() {
/*<216>*/ 	start()
/*<224>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<225>*/ 		printf("\x0E\x01\x09\x04\x00\x01Hoe gaat het met jou, Link?!\nIs alles goed?\n\n\nAls ik je nog ergens anders mee kan\nhelpen, laat je het maar weten!")
          	  case 1:
/*<220>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<223>*/ 			printf("\x0E\x01\x09\x04\x00\x01De luchtbooraanval is een moeilijke\nmanoeuvre voor het merendeel van de\nLoftwings.\n\nMaar jij en die rode Loftwing van je...\nVoor jullie is hij vast geen enkel\nprobleem!")
          		  case 1:
/*<219>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<222>*/ 				printf("\x0E\x01\x09\x04\x00\x05\x0E\x03\x01\x00Link... Waarom ben je buiten\nom deze tijd?\n\n\nWat zeg je over Levias? Kijk, daar heb ik\nhet liever niet over zo laat op de dag...\n\n\nKom morgenochtend maar terug. Ik\nvertel je dan wel wat ik weet.")
          			  case 1:
/*<218>*/ 				switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          				  case 0:
/*<221>*/ 					printf("\x0E\x01\x09\x04\x00\x01Nou, Link... Gaat het je lukken\nom Zelda te vinden?\n\n\nGeef het niet op! Als iemand Zelda kan\nvinden, ben jij het wel.")
          				  case 1:
/*<217>*/ 					printf("\x0E\x01\x09\x04\x00\x01Je kunt 's nachts geen gebruik van je\nLoftwing maken. Je kunt daarom ook\nniet naar Zelda zoeken.\n\nIk stel voor dat je nu naar bed gaat om uit\nte rusten. Je kunt morgen op zoek naar\nZelda gaan.\n\nAls je niet de tijd neemt om uit te rusten,\nlukt het je niet om de juiste keuzes te\nmaken op stressvolle momenten.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_07() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf("\x0E\x01\x09\x04\n\xA00\x0E\x01\x08\x02\x2CD\x0E\x03\x01\x00Link!\n\n\n\n\x0E\x01\x08\x02\x2CDSnap je het nog steeds niet?!")
          }

          void entrypoint_108_24() {
/*<231>*/ 	start()
/*<244>*/ 	switch (scene_flags[41 /* 0x4 02 */]) {
          	  case 0:
/*<237>*/ 		printf("\x0E\x01\x09\x04\x00\x02Zeg, Link! Dit is niet het juiste\nmoment hiervoor.\n\n\nSchiet op en vind je Loftwing! Je zou\neens met de studenten in de academie\nkunnen praten, want misschien weten zij\nwel iets.")
          	  case 1:
/*<238>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<245>*/ 			printf("\x0E\x01\x09\x04\x00\x02Hé, Link! Waarom loop je\nzomaar je meester voorbij?!\n\n\nKom eens even hier.")
          		  case 1:
/*<232>*/ 			printf("\x0E\x01\x09\x04\x00\x02Hé, Link! Waarom negeer je je\nmeester en loop je me zomaar voorbij?\n\n\nKom hier en luister naar wat ik je te\nzeggen heb!")
          		}
          	}
          }

          void entrypoint_108_08() {
/*< 75>*/ 	start()
/*< 87>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<208>*/ 		printf("")
          	  case 1:
/*< 82>*/ 		switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          		  case 0:
/*< 84>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 31}
/*< 76>*/ 			printf("\x0E\x01\x09\x04\x00\x01Zeg, Link. Hoe verloopt je\nzoektocht naar Zelda? Heb je haar al\ngevonden?\n\n\x0E\x01\x09\x04\x00\x05Wat? <pause28>Levias? Dus je hebt met de rector\ngesproken?\n\n\nAls ik gelijk heb, bevindt Levias zich in de\ndonderwolk. Maar\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í<pause19> het is niet de Levias\ndie wij kennen.\n\n\x0E\x01\x06\x02\xFECDNee, dat...<pause28>\x0E\x01\x06\x02\x1CDis een <r<monster>>!\n\n\n\n\x0E\x01\x09\x04\x00\x0FHet lijkt op Levias, maar de laatste keer\ndat ik hem benaderde, stormde hij op me\naf. En de blik in zijn ogen... was vol haat.\n\nMensen veranderen. Of beter gezegd,\nwezens veranderen. \x0E\x01\x06\x02\xFECDMaar misschien zit er\nmeer achter...\x0E\x01\x06\x02Í<pause19> en is hij bezeten door iets.\n<pause19>Zo kwam het op mij over.")
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 77, 'param3': 6}
/*< 77>*/ 			printf("\x0E\x01\x09\x04\x00\x05Wat?<pause28> Je wilt met Levias praten?\n\n\n\n\x0E\x01\x06\x02\xFECDDat is...\x0E\x01\x06\x02Í onmogelijk. Volgens mij is hij niet\nin staat om te luisteren.\n\n\n\x0E\x01\x06\x02\xFECDEn...\x0E\x01\x06\x02Í zelfs als je dichtbij genoeg komt om\nmet hem te praten, vliegt hij je waar-\nschijnlijk aan en tuimel je voor je het\nweet tussen de wolken naar beneden!")
/*<203>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 200, 'param3': 6}
/*<200>*/ 			printf("\x0E\x01\x09\x04\x00RWat? <pause28>Je bent nog steeds van plan om te\ngaan?\n\n\n\x0E\x01\x06\x02\xFECDIk begrijp het...\x0E\x01\x06\x02Í Je doet alles om Zelda\nte vinden.\n\n\nGoed...<pause1E> Volgens mij is er niets dat ik\nkan zeggen waardoor je van gedachten\nverandert.")
/*<204>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 201, 'param3': 6}
/*<201>*/ 			printf("Hé, ik heb een idee! Kom met me mee!")
/*< 85>*/ 			story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */] = true;
/*< 86>*/ 			changeScene(0, 0) // 
          		  case 1:
/*<275>*/ 			switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          			  case 0:
/*<276>*/ 				printf("\x0E\x01\x09\x04\x00\x01O, hallo, Link! <pause1E>Hm? De\nTriforce?\n\n\nSorry, ik weet niet wat dat is. Je zou het\naan de rector kunnen vragen.")
          			  case 1:
/*< 83>*/ 				printf("\x0E\x01\x09\x04\x00\x01O, Link! Hoe verloopt je\nzoektocht naar Zelda?\n\n\nSorry dat ik deze volledig aan jou over-\nlaat. Ik weet dat je er alles aan doet om\nhaar te vinden.")
          			}
          		}
          	}
          }

          void entrypoint_108_09() {
/*< 78>*/ 	start()
/*< 79>*/ 	printf("\x0E\x01\x09\x04\x00\x02Levias bevindt zich in de donderwolk.\nHij gedraagt zich zo vreemd... Alsof\nhij bezeten is door iets.\n\nAls we hem daarvan kunnen bevrijden,\nkan hij misschien tot zichzelf komen.\n\n\nLuister goed, Link, want ik ga\nje een krachtige techniek leren voor het\nberijden van je Loftwing.\n\n\x0E\x01\x09\x04\x00\x03Deze techniek staat bekend als de\n<r<luchtbooraanval>>!")
/*<258>*/ 	set_camera(22, 0)
/*<256>*/ 	printf("Met de luchtbooraanval kun je Levias\nverlossen van de duistere macht die\ninvloed over hem heeft.\n\nDe techniek is eenvoudig. Je hoeft enkel\nop \x0E\x02\x04\x02\x1ECD te drukken.\x0E\x01\x11\x02\x10CD\n\n\nMaar het versnellende effect blijft langer\ndan elke andere <r<aanval >>die je tot nu toe\nhebt gebruikt. Het wordt lastig om stabiel\nte blijven.\nHet is daarom een techniek die we enkel\naan studenten van de ridderacademie\nleren die op het hoogste niveau kunnen\nvliegen.\nHet is dus wat vroeg voor jou, maar...\n<pause1E>dit zijn bijzondere omstandigheden, dus\nmaak ik voor jou een uitzondering. Maar\nik zal je wel op de proef stellen.")
/*<259>*/ 	set_camera(-1, 0)
/*<257>*/ 	printf("\x0E\x01\x09\x04\x00\x04Duik eerst van deze steiger en roep je\nLoftwing.")
/*< 93>*/ 	story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*< 98>*/ 	story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<248>*/ 	zone_temp_flags[13 /* 0x0 20 */] = true;
          }

          void entrypoint_108_10() {
/*< 90>*/ 	start()
/*<128>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*<129>*/ 		printf("\x0E\x01\x09\x04\x00\x0FHet is afschuwelijk wat er met Zelda is\ngebeurd.\n\n\nMaar je moet er jezelf niet de schuld van\ngeven. Het was een ongeluk.")
          	  case 1:
/*<127>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<196>*/ 			switch (scene_flags[91 /* 0xA 08 */]) {
          			  case 0:
/*<198>*/ 				printf("\x0E\x01\x09\x04\x00\x01Laat de ceremonie maar aan ons over.\nZorg jij ervoor dat je zo snel mogelijk je\nLoftwing vindt.")
          			  case 1:
/*<126>*/ 				printf("\x0E\x01\x09\x04\x00\x0FWat is er mis, Link? <pause1E>Wat?!\nJe Loftwing komt niet als je hem roept?\n\n\nEen Loftwing reageert alleen niet op het\nroepen van zijn rijder\x0E\x01\x06\x02\xFECD... als er iets mis is!\n\n\nHeb je al met meester<b< Rafaël >>hierover\ngesproken? Hij leidt vandaag de\nceremonie en moet van je probleem\nop de hoogte worden gebracht!\nO? Nou, als de rector zich bewust is van\nde situatie, dan zal hij vast de ceremonie\nvoor je uitstellen.\n\nZorg jij maar dat je je Loftwing vindt!")
/*<199>*/ 				scene_flags[0 'Skyloft'][91 /* 0xA 08 */] = true;
          			}
          		  case 1:
/*<194>*/ 			switch (scene_flags[90 /* 0xA 04 */]) {
          			  case 0:
/*<195>*/ 				printf("\x0E\x01\x09\x04\x00\x01Trouwens... Je lijkt me altijd te verwarren\nmet meester <b<Rafaël>>!\n\n\nIk ben natuurlijk <b<Cornuylius>>. Ik heb wit\nhaar en geef praktijklessen. Meester\n<b<Rafaël >>heeft bruin haar en geeft theorie-\nlessen. Vergeet dat niet!")
          			  case 1:
/*< 91>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hé, Link. Het is eindelijk\nzover; vandaag vindt de Vleugelceremonie\nplaats!\n\nDit is je kans om te laten zien wat je\nkunt. Al die vaardigheden die je van\nmeester <b<Rafaël>> en mij hebt geleerd!\n\nNu we het erover hebben, weet je nog dat\nje kunt <r<rondkijken >>met (^)?\x0E\x01\x11\x02\x8CD\n\n\n<g<Druk >>dus op \x0E\x02\x04\x02\x22CD als je je omgeving beter\nwilt bekijken!\x0E\x01\x11\x02\x8CD")
/*<197>*/ 				scene_flags[0 'Skyloft'][90 /* 0xA 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_108_11() {
/*<122>*/ 	start()
/*<162>*/ 	switch (scene_flags[20 /* 0x3 10 */]) {
          	  case 0:
/*<272>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<274>*/ 			printf("\x0E\x01\x09\x04\x00\x01Zou er echt een wereld onder de wolken\nzijn?\n\n\nAls deze bestaat, denk ik dat het terrein\nprecies het tegenovergestelde is van onze\nweelderig groene wereld. Er zijn vast\nenkel rotsen en zand te vinden...")
          		  case 1:
/*<271>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<273>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hoe verloopt je zoektocht naar Zelda?\n\n\n\nVergeet niet om een bed op te zoeken als\nje moe begint te worden. Door even te\nslapen herstel je hartjes!")
          			  case 1:
/*<166>*/ 				printf("\x0E\x01\x09\x04\x00\x01Wees voorzichtig en veel succes bij je\nzoektocht naar Zelda!")
          			}
          		}
          	  case 1:
/*<167>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 123, 'param3': 31}
/*<123>*/ 		printf("\x0E\x01\x09\x04\x00\x11O, Link, ik heb het nieuws\ngehoord! Zelda is door de wolken gevallen\nen jij gaat nu naar haar op zoek, toch?\n\nDe rector heeft me verteld dat er land\nonder de wolken ligt... Weet jij daar iets\nover?")
/*<168>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<170>*/ 			printf("Dus dat is het beroemde zwaard... Maar\nje hebt ook een schild nodig<pause0A>.<pause0A>.<pause0A>.<pause0A> O, zo te\nzien heb je er al eentje! Prachtig!\n\nHier, je krijgt een cadeautje van me.")
          			flw_171:
/*<171>*/ 			give_item(4 0x04);
/*<255>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 172, 'param3': 12}
          			flw_172:
/*<172>*/ 			printf("Als je niet weet hoe je je schild moet\ngebruiken, kan <b<riddercommandant\nAerend >>je wel een paar lessen geven in\nde trainingsruimte.")
/*<165>*/ 			scene_flags[0 'Skyloft'][20 /* 0x3 10 */] = true;
/*<213>*/ 			switch (scene_flags[89 /* 0xA 02 */]) {
          			  case 0:
          			  case 1:
/*<214>*/ 				story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<215>*/ 				scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
          			}
          		  case 1:
/*<246>*/ 			switch (is_adventure_pouch_full()) {
          			  case 0:
/*<247>*/ 				printf("Dus dat is het beroemde zwaard! O, maar\nje hebt daar niet veel aan zonder een\nschild om je mee te beschermen!\n\nHelaas lijk je geen plek te hebben voor\nnieuwe voorwerpen. Hier, neem dit dan\nmaar. Beschouw het maar als een cadeau\nvan mij.")
          				goto flw_171
          			  case 1:
/*<169>*/ 				printf("Dus dat is het beroemde zwaard! O, maar\nje hebt daar niet veel aan zonder een\nschild om je mee te beschermen! Hier,\nneem dit maar met je mee!")
/*<163>*/ 				give_item(116 0x74);
/*<164>*/ 				printf("Het houten schild is licht en goed\nmanoeuvreerbaar, maar ook het\nzwakst van alle schilden. Het is\nook kwetsbaar voor vuur.\nAls het breekt, kun je een nieuw schild\nkopen in de bazaar.\n\n\nOm het schild te gebruiken <g<houd je >>\x0E\x02\x04\x02\x28CD\n<g<ingedrukt>>, selecteer je het schild en laat je\n\x0E\x02\x04\x02\x28CD los.\x0E\x01\x11\x02\xECD")
          				goto flw_172
          			}
          		}
          	}
          }

          void entrypoint_108_12() {
/*< 94>*/ 	start()
/*<205>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<206>*/ 		printf("")
          	  case 1:
/*< 96>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*< 80>*/ 			printf("\x0E\x01\x09\x04\x00\nO! Je hebt binnen de tijd 10 doelwitten\ngeraakt!\n\n\nWat heb je je Loftwing goed onder\ncontrole! Ik wist wel dat je het kon,\nLink. En wat is je rode\nLoftwing toch prachtig...\nJe krijgt toestemming van mij om vanaf\nnu de luchtbooraanval te gebruiken als\nbevoegde Loftwingrijder.")
/*< 81>*/ 			printf("Wat we nu moeten bespreken is hoe je Levias\ngaat vinden.\n\n\nMisschien kan de <r<eigenaar van De Oranje\nPoen >>je helpen. Elk jaar offert hij wat van zijn\npompoensoep aan Levias.\n\nGa naar De Oranje Poen en vraag hem om\ninformatie.")
/*<106>*/ 			scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          		  case 1:
/*< 95>*/ 			switch (story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */]) {
          			  case 0:
/*< 97>*/ 				printf("\x0E\x01\x09\x04\x00\x0FAls het je niet lukt om 10 doelwitten te\nraken binnen 120 seconden, kan ik je geen\ntoestemming geven om deze gevaarlijke\ntechniek te gebruiken.\nIk blijf hier nog wel een tijdje, dus je kunt\nwel even uitrusten en later terugkomen.\nZeg het maar wanneer je het opnieuw wilt\nproberen.")
/*< 99>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<226>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<227>*/ 				story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */] = false;
/*<104>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_108_13() {
/*<100>*/ 	start()
/*<102>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<103>*/ 		printf("\x0E\x01\x09\x04\x00\x01De Oranje Poen bevindt zich ten\nzuidoosten van Skyloft en wordt door\nde bewoners gebruikt als verzamelplek.\n\nDe dochter van de eigenaar, <b<Kala>>, werkt\ner ook. Ze heeft een lieflijke stem.\n\n\n<pause1E>Ik ben ook\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í fan van haar. Maar vertel\ndat niet door, oké?")
          	  case 1:
/*<105>*/ 		switch (scene_flags[77 /* 0x8 20 */]) {
          		  case 0:
          			flw_107:
/*<107>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hé, Link! Wil je de luchtboor-\naanval oefenen?\n[1]Ja![2-]Later...")
/*<108>*/ 			switch (choice(2)) {
          			  case 0:
/*<109>*/ 				printf("\x0E\x01\x09\x04\x00\x03Uitstekend. Ik hoopte al dat je dat zou\nzeggen. Nou, duik dan maar van deze\nsteiger.")
/*<111>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = false;
/*<112>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*<113>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<250>*/ 				zone_temp_flags[13 /* 0x0 20 */] = true;
          			  case 1:
/*<110>*/ 				printf("Het is prima om te wachten tot je er zeker\nvan bent dat het je gaat lukken!\n\n\nIk ben hier nog wel een tijdje, dus kom\nmaar terug zodra je er klaar voor bent.")
/*<252>*/ 				zone_temp_flags[13 /* 0x0 20 */] = false;
          			}
          		  case 1:
/*<121>*/ 			switch (story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */]) {
          			  case 0:
/*<101>*/ 				printf("\x0E\x01\x09\x04\x00\x01Wat is er aan de hand? Spring snel over\nde rand! Of heb je je bedacht?\n[1]Ik ga ervoor![2-]Ik stop.")
/*<116>*/ 				switch (choice(2)) {
          				  case 0:
/*<120>*/ 					printf("\x0E\x01\x09\x04\x00\x03Ja, ik hoopte al dat je dat zou zeggen.\nSpring op je Loftwing, Link!")
/*<249>*/ 					zone_temp_flags[13 /* 0x0 20 */] = true;
          				  case 1:
/*<117>*/ 					story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<118>*/ 					story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<119>*/ 					printf("Het is prima om te wachten tot je er zeker\nvan bent dat het je gaat lukken!\n\n\nIk ben hier nog wel een tijdje, dus kom\nmaar terug zodra je er klaar voor bent.")
/*<251>*/ 					zone_temp_flags[13 /* 0x0 20 */] = false;
          				}
          			  case 1:
          				goto flw_107
          			}
          		}
          	}
          }

          void entrypoint_108_30() {
/*<141>*/ 	start()
/*<142>*/ 	printf("Luister, Link!\n\n\n\nIk heb je Loftwing geleerd om de\n<g<luchtbooraanval >>uit te voeren als je\nop \x0E\x02\x04\x02\x1ECD drukt.")
          }

          void entrypoint_108_14() {
/*<114>*/ 	start()
/*<115>*/ 	printf("")
          }

          void entrypoint_108_31() {
/*<143>*/ 	start()
/*<146>*/ 	printf("Gebruik de <r<luchtbooraanval >>om de <r<10\ndoelwitten >>te breken die op die zwevende\nrotsen zijn geplaatst.")
          }

          void entrypoint_108_15() {
/*<124>*/ 	start()
/*<125>*/ 	printf("\x0E\x01\x09\x04\x00\x02Hé, Link! Waar ga je naartoe?\nDit is een competitie! Duik snel van die\nsteiger!")
          }

          void entrypoint_108_32() {
/*<144>*/ 	start()
/*<147>*/ 	printf("Als je 10 doelwitten binnen <r<120 seconden\n>>kunt vernietigen, dan heb je laten zien\ndat je een vaardige Loftwingrijder bent.")
          }

          void entrypoint_108_16() {
/*<130>*/ 	start()
/*<283>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<285>*/ 		switch (zone_temp_flags[15 /* 0x0 80 */]) {
          		  case 0:
/*<287>*/ 			printf("\x0E\x01\x09\x04\x00\x16Wat interessant... De monsters die\nnormaal gesproken Skyloft 's nachts\nonveilig maken, zijn nergens te zien.\nEn de Remlits zijn niet agressief.\nWat zou de reden hiervoor zijn?")
          		  case 1:
/*<284>*/ 			printf("\x0E\x01\x09\x04\x00\x0DKijk, Link! Hoewel de avond\nal is gevallen, toont Mia niet de nachte-\nlijke agressie die we gewend zijn van\nRemlits! Dit is fantastisch!")
/*<286>*/ 			zone_temp_flags[15 /* 0x0 80 */] = true;
          		}
          	  case 1:
/*<157>*/ 		switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          		  case 0:
/*<158>*/ 			printf("\x0E\x01\x09\x04\x00\x16's Nachts blijf ik ver van Mia vandaan.\n\n\n\nZe is al eens na het vallen van de avond\nde academie ingeslopen.\n\n\nDat veroorzaakte heel wat oproer.\nDaarom raad ik je aan om extra voor-\nzichtig te zijn als je 's nachts buiten bent.")
          		  case 1:
/*<131>*/ 			printf("\x0E\x01\x09\x04\x00\x04Het is gevaarlijk om 's nachts buiten te\nzijn. Ja, dat kun je maar beter vermijden!\n\n\nZelfs Mia, het geliefde huisdier van de\nrector, is gevaarlijk zodra het donker\nwordt... 's Nachts daalt er over Skyloft\neen duistere energie neer.")
          		}
          	}
          }

          void entrypoint_108_33() {
/*<145>*/ 	start()
/*<148>*/ 	printf("Oké, laten we beginnen!")
          }

          void entrypoint_108_17() {
/*<132>*/ 	start()
/*<133>*/ 	printf("\x0E\x01\x09\x04\x00\x02\x0E\x03\x01\x00Link! Waar ga je naartoe?\n\n\n\nDuik van de steiger en roep je Loftwing.")
          }

          void entrypoint_108_18() {
/*<134>*/ 	start()
/*<135>*/ 	printf("\x0E\x01\x09\x04\x00\x02O, Link! Je wilt dat ik je les\ngeef?\n[1]Graag![2-]Nee...")
/*<136>*/ 	switch (choice(2)) {
          	  case 0:
/*<138>*/ 		printf("Nou, nou! Wat een enthousiasme!\n\n\n\nLaten we het over de geschiedenis van\nSkyloft hebben!\n\n\nSkyloft is een eiland dat al heel lang op\ndeze locatie zweeft. Al duizenden jaren.\n\n\nOnze voorouders hebben altijd op dit\neiland en op de nabijgelegen eilanden\ngewoond.\n\n\x0E\x01\x09\x04\x09\xA00Onder Skyloft ligt een ondoordringbare\nlaag wolken. Niemand die er doorheen is\ngevallen, is ooit terug naar Skyloft\ngekomen.\nEr wordt gezegd dat er onder de wolken\nhelemaal niets te vinden is!\n\n\n\x0E\x01\x09\x04\n\xA00Maar dat is een mooie plek om te\nstoppen. En jij kunt je maar beter\nvoorbereiden op de Vleugelceremonie.")
          	  case 1:
/*<137>*/ 		printf("O, oké... De Vleugelceremonie vindt\nvandaag plaats, dus worden er geen\nlessen gegeven!\n\nKun je niet beter naar buiten gaan en je\nvoorbereiden op de ceremonie?")
          	}
          }

          void entrypoint_108_01() {
          	start()
/*<  9>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 71>*/ 		switch (scene_flags[41 /* 0x4 02 */]) {
          		  case 0:
/*< 63>*/ 			printf("Ik zal zien of ik iets voor je kan doen wat\nbetreft de ceremonie. Probeer jij maar zo\nsnel mogelijk je Loftwing te vinden!")
          		  case 1:
/*< 62>*/ 			printf("\x0E\x01\x09\x04\x00\x01Wat is er, Link? Je bent een\nbeetje bleek...\n\n\nWat?!<pause32> Je Loftwing is vermist?! Dan snap\nik wel waarom je zo van streek bent.\nDenk je\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í dat je hem kunt vinden?\n\nJe gaat nu naar hem op zoek?! Maar hoe\nkun je dan nog op tijd bij de ceremonie\nzijn?!\n\nMaar zonder vogel ben je, zogezegd,\n<r<vogelvrij >>tijdens de ceremonie\x0E\x01\x06\x02\xFCCD...<pause1E>\n\n\n\x0E\x01\x09\x04\x00\x05\x0E\x01\x06\x02\x2CDAhum. Pardon...<pause1E>")
/*<159>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*<160>*/ 				printf("De rector vraagt of ik naar hem toe\nkan komen?\n\n\nGeen probleem, ik ga meteen.\n\n\n\nIk ben je nog iets schuldig voor je hulp,\ndus maak je maar geen zorgen over de\nceremonie en vind zo snel mogelijk\nje Loftwing.")
          				flw_72:
/*< 72>*/ 				scene_flags[0 'Skyloft'][41 /* 0x4 02 */] = true;
          			  case 1:
/*<161>*/ 				printf("Misschien word je nu gestraft voor al\ndie keren dat je tijdens de les niet naar\nmij hebt geluisterd...\n\nHoe dan ook... Je zei dat de rector naar\nmij op zoek is?\n\n\nIn dat geval, maak je maar geen zorgen\nom de ceremonie. Ga snel op zoek naar\nje Loftwing!")
/*<239>*/ 				story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = false;
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 48>*/ 		switch (scene_flags[28 /* 0x2 10 */]) {
          		  case 0:
/*< 51>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*< 10>*/ 				printf("\x0E\x01\x09\x04\n\x404Ik ben zo blij dat Mia weer veilig is.\n\n\n<b<\n>>\x0E\x01\x09\x04\x00\xA00Wat is het toch een vreemd wezen, de\n<b<Remlit>>. Ze is nu o zo schattig, maar\n's nachts is dat een ander verhaal!\n[1]Waarom?[2]'s Nachts?")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf("Hm... Weet je niet wat er 's nachts\nmet Remlits gebeurt?\n\n\nHet is werkelijk angstaanjagend...")
          					flw_13:
/*< 13>*/ 					printf("\x0E\x01\x09\x04\x00\x16Als het hier op Skyloft donker wordt,\nworden wezens zoals deze Remlit bezeten\ndoor een duistere macht.\n\nEn monsters die zich overdag in\ngrotten verbergen, komen tevoorschijn\nen maken het eiland onveilig.\n\nDaarom durft niemand hier zijn huis\nte verlaten zodra het donker is. Al zeker\nniet als dat niet hoeft.\n\nJongeren als jij, in training om ridder te\nworden, kunnen dit soort gevaren wel\naan. Jij kunt jezelf verdedigen!\n\nMaar het is toch slim om op je hoede\nte zijn als je na het vallen van de avond\nnog buiten bent.")
          				  case 1:
          					goto flw_13
          				}
          			  case 1:
/*< 92>*/ 				set_camera(17, 0)
/*< 49>*/ 				printf("\x0E\x01\x09\x04\x0F\x40DJe hebt Mia te pakken kunnen krijgen!\nDat was een knap staaltje klimwerk!\n\n\n<pause23>\x0E\x01\x09\x04\x09\x400Bedankt dat je me hebt geholpen terwijl je\nhet zelf zo druk hebt, Link! Ik\nkan Mia nu maar beter wat voer geven...")
/*<154>*/ 				set_camera(20, 0)
/*< 52>*/ 				printf("Vertel de rector alsjeblieft dat we zijn\nhuisdier hebben gevonden. Hij zou bij het\n<r<standbeeld van de godin>> moeten zijn.")
/*<240>*/ 				set_camera(21, 0)
/*<241>*/ 				printf("Zelda is bij hem, geloof ik, mocht je naar haar\nop zoek zijn.\n\n\nO ja, en je hebt ook wel een beloning verdiend.\nHet stelt niet veel voor, maar alsjeblieft! Niet\nverder vertellen, oké?")
/*<242>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 50, 'param3': 42}
/*< 50>*/ 				scene_flags[0 'Skyloft'][30 /* 0x2 40 */] = true;
/*<292>*/ 				give_item(4 0x04);
          			}
          		  case 1:
/*< 46>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*< 47>*/ 				printf("\x0E\x01\x09\x04\x00\x06Wat is er, Link?")
/*< 61>*/ 				set_camera(14, 0)
/*< 60>*/ 				printf("Als je die muur omhoog sprint, is er een\nrichel waaraan je kunt <g<hangen>>!\n\n\nWees voorzichtig terwijl je je aan de\nrand vasthoudt en vergeet niet op je\n<r<energiemeter>> te letten.")
          			  case 1:
/*<  6>*/ 				switch (temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<  7>*/ 					printf("\x0E\x01\x09\x04\x09\x400Kun je Mia naar me terugbrengen?\n[1]Geen probleem![2]Nee.")
/*<  8>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_2:
/*<  2>*/ 						printf("\x0E\x01\x09\x04\x09\x40DFantastisch! Ik weet dat je haast hebt,\ndus ik stel het op prijs dat je de tijd neemt\nom te helpen.")
/*< 43>*/ 						{'type': 'type3', 'subType': 4, 'param1': 3328, 'param2': 0, 'next': 44, 'param3': 22}
/*< 44>*/ 						printf("\x0E\x01\x09\x04\x09\x400Je zou daar verderop omhoog moeten\nkunnen klimmen. Om er te komen moet\nje eerst naar dat afdakje klimmen via de\nrichel aan de muur.\n\x0E\x01\x07\x04\xFF00\x00Het spijt me heel erg, maar ik weet dat je\neen goeie klimmer bent, dus dit is vast\ngeen probleem voor jou.")
/*< 45>*/ 						temp_flags[2 /* 0x1 04 */] = true;
/*<234>*/ 						story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          					  case 1:
/*<228>*/ 						printf("\x0E\x01\x09\x04\x00\xA00Ik begrijp het...\n\n\n\nKun je de rector alsjeblieft vertellen dat\nik Mia heb gevonden en dat hij zich dus\ngeen zorgen hoeft te maken?")
          					}
          				  case 1:
/*< 68>*/ 					switch (scene_flags[38 /* 0x5 40 */]) {
          					  case 0:
/*<230>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 						printf("\x0E\x01\x09\x04\x00\x01Hallo, Link! Ga je nog snel\neven oefenen voor de Vleugelceremonie\nbegint?\n\nO? <pause1E>Je hebt een afspraak met iemand?\n<pause1E><b<Zelda >>wacht op je?")
/*< 42>*/ 						printf("Nu je er toch bent...\n\n\n\nZelda's vader, rector <b<Gaepora>>, heeft\neen huisdier genaamd <r<Mia>>. En... ze\nis weer eens weggelopen.")
/*<236>*/ 						set_camera(12, 0)
/*<235>*/ 						printf("Kijk!\x0E\x01\n\x04\x10Í Daar is ze! Zie je haar?\n\n\n\n\x0E\x01\n\x04\xFFFFÍDe rector en Zelda zijn druk bezig met de\nvoorbereidingen voor de ceremonie...\n\n\nIk dacht dat ik Mia nog wel even kon\nvoeren, maar de ceremonie begint zo en ik\nmoet me nog omkleden en, nou... tja...\n\n\x0E\x01\x07\x04\xFF00\x00Kun je Mia naar me terugbrengen?\n[1]Natuurlijk![2]Ik heb geen tijd...")
/*<  4>*/ 						switch (choice(2)) {
          						  case 0:
/*< 54>*/ 							set_camera(-1, 0)
          							goto flw_2
          						  case 1:
/*< 55>*/ 							set_camera(-1, 0)
/*<  3>*/ 							printf("\x0E\x01\x09\x04\x00\xA00Ik begrijp het...\n\n\n\nKun je de rector alsjeblieft vertellen dat\nik Mia heb gevonden en dat hij zich dus\ngeen zorgen hoeft te maken?")
/*<  5>*/ 							temp_flags[1 /* 0x1 02 */] = true;
/*<233>*/ 							story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          						}
          					  case 1:
/*< 65>*/ 						switch (scene_flags[37 /* 0x5 20 */]) {
          						  case 0:
/*< 89>*/ 							set_camera(9, 0)
/*< 67>*/ 							printf("\x0E\x01\x09\x04\x0B\xA06Waar wacht je nog op? Luister nou toch\neens naar je meester!")
          						  case 1:
/*<153>*/ 							story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = false;
/*<173>*/ 							{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 100, 'next': 88, 'param3': 17}
/*< 88>*/ 							set_camera(9, 0)
/*<263>*/ 							switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          							  case 0:
/*<264>*/ 								printf("\x0E\x01\x09\x04\x0B\xA0DUitstekend! Onthoud dus goed dat je\nmakkelijker met een persoon kunt\nspreken door op die persoon te <g<focussen>>.\n\n\x0E\x01\x09\x04\x00\xC04Je kijkt naar me alsof je dit allemaal al\nwist. Zelfs als dat zo is, kan het geen\nkwaad om nuttige informatie te herhalen.\n\n\x0E\x01\x09\x04\x00\xA00Wanneer je het spel <r<in de Heldenstand\nspeelt>>, <pause1E><pling><r<verlies je twee keer zo veel hartjes>>.\nHet is dus dubbel zo belangrijk dat je goed\nvan het <g<focussen>> gebruik weet te maken.\nO, dit geroep over en weer kan zo niet\nlanger. Kom eerst maar eens hiernaartoe\nvoordat we verder praten.")
          								flw_58:
/*< 58>*/ 								set_camera(10, 0)
/*< 41>*/ 								printf("\x0E\x01\x09\x04\x0B\xA00Probeer maar eens boven op die houten\nkratten te klimmen door tegen ze op te\n<g<sprinten>>!\n\nDat kleine sprongetje moet voor jou een\neitje zijn, of niet soms?\n\n\nKom op, probeer het maar eens!")
/*< 66>*/ 								scene_flags[0 'Skyloft'][37 /* 0x5 20 */] = true;
/*<290>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': -1, 'param3': 60}
          							  case 1:
/*<262>*/ 								printf("\x0E\x01\x09\x04\x0B\xA0DUitstekend! Onthoud dus goed dat je\nmakkelijker met een persoon kunt\nspreken door op die persoon te <g<focussen>>.\n\nZelfs wanneer je nergens op kunt\nfocussen, kun je zo snel en makkelijk\nde camera naar voren te richten.\n\nO, dit geroep over en weer kan zo niet\nlanger. Kom eerst maar eens hiernaartoe\nvoordat we verder praten.")
          								goto flw_58
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_19() {
/*<139>*/ 	start()
/*<140>*/ 	printf("\x0E\x01\x09\x04\x00\x04Hé! Je zit op mijn stoel! Studenten zitten\nop de studentenplaatsen.")
          }

          void entrypoint_108_02() {
/*< 14>*/ 	start()
/*< 38>*/ 	switch (story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */]) {
          	  case 0:
/*< 21>*/ 		printf("\x0E\x01\x09\x04\x00\x02Wat doe je nou? <g<Sprint >>over de rand\nmet (B), <r<duik >>omlaag en spring op je\nLoftwing!\n\nVergeet niet dat je op (v) moet\ndrukken om je Loftwing te roepen!\x0E\x01\x11\x02\x9CD")
          	  case 1:
/*< 28>*/ 		set_camera(1, 0)
/*< 22>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 23, 'param3': 32}
/*< 23>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 24, 'param3': 32}
/*< 24>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': 176, 'param3': 32}
/*<176>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 179, 'param3': 32}
/*<179>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 25, 'param3': 32}
/*< 25>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 		{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 0, 'next': 27, 'param3': 17}
/*< 27>*/ 		{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 0, 'next': 180, 'param3': 17}
/*<180>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 19, 'next': 15, 'param3': 13}
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x02Attentie, attentie. De <r<Vleugelceremonie>>\ngaat zo beginnen.\n\n\nIk begon me al zorgen te maken dat we\nzonder Link zouden moeten\nbeginnen, maar dat is gelukkig niet het\ngeval.\nIk ben blij dat jullie er allemaal bij\nkunnen zijn. Voor we beginnen, zal ik\neerst de regels uitleggen voor deze\ncompetitie.")
          		flw_16:
/*< 16>*/ 		printf("Ik heb een beeldje aan deze vogel\nvastgebonden en die laat ik zo wegvliegen.\n\n\nOp mijn signaal <g<sprint >>je vanaf de\nstartlijn en <r<spring >>je over de rand.\n\n\nVergeet niet om je <g<Loftwing te roepen\n>>met (v) zodra je over de rand springt\nom op zijn rug te landen.\x0E\x01\x11\x02\x9CD\n\nWie de vogel inhaalt en het <r<beeldje >>in\nhanden krijgt, is dit jaar de\nwinnaar.\n\n\x0E\x01\n\x04\x02ÍDat zijn de regels. Ze zijn vrij eenvoudig,\ndenk ik, maar wil je ze nog eens horen?\n[1]Nee![2?]Ja!")
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 30>*/ 			set_camera(3, 0)
/*< 17>*/ 			printf("\x0E\x01\x09\x04\x00\x03\x0E\x01\x08\x02\x1CDPrachtig.\n\n\n\nZoals jullie weten gaat de winnaar van\nvandaag door naar de volgende klas,\nwaarmee die persoon een stap dichter bij\nhet ridderschap is.\nDe winnaar krijgt ook een <r<cadeau >>van de\njonge vrouw die dit jaar de rol van\nde <r<godin >>vervult.\n\nVandaag is om vele redenen een\nbijzondere dag, want we vieren ook het\n25-jarig jubileum van de academie.\n\nOm dit te vieren zal de winnaar van\nvandaag het cadeau boven op het\n<r<standbeeld van de godin>> ontvangen.\n\nIk heb gehoord dat de jonge vrouw die dit\njaar de godin speelt, het cadeau zelf heeft\ngemaakt.\n\nEn zoals jullie allemaal wel weten, wordt\nde godin dit jaar gespeeld door...")
/*<184>*/ 			{'type': 'type3', 'subType': 4, 'param1': 267, 'param2': 3840, 'next': 177, 'param3': 13}
/*<177>*/ 			set_camera(5, 0)
/*<174>*/ 			printf("\x0E\x01\x09\x04\x100\x09\x0E\x01\x08\x02\x1CD...de lieftallige Zelda!")
/*<193>*/ 			{'type': 'type3', 'subType': 4, 'param1': 1048, 'param2': 3084, 'next': 31, 'param3': 13}
/*< 31>*/ 			set_camera(2, 0)
/*< 20>*/ 			printf("Doe je best! Laat me zien hoe hard je\nhebt geoefend!\n\n\nEn ik wil dat iedereen zich aan de regels\nhoudt. Dus als je andere deelnemers\nhindert, krijg je met mij te maken!")
/*<178>*/ 			set_camera(6, 0)
/*<181>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 4, 'next': 182, 'param3': 50}
/*<182>*/ 			{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 23, 'next': 175, 'param3': 13}
/*<175>*/ 			printf("\x0E\x01\x08\x02\x1CDDat geldt \x0E\x01\x09\x04\x419\x1700dubbel voor jou, Ganderd!")
/*< 40>*/ 			set_camera(4, 0)
/*<183>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 53, 'param3': 50}
/*< 53>*/ 			make_actor_do_something(0, 0)
/*< 39>*/ 			printf("\x0E\x01\x09\x04\x00\x02Deelnemers, op jullie plaatsen. Op mijn\nsignaal gaat de competitie van start!")
/*< 37>*/ 			story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */] = true;
          		  case 1:
/*< 19>*/ 			printf("\x0E\x01\x09\x04\x00RPrima, maar luister goed!")
/*< 29>*/ 			set_camera(1, 0)
          			goto flw_16
          		}
          	}
          }

