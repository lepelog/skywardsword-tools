          void entrypoint_006_600() {
          	start()
/*<  1>*/ 	printf("Doelwit: <b<Remlit (dag)<entrypoint_601>>>")
/*<  3>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 21, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*<  2>*/ 		printf("U heeft <numeric arg0(1)> van deze vijanden verslagen.\nVolgens mijn analyse is uw vaardigheid\ntegenover deze vijand <string arg0>.")
          	  case 1:
          	}
          }

          void entrypoint_006_652() {
/*< 88>*/ 	start()
/*< 90>*/ 	printf("Ik heb niet genoeg concrete informatie over dit\nmonster.\n\n\nIn vergelijking met zijn enorme omvang en krachtige\nuitstraling stellen de monsters die u hiervoor bent\ntegengekomen weinig voor.\n[1]Vertel me meer![2-]Begrepen.")
/*< 91>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_239:
/*<239>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_89:
/*< 89>*/ 			printf("Ik kan bevestigen dat de <r<zegelspies>> boven op de kop\nhet object is dat eerder uit de grond stak in de\n<b<Verzegelde Vallei>>.\n\nMijn hypothese is dat u het monster kunt verwonden\ndoor de spies in zijn kop te drijven.\n\n\nIk raad u echter eerst aan de poten aan te vallen,\nomdat dat de enige plekken zijn waar u op het\nmoment met uw zwaard bij kunt.\n[1]Vertel me meer![2-]Begrepen.")
/*< 93>*/ 			switch (choice(2)) {
          			  case 0:
/*< 94>*/ 				printf("Als u zijn tenen verwondt, zal het voor het monster\nwaarschijnlijk onmogelijk zijn om nog een stap te\nzetten.\n\nAls u het monster snel wilt inhalen, raad ik u aan de\nopwaartse wervelwinden te gebruiken.\n[1]Vertel me meer![2-]Begrepen.")
/*< 95>*/ 				switch (choice(2)) {
          				  case 0:
/*< 96>*/ 					printf("Als het u lukt om bij de tenen te komen, dan is een\n<g<draaiaanval>> de meest effectieve manier om ze te\nverwonden.\n\nU kunt ook proberen om ze van een afstand met\n<y<bommen>> te raken, zodat de kans op lichamelijk letsel\nvoor u minder groot is.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<256>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_89
          			  case 1:
/*< 92>*/ 				printf("Dit is alle informatie die ik op het\nmoment bezit.\n\n\nWanneer ik meer informatie voor u heb,\n\x0E\x01\x12\x04\x00\x02meester, zal ik uw zwaard licht laten\ngeven. U kunt altijd op (v) drukken om\nme om advies te vragen.\x0E\x01\x11\x02\x9CD\nLaat het me gerust weten wanneer u een\n<r<analyse>> wilt over uw uitrusting of over\nobjecten of wezens in uw omgeving.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_653() {
/*< 97>*/ 	start()
/*< 99>*/ 	printf("Ik beschik momenteel over onvoldoende concrete\ninformatie voor een analyse.\n\n\nIk kan echter bevestigen dat het monster nu over\narm-achtige ledematen beschikt. Tevens is de kracht\nvan zijn aura enorm toegenomen.\n[1]Vertel me meer![2-]Begrepen.")
/*<100>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_240:
/*<240>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_98:
/*< 98>*/ 			printf("Ik raad u aan de strategie te proberen die u heeft\ngebruikt tijdens uw vorige gevecht.\n\n\nDe vingers en tenen kunnen verwond worden met\naanvallen, maar ik raad u aan daarmee te wachten tot\ndeze doelwitten de hoogste prioriteit hebben.\n[1]Vertel me meer![2-]Begrepen.")
/*<102>*/ 			switch (choice(2)) {
          			  case 0:
/*<103>*/ 				printf("Ik acht het 100% zeker dat de machine die Ganderd\nheeft gebouwd, van pas zal komen tegen dit monster.\n\n\nEen schot kan het monster tijdelijk buiten westen\nslaan, wat u de mogelijkheid geeft om aan te vallen.\n[1]Vertel me meer![2-]Begrepen.")
/*<104>*/ 				switch (choice(2)) {
          				  case 0:
/*<105>*/ 					printf("Met \x0E\x02\x04\x02\xECD kan het verdedigingswerktuig van <b<Ganderd>>\nworden verplaatst.\n\n\nIk raad u aan een andere positie te kiezen als u het\nmonster niet in uw vizier kunt krijgen.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<257>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_98
          			  case 1:
/*<101>*/ 				printf("Dit is alle informatie die ik op het\nmoment bezit.\n\n\nWanneer ik meer informatie voor u heb,\n\x0E\x01\x12\x04\x00\x02meester, zal ik uw zwaard licht laten\ngeven. U kunt altijd op (v) drukken om\nme om advies te vragen.\x0E\x01\x11\x02\x9CD\nLaat het me gerust weten wanneer u een\n<r<analyse>> wilt over uw uitrusting of over\nobjecten of wezens in uw omgeving.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_601() {
/*<294>*/ 	start()
/*<297>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<295>*/ 		printf("Deze kleine dieren leven op <b<Skyloft>>. Nu <b<Vleros>> in een\nmens is veranderd, vertonen de diertjes 's nachts geen\nagressie.")
          	  case 1:
/*<296>*/ 		printf("Deze kleine dieren leven op <b<Skyloft>>. Al zijn ze overdag\nnog zo vriendelijk, ze worden 's nachts agressief. Wees\ndus op uw hoede als u in het donker buiten bent.")
          	}
          }

          void entrypoint_006_654() {
/*<106>*/ 	start()
/*<108>*/ 	printf("Hoewel ik nog niet over alle details beschik, lijkt het\nerop dat dit monster een demonische vorm van\n<b<Fatalot>> is.\n\nIk kan bevestigen dat het nu over een soort staart\nbeschikt.\n\n\nIk raad u aan goed gebruik te maken van de katapult\nvan <b<Ganderd>>.\n[1]Vertel me meer![2-]Begrepen.")
/*<109>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_241:
/*<241>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_107:
/*<107>*/ 			printf("U dient het monster opnieuw te verzegelen. Om dat te\nbewerkstelligen raad ik u aan dezelfde strategie te\ngebruiken als tijdens vorige gevechten.\n\nNet als de tenen zijn de vingers van het monster zeer\nkwetsbaar voor fysieke aanvallen.\n[1]Vertel me meer![2-]Begrepen.")
/*<111>*/ 			switch (choice(2)) {
          			  case 0:
/*<112>*/ 				printf("Als het monster bewusteloos is, zult u vanwege zijn\nenorme omvang mogelijk moeite hebben om eromheen\nte lopen en bij de <r<zegelspies>> te komen.\n\nIn dat geval raad ik u aan af te dalen naar een lager\nplateau om van daar met een opwaartse wervelwind\naan de kant van de kop omhoog te vliegen.\n[1]Vertel me meer![2-]Begrepen.")
/*<113>*/ 				switch (choice(2)) {
          				  case 0:
/*<114>*/ 					printf("De krachten van het monster hebben zich enorm\nontwikkeld. Ik acht de kans 0% dat u het in zijn\nhuidige staat met alleen uw zwaard kunt verslaan.\n\nIk raad u aan gebruik te maken van de machine van\nGanderd. Mocht de nood hoog worden, dan kunt u\noverwegen <r<uzelf te lanceren>>, \x0E\x01\x12\x04\x00\x02meester. U vormt dan in\nwezen een projectiel.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<258>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_107
          			  case 1:
/*<110>*/ 				printf("Dit is alle informatie die ik op het\nmoment bezit.\n\n\nWanneer ik meer informatie voor u heb,\n\x0E\x01\x12\x04\x00\x02meester, zal ik uw zwaard licht laten\ngeven. U kunt altijd op (v) drukken om\nme om advies te vragen.\x0E\x01\x11\x02\x9CD\nLaat het me gerust weten wanneer u een\n<r<analyse>> wilt over uw uitrusting of over\nobjecten of wezens in uw omgeving.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_689() {
/*<124>*/ 	start()
/*<126>*/ 	printf("Zijn aura is voor 90% veranderd ten\nopzichte van de vorige keer dat we hem\nzijn tegengekomen. Zijn hele lichaam\nstraalt een duistere energie uit.\nIk kan bevestigen dat Ghirahim zijn\nvechtstijl heeft veranderd, mogelijk\nvanwege de lichte verwonding die hij\nheeft opgelopen.\n[1]Vertel me meer![2-]Begrepen.")
/*<127>*/ 	switch (choice(2)) {
          	  case 0:
/*<243>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_125:
/*<125>*/ 			printf("Mijn hypothese is dat de <r<zwakke plek die\nop zijn borst is verschenen>> vanwege de\nvorige aanval, nog steeds een effectief\ndoelwit is.\nEr bestaat echter een kans van 100% dat\nGhirahim in zijn normale toestand alle\naanvallen in dat gebied zal blokkeren.\n[1]Vertel me meer![2-]Begrepen.")
/*<129>*/ 			switch (choice(2)) {
          			  case 0:
/*<130>*/ 				printf("Ik raad u aan Ghirahims zwaardaanvallen\nte pareren, \x0E\x01\x12\x04\x00\x02meester. Op die manier kunt u\nruimte creëren om de <r<zwakke plek op zijn\nborst>> aan te vallen.\nZorg dat u iedere kans benut om de\nzwakke plek van uw tegenstander te\nverwonden.[1]Vertel me meer![2-]Begrepen.")
/*<131>*/ 				switch (choice(2)) {
          				  case 0:
/*<132>*/ 					printf("Volgens mijn analyse is het onmogelijk\nom Ghirahims zwaard in één keer aan de\nkant te slaan.\n\nMijn hypothese is dat u het aan de kant\nkunt slaan door <r<herhaaldelijk vanuit\ndezelfde richting aan te vallen>>.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<254>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_125
          			  case 1:
/*<128>*/ 				printf("Dit is alle informatie die ik op het\nmoment bezit.\n\n\nWanneer ik meer informatie voor u heb,\n\x0E\x01\x12\x04\x00\x02meester, zal ik uw zwaard licht laten\ngeven. U kunt altijd op (v) drukken om\nme om advies te vragen.\x0E\x01\x11\x02\x9CD\nLaat het me gerust weten wanneer u een\n<r<analyse>> wilt over uw uitrusting of over\nobjecten of wezens in uw omgeving.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_602() {
/*<298>*/ 	start()
/*<299>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<301>*/ 		printf("Deze kleine dieren leven op <b<Skyloft>>. Nu <b<Vleros>> in een\nmens is veranderd, vertonen de diertjes 's nachts geen\nagressie.")
          	  case 1:
/*<300>*/ 		printf("Deze dieren zijn overdag vriendelijk,\nmaar laten 's nachts hun agressieve\nkant zien en vallen aan. Laat u daarom\nniet foppen door hun schattige uiterlijk.")
          	}
          }

          void entrypoint_006_655() {
/*<144>*/ 	start()
/*<145>*/ 	printf("Dit onsterfelijke wezen heeft de wetten\nvan de tijd getrotseerd. Alle monsters zijn\nuit hem voortgekomen.\n\nVolgens sommige legenden keert hij van\ngeneratie tot generatie in een andere\ngedaante terug.\n[1]Vertel me meer![2-]Begrepen.")
/*<146>*/ 	switch (choice(2)) {
          	  case 0:
/*<234>*/ 		printf("Het is hier niet mogelijk om energie op te\nroepen voor <r<hemelstralen>>, omdat dit\ngebied is gecreëerd door de magie van\nFatalot.\nDaarom zult u niet met <r<hemelstralen\n>>kunnen aanvallen.\n[1]Vertel me meer.[2-]Begrepen.")
/*<235>*/ 		switch (choice(2)) {
          		  case 0:
/*<148>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 124}) {
          			  case 0:
/*<260>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_151:
/*<151>*/ 					printf("De kans dat u Fatalot met één uithaal\nkunt verwonden, is precies 0%, \x0E\x01\x12\x04\x00\x02meester.\n\n\nU zult een reeks aanvallen moeten\ngebruiken om door zijn verdediging te\nkomen, <r<val >>bijvoorbeeld <r<achterelkaar uit\nverschillende richtingen aan>>.\n[1]Vertel me meer![2-]Begrepen.")
/*<152>*/ 					switch (choice(2)) {
          					  case 0:
/*<153>*/ 						printf("Volgens mijn analyse kunt u het beste\naanvallen wanneer Fatalot zijn zwaard\nomhoog houdt.\n\nBlijf echter op uw hoede.<pause0F> Als u Fatalot in\nde buurt van zijn zwaard aanvalt, zal hij\ndie aanval ongetwijfeld pareren.")
          					  case 1:
          					}
          				  case 1:
/*<149>*/ 					printf("Dit is alle informatie die ik op het\nmoment bezit.\n\n\nWanneer ik meer informatie voor u heb,\n\x0E\x01\x12\x04\x00\x02meester, zal ik uw zwaard licht laten\ngeven. U kunt altijd op (v) drukken om\nme om advies te vragen.\x0E\x01\x11\x02\x9CD\nLaat het me gerust weten wanneer u een\n<r<analyse>> wilt over uw uitrusting of over\nobjecten of wezens in uw omgeving.")
          				}
          			  case 1:
          				flw_147:
/*<147>*/ 				printf("Hoogstwaarschijnlijk kan Fatalot alleen\nverwond worden met het <y<Meesterzwaard>>.\nAndere wapens hebben geen effect tegen\nhem.\n[1]Vertel me meer![2-]Begrepen.")
/*<150>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_151
          				  case 1:
          				}
          			  case 2:
          				goto flw_147
          			  case 3:
          				goto flw_147
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_690() {
/*<133>*/ 	start()
/*<134>*/ 	printf("Zijn aura is voor 90% veranderd ten\nopzichte van de vorige keer dat we hem\nzijn tegengekomen. Zijn hele lichaam\nstraalt een duistere energie uit.\nIk kan tevens bevestigen dat hij dat\nwapen voorheen nog niet bij zich had.\n[1]Vertel me meer![2-]Begrepen.")
/*<135>*/ 	switch (choice(2)) {
          	  case 0:
/*<244>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_137:
/*<137>*/ 			printf("Volgens mijn analyse kan het zwaard dat\nGhirahim gebruikt, <r<gebroken worden\ndoor uw zwaard>>, \x0E\x01\x12\x04\x00\x02meester.\n\nMijn hypothese is dat Ghirahim dit\nzwaard door middel van magie heeft\ngecreëerd.\n\nNu hij zwaargewond is, lijkt zijn zwaard\nkwetsbaarder te zijn.\n[1]Vertel me meer![2-]Begrepen.")
/*<138>*/ 			switch (choice(2)) {
          			  case 0:
/*<139>*/ 				printf("Volgens mijn waarnemingen is er een\nverband tussen <r<de kern van Ghirahims\nzwaard en de aura van zijn borst>>.\n\nHet is 100% zeker dat het zwaard uit\nelkaar zal vallen zodra de <r<kern van het\nzwaard is vernietigd>>.\n\nIk raad u aan de bewegingen van het\nzwaard aandachtig te volgen, zodat u het\nsteeds op <r<dezelfde plaats kunt raken>>.")
          			  case 1:
          			}
          		  case 1:
/*<255>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_137
          			  case 1:
/*<136>*/ 				printf("Dit is alle informatie die ik op het\nmoment bezit.\n\n\nWanneer ik meer informatie voor u heb,\n\x0E\x01\x12\x04\x00\x02meester, zal ik uw zwaard licht laten\ngeven. U kunt altijd op (v) drukken om\nme om advies te vragen.\x0E\x01\x11\x02\x9CD\nLaat het me gerust weten wanneer u een\n<r<analyse>> wilt over uw uitrusting of over\nobjecten of wezens in uw omgeving.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_656() {
/*<161>*/ 	start()
/*<163>*/ 	printf("Dit onsterfelijke wezen heeft de wetten\nvan de tijd getrotseerd. Alle monsters zijn\nuit hem voortgekomen.\n\nVolgens sommige legenden keert hij van\ngeneratie tot generatie in een andere\ngedaante terug.\n[1]Vertel me meer![2-]Begrepen.")
/*<162>*/ 	switch (choice(2)) {
          	  case 0:
/*<236>*/ 		printf("Het is hier niet mogelijk om energie op te\nroepen voor <r<hemelstralen>>, omdat dit\ngebied is gecreëerd door de magie van\nFatalot.\nDaarom zult u niet met <r<hemelstralen\n>>kunnen aanvallen.\n[1]Vertel me meer.[2-]Begrepen.")
/*<224>*/ 		scene_flags[10 'Sealed Grounds'][120 /* 0xE 01 */] = true;
/*<237>*/ 		switch (choice(2)) {
          		  case 0:
/*<155>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 132}) {
          			  case 0:
/*<259>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_154:
/*<154>*/ 					printf("\x0E\x01\x12\x04\x00\x02Meester, het moet voor u mogelijk zijn om\nop dezelfde manier als Fatalot gebruik te\nmaken van bliksemschichten.\n[1]Vertel me meer![2-]Begrepen.")
/*<157>*/ 					switch (choice(2)) {
          					  case 0:
/*<158>*/ 						printf("Het is mogelijk om elektriciteit in het\n<r<Meesterzwaard>> op te slaan door het\nzwaard ten hemel te heffen, net alsof u\neen <r<hemelstraal>> voorbereidt.\nAls u in de verte bliksem ziet en de hemel\nziet oplichten, dient u snel uw zwaard ten\nhemel te heffen.\n\nHoud er echter rekening mee dat u\nkwetsbaar zult zijn voor de aanvallen van\nFatalot wanneer u probeert een bliksem-\nschicht te vangen.")
          					  case 1:
          					}
          				  case 1:
/*<159>*/ 					printf("Ik kan bevestigen dat Fatalot in staat is\nom de elektrische energie van een\nbliksemschicht in zijn zwaard op te nemen\nen die voor zijn aanvallen te gebruiken.\n\x0E\x01\x12\x04\x00\x02Meester, als uw zwaard met dat van\nFatalot contact maakt terwijl het onder\nstroom staat, zult u een pijnlijke schok\nkrijgen.\nHet is van het uiterste belang dat u uw\naanvallen zorgvuldig uitvoert. Heel\nzorgvuldig.\n[1]Vertel me meer.[2-]Begrepen.")
/*<160>*/ 					switch (choice(2)) {
          					  case 0:
/*<156>*/ 						printf("Dit is alle informatie die ik op het\nmoment bezit.\n\n\nWanneer ik meer informatie voor u heb,\n\x0E\x01\x12\x04\x00\x02meester, zal ik uw zwaard licht laten\ngeven. U kunt altijd op (v) drukken om\nme om advies te vragen.\x0E\x01\x11\x02\x9CD\nLaat het me gerust weten wanneer u een\n<r<analyse>> wilt over uw uitrusting of over\nobjecten of wezens in uw omgeving.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_154
          			  case 2:
          				goto flw_154
          			  case 3:
          				goto flw_154
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_605() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("Een exemplaar van deze parasietensoort\nzit op dit moment aan <b<Levias >>vast-\ngeklampt. Een van de meest kenmerkende\ndelen van dit beest is het enorme oog.\nDit afstotelijke wezen is in staat om het\nlichaam waar het op leeft, volledig te\nbeheersen.[1]Vertel me meer![2-]Begrepen.")
/*<  6>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_242:
/*<242>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<  8>*/ 			printf("Volgens mijn analyse kan het spuug van\neen <b<Bilocyte >>worden <r<afgeweerd>> met uw\nzwaard, \x0E\x01\x12\x04\x00\x02meester.\n\nDaarnaast vermoed ik dat het effectief\nkan zijn om het spuug terug te kaatsen in\nde richting van de Bilocyte.\n[1]Vertel me meer![2-]Begrepen.")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 10>*/ 				printf("Op basis van de anatomie van dit wezen\nvermoed ik dat het <r<oog>> de voornaamste\nzwakke plek is.\n\nHet lijkt echter onmogelijk het <r<oog>> te\nkwetsen zolang de <r<vinnen>> aan de\nzijkanten van de kop uitsteken.\n[1]Vertel me meer.[2-]Begrepen.")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf("Om de projectielen terug te slaan naar de\nBilocyte moet u goed opletten in welke\nrichting u uw zwaard zwaait.\n\nEen slag naar links of rechts zal het\nprojectiel in die richtingen slaan.<pause0F> Bij een\nslag naar boven of beneden zal het\nprojectiel rechtdoor terugvliegen.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<  7>*/ 			printf("Dit is alle informatie die ik op het\nmoment bezit.\n\n\nWanneer ik meer informatie voor u heb,\n\x0E\x01\x12\x04\x00\x02meester, zal ik uw zwaard licht laten\ngeven. U kunt altijd op (v) drukken om\nme om advies te vragen.\x0E\x01\x11\x02\x9CD\nLaat het me gerust weten wanneer u een\n<r<analyse>> wilt over uw uitrusting of over\nobjecten of wezens in uw omgeving.")
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_657() {
/*<164>*/ 	start()
/*<165>*/ 	printf("Ik heb informatie voor u, \x0E\x01\x12\x04\x00\x0Bmeester. Mijn\nanalyse van het vechtpatroon van deze\nvijand is nu voltooid.\n\nU kunt me om raad vragen als u met (Z)\nop een vijand focust en vervolgens op (v)\ndrukt.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD Wilt u mijn huidige analyse nu\nhoren?[1]Ja.[2-]Nee.")
/*<166>*/ 	story_flags[772 /* us: 805A9B2A 0x10, jp: 805ACDAA 0x10 */] = true;
/*<167>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_69:
/*< 69>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*< 56>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 46}) {
          			  case 0:
/*<250>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_53:
/*< 53>*/ 					printf("Volgens mijn analyse zullen de dolken\nvan Ghirahim in drie formaties op u af\nvliegen: horizontaal, verticaal en\ndiagonaal.\nHet is wellicht mogelijk om de dolken met\nde juiste timing in één keer weg te slaan,\nmaar het kan moeilijk zijn om dat voor\nelkaar te krijgen.\n[1]Nog andere tips?[2-]Begrepen.")
/*< 58>*/ 					switch (choice(2)) {
          					  case 0:
/*< 59>*/ 						printf("Ik kan nu bevestigen dat Ghirahim de\nkunst van het teleporteren beheerst.\n\n\nDirect na een teleportatie lijkt hij zich\nkort in een kwetsbare positie te bevinden.\nDat is een uitgelezen moment voor u om\nhem aan te vallen.\nHoud er echter rekening mee dat hij kan\nproberen om uw aanvallen met zijn\nzwaard af te weren.\n[1]Verder nog iets?[2-]Begrepen.")
/*< 60>*/ 						switch (choice(2)) {
          						  case 0:
/*< 61>*/ 							printf("Ghirahim zal voortdurend om u heen\nbewegen, \x0E\x01\x12\x04\x00\x02meester. Ik raad u aan <r<uw\nzwaard gereed te houden>> op het moment\ndat hij naar u uithaalt.\nTijdens de voorbereiding van zijn aanval\nis aan Ghirahim te zien vanaf welke kant\nhij u zal aanvallen.\n\nAls het u niet lukt om hem op het juiste\nmoment aan te vallen, raad ik u aan een\n<g<draaiaanval>> te gebruiken.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<140>*/ 					printf("Ik heb een verandering in Ghirahims\nvechtstijl waargenomen.\n\n\nMijn aanname is dat hij van stijl is\nveranderd vanwege de lichte ver-\nwondingen die hij heeft opgelopen.\n[1]Vertel me meer![2-]Begrepen.")
/*<141>*/ 					switch (choice(2)) {
          					  case 0:
/*< 57>*/ 						printf("Dit is alle informatie die ik op het\nmoment bezit.\n\n\nWanneer ik meer informatie voor u heb,\n\x0E\x01\x12\x04\x00\x02meester, zal ik uw zwaard licht laten\ngeven. U kunt altijd op (v) drukken om\nme om advies te vragen.\x0E\x01\x11\x02\x9CD\nLaat het me gerust weten wanneer u een\n<r<analyse>> wilt over uw uitrusting of over\nobjecten of wezens in uw omgeving.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_53
          			  case 2:
          				goto flw_53
          			  case 3:
          				goto flw_53
          			}
          		  case 1:
/*< 63>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 54}) {
          			  case 0:
/*<249>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_62:
/*< 62>*/ 					printf("Zijn manier van spreken straalt een grote\nzelfverzekerdheid uit.\n\n\n\x0E\x01\x12\x04\x00\x02Meester, pas goed op voor het feit dat\nGhirahim uw zwaard met zijn blote\n<r<rechterhand>> vast kan grijpen.\n\nHij lijkt de <r<hoek van uw zwaard>> goed in\nde gaten te houden, om zich tegen\nuithalen te kunnen verdedigen.\n\nIk raad u aan om aan te vallen vanuit de\nrichting waar zijn hand niet is.\n[1]Vertel me meer![2-]Begrepen.")
/*< 65>*/ 					switch (choice(2)) {
          					  case 0:
/*< 66>*/ 						printf("Om uw zwaard uit zijn hand te trekken,\nraad ik u aan in de richting te zwaaien\nwaarin <r<Ghirahim zijn hand opent>>.\n[1]Vertel me meer![2-]Begrepen.")
/*< 67>*/ 						switch (choice(2)) {
          						  case 0:
/*< 68>*/ 							printf("Volgens mijn analyse wijzen de vingers\nvan <r<Ghirahim>> altijd naar boven als hij uw\nzwaard vasthoudt, \x0E\x01\x12\x04\x00\x01meester.\n\nDaarom acht ik de kans groot dat u aan\nzijn grip kunt ontkomen <r<door uw zwaard\nomhoog te zwaaien>>.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<284>*/ 					printf("Zijn manier van spreken straalt een grote\nzelfverzekerdheid uit.\n\n\n\x0E\x01\x12\x04\x00\x02Meester, pas goed op voor het feit dat\nGhirahim uw zwaard met zijn blote\n<r<rechterhand>> vast kan grijpen.\n\nHij lijkt de <r<hoek van uw zwaard>> goed in\nde gaten te houden, om zich tegen\nuithalen te kunnen verdedigen.\n\nIk raad u aan om aan te vallen vanuit de\nrichting waar zijn hand niet is.\n[1]Vertel me meer![2-]Begrepen.")
/*<285>*/ 					switch (choice(2)) {
          					  case 0:
/*< 64>*/ 						printf("Dit is alle informatie die ik op het\nmoment bezit.\n\n\nWanneer ik meer informatie voor u heb,\n\x0E\x01\x12\x04\x00\x02meester, zal ik uw zwaard licht laten\ngeven. U kunt altijd op (v) drukken om\nme om advies te vragen.\x0E\x01\x11\x02\x9CD\nLaat het me gerust weten wanneer u een\n<r<analyse>> wilt over uw uitrusting of over\nobjecten of wezens in uw omgeving.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_62
          			  case 2:
          				goto flw_62
          			  case 3:
          				goto flw_62
          			}
          		}
          	  case 1:
/*<168>*/ 		printf("Zoals u wilt, \x0E\x01\x12\x04\x00\x05meester. Laat het me gerust\nweten als u op een later tijdstip interesse\nheeft in een analyse.")
          	}
          }

          void entrypoint_006_658() {
/*<169>*/ 	start()
/*<170>*/ 	printf("Ik heb informatie voor u, \x0E\x01\x12\x04\x00\x0Bmeester. Mijn\nanalyse van het vechtpatroon van deze\nvijand is nu voltooid.\n\nU kunt me om raad vragen als u met (Z)\nop een vijand focust en vervolgens op (v)\ndrukt.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD Wilt u mijn huidige analyse nu\nhoren?[1]Ja.[2-]Nee.")
/*<171>*/ 	story_flags[773 /* us: 805A9B2A 0x20, jp: 805ACDAA 0x20 */] = true;
/*<172>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_231:
/*<231>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_34:
/*< 34>*/ 			printf("De kans dat u met uw zwaard door zijn\nstenen pantser zult dringen, is 0%.\n\n\nIk raad u aan objecten te gebruiken die\neen grote vernietigende kracht hebben.\n[1]Vertel me meer![2-]Begrepen.")
/*< 38>*/ 			switch (choice(2)) {
          			  case 0:
/*< 39>*/ 				printf("Vanwege zijn hoge lichaamstemperatuur\nis het 100% zeker dat <y<bommen >>direct\nontploffen wanneer ze in contact komen\nmet Scaldera's lichaam.\nOntploffingen aan de buitenkant van zijn\npantser hebben echter weinig effect.\nU zult een geschikter doelwit moeten\nzoeken om aan te vallen.\n[1]Vertel me meer![2-]Begrepen.")
/*< 40>*/ 				switch (choice(2)) {
          				  case 0:
/*< 41>*/ 					printf("Volgens mijn analyse zult u interne\nschade teweeg moeten brengen om\nScaldera's stenen pantser te laten barsten.\n\n<r<Probeer een bom in zijn bek te gooien>>\nwanneer Scaldera een lange ademteug\nneemt.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<247>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_34
          			  case 1:
/*< 37>*/ 				printf("Dit is alle informatie die ik op het\nmoment bezit.\n\n\nWanneer ik meer informatie voor u heb,\n\x0E\x01\x12\x04\x00\x02meester, zal ik uw zwaard licht laten\ngeven. U kunt altijd op (v) drukken om\nme om advies te vragen.\x0E\x01\x11\x02\x9CD\nLaat het me gerust weten wanneer u een\n<r<analyse>> wilt over uw uitrusting of over\nobjecten of wezens in uw omgeving.")
          			}
          		}
          	  case 1:
/*<173>*/ 		printf("Zoals u wilt, \x0E\x01\x12\x04\x00\x05meester. Laat het me gerust\nweten als u op een later tijdstip interesse\nheeft in een analyse.")
          	}
          }

          void entrypoint_006_659() {
/*<174>*/ 	start()
/*<175>*/ 	printf("Ik heb informatie voor u, \x0E\x01\x12\x04\x00\x0Bmeester. Mijn\nanalyse van het vechtpatroon van deze\nvijand is nu voltooid.\n\nU kunt me om raad vragen als u met (Z)\nop een vijand focust en vervolgens op (v)\ndrukt.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD Wilt u mijn huidige analyse nu\nhoren?[1]Ja.[2-]Nee.")
/*<176>*/ 	story_flags[774 /* us: 805A9B2A 0x40, jp: 805ACDAA 0x40 */] = true;
/*<177>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_17:
/*< 17>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 10}) {
          		  case 0:
/*<245>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				flw_14:
/*< 14>*/ 				printf("In het midden van zijn grote scharen\nzitten <r<zwakke plekken>>. Om die te raken\nzult u uw uithalen echter goed moeten\nrichten.\n[1]Vertel me meer.[2-]Begrepen.")
/*< 19>*/ 				switch (choice(2)) {
          				  case 0:
/*< 20>*/ 					printf("Dit beest kan zich in het zand verbergen\nals het gewond raakt.\n\n\nIk acht de kans echter 85% dat het alsnog\nzal proberen om met zijn staart naar u\nte steken.\n\nIk raad u aan het <r<zand weg te blazen>> om\nte zorgen dat u bij hem kunt komen.\n[1]Vertel me meer![2-]Begrepen.")
/*< 21>*/ 					switch (choice(2)) {
          					  case 0:
/*< 22>*/ 						printf("Volgens mijn analyse zal het <r<centrale oog\n>>kwetsbaar zijn wanneer u erin slaagt af\nte rekenen met zijn scharen.\n\nIk acht het 100% zeker dat aanvallen op\ndeze plaats uiteindelijk fataal zullen zijn.\n\n\nVanwege het pantser om het <r<oog>> acht ik\nde kans echter zeer klein dat u het met\neen horizontale, verticale of diagonale\nslag kunt kwetsen.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
/*< 18>*/ 				printf("Dit is alle informatie die ik op het\nmoment bezit.\n\n\nWanneer ik meer informatie voor u heb,\n\x0E\x01\x12\x04\x00\x02meester, zal ik uw zwaard licht laten\ngeven. U kunt altijd op (v) drukken om\nme om advies te vragen.\x0E\x01\x11\x02\x9CD\nLaat het me gerust weten wanneer u een\n<r<analyse>> wilt over uw uitrusting of over\nobjecten of wezens in uw omgeving.")
          			}
          		  case 1:
          			goto flw_14
          		  case 2:
          			goto flw_14
          		  case 3:
          			goto flw_14
          		}
          	  case 1:
/*<178>*/ 		printf("Zoals u wilt, \x0E\x01\x12\x04\x00\x05meester. Laat het me gerust\nweten als u op een later tijdstip interesse\nheeft in een analyse.")
          	}
          }

          void entrypoint_006_677() {
/*< 42>*/ 	start()
/*< 44>*/ 	printf("Dit oeroude zeemonster maakte deze\nzeeën al eeuwen geleden onveilig.\n\n\nHoewel zijn <y<<r<enorme tentakels<y< >>doorgehakt\nkunnen worden, groeien ze in een mum\nvan tijd weer aan.\n[1]Vertel me meer![2-]Begrepen.")
/*< 45>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_268:
/*<268>*/ 		switch (zone_temp_flags[20 /* 0x3 10 */]) {
          		  case 0:
/*<262>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 226}) {
          			  case 0:
/*<269>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_261:
/*<261>*/ 					printf("Voordat u Tentalus' zwakke plek, zijn <r<oog>>,\nkunt aanvallen, zult u eerst af moeten\nrekenen met de tentakels die naar u\ngrijpen.\nVolgens mijn analyse kunt u eenvoudig\nmet uw zwaard de toppen van zijn\ntentakels afhakken.\n[1]Vertel me meer![2-]Begrepen.")
/*<264>*/ 					switch (choice(2)) {
          					  case 0:
/*<265>*/ 						printf("Doordat Tentalus u voortdurend met\ntentakels aanvalt, is het te gevaarlijk om\nte proberen een voor een met de tentakels\naf te rekenen.\nVolgens mijn analyse is het effectiever\nom er met uw zwaard zoveel mogelijk\ntegelijk te lijf te gaan.\n[1]Vertel me meer![2-]Begrepen.")
/*<266>*/ 						switch (choice(2)) {
          						  case 0:
/*<267>*/ 							printf("Doorgehakte tentakels kunnen <r<hartjes>> en\n<r<pijlen>> laten vallen.\n\n\nMocht u in gevaar verkeren, dan raad ik u\naan niet te vluchten maar juist met meer\ntentakels af te rekenen.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<263>*/ 					printf("Dit is alle informatie die ik op het\nmoment bezit.\n\n\nWanneer ik meer informatie voor u heb,\n\x0E\x01\x12\x04\x00\x02meester, zal ik uw zwaard licht laten\ngeven. U kunt altijd op (v) drukken om\nme om advies te vragen.\x0E\x01\x11\x02\x9CD\nLaat het me gerust weten wanneer u een\n<r<analyse>> wilt over uw uitrusting of over\nobjecten of wezens in uw omgeving.")
          				}
          			  case 1:
          				goto flw_261
          			  case 2:
          				goto flw_261
          			  case 3:
          				goto flw_261
          			}
          		  case 1:
/*< 46>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 36}) {
          			  case 0:
/*<248>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_43:
/*< 43>*/ 					printf("Volgens mijn analyse zal het monster\nzichzelf vertonen wanneer u een grote\nhoeveelheid tentakels heeft doorgehakt.\n\nIk acht het 99% zeker dat de tentakels die\nu op het schip aanvielen, van Tentalus\nwaren.\n\nMijn hypothese is dat een <r<heilige macht>>\nde meest effectieve manier is om met de\ntentakels af te rekenen.\n[1]Vertel me meer![2-]Begrepen.")
/*< 48>*/ 					switch (choice(2)) {
          					  case 0:
/*< 49>*/ 						printf("Mijn analyse bevestigt dat zijn tentakels\ndoorgehakt kunnen worden met een\n<r<hemelstraal>>.\n\nHet <r<oog>> lijkt de zwakke plek van het\nmonster, maar de kans is nabij de 0%\ndat u het oog kunt verwonden met een\nhemelstraal.\nIn plaats daarvan raad ik u aan\nlangeafstandswapens te gebruiken.\n[1]Vertel me meer![2-]Begrepen.")
/*< 50>*/ 						switch (choice(2)) {
          						  case 0:
/*< 51>*/ 							printf("Een <y<boog>> is het meest effectieve wapen\nom zijn <y<oog >>mee te verwonden.\n\n\nU kunt met \x0E\x02\x04\x02\x8CD rondbewegen terwijl u uw\n<y<boog>> gespannen houdt. Ik raad u aan\ndirect na het ontwijken van een aanval\n<r<pijlen>> te schieten.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 47>*/ 					printf("Dit is alle informatie die ik op het\nmoment bezit.\n\n\nWanneer ik meer informatie voor u heb,\n\x0E\x01\x12\x04\x00\x02meester, zal ik uw zwaard licht laten\ngeven. U kunt altijd op (v) drukken om\nme om advies te vragen.\x0E\x01\x11\x02\x9CD\nLaat het me gerust weten wanneer u een\n<r<analyse>> wilt over uw uitrusting of over\nobjecten of wezens in uw omgeving.")
          				}
          			  case 1:
          				goto flw_43
          			  case 2:
          				goto flw_43
          			  case 3:
          				goto flw_43
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_660() {
/*<179>*/ 	start()
/*<180>*/ 	printf("Attentie, \x0E\x01\x12\x04\x00\x0Bmeester. Mijn analyse over het\nvechtpatroon van deze vijand is voltooid.\n\n\nWilt u deze analyse nu horen?\n[1]Ja.[2-]Nee.")
/*<181>*/ 	story_flags[775 /* us: 805A9B2A 0x80, jp: 805ACDAA 0x80 */] = true;
/*<182>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_27:
/*< 27>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 20}) {
          		  case 0:
/*<246>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				flw_24:
/*< 24>*/ 				printf("Hoogstwaarschijnlijk zal het verwijderen\nvan deze <r<rode bollen>> ervoor zorgen dat\nhet lichaam minder solide wordt en dat\nde armen los kunnen raken.\nTijdens normale handelingen lijkt de\nrobot deze bollen echter achter zijn\npantser verborgen te houden.\n[1]Vertel me meer![2-]Begrepen.")
/*< 29>*/ 				switch (choice(2)) {
          				  case 0:
/*< 30>*/ 					printf("Volgens mijn analyse zijn de <r<rode bollen\n>>alleen kwetsbaar wanneer Koloktos zijn\narmen volledig uitstrekt.\n\nSnelle tegenaanvallen op het moment dat\nKoloktos met zijn armen omlaag geslagen\nheeft, zijn waarschijnlijk het meest effectief.\n[1]Vertel me meer![2-]Begrepen.")
/*< 31>*/ 					switch (choice(2)) {
          					  case 0:
/*< 32>*/ 						printf("Ik acht de kans hoog dat u de <r<rode bollen>>\nkunt verwijderen met een uithaal van uw\n<y<zweep>>.\n\nOp het moment dat Koloktos zijn armen\nomlaag houdt, zal de <r<kern in de borst>>\nonbeschermd zijn.\n\nDe <r<kern in de borst>> kan echter niet met\nde <y<zweep>> worden verwijderd, omdat die\ner niet aan vast kan haken.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
/*< 28>*/ 				printf("Dit is alle informatie die ik op het\nmoment bezit.\n\n\nWanneer ik meer informatie voor u heb,\n\x0E\x01\x12\x04\x00\x02meester, zal ik uw zwaard licht laten\ngeven. U kunt altijd op (v) drukken om\nme om advies te vragen.\x0E\x01\x11\x02\x9CD\nLaat het me gerust weten wanneer u een\n<r<analyse>> wilt over uw uitrusting of over\nobjecten of wezens in uw omgeving.")
          			}
          		  case 1:
          			goto flw_24
          		  case 2:
          			goto flw_24
          		  case 3:
          			goto flw_24
          		}
          	  case 1:
/*<183>*/ 		printf("Goed, meester. Als u op een later tijdstip\ninteresse heeft in een analyse hoeft u\nenkel op een vijand te focussen met (Z) en\nme vervolgens met (v) om raad te vragen.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_661() {
/*<184>*/ 	start()
/*<185>*/ 	printf("Attentie, \x0E\x01\x12\x04\x00\x0Bmeester. Mijn analyse over het\nvechtpatroon van deze vijand is voltooid.\n\n\nWilt u deze analyse nu horen?\n[1]Ja.[2-]Nee.")
/*<186>*/ 	story_flags[776 /* us: 805A9B2D 0x01, jp: 805ACDAD 0x01 */] = true;
/*<187>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_268
          	  case 1:
/*<188>*/ 		printf("Goed, meester. Als u op een later tijdstip\ninteresse heeft in een analyse hoeft u\nenkel op een vijand te focussen met (Z) en\nme vervolgens met (v) om raad te vragen.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_610() {
/*< 13>*/ 	start()
/*< 15>*/ 	printf("Dit duizendjarige zandmonster is een\n<b<Aracha >>die zijn eeuwenlange larven-\nstadium heeft overleefd.\n\nRuim 90% van zijn lichaam is bedekt met\neen dik pantser waar zelfs het scherpste\nzwaard niet doorheen komt.\n[1]Vertel me meer.[2-]Begrepen.")
/*< 16>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_17
          	  case 1:
          	}
          }

          void entrypoint_006_662() {
/*<189>*/ 	start()
/*<190>*/ 	printf("Attentie, \x0E\x01\x12\x04\x00\x0Bmeester. Mijn analyse over het\nvechtpatroon van deze vijand is voltooid.\n\n\nWilt u deze analyse nu horen?\n[1]Ja.[2-]Nee.")
/*<191>*/ 	story_flags[777 /* us: 805A9B2D 0x02, jp: 805ACDAD 0x02 */] = true;
/*<192>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_87:
/*< 87>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*< 74>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 66}) {
          			  case 0:
/*<252>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_71:
/*< 71>*/ 					printf("Als Ghirahim zijn dolken op u afschiet,\nraad ik u aan om te proberen ze met één\nuithaal van uw zwaard weg te slaan.\n\nLogischerwijze is <r<een zwaardtechniek die\nin alle richtingen aanvalt>>, de meest\neffectieve manier om dolken weg te slaan\nwanneer u door dolken omringd bent.[1]Verder nog iets?[2-]Begrepen.")
/*< 76>*/ 					switch (choice(2)) {
          					  case 0:
/*< 77>*/ 						printf("Als het u lukt om Ghirahims plotselinge\nteleportatieaanval uit de lucht te\nontwijken, heeft u ruim de gelegenheid\nvoor een tegenaanval.\nHij gebruikt teleportatie natuurlijk ook\nom op andere plaatsen te komen, maar\ndeze opmerkelijke aanvalstechniek kwam\nnaar voren tijdens mijn analyse.\nZijn houding lijkt anders te zijn wanneer\nhij u vanuit de lucht wil aanvallen, dan\nwanneer hij in andere richtingen\nteleporteert.\n[1]Verder nog iets?[2-]Begrepen.")
/*< 78>*/ 						switch (choice(2)) {
          						  case 0:
/*< 79>*/ 							printf("Ik kan met zekerheid zeggen dat\nGhirahim uw aanvallen met zijn wapens\nzal proberen af te weren, \x0E\x01\x12\x04\x00\x01meester.\n\nAangezien hij twee zwaarden heeft, acht\nik het 100% zeker dat hij twee aanvallen\nachterelkaar kan afweren.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<142>*/ 					printf("Ik heb een verandering in Ghirahims\nvechtstijl waargenomen.\n\n\nMijn aanname is dat hij van stijl is\nveranderd vanwege de lichte ver-\nwondingen die hij heeft opgelopen.\n[1]Vertel me meer![2-]Begrepen.")
/*<143>*/ 					switch (choice(2)) {
          					  case 0:
/*< 75>*/ 						printf("Dit is alle informatie die ik op het\nmoment bezit.\n\n\nWanneer ik meer informatie voor u heb,\n\x0E\x01\x12\x04\x00\x02meester, zal ik uw zwaard licht laten\ngeven. U kunt altijd op (v) drukken om\nme om advies te vragen.\x0E\x01\x11\x02\x9CD\nLaat het me gerust weten wanneer u een\n<r<analyse>> wilt over uw uitrusting of over\nobjecten of wezens in uw omgeving.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_71
          			  case 2:
          				goto flw_71
          			  case 3:
          				goto flw_71
          			}
          		  case 1:
/*< 81>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 74}) {
          			  case 0:
/*<251>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_80:
/*< 80>*/ 					printf("Volgens mijn analyse vormen de dolken\nrond Ghirahim een soort schild.\n\n\nU zult die dolken eerst weg moeten slaan,\nvoordat u Ghirahim effectief met uw\naanvallen kunt bereiken.\n[1]Vertel me meer![2-]Begrepen.")
/*< 83>*/ 					switch (choice(2)) {
          					  case 0:
/*< 84>*/ 						printf("Het lijkt erop dat Ghirahim er de\nvoorkeur aan geeft om uw zwaard met\nzijn rechterhand vast te grijpen, \x0E\x01\x12\x04\x00\x02meester.\n\nAls hij uw zwaard te pakken krijgt, raad\nik u aan <r<uw zwaard op en neer te zwaaien\n>>om het uit zijn hand te rukken.\n\nNaarmate Ghirahim echter meer van zijn\nkracht gebruikt, acht ik de kans 100% dat\nu meerdere keren zult moeten zwaaien om\nhem zijn grip te laten verliezen.\n[1]Vertel me meer![2-]Begrepen.")
/*< 85>*/ 						switch (choice(2)) {
          						  case 0:
/*< 86>*/ 							printf("Om Ghirahim te kunnen raken raad ik u\naan vanaf een kant aan te vallen die hij\nniet met zijn hand of zijn dolken dekt.\n\nGhirahim beweegt zijn hand mee met uw\naanvallen. <r<Hij is echter niet snel genoeg\nom een plotselinge aanval vanuit een\nandere richting af te weren,>>\x0E\x01\x12\x04\x00\x02 meester.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 82>*/ 					printf("Dit is alle informatie die ik op het\nmoment bezit.\n\n\nWanneer ik meer informatie voor u heb,\n\x0E\x01\x12\x04\x00\x02meester, zal ik uw zwaard licht laten\ngeven. U kunt altijd op (v) drukken om\nme om advies te vragen.\x0E\x01\x11\x02\x9CD\nLaat het me gerust weten wanneer u een\n<r<analyse>> wilt over uw uitrusting of over\nobjecten of wezens in uw omgeving.")
          				}
          			  case 1:
          				goto flw_80
          			  case 2:
          				goto flw_80
          			  case 3:
          				goto flw_80
          			}
          		}
          	  case 1:
/*<193>*/ 		printf("Goed, meester. Als u op een later tijdstip\ninteresse heeft in een analyse hoeft u\nenkel op een vijand te focussen met (Z) en\nme vervolgens met (v) om raad te vragen.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_663() {
/*<194>*/ 	start()
/*<195>*/ 	printf("Attentie, \x0E\x01\x12\x04\x00\x0Bmeester. Mijn analyse over het\nvechtpatroon van deze vijand is voltooid.\n\n\nWilt u deze analyse nu horen?\n[1]Ja.[2-]Nee.")
/*<196>*/ 	story_flags[778 /* us: 805A9B2D 0x04, jp: 805ACDAD 0x04 */] = true;
/*<197>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_239
          	  case 1:
/*<198>*/ 		printf("Goed, meester. Als u op een later tijdstip\ninteresse heeft in een analyse hoeft u\nenkel op een vijand te focussen met (Z) en\nme vervolgens met (v) om raad te vragen.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_664() {
/*<199>*/ 	start()
/*<200>*/ 	printf("Attentie, \x0E\x01\x12\x04\x00\x0Bmeester. Mijn analyse over het\nvechtpatroon van deze vijand is voltooid.\n\n\nWilt u deze analyse nu horen?\n[1]Ja.[2-]Nee.")
/*<201>*/ 	story_flags[779 /* us: 805A9B2D 0x08, jp: 805ACDAD 0x08 */] = true;
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_240
          	  case 1:
/*<203>*/ 		printf("Goed, meester. Als u op een later tijdstip\ninteresse heeft in een analyse hoeft u\nenkel op een vijand te focussen met (Z) en\nme vervolgens met (v) om raad te vragen.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_699() {
/*<270>*/ 	start()
/*<271>*/ 	switch (story_flags[844 /* us: 805A9B35 0x08, jp: 805ACDB5 0x08 */]) {
          	  case 0:
/*<273>*/ 		printf("Deze enorme spinnensoort leeft diep in\nhet bos. Met de enorme webben die het\nspint, probeert dit beest te verhinderen\ndat zijn prooi ontsnapt.\nHoewel Skulltula's een taai exoskelet\nhebben, is hun buik vrij kwetsbaar.\n[1]Vertel me meer![2-]Begrepen.")
/*<275>*/ 		switch (choice(2)) {
          		  case 0:
/*<281>*/ 			switch (story_flags[845 /* us: 805A9B35 0x10, jp: 805ACDB5 0x10 */]) {
          			  case 0:
/*<283>*/ 				printf("Volgens mijn waarnemingen let dit beest\ner goed op dat zijn kwetsbare buik niet\nonbeschermd blijft.\n\nU zult het beest dus om moeten gooien\nom ervoor te zorgen dat u bij zijn zwakke\nplek kunt komen.\n[1]Nog andere tips?[2-]Begrepen.")
/*<276>*/ 				switch (choice(2)) {
          				  case 0:
/*<277>*/ 					printf("De zwakke plek is niet groot en omringd\ndoor taai weefsel. Daarom vermoed ik dat\nu met een <g<genadeslag>> het best bij de\nzwakke plek kunt komen.")
          					flw_279:
/*<279>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 21, 'param4': 2, 'param5': 244}) {
          					  case 0:
/*<278>*/ 						printf("U heeft <numeric arg0(1)> van deze vijanden verslagen.\nVolgens mijn analyse is uw vaardigheid\ntegenover deze vijand <string arg0>.")
          					  case 1:
          					}
          				  case 1:
          					goto flw_279
          				}
          			  case 1:
/*<282>*/ 				printf("Volgens mijn waarnemingen let dit beest\ner goed op dat zijn kwetsbare buik niet\nonbeschermd blijft.\n\nU zult het beest dus om moeten gooien\nom ervoor te zorgen dat u bij zijn zwakke\nplek kunt komen.")
/*<280>*/ 				story_flags[845 /* us: 805A9B35 0x10, jp: 805ACDB5 0x10 */] = true;
          				goto flw_279
          			}
          		  case 1:
          			goto flw_279
          		}
          	  case 1:
/*<272>*/ 		printf("Deze enorme spinnensoort leeft diep in\nhet bos. Met de enorme webben die het\nspint, probeert dit beest te verhinderen\ndat zijn prooi ontsnapt.\nHoewel Skulltula's een dikke huid hebben,\nis hun buik vrij kwetsbaar.\n\n\nIk ben nog bezig met een verdere analyse\nvan de bewegingen die deze vijand maakt.")
/*<274>*/ 		story_flags[844 /* us: 805A9B35 0x08, jp: 805ACDB5 0x08 */] = true;
          		goto flw_279
          	}
          }

          void entrypoint_006_648() {
/*< 23>*/ 	start()
/*< 25>*/ 	printf("Deze machine is zeer gevaarlijk vanwege\nde vervloekte energie die Ghirahim eraan\nheeft gegeven.\n\nDe <r<rode, bolvormige kernen>> die het\nlichaam en de armen verbinden, zijn van\ngroot belang voor de stevigheid van de\nmachine.[1]Vertel me meer![2-]Begrepen.")
/*< 26>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_27
          	  case 1:
          	}
          }

          void entrypoint_006_665() {
/*< 33>*/ 	start()
/*< 35>*/ 	printf("Zijn lichaam is volledig met rotsen\nbedekt, maar zijn <r<oog>> is enigszins\nzichtbaar door de spleten in het\ngesteente.\nAls het u lukt om delen van zijn stenen\npantser af te breken, zal het aanzienlijk\nmakkelijker zijn om dit monster te\nverwonden.[1]Vertel me meer![2-]Begrepen.")
/*< 36>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_231
          	  case 1:
          	}
          }

          void entrypoint_006_649() {
/*< 52>*/ 	start()
/*< 54>*/ 	printf("Ik heb geen bevestigde informatie over\ndeze man, behalve dat hij zichzelf een\n'demonenvorst' noemt.\n\nZijn aura straalt een enorme kracht en\nwoede uit. Zijn vaardigheden lijken zeer\nhoogontwikkeld, hoewel het onduidelijk\nblijft hoe groot zijn kracht werkelijk is.\n[1]Vertel me meer![2-]Begrepen.")
/*< 55>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_69
          	  case 1:
          	}
          }

          void entrypoint_006_666() {
/*<204>*/ 	start()
/*<205>*/ 	printf("Attentie, \x0E\x01\x12\x04\x00\x0Bmeester. Mijn analyse over het\nvechtpatroon van deze vijand is voltooid.\n\n\nWilt u deze analyse nu horen?\n[1]Ja.[2-]Nee.")
/*<206>*/ 	story_flags[780 /* us: 805A9B2D 0x10, jp: 805ACDAD 0x10 */] = true;
/*<207>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_241
          	  case 1:
/*<208>*/ 		printf("Goed, meester. Als u op een later tijdstip\ninteresse heeft in een analyse hoeft u\nenkel op een vijand te focussen met (Z) en\nme vervolgens met (v) om raad te vragen.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_667() {
/*<209>*/ 	start()
/*<210>*/ 	printf("Attentie, \x0E\x01\x12\x04\x00\x0Bmeester. Mijn analyse over het\nvechtpatroon van deze vijand is voltooid.\n\n\nWilt u deze analyse nu horen?\n[1]Ja.[2-]Nee.")
/*<211>*/ 	story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
/*<212>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_242
          	  case 1:
/*<213>*/ 		printf("Goed, meester. Als u op een later tijdstip\ninteresse heeft in een analyse hoeft u\nenkel op een vijand te focussen met (Z) en\nme vervolgens met (v) om raad te vragen.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_650() {
/*< 70>*/ 	start()
/*< 72>*/ 	printf("Ghirahim is de <b<demonenvorst>> die het\nbevel voert over de monsters. Hij is slim,\nsluw en zeer sterk en hij is een expert op\nhet gebied van magie.\nHoewel hij zich beleefd kan voordoen, zal\nzijn ware aard naar boven komen tijdens\nzijn woedeaanvallen.\n[1]Vertel me meer![2-]Begrepen.")
/*< 73>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_87
          	  case 1:
          	}
          }

          void entrypoint_006_668() {
/*<214>*/ 	start()
/*<215>*/ 	printf("Attentie, \x0E\x01\x12\x04\x00\x0Bmeester. Mijn analyse over het\nvechtpatroon van deze vijand is voltooid.\n\n\nWilt u deze analyse nu horen?\n[1]Ja.[2-]Nee.")
/*<216>*/ 	story_flags[782 /* us: 805A9B2D 0x40, jp: 805ACDAD 0x40 */] = true;
/*<217>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_238:
/*<238>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_116:
/*<116>*/ 			printf("Nu hij zijn ware aard toont, is zijn spier-\nmassa enorm in omvang toegenomen.\n\n\nHelaas blijkt uit mijn analyse dat geen\nvan uw wapens effect zullen hebben tegen\nhem.\n[1]Vertel me meer![2-]Begrepen.")
/*<120>*/ 			switch (choice(2)) {
          			  case 0:
/*<121>*/ 				printf("U kunt uw zwaard wellicht gebruiken om\n<r<Ghirahim achteruit te drijven>>, \x0E\x01\x12\x04\x00\x01meester.\n[1]Vertel me meer![2-]Begrepen.")
/*<122>*/ 				switch (choice(2)) {
          				  case 0:
/*<123>*/ 					printf("Volgens mijn waarnemingen blijft\nGhirahim het liefst bij het midden van\nhet platform, \x0E\x01\x12\x04\x00\x02meester.\n\nIk acht het 85% zeker dat hij dit doet om\nte voorkomen dat hij valt.\n[1]Vertel me meer![2-]Begrepen.")
/*<286>*/ 					switch (choice(2)) {
          					  case 0:
/*<287>*/ 						printf("\x0E\x01\x12\x04\x00\x02Meester, er is een kans van 95% dat\nGhirahim opnieuw zal proberen om zich\n<r<tegen uw zwaardaanvallen te verdedigen>>.\n\nAls u een verandering in zijn houding\nziet, dient u goed op de <r<positie van zijn\nhand>> te letten.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<253>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_116
          			  case 1:
/*<288>*/ 				printf("Nu hij zijn ware aard toont, is zijn spier-\nmassa enorm in omvang toegenomen.\n\n\nHelaas blijkt uit mijn analyse dat geen\nvan uw wapens effect zullen hebben tegen\nhem.\n[1]Vertel me meer![2-]Begrepen.")
/*<289>*/ 				switch (choice(2)) {
          				  case 0:
/*<290>*/ 					printf("U kunt uw zwaard wellicht gebruiken om\n<r<Ghirahim achteruit te drijven>>, \x0E\x01\x12\x04\x00\x01meester.\n[1]Vertel me meer![2-]Begrepen.")
/*<291>*/ 					switch (choice(2)) {
          					  case 0:
/*<292>*/ 						printf("Volgens mijn waarnemingen blijft\nGhirahim het liefst bij het midden van\nhet platform, \x0E\x01\x12\x04\x00\x02meester.\n\nIk acht het 85% zeker dat hij dit doet om\nte voorkomen dat hij valt.\n[1]Vertel me meer![2-]Begrepen.")
/*<293>*/ 						switch (choice(2)) {
          						  case 0:
/*<119>*/ 							printf("Dit is alle informatie die ik op het\nmoment bezit.\n\n\nWanneer ik meer informatie voor u heb,\n\x0E\x01\x12\x04\x00\x02meester, zal ik uw zwaard licht laten\ngeven. U kunt altijd op (v) drukken om\nme om advies te vragen.\x0E\x01\x11\x02\x9CD\nLaat het me gerust weten wanneer u een\n<r<analyse>> wilt over uw uitrusting of over\nobjecten of wezens in uw omgeving.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
          				}
          			}
          		}
          	  case 1:
/*<218>*/ 		printf("Goed, meester. Als u op een later tijdstip\ninteresse heeft in een analyse hoeft u\nenkel op een vijand te focussen met (Z) en\nme vervolgens met (v) om raad te vragen.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_651() {
/*<115>*/ 	start()
/*<117>*/ 	printf("Zijn aura is voor 90% veranderd ten\nopzichte van de vorige keer dat we hem\nzijn tegengekomen. Zijn hele lichaam\nstraalt een duistere energie uit.\nWees op uw hoede, \x0E\x01\x12\x04\x00\x01meester. Vermoedelijk\nis hij in staat om u met één uithaal neer\nte slaan.\n[1]Vertel me meer.[2-]Begrepen.")
/*<118>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_238
          	  case 1:
          	}
          }

          void entrypoint_006_669() {
/*<219>*/ 	start()
/*<220>*/ 	printf("Attentie, \x0E\x01\x12\x04\x00\x0Bmeester. Mijn eerste analyse\nover <b<Fatalot>> is nu voltooid. Zal ik u\nvertellen wat ik heb ontdekt?\n[1]Ja.[2-]Nee.")
/*<221>*/ 	story_flags[783 /* us: 805A9B2D 0x80, jp: 805ACDAD 0x80 */] = true;
/*<222>*/ 	switch (choice(2)) {
          	  case 0:
/*<232>*/ 		printf("Het is hier niet mogelijk om energie op te\nroepen voor <r<hemelstralen>>, omdat dit\ngebied is gecreëerd door de magie van\nFatalot.\nDaarom zult u niet met <r<hemelstralen\n>>kunnen aanvallen.\n[1]Vertel me meer.[2-]Begrepen.")
/*<233>*/ 		switch (choice(2)) {
          		  case 0:
/*<225>*/ 			printf("Hoogstwaarschijnlijk kan Fatalot alleen\nverwond worden met het <y<Meesterzwaard>>.\nAndere wapens hebben geen effect tegen\nhem.\n[1]Vertel me meer![2-]Begrepen.")
/*<226>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<228>*/ 					printf("Ik kan bevestigen dat Fatalot in staat is\nom de elektrische energie van een\nbliksemschicht in zijn zwaard op te nemen\nen die voor zijn aanvallen te gebruiken.\n\x0E\x01\x12\x04\x00\x02Meester, als uw zwaard met dat van\nFatalot contact maakt terwijl het onder\nstroom staat, zult u een pijnlijke schok\nkrijgen.[1]Vertel me meer.[2-]Begrepen.")
/*<230>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_229:
/*<229>*/ 						printf("Ik heb meer tijd nodig om mijn analyse\nvan Fatalot te voltooien.\n\n\nAls u over een poosje met (Z) op Fatalot\nfocust en mij met (v) om raad vraagt, zal\nik u vertellen wat ik heb ontdekt.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          					  case 1:
          					}
          				  case 1:
          					goto flw_229
          				}
          			  case 1:
          			}
          		  case 1:
          		}
          	  case 1:
/*<223>*/ 		printf("Goed, meester. Als u op een later tijdstip\ninteresse heeft in een analyse hoeft u\nenkel op een vijand te focussen met (Z) en\nme vervolgens met (v) om raad te vragen.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

