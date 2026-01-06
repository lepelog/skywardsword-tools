          void entrypoint_500_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00434500>Oeps, die was mis! Beetje zonde van mijn\nspierkracht als ik niets weet te raken!\n\n\n<0x10009:0x00414000>Ik moet herladen! Geef dat monster dus\nnog maar een behandeling voor zijn\nschimmeltenen!")
          }

          void entrypoint_500_37() {
/*< 49>*/ 	start()
/*< 61>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<435>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*<436>*/ 			printf(/* textboxtype: 2, unk: 0, line: 63 */ "<0x10009:0x00000001>Ik ga het beeld verder onderzoeken. Wie\nweet wat ik allemaal nog ontdek!")
          		  case 1:
/*<427>*/ 			printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x00080b07>Volgens oude geschriften bevindt zich\nergens hoog in de lucht een plek genaamd\n<color red<eiland van de godin>coloroff>!\n\nDit soort oude beelden schijnen\nherkenningspunten te zijn voor\n<color red<luchtreizigers>coloroff>.\n\nVolgens mijn onderzoek is dit beeld met\nname bijzonder, omdat het alle andere\nbeelden kan <color red<activeren>coloroff>.\n\n<0x10009:0x00161900>Ik geef toe dat het in eerste instantie als\neen sprookje klinkt, maar ik begin er zo\nlangzamerhand in te geloven!\n\n<0x10009:0x00000b04>Waarom zouden al die beelden hier anders\nstaan?")
          			flw_62:
/*< 62>*/ 			printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00181700>Dat eiland fascineert me mateloos.\nWil je er meer over horen?\n[1-]Ja![2]Niet echt...")
/*<423>*/ 			switch (choice(2)) {
          			  case 0:
/*<424>*/ 				printf(/* textboxtype: 0, unk: 2, line: 61 */ "<0x10009:0x00151902>Ah, ben jij wellicht ook een bewonderaar\nvan de beschavingen van lang geleden?\n\n\n<0x10009:0x00160b00>Oké, maatje. Hou je goed vast, want ik heb\niets heel bijzonders ontdekt.\n\n\nEr wonen ergens mensen op eilanden in\nde lucht! En het volk daar vliegt rond op\ngigantische vogels. Veel grotere beesten\ndan wat hier rondvliegt.\n<0x10009:0x00001e00>Iedereen leeft er in vrede en de bewoners\nvan de eilandjes hebben een perfecte\ngemeenschap zonder conflicten of ellende!\n\n<0x10009:0x00000b00>Dat niet alleen, ik ben er zeker van dat hun\nbeschaving veel verder ontwikkeld is dan\nde onze hierbeneden.")
/*<426>*/ 				printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10009:0x00080b00>En dat is nog niet alles, maatje! Het eiland\nvan de godin barst van allerlei\nwonderbaarlijkheden.\n\n<0x10009:0x001f1e00>Dat komt doordat het door de godin zelf is\ngecreëerd.\n\n\n<0x10009:0x00001908>Alle gebouwen zijn van goud en er is een\nrivier die uit een eindeloze bron\nvoortvloeit die het eeuwige leven schenkt!\n\n<0x10009:0x00000b00>De bomen hangen vol vruchten die ieder\nkwaaltje genezen! Pompoenen die nooit\nbederven en zeeën van magische bloemen!\n\n<0x10009:0x00171900>En het weer! Het weer, maatje! Niet te\nwarm, niet te koud. Het is altijd\naangenaam in dit paradijsje!\nHet eiland van de godin...\n<0x10009:0x00000b05>Bijzonder, nietwaar?<pause 20>\n<0x10008:0x02cd>FOUT! HET IS MEER DAN\nBIJZONDER!\n\n<0x10009:0x00211806><0x10008:0x01cd>Je staat vast te trappelen om meer\nte horen, of niet, maatje?\n[1-]Natuurlijk![2]Nee, bedankt...")
/*<434>*/ 				scene_flags[10 'Sealed Grounds'][109 /* 0xC 20 */] = true;
/*<430>*/ 				switch (choice(2)) {
          				  case 0:
/*<428>*/ 					printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x00271956>Zo mag ik het horen, maatje! Ik ben\nhelemaal geobsedeerd door dat eiland!\n\n\n<0x10009:0x00161e00>Ik wou dat ik je nu al meer kon vertellen,\nmaar ik moet eerst de beelden nog wat\nbeter bestuderen.\n\n<0x10009:0x00000b00>Als we elkaar nog eens tegenkomen, vertel\nik je graag alles over mijn nieuwste\nbevindingen!")
          					flw_433:
/*<433>*/ 					switch (scene_flags[14 /* 0x0 40 */]) {
          					  case 0:
          					  case 1:
/*< 60>*/ 						scene_flags[10 'Sealed Grounds'][14 /* 0x0 40 */] = true;
/*<579>*/ 						scene_flags[10 'Sealed Grounds'][35 /* 0x5 08 */] = true;
/*<343>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					}
          				  case 1:
/*<429>*/ 					printf(/* textboxtype: 0, unk: 2, line: 64 */ "<0x10009:0x00161e56>Ah, geen tijd? Jammer, ik had je graag\nmeer verteld. Misschien een ander keertje.")
          					goto flw_433
          				}
          			  case 1:
/*<425>*/ 				printf(/* textboxtype: 0, unk: 2, line: 64 */ "<0x10009:0x00161e56>Ah, geen tijd? Jammer, ik had je graag\nmeer verteld. Misschien een ander keertje.")
          				goto flw_433
          			}
          		}
          	  case 1:
/*< 55>*/ 		switch (scene_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<341>*/ 			printf(/* textboxtype: 0, unk: 11, line: 53 */ "<0x10009:0x00000008>Poeh! Bedankt dat je me gered hebt,\nmaatje!")
/*<334>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 340, 'param3': 47}
/*<340>*/ 			set_camera(49, 0)
/*<338>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 256, 'next': 339, 'param3': 15}
/*<339>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 335, 'param3': 15}
/*<335>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 58, 'param3': 48}
/*< 58>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00080b0a>Wie waren die rode engerds? Die had ik\nniet verwacht in zo'n vreedzaam woud.\n\n\n<0x10009:0x00161e00>Jou had ik ook niet verwacht. Eerder\nkwam ik ook al een soortgenoot van je\ntegen. Er gebeuren de raarste dingen.\n\n<0x10009:0x00000b00>Maar goed, omdat je me gered hebt, zal ik\nje iets interessants vertellen.")
/*< 57>*/ 			set_camera(13, 0)
/*<437>*/ 			{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 356, 'next': 65, 'param3': 15}
/*< 65>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 256, 'next': 56, 'param3': 15}
/*< 56>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 0, 'next': 260, 'param3': 14}
/*<260>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 342, 'param3': 17}
/*<342>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 365, 'param3': 17}
/*<365>*/ 			{'type': 'type3', 'subType': 2, 'param1': 16, 'param2': 256, 'next': 59, 'param3': 15}
/*< 59>*/ 			printf(/* textboxtype: 11, unk: 1, line: 55 */ "<0x10009:0x00080b01>Ik ben <color blue<Gorko >coloroff>de Goron. Ik doe onderzoek\nnaar de geschiedenis van dit woud.\n\n\n<0x10009:0x00001700>Volgens oude geschriften bevindt zich\nergens hoog in de lucht een plek die het\n<color red<eiland van de godin>coloroff> wordt genoemd!\n\n<0x10009:0x00000b00>Deze oude beelden schijnen herkennings-\npunten te zijn voor <color red<luchtreizigers>coloroff> die\nvan dat eiland komen.\n\n<color red<<sound 4>Ik zou ze goed bestuderen>coloroff> als ik jou was,\nwant ik heb gelezen dat ze goed van pas\nkunnen komen.\n\nWat dit beeld hier bijzonder maakt, is dat\nhet alle andere beelden kan activeren.\n\n\n<0x10009:0x00161907>Ik weet dat het maf klinkt, maar volgens\nmij zit er een waarheid achter de\nlegendes!\n\nWaarom zouden al die beelden hier anders\nstaan?")
          			goto flw_62
          		  case 1:
/*<336>*/ 			switch (scene_flags[94 /* 0xA 40 */]) {
          			  case 0:
/*<337>*/ 				printf(/* textboxtype: 11, unk: 1, line: 52 */ "<0x10009:0x00000b52>Geef ze ervan langs!")
          			  case 1:
/*<258>*/ 				set_camera(37, 0)
/*<465>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 50, 'param3': 32}
/*< 50>*/ 				printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x18000b52>Uit de weg! Maak plaats!")
/*<259>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		}
          	}
          }

          void entrypoint_500_54() {
/*<215>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 0, unk: 6, line: 11 */ "<0x10005:0x00320000><0x10012:0x00000004>Meester <heroname>, we zijn op onze\nbestemming aangekomen.")
          }

          void entrypoint_500_71() {
/*<438>*/ 	start()
/*<439>*/ 	printf(/* textboxtype: 2, unk: 0, line: 66 */ "<0x10009:0x00151b09><0x10008:0x01cd>WAUW!")
          }

          void entrypoint_500_03() {
/*<  4>*/ 	start()
/*<568>*/ 	{'type': 'type3', 'subType': 4, 'param1': 62, 'param2': 16384, 'next': 5, 'param3': 13}
/*<  5>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "Nu ben jij de munitie! Haha! Ik zal je een\nslinger geven, al weet ik niet zeker of dit\ngaat lukken.")
          }

          void entrypoint_500_55() {
/*<210>*/ 	start()
/*<211>*/ 	printf(/* textboxtype: 2, unk: 0, line: 12 */ "<0x10005:0x004b0000>Dit is het <color blue<oppervlak>coloroff> dat in de legendes van\nSkyloft wordt vermeld.")
          }

          void entrypoint_500_72() {
/*<442>*/ 	start()
/*<443>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 445, 'param3': 32}
/*<445>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 453, 'param3': 40}
/*<453>*/ 	wait_frames(30)
/*<444>*/ 	printf(/* textboxtype: 1, unk: 2, line: 108 */ "<0x10009:0x28000004><0x10008:0x01cd>Hé! <0x30001:0x><heroname>!")
/*<454>*/ 	set_camera(51, 0)
/*<458>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 446, 'param3': 16}
/*<446>*/ 	printf(/* textboxtype: 11, unk: 1, line: 109 */ "<0x10007:0x2800000f>Hahaha! Probeer niet te kwijlen terwijl je\nmijn superwapen aanschouwt!")
/*<455>*/ 	set_camera(56, 0)
/*<459>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16909, 'next': 447, 'param3': 13}
/*<447>*/ 	printf(/* textboxtype: 2, unk: 11, line: 110 */ "Het heet... de <color red<kampioenkatapult>coloroff>!")
/*<460>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 448, 'param3': 13}
/*<448>*/ 	printf(/* textboxtype: 1, unk: 2, line: 111 */ "<0x10009:0x28000018>Je bent er sprakeloos van! Dat snap ik best.\nJe zou me niet geloven als ik vertelde\nhoelang ik eraan heb gewerkt.")
/*<462>*/ 	printf(/* textboxtype: 11, unk: 1, line: 112 */ "Kijk dit eens allemaal!")
/*<456>*/ 	set_camera(48, 0)
/*<463>*/ 	printf(/* textboxtype: 2, unk: 11, line: 113 */ "<0x10009:0x28404300>Eerst heb ik alle hekken verwijderd die\nhier in de weg stonden. Helemaal in mijn\neentje, uiteraard.\n\nIk weet niet wat me overkomen is!<pause 30> Ik had\ngeen idee dat ik hier zoveel talent voor had.\n\n\n<0x10009:0x28414000>Hoe dan ook, als jij zegt waar ik moet\nmikken, geef ik dat monster ervan langs!")
/*<464>*/ 	set_camera(32, 0)
/*<449>*/ 	printf(/* textboxtype: 1, unk: 2, line: 114 */ "<0x10009:0x28044000>Het maakt me niet uit hoe groot je bent!\nNiemand blijft overeind als hij een van\nmijn bommen tegen zijn bakkes krijgt!")
/*<461>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 450, 'param3': 13}
/*<450>*/ 	printf(/* textboxtype: 11, unk: 1, line: 115 */ "Ai... Dat monster is er iets eerder dan ik\nhad verwacht.")
/*<451>*/ 	printf(/* textboxtype: 0, unk: 11, line: 116 */ "<0x10009:0x28414000>Ik moet nog een paar aanpassingen maken\nvoordat ik over het spoor kan rijden.\n\n\nIk laat het je weten als ik er klaar voor\nben. Probeer dat beest tot die tijd bezig te\nhouden!")
/*<457>*/ 	set_camera(57, 0)
/*<452>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_04() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 2, line: 6 */ "")
          }

          void entrypoint_500_56() {
/*<214>*/ 	start()
/*<212>*/ 	printf(/* textboxtype: 0, unk: 2, line: 13 */ "<0x10005:0x004b0000>Volgens mijn berekeningen bevinden we\nons momenteel in een gebied dat de\n<color blue<Verzegelde Vallei>coloroff> heet.")
          }

          void entrypoint_500_73() {
/*<479>*/ 	start()
/*<477>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10006:0xfdcd>Jongeling...\n\n\n\n<0x10006:0xfdcd>Kind van het lot dat uit de lucht is\nafgedaald...")
          }

          void entrypoint_500_05() {
/*<  8>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0000000f>Daar was ik al bang voor. Het zegel is\nverbroken.\n\n\nIk leg het je later wel uit! Eerst moeten we\nzorgen dat dat monster niet uit de put\nklimt!\n\nHet laatste wat we willen is dat het bij de\ntempel komt!")
          }

          void entrypoint_500_22() {
/*< 26>*/ 	start()
/*< 81>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 80, 'param3': 32}
/*< 80>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 27, 'param3': 16}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0010160d>Nu, <heroname>!<pause 30>\n\n\n\nRaak de zegelspies met een <color red<hemelstraal>coloroff> om\nhet zegel te herstellen! <0x10009:0x00111700>Snel!")
          }

          void entrypoint_500_57() {
/*<413>*/ 	start()
/*<370>*/ 	{'type': 'type3', 'subType': 2, 'param1': 23, 'param2': 356, 'next': 310, 'param3': 15}
/*<310>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 311, 'param3': 32}
/*<311>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 484, 'param3': 17}
/*<484>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 40, 'next': 509, 'param3': 17}
/*<509>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<510>*/ 	wait_frames(30)
/*<511>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*<515>*/ 	wait_frames(10)
/*<512>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<513>*/ 	wait_frames(60)
/*<375>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<514>*/ 	wait_frames(10)
/*<517>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10302, 'param2': 17664, 'next': 485, 'param3': 13}
/*<485>*/ 	set_camera(52, 0)
/*<376>*/ 	printf(/* textboxtype: 0, unk: 11, line: 119 */ "<0x10009:0x28000053>Waaah!<0x10005:0x001e0000>")
/*<254>*/ 	printf(/* textboxtype: 11, unk: 1, line: 118 */ "<0x10009:0x28004000>Dat zegel kan het ieder moment begeven.<0x10005:0x001e0000>")
/*<255>*/ 	printf(/* textboxtype: 1, unk: 0, line: 120 */ "<0x10009:0x283e400f>Eh... Geen paniek!\n\n\n\n<0x10009:0x28410000>Weet je wel wat de <color red<kampioenkatapult>coloroff>\nkan?")
/*<256>*/ 	printf(/* textboxtype: 11, unk: 1, line: 121 */ "<0x10009:0x28000000>Zolang ik achter mijn bommenwerper zit,\nzal ik niet van opgeven!\n\n\n<0x10009:0x28000200>Bommen tegen de kop van dat monster\nslingeren en het land verdedigen is mijn\nlot! Denk ik. Daarvoor ben ik hier!")
/*<257>*/ 	printf(/* textboxtype: 0, unk: 11, line: 122 */ "<0x10009:0x28000200>Goed, <heroname>, ik heb werk te\ndoen. Probeer uit de buurt te blijven van\nmijn schoten.")
/*<516>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*<371>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<522>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<566>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<567>*/ 	story_flags[176 /* us: 805A9AE2 0x80, jp: 805ACD62 0x80 */] = true;
/*<312>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 419, 'param3': 42}
/*<419>*/ 	story_flags[483 /* us: 805A9B10 0x02, jp: 805ACD90 0x02 */] = true;
          }

          void entrypoint_500_74() {
/*<480>*/ 	start()
/*<478>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "<0x10006:0xfdcd>Hef het zwaard van de godin ten hemel...\n<pause 15><0x10006:0xfdcd>Richt op de kwade aura en gebruik de\nkracht van het zwaard...")
          }

          void entrypoint_500_40() {
/*< 51>*/ 	start()
/*< 85>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 84, 'param3': 32}
/*< 84>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3592, 'param2': 2829, 'next': 86, 'param3': 13}
/*< 86>*/ 	set_camera(15, 0)
/*< 52>*/ 	printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x30001:0x><heroname>, kijk naar het voorhoofd\nvan het beest. Zie je de <color red<zegelspies>coloroff>?\n\n\n<0x10009:0x0e000013>Jaag die spies weer zijn kop in om een\neinde te maken aan deze razernij!")
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_58() {
/*<216>*/ 	start()
/*<213>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10005:0x004b0000>Weest u alstublieft voorzichtig bij het\nverdergaan, <0x10012:0x0000000b>meester.")
          }

          void entrypoint_500_23() {
/*<475>*/ 	start()
/*<481>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10012:0x00000001>Meester, ik heb informatie voor u.")
/*<482>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "Hoewel het erop lijkt dat deze deuren\nrecent geopend zijn, zijn ze nu verzegeld\ndoor een mysterieuze kracht.")
          }

          void entrypoint_500_75() {
/*<497>*/ 	start()
/*<498>*/ 	story_flags[790 /* us: 805A9B2C 0x40, jp: 805ACDAC 0x40 */] = true;
/*<520>*/ 	scene_flags[10 'Sealed Grounds'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_500_41() {
/*< 76>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 0, unk: 76, line: 86 */ "<0x10009:0x00000026>Lekker bezig, <heroname>! Dat was\nje nooit gelukt zonder mij, maar geen dank\nhoor.\n\nMensen redden is mijn ding. Nu moeten\nwe die Poort des Tijds open zien te krijgen.\nIk ga er gelijk naar kijken!")
          }

          void entrypoint_500_24() {
/*<137>*/ 	start()
/*<547>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<548>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10012:0x0000000b>Meester, ik heb belangrijke informatie\nvoor u. Het beest waartegen u strijdt, heeft\neen <color red<zegelspies>coloroff> in zijn voorhoofd.\n\nU mag dit gebied niet verlaten voor u het\nzegel hersteld heeft en het beest weer\nbedwongen is.")
          	  case 1:
/*<139>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<140>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<141>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10012:0x0000000b>Meester, u mag dit gebied niet verlaten\nvoor u het zegel hersteld heeft en het beest\nweer bedwongen is.")
          			  case 1:
/*<142>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10012:0x0000000b>Meester, ik heb belangrijke informatie\nvoor u. Het beest waartegen u strijdt, heeft\neen <color red<zegelspies>coloroff> in zijn voorhoofd.\n\nU mag dit gebied niet verlaten voor u het\nzegel hersteld heeft en het beest weer\nbedwongen is.")
          			}
          		  case 1:
/*<138>*/ 			printf(/* textboxtype: 0, unk: 1, line: 40 */ "")
          		}
          	}
          }

          void entrypoint_500_59() {
/*<217>*/ 	start()
/*<218>*/ 	printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x003e4515><0x10008:0x01cd>Nee!\n\n\n\n<0x10009:0x00004000>Dit is niet best! Door die instorting kom ik\nniet bij de rest van mijn bommenvoorraad!\nWat moeten we nu?")
          }

          void entrypoint_500_76() {
/*<506>*/ 	start()
/*<466>*/ 	printf(/* textboxtype: 0, unk: 2, line: 67 */ "<0x10009:0x00131907>Wat gebeurde er nou? Gebruikte je soms\neen of andere vorm van magie?\n\n\n<0x10009:0x00171b08>Dat beeld reageerde zodra je erbij in de\nbuurt kwam. Wat maf!")
          }

          void entrypoint_500_08() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00444300>Die was raak, maar we waren bijna te laat!\n\n\n\n<0x10009:0x00004000>Ik moet weer herladen, dus blijf die\nlachebek bezighouden tot ik je een teken\ngeef!\n")
          }

          void entrypoint_500_25() {
/*< 35>*/ 	start()
/*<525>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 70>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 38>*/ 	scene_flags[10 'Sealed Grounds'][10 /* 0x0 04 */] = true;
/*< 41>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<582>*/ 	story_flags[852 /* us: 805A9B34 0x04, jp: 805ACDB4 0x04 */] = true;
          }

          void entrypoint_500_42() {
/*< 77>*/ 	start()
/*< 75>*/ 	printf(/* textboxtype: 76, unk: 1, line: 88 */ "<0x10009:0x00203010>Poeh... Ik geef toe, <heroname>, dat\nik dacht dat we er geweest waren. Ik ben\nblij dat ik een keertje geen gelijk had.\n\n<0x10009:0x00420200>Ik ga terug naar de tempel. Ik zie je daar\nwel!")
          }

          void entrypoint_500_77() {
/*<507>*/ 	start()
/*<508>*/ 	printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x003e4026><0x30001:0x><heroname>! <color red<Kom snel hierheen>coloroff>!\nSchiet op!")
          }

          void entrypoint_500_09() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x0020403c>Top! Hou je schrap! Ik zal je proberen om\nje naar zijn kop te slingeren!")
          }

          void entrypoint_500_26() {
/*< 36>*/ 	start()
/*<526>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 48>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 39>*/ 	scene_flags[10 'Sealed Grounds'][11 /* 0x0 08 */] = true;
/*< 42>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<583>*/ 	story_flags[853 /* us: 805A9B34 0x08, jp: 805ACDB4 0x08 */] = true;
          }

          void entrypoint_500_43() {
/*<131>*/ 	start()
/*<405>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 369, 'param3': 32}
/*<369>*/ 	set_camera(59, 0)
/*<401>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 260, 'next': 403, 'param3': 15}
/*<403>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1042, 'param2': 4352, 'next': 402, 'param3': 13}
/*<402>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 4, 'next': 483, 'param3': 14}
/*<483>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 404, 'param3': 17}
/*<404>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 521, 'param3': 17}
/*<521>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<133>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<262>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1086, 'param2': 16447, 'next': 132, 'param3': 13}
/*<132>*/ 	printf(/* textboxtype: 0, unk: 76, line: 95 */ "<0x30001:0x><heroname>, ik heb slecht nieuws!\nHet lijkt erop dat dat beest weer naar\nbuiten komt!")
/*<263>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 136, 'param3': 13}
/*<136>*/ 	printf(/* textboxtype: 1, unk: 0, line: 96 */ "Ik ga alvast mijn machine in stelling\nbrengen!")
/*<135>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 772, 'next': 420, 'param3': 14}
/*<420>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<134>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<418>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_60() {
/*<219>*/ 	start()
/*<372>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 222, 'param3': 32}
/*<222>*/ 	printf(/* textboxtype: 1, unk: 2, line: 108 */ "<0x10009:0x28000004><0x10008:0x01cd>Hé! <0x30001:0x><heroname>!")
/*<293>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 294, 'param3': 40}
/*<294>*/ 	wait_frames(45)
/*<229>*/ 	set_camera(31, 0)
/*<231>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 295, 'param3': 16}
/*<295>*/ 	{'type': 'type3', 'subType': 2, 'param1': 20, 'param2': 356, 'next': 223, 'param3': 15}
/*<223>*/ 	printf(/* textboxtype: 11, unk: 1, line: 109 */ "<0x10007:0x2800000f>Hahaha! Probeer niet te kwijlen terwijl je\nmijn superwapen aanschouwt!")
/*<230>*/ 	set_camera(32, 0)
/*<344>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 224, 'param3': 13}
/*<224>*/ 	printf(/* textboxtype: 2, unk: 11, line: 110 */ "Het heet... de <color red<kampioenkatapult>coloroff>!")
/*<345>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10302, 'param2': 512, 'next': 225, 'param3': 13}
/*<225>*/ 	printf(/* textboxtype: 1, unk: 2, line: 111 */ "<0x10009:0x28000018>Je bent er sprakeloos van! Dat snap ik best.\nJe zou me niet geloven als ik vertelde\nhoelang ik eraan heb gewerkt.")
/*<361>*/ 	printf(/* textboxtype: 11, unk: 1, line: 112 */ "Kijk dit eens allemaal!")
/*<232>*/ 	set_camera(33, 0)
/*<362>*/ 	printf(/* textboxtype: 2, unk: 11, line: 113 */ "<0x10009:0x28404300>Eerst heb ik alle hekken verwijderd die\nhier in de weg stonden. Helemaal in mijn\neentje, uiteraard.\n\nIk weet niet wat me overkomen is!<pause 30> Ik had\ngeen idee dat ik hier zoveel talent voor had.\n\n\n<0x10009:0x28414000>Hoe dan ook, als jij zegt waar ik moet\nmikken, geef ik dat monster ervan langs!")
/*<233>*/ 	set_camera(32, 0)
/*<226>*/ 	printf(/* textboxtype: 1, unk: 2, line: 114 */ "<0x10009:0x28044000>Het maakt me niet uit hoe groot je bent!\nNiemand blijft overeind als hij een van\nmijn bommen tegen zijn bakkes krijgt!")
/*<368>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 227, 'param3': 13}
/*<227>*/ 	printf(/* textboxtype: 11, unk: 1, line: 115 */ "Ai... Dat monster is er iets eerder dan ik\nhad verwacht.")
/*<228>*/ 	printf(/* textboxtype: 0, unk: 11, line: 116 */ "<0x10009:0x28414000>Ik moet nog een paar aanpassingen maken\nvoordat ik over het spoor kan rijden.\n\n\nIk laat het je weten als ik er klaar voor\nben. Probeer dat beest tot die tijd bezig te\nhouden!")
/*<296>*/ 	set_camera(45, 0)
/*<240>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_78() {
/*<580>*/ 	start()
/*<581>*/ 	printf(/* textboxtype: 0, unk: 11, line: 128 */ "<0x10012:0x0000000b>Meester, u moet het losgebroken monster\nweer opsluiten. Die taak kunt u niet\nvervullen door te vluchten.")
          }

          void entrypoint_500_27() {
/*< 37>*/ 	start()
/*<527>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 69>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 40>*/ 	scene_flags[10 'Sealed Grounds'][12 /* 0x0 10 */] = true;
/*< 43>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<584>*/ 	story_flags[854 /* us: 805A9B34 0x10, jp: 805ACDB4 0x10 */] = true;
          }

          void entrypoint_500_61() {
/*<220>*/ 	start()
/*<243>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 244, 'param3': 32}
/*<244>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 245, 'param3': 16}
/*<245>*/ 	printf(/* textboxtype: 1, unk: 2, line: 108 */ "<0x10009:0x28000004><0x10008:0x01cd>Hé! <0x30001:0x><heroname>!")
/*<246>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 297, 'param3': 40}
/*<297>*/ 	wait_frames(30)
/*<501>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 298, 'param3': 47}
/*<298>*/ 	set_camera(36, 0)
/*<503>*/ 	{'type': 'type3', 'subType': 2, 'param1': 30, 'param2': 356, 'next': 502, 'param3': 15}
/*<502>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 247, 'param3': 48}
/*<247>*/ 	printf(/* textboxtype: 11, unk: 1, line: 109 */ "<0x10007:0x2800000f>Hahaha! Probeer niet te kwijlen terwijl je\nmijn superwapen aanschouwt!")
/*<299>*/ 	set_camera(46, 0)
/*<300>*/ 	wait_frames(15)
/*<346>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16909, 'next': 248, 'param3': 13}
/*<248>*/ 	printf(/* textboxtype: 2, unk: 11, line: 110 */ "Het heet... de <color red<kampioenkatapult>coloroff>!")
/*<474>*/ 	{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 356, 'next': 347, 'param3': 15}
/*<347>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 249, 'param3': 13}
/*<249>*/ 	printf(/* textboxtype: 1, unk: 2, line: 111 */ "<0x10009:0x28000018>Je bent er sprakeloos van! Dat snap ik best.\nJe zou me niet geloven als ik vertelde\nhoelang ik eraan heb gewerkt.")
/*<363>*/ 	printf(/* textboxtype: 11, unk: 1, line: 112 */ "Kijk dit eens allemaal!")
/*<301>*/ 	set_camera(47, 0)
/*<364>*/ 	printf(/* textboxtype: 2, unk: 11, line: 113 */ "<0x10009:0x28404300>Eerst heb ik alle hekken verwijderd die\nhier in de weg stonden. Helemaal in mijn\neentje, uiteraard.\n\nIk weet niet wat me overkomen is!<pause 30> Ik had\ngeen idee dat ik hier zoveel talent voor had.\n\n\n<0x10009:0x28414000>Hoe dan ook, als jij zegt waar ik moet\nmikken, geef ik dat monster ervan langs!")
/*<367>*/ 	set_camera(32, 0)
/*<250>*/ 	printf(/* textboxtype: 1, unk: 2, line: 114 */ "<0x10009:0x28044000>Het maakt me niet uit hoe groot je bent!\nNiemand blijft overeind als hij een van\nmijn bommen tegen zijn bakkes krijgt!")
/*<348>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 251, 'param3': 13}
/*<251>*/ 	printf(/* textboxtype: 11, unk: 1, line: 115 */ "Ai... Dat monster is er iets eerder dan ik\nhad verwacht.")
/*<252>*/ 	printf(/* textboxtype: 0, unk: 11, line: 116 */ "<0x10009:0x28414000>Ik moet nog een paar aanpassingen maken\nvoordat ik over het spoor kan rijden.\n\n\nIk laat het je weten als ik er klaar voor\nben. Probeer dat beest tot die tijd bezig te\nhouden!")
/*<302>*/ 	set_camera(50, 0)
/*<253>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_44() {
/*<354>*/ 	start()
/*<356>*/ 	switch (scene_flags[6 /* 0x1 40 */]) {
          	  case 0:
/*<358>*/ 		printf(/* textboxtype: 2, unk: 0, line: 60 */ "<0x10009:0x00171b08>Het beeld reageerde op je! Hoe deed je\ndat? Kom op, laat me niet in spanning!")
          	  case 1:
/*<355>*/ 		printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00151b05><0x10008:0x01cd>GORO!")
/*<357>*/ 		printf(/* textboxtype: 0, unk: 6, line: 59 */ "<0x10009:0x00131909>Wat gebeurde er?\n\n\n\n<0x10009:0x00171b08>Het beeld reageerde op je! Hoe deed je\ndat? Kom op, laat me niet in spanning!")
/*<359>*/ 		scene_flags[10 'Sealed Grounds'][6 /* 0x1 40 */] = true;
          	}
          }

          void entrypoint_500_45() {
/*< 89>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000026>Kijk nou toch! Onze lelijke vriend heeft\nhandjes! Dat komt mooi uit!\n\n\nDan kan hij de bommen vangen die ik\nnaar zijn lelijke kop slinger!\n\n\n<0x10009:0x00424000>Ik laat het je weten als mijn machine\ngeladen is! Doe tot dan toe je best om hem\nbezig te houden!")
          }

          void entrypoint_500_28() {
/*<160>*/ 	start()
/*<553>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<554>*/ 		printf(/* textboxtype: 6, unk: 1, line: 43 */ "<0x10012:0x0000000b>Meester, het beest heeft zichzelf opnieuw\nbevrijd. U moet hier blijven om het te\nbedwingen.")
          	  case 1:
/*<161>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<162>*/ 			printf(/* textboxtype: 0, unk: 6, line: 44 */ "<0x10012:0x0000000b>Meester, u mag dit gebied niet verlaten\nvoor u het zegel hersteld heeft en het beest\nweer bedwongen is.")
          		  case 1:
/*<163>*/ 			printf(/* textboxtype: 6, unk: 1, line: 43 */ "<0x10012:0x0000000b>Meester, het beest heeft zichzelf opnieuw\nbevrijd. U moet hier blijven om het te\nbedwingen.")
          		}
          	}
          }

          void entrypoint_500_62() {
/*<221>*/ 	start()
/*<234>*/ 	printf(/* textboxtype: 1, unk: 0, line: 117 */ "")
/*<303>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 307, 'param3': 40}
/*<307>*/ 	wait_frames(45)
/*<305>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 349, 'param3': 32}
/*<349>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 306, 'param3': 16}
/*<306>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 304, 'param3': 17}
/*<304>*/ 	set_camera(31, 0)
/*<308>*/ 	{'type': 'type3', 'subType': 2, 'param1': 20, 'param2': 356, 'next': 238, 'param3': 15}
/*<238>*/ 	wait_frames(30)
/*<350>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 235, 'param3': 13}
/*<235>*/ 	printf(/* textboxtype: 11, unk: 1, line: 118 */ "<0x10009:0x28004000>Dat zegel kan het ieder moment begeven.<0x10005:0x001e0000>")
/*<241>*/ 	set_camera(32, 0)
/*<351>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 236, 'param3': 13}
/*<236>*/ 	printf(/* textboxtype: 1, unk: 0, line: 120 */ "<0x10009:0x283e400f>Eh... Geen paniek!\n\n\n\n<0x10009:0x28410000>Weet je wel wat de <color red<kampioenkatapult>coloroff>\nkan?")
/*<237>*/ 	printf(/* textboxtype: 11, unk: 1, line: 121 */ "<0x10009:0x28000000>Zolang ik achter mijn bommenwerper zit,\nzal ik niet van opgeven!\n\n\n<0x10009:0x28000200>Bommen tegen de kop van dat monster\nslingeren en het land verdedigen is mijn\nlot! Denk ik. Daarvoor ben ik hier!")
/*<352>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 242, 'param3': 13}
/*<242>*/ 	printf(/* textboxtype: 0, unk: 11, line: 122 */ "<0x10009:0x28000200>Goed, <heroname>, ik heb werk te\ndoen. Probeer uit de buurt te blijven van\nmijn schoten.")
/*<309>*/ 	set_camera(45, 0)
/*<239>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_11() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "")
          }

          void entrypoint_500_29() {
/*< 72>*/ 	start()
/*<538>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 2, 'next': 100, 'param3': 46}
/*<100>*/ 	switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          	  case 0:
/*<528>*/ 		switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          		  case 0:
/*<530>*/ 			switch (scene_flags[43 /* 0x4 08 */]) {
          			  case 0:
/*<534>*/ 				printf(/* textboxtype: 76, unk: 1, line: 85 */ "<0x10009:0x00004026><0x30001:0x><heroname>, dit gaat fout! Ik kom\nniet bij mijn bommenvoorraad!\n\n\n<0x10009:0x00204000>Sorry...<pause 25> <0x30001:0x><heroname>! Onze enige\noplossing is om jou naar dat beest te\nslingeren. Snel, stap in de bak!")
          			  case 1:
/*<532>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<533>*/ 					printf(/* textboxtype: 0, unk: 76, line: 83 */ "<0x10009:0x00000026>De <color red<kampioenkatapult>coloroff> is klaar voor actie!\n\n\n\nDruk maar op <icon 30> als ik op hem moet\nschieten!<0x10011:0x10cd>\n\n\nVerplaats de machine met (ControlStick) en schiet\nzodra je dat monster in je vizier hebt!")
          				  case 1:
/*<531>*/ 					printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00004226>De <color red<kampioenkatapult>coloroff> kan weer aan de\nslag!\n\n\nZoals eerder zie je mijn signaal boven <icon 30>\nals mijn machine klaar is om te vuren.<0x10011:0x10cd>\n\n\n<0x10009:0x00424000>Laten we zijn lelijke bakkes er om en om\nvan langs geven, <heroname>!")
          				}
          			}
          		  case 1:
/*<529>*/ 			switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          			  case 0:
/*<536>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<537>*/ 					printf(/* textboxtype: 0, unk: 76, line: 83 */ "<0x10009:0x00000026>De <color red<kampioenkatapult>coloroff> is klaar voor actie!\n\n\n\nDruk maar op <icon 30> als ik op hem moet\nschieten!<0x10011:0x10cd>\n\n\nVerplaats de machine met (ControlStick) en schiet\nzodra je dat monster in je vizier hebt!")
          				  case 1:
/*<535>*/ 					printf(/* textboxtype: 1, unk: 1, line: 82 */ "<0x10009:0x00044100>Dit is mijn eerste kans om de\n<color red<kampioenkatapult>coloroff> te gebruiken!\n\n\n<0x10009:0x00000300>Zodra ik klaar ben om te vuren, zie je mijn\nsignaal boven <icon 30>. <0x10009:0x00004000>Tot die tijd zul je hem er\nmet je zwaard van langs moeten geven!<0x10011:0x10cd>")
          				}
          			  case 1:
/*< 78>*/ 				switch (scene_flags[71 /* 0x9 80 */]) {
          				  case 0:
/*<193>*/ 					switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          					  case 0:
/*<261>*/ 						scene_flags[10 'Sealed Grounds'][97 /* 0xD 02 */] = true;
/*<561>*/ 						switch (story_flags[490 /* us: 805A9B13 0x01, jp: 805ACD93 0x01 */]) {
          						  case 0:
/*<564>*/ 							switch (story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */]) {
          							  case 0:
          								flw_194:
/*<194>*/ 								printf(/* textboxtype: 76, unk: 1, line: 100 */ "<0x10009:0x00000026>Waar gaat de reis vandaag naartoe?\n[1-]De lucht.[2-]Het oppervlak.[3]Laat maar.")
/*<195>*/ 								switch (choice(3)) {
          								  case 0:
/*<586>*/ 									switch (story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */]) {
          									  case 0:
/*<196>*/ 										printf(/* textboxtype: 0, unk: 76, line: 101 */ "Moet je in de lucht wezen? Wat wil je gaan\ndoen?\n[1-]Rupee-roulette.[2-]Insectenparadijs.[3-]Iets anders.")
/*<571>*/ 										switch (choice(3)) {
          										  case 0:
          											flw_209:
/*<209>*/ 											zone_temp_flags[1 /* 0x1 02 */] = true;
          											flw_204:
/*<204>*/ 											{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 199, 'param3': 42}
/*<199>*/ 											printf(/* textboxtype: 1, unk: 2, line: 105 */ "<0x10009:0x00420342>Oké, daar ga je dan! Hou je muts goed\nvast!")
          										  case 1:
          											flw_202:
/*<202>*/ 											zone_temp_flags[2 /* 0x1 04 */] = true;
          											goto flw_204
          										  case 2:
/*<197>*/ 											printf(/* textboxtype: 1, unk: 0, line: 102 */ "Wat voor activiteit heb je dan in\ngedachten?\n[1-]Bamboe vellen![2-]Pompoenschieten![3]Laat maar.")
/*<572>*/ 											switch (choice(3)) {
          											  case 0:
          												flw_203:
/*<203>*/ 												zone_temp_flags[3 /* 0x1 08 */] = true;
          												goto flw_204
          											  case 1:
/*<205>*/ 												zone_temp_flags[4 /* 0x1 10 */] = true;
          												goto flw_204
          											  case 2:
          												flw_200:
/*<200>*/ 												printf(/* textboxtype: 11, unk: 1, line: 106 */ "Als je ooit in stijl leuke plekjes wilt\nbezoeken, laat je het maar weten!")
          											}
          										}
          									  case 1:
/*<585>*/ 										printf(/* textboxtype: 6, unk: 1, line: 103 */ "Moet je in de lucht wezen? Wat wil je gaan\ndoen?\n[1-]Rupee-roulette.[2-]Insectenparadijs.[3-]Bamboe vellen.[4]Laat maar.")
/*<587>*/ 										switch (choice(4)) {
          										  case 0:
          											goto flw_209
          										  case 1:
          											goto flw_202
          										  case 2:
          											goto flw_203
          										  case 3:
          											goto flw_200
          										}
          									}
          								  case 1:
/*<198>*/ 									printf(/* textboxtype: 0, unk: 6, line: 104 */ "Moet je op het oppervlak wezen? Wat wil\nje gaan doen?\n[1-]Bliksemduel![2-]Delven voor durfallen![3-]Roekeloze racebaan![4]Laat maar.")
/*<201>*/ 									switch (choice(4)) {
          									  case 0:
/*<206>*/ 										zone_temp_flags[5 /* 0x1 20 */] = true;
          										goto flw_204
          									  case 1:
/*<207>*/ 										zone_temp_flags[6 /* 0x1 40 */] = true;
          										goto flw_204
          									  case 2:
/*<208>*/ 										zone_temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_204
          									  case 3:
          										goto flw_200
          									}
          								  case 2:
          									goto flw_200
          								}
          							  case 1:
/*<563>*/ 								printf(/* textboxtype: 2, unk: 11, line: 107 */ "<0x10009:0x00000004>Hé, <heroname>!\n\n\n\nIk heb besloten om hier bij jou op het\noppervlak te blijven. Iemand moet het toch\ndoen!")
/*<562>*/ 								story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */] = true;
/*<577>*/ 								switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
          								  case 0:
          									goto flw_194
          								  case 1:
/*<578>*/ 									printf(/* textboxtype: 0, unk: 76, line: 98 */ "Mijn machine kan je over het land\nslingeren, als je een keer geen zin hebt om\nmet je Loftwing te vliegen.")
          									flw_575:
/*<575>*/ 									printf(/* textboxtype: 1, unk: 0, line: 99 */ "Met een man als ik aan de besturing,\nweet je dat je niet naar een of andere\nsaaie plek wordt geslingerd!\n\nWie weet kom je op een plek die je nog\nniet kent! Kun je mooi de avonturier uit\ngaan hangen!")
/*<576>*/ 									story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */] = true;
          									goto flw_194
          								}
          							}
          						  case 1:
/*<573>*/ 							switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
          							  case 0:
          								goto flw_194
          							  case 1:
/*<574>*/ 								printf(/* textboxtype: 76, unk: 1, line: 97 */ "<0x10009:0x00000004>Hé, <heroname>! Als je een keer niet\nop je vogel wilt vliegen, slinger ik je graag\nmet mijn machine over het land.")
          								goto flw_575
          							}
          						}
          					  case 1:
/*< 79>*/ 						printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00000003>Wil je naar het Faron-woud?\n\n\n\nStap maar in, dan zal mijn\n<color red<kampioenkatapult>coloroff> je er even heen\nslingeren!\n[1-]Oké![2]Eh... Nee.")
/*< 93>*/ 						switch (choice(2)) {
          						  case 0:
/*< 95>*/ 							printf(/* textboxtype: 0, unk: 76, line: 92 */ "<0x10009:0x00000042>Komt voor elkaar! Stap maar in, dan stuur\nik je er direct heen. Het enige wat jij hoeft\nte doen is veilig landen...")
/*< 92>*/ 							zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 96>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*< 94>*/ 							printf(/* textboxtype: 76, unk: 1, line: 91 */ "Oké. Laat het me maar weten als je nog\neen ritje naar het woud wilt maken!")
          						}
          					}
          				  case 1:
/*<188>*/ 					switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
          					  case 0:
/*<187>*/ 						switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          						  case 0:
          							flw_190:
/*<190>*/ 							printf(/* textboxtype: 0, unk: 76, line: 89 */ "<0x10009:0x00000026>Ja, deze grote kerel heeft de dag weer\ngered! Nu moet jij nog het zegel repareren\nvoor het monster weer ontsnapt.")
          						  case 1:
/*<192>*/ 							switch (scene_flags[19 /* 0x3 08 */]) {
          							  case 0:
          								goto flw_190
          							  case 1:
/*<320>*/ 								switch (scene_flags[43 /* 0x4 08 */]) {
          								  case 0:
/*<324>*/ 									printf(/* textboxtype: 76, unk: 1, line: 85 */ "<0x10009:0x00004026><0x30001:0x><heroname>, dit gaat fout! Ik kom\nniet bij mijn bommenvoorraad!\n\n\n<0x10009:0x00204000>Sorry...<pause 25> <0x30001:0x><heroname>! Onze enige\noplossing is om jou naar dat beest te\nslingeren. Snel, stap in de bak!")
          								  case 1:
/*<322>*/ 									switch (zone_temp_flags[11 /* 0x0 08 */]) {
          									  case 0:
/*<323>*/ 										printf(/* textboxtype: 0, unk: 76, line: 83 */ "<0x10009:0x00000026>De <color red<kampioenkatapult>coloroff> is klaar voor actie!\n\n\n\nDruk maar op <icon 30> als ik op hem moet\nschieten!<0x10011:0x10cd>\n\n\nVerplaats de machine met (ControlStick) en schiet\nzodra je dat monster in je vizier hebt!")
          									  case 1:
/*<321>*/ 										printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00004226>De <color red<kampioenkatapult>coloroff> kan weer aan de\nslag!\n\n\nZoals eerder zie je mijn signaal boven <icon 30>\nals mijn machine klaar is om te vuren.<0x10011:0x10cd>\n\n\n<0x10009:0x00424000>Laten we zijn lelijke bakkes er om en om\nvan langs geven, <heroname>!")
          									}
          								}
          							}
          						}
          					  case 1:
/*<186>*/ 						switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
          						  case 0:
          							flw_189:
/*<189>*/ 							printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000026>Dat beest moet nu toch wel weten met wie\nhet te maken heeft? <0x30001:0x><heroname>, ga\nbeneden het zegel herstellen!\n\nVuur dat licht af op die spies met je zwaard,\nzoals je dat de vorige keer deed.")
          						  case 1:
/*<191>*/ 							switch (scene_flags[18 /* 0x3 04 */]) {
          							  case 0:
          								goto flw_189
          							  case 1:
/*<318>*/ 								switch (zone_temp_flags[11 /* 0x0 08 */]) {
          								  case 0:
/*<319>*/ 									printf(/* textboxtype: 0, unk: 76, line: 83 */ "<0x10009:0x00000026>De <color red<kampioenkatapult>coloroff> is klaar voor actie!\n\n\n\nDruk maar op <icon 30> als ik op hem moet\nschieten!<0x10011:0x10cd>\n\n\nVerplaats de machine met (ControlStick) en schiet\nzodra je dat monster in je vizier hebt!")
          								  case 1:
/*< 73>*/ 									printf(/* textboxtype: 1, unk: 1, line: 82 */ "<0x10009:0x00044100>Dit is mijn eerste kans om de\n<color red<kampioenkatapult>coloroff> te gebruiken!\n\n\n<0x10009:0x00000300>Zodra ik klaar ben om te vuren, zie je mijn\nsignaal boven <icon 30>. <0x10009:0x00004000>Tot die tijd zul je hem er\nmet je zwaard van langs moeten geven!<0x10011:0x10cd>")
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	  case 1:
/*<101>*/ 		printf(/* textboxtype: 0, unk: 1, line: 77 */ "<0x10009:0x00000026>Opoe zegt dat het monster dat we zagen,\nop ieder moment opnieuw uit kan breken.\n\n\n<0x10009:0x00004200>Ik hou niet van verrassingen, dus ik werk\naan een geheim wapen voor de volgende\nkeer!\n\n<0x10009:0x0000000f>Het is nog niet af, maar het zal de naam\nGanderd nog roemruchtiger maken!")
          	}
          }

          void entrypoint_500_46() {
/*< 90>*/ 	start()
/*< 91>*/ 	printf(/* textboxtype: 1, unk: 1, line: 79 */ "<0x10009:0x00000026>Kijk eens wie we daar hebben! Die komt\nvast gezellig langs voor wat bommen in zijn\nsmoel!\n\n<0x10009:0x00044000><0x30001:0x><heroname>! Onze strategie blijft\nhetzelfde! Je weet wat je te doen staat!")
          }

          void entrypoint_500_63() {
/*<377>*/ 	start()
/*<406>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 392, 'param3': 32}
/*<392>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 260, 'next': 382, 'param3': 15}
/*<382>*/ 	set_camera(54, 0)
/*<408>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 394, 'param3': 17}
/*<394>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1042, 'param2': 4352, 'next': 393, 'param3': 13}
/*<393>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 4, 'next': 395, 'param3': 14}
/*<395>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 524, 'param3': 16}
/*<524>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<380>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<381>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1086, 'param2': 16447, 'next': 379, 'param3': 13}
/*<379>*/ 	printf(/* textboxtype: 0, unk: 76, line: 95 */ "<0x30001:0x><heroname>, ik heb slecht nieuws!\nHet lijkt erop dat dat beest weer naar\nbuiten komt!")
/*<383>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 385, 'param3': 13}
/*<385>*/ 	printf(/* textboxtype: 1, unk: 0, line: 96 */ "Ik ga alvast mijn machine in stelling\nbrengen!")
/*<384>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 772, 'next': 422, 'param3': 14}
/*<422>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<415>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<416>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_47() {
/*<154>*/ 	start()
/*<539>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<541>*/ 		{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 540, 'param3': 13}
/*<540>*/ 		printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x30001:0x><heroname>, kijk naar het voorhoofd\nvan het beest. Zie je de <color red<zegelspies>coloroff>?\n\n\n<0x10009:0x0e000013>Jaag die spies weer zijn kop in om een\neinde te maken aan deze razernij!")
          	  case 1:
/*<156>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<157>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<159>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0010160d>Nu, <heroname>!<pause 30>\n\n\n\nRaak de zegelspies met een <color red<hemelstraal>coloroff> om\nhet zegel te herstellen! <0x10009:0x00111700>Snel!")
          			  case 1:
/*<374>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 158, 'param3': 13}
/*<158>*/ 				printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x30001:0x><heroname>, kijk naar het voorhoofd\nvan het beest. Zie je de <color red<zegelspies>coloroff>?\n\n\n<0x10009:0x0e000013>Jaag die spies weer zijn kop in om een\neinde te maken aan deze razernij!")
          			}
          		  case 1:
/*<155>*/ 			printf(/* textboxtype: 1, unk: 2, line: 27 */ "<0x10009:0x0008170f><0x30001:0x><heroname>, snel! Inspecteer de\n<color red<zegelspies>coloroff> op de bodem van de put!\n\n\n<0x10009:0x00140b00>Deze bevingen zijn zeer ongebruikelijk.\nWaarschijnlijk kan het monster ieder\nmoment ontsnappen, dus wees voorzichtig\nals je de put benadert.")
          		}
          	}
          }

          void entrypoint_500_64() {
/*<265>*/ 	start()
/*<276>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 281, 'param3': 40}
/*<281>*/ 	wait_frames(60)
/*<273>*/ 	set_camera(40, 0)
/*<289>*/ 	{'type': 'type3', 'subType': 2, 'param1': 18, 'param2': 356, 'next': 270, 'param3': 15}
/*<270>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 500, 'param3': 32}
/*<500>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 268, 'param3': 17}
/*<268>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 260, 'next': 271, 'param3': 15}
/*<271>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 269, 'param3': 32}
/*<269>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 504, 'param3': 15}
/*<504>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 288, 'param3': 17}
/*<288>*/ 	set_camera(41, 0)
/*<275>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3585, 'param2': 256, 'next': 272, 'param3': 13}
/*<272>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1077, 'param2': 13824, 'next': 290, 'param3': 13}
/*<290>*/ 	set_camera(42, 0)
/*<274>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<286>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1082, 'param2': 15360, 'next': 267, 'param3': 13}
/*<267>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x04000030>Waaah! Waar komen die bevingen\nvandaan?")
/*<291>*/ 	set_camera(24, 0)
/*<287>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1079, 'param2': 14592, 'next': 283, 'param3': 13}
/*<283>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x04000031>Alles gaat op en neer! Ik dacht dat de\ngrond stevig was hierbeneden!")
/*<279>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<278>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*<277>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<280>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 353, 'param3': 13}
/*<353>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3584, 'param2': 5632, 'next': 499, 'param3': 13}
/*<499>*/ 	set_camera(43, 0)
/*<266>*/ 	printf(/* textboxtype: 0, unk: 2, line: 28 */ "<0x10009:0x0e000010>Wees snel, <heroname>! Controleer\nde <color red<zegelspies>coloroff> op de bodem van de put.")
/*<284>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x0e001653>Deze bevingen zijn zeer ongebruikelijk.\nWaarschijnlijk kan het monster ieder\nmoment ontsnappen, dus wees voorzichtig\nals je de put benadert.")
/*<292>*/ 	set_camera(44, 0)
/*<505>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 285, 'param3': 15}
/*<285>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_30() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0000000f>Daar was ik al bang voor. Het zegel is\nverbroken.\n\n\nIk leg het je later wel uit! Eerst moeten we\nzorgen dat dat monster niet uit de put\nklimt!\n\nHet laatste wat we willen is dat het bij de\ntempel komt!")
          }

          void entrypoint_500_48() {
/*<164>*/ 	start()
/*<552>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<551>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><0x30001:0x><heroname>, je moet het beest zo snel\nals je kunt opsluiten!\n\n\nHet is sterker geworden sinds de vorige\nkeer. Laat je niet verrassen!")
          	  case 1:
/*<165>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<167>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x0010180d>Weet je nog hoe je het beest kunt\nverzegelen?\n\n\nRaak de zegelspies met een hemelstraal!<pause 30>\nConcentreer je. Met jouw kracht moet het\nlukken.")
          		  case 1:
/*<166>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><0x30001:0x><heroname>, je moet het beest zo snel\nals je kunt opsluiten!\n\n\nHet is sterker geworden sinds de vorige\nkeer. Laat je niet verrassen!")
          		}
          	}
          }

          void entrypoint_500_65() {
/*<328>*/ 	start()
/*<330>*/ 	printf(/* textboxtype: 0, unk: 1, line: 80 */ "<0x10009:0x00434553><0x10008:0x01cd>WAT?!<pause 10> Sinds wanneer kan dat\nding vliegen?\n\n\n<0x10009:0x00424026>Het komt recht op de tempel af!<pause 8> Maar\ndaar komt niks van in! Ik haal het gelijk\nneer!")
          }

          void entrypoint_500_13() {
/*<476>*/ 	start()
/*<491>*/ 	printf(/* textboxtype: 1, unk: 0, line: 123 */ "<0x10012:0x0000000b>Meester <heroname>, ik neem een\nverandering waar in het land die\nveroorzaakt wordt door uw hemelstraal.")
/*<495>*/ 	printf(/* textboxtype: 11, unk: 1, line: 124 */ "Ik voel ook een aura die verbonden is aan\nuw parachutedoek. Ik vermoed dat dat de\naura van Zelda is.\n\nIk kan u richting die aura leiden middels\neen functie genaamd <sound 4><color red<detectie>coloroff>.\n\n\nWilt u een uitleg over hoe deze functie\nwerkt?\n[1-]Graag![2]Nee, bedankt...")
/*<569>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<492>*/ 	switch (choice(2)) {
          	  case 0:
/*<493>*/ 		printf(/* textboxtype: 0, unk: 11, line: 125 */ "<0x10012:0x00000005>Zoals u wilt, meester.\n\n\n\nBij detectie kunt u met de punt van uw\nzwaard naar aura's van objecten zoeken.\n\n\nHoe dichter u bij de aura bent, <color red<hoe sterker\nde reactie van uw zwaard>coloroff>.\n\n\nDeze reactie manifesteert zich via trillingen\nen geluid. U kunt de richting afleiden aan\nde hand van de <color red<paarse indicator>coloroff>.")
          		flw_570:
/*<570>*/ 		open_dowsing_wheel(0)
/*<496>*/ 		printf(/* textboxtype: 1, unk: 0, line: 126 */ "Houd (^) ingedrukt en kies Zelda als de\naura die u wilt zoeken. Richt vervolgens\nom u heen om de richting te bepalen.<0x10011:0x08cd>")
/*<565>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*<494>*/ 		printf(/* textboxtype: 11, unk: 1, line: 127 */ "Begrepen, <0x10012:0x0000000b>meester.")
          		goto flw_570
          	}
          }

          void entrypoint_500_31() {
/*<143>*/ 	start()
/*<544>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<546>*/ 		{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 545, 'param3': 13}
/*<545>*/ 		printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x30001:0x><heroname>, kijk naar het voorhoofd\nvan het beest. Zie je de <color red<zegelspies>coloroff>?\n\n\n<0x10009:0x0e000013>Jaag die spies weer zijn kop in om een\neinde te maken aan deze razernij!")
          	  case 1:
/*<145>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<146>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<148>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0010160d>Nu, <heroname>!<pause 30>\n\n\n\nRaak de zegelspies met een <color red<hemelstraal>coloroff> om\nhet zegel te herstellen! <0x10009:0x00111700>Snel!")
          			  case 1:
/*<373>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 147, 'param3': 13}
/*<147>*/ 				printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x30001:0x><heroname>, kijk naar het voorhoofd\nvan het beest. Zie je de <color red<zegelspies>coloroff>?\n\n\n<0x10009:0x0e000013>Jaag die spies weer zijn kop in om een\neinde te maken aan deze razernij!")
          			}
          		  case 1:
/*<144>*/ 			printf(/* textboxtype: 1, unk: 2, line: 27 */ "<0x10009:0x0008170f><0x30001:0x><heroname>, snel! Inspecteer de\n<color red<zegelspies>coloroff> op de bodem van de put!\n\n\n<0x10009:0x00140b00>Deze bevingen zijn zeer ongebruikelijk.\nWaarschijnlijk kan het monster ieder\nmoment ontsnappen, dus wees voorzichtig\nals je de put benadert.")
          		}
          	}
          }

          void entrypoint_500_49() {
/*<168>*/ 	start()
/*<549>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<550>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><0x30001:0x><heroname>, je moet het beest zo snel\nals je kunt opsluiten!\n\n\nHet is sterker geworden sinds de vorige\nkeer. Laat je niet verrassen!")
          	  case 1:
/*<169>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<171>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x0010180d>Weet je nog hoe je het beest kunt\nverzegelen?\n\n\nRaak de zegelspies met een hemelstraal!<pause 30>\nConcentreer je. Met jouw kracht moet het\nlukken.")
          		  case 1:
/*<170>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><0x30001:0x><heroname>, je moet het beest zo snel\nals je kunt opsluiten!\n\n\nHet is sterker geworden sinds de vorige\nkeer. Laat je niet verrassen!")
          		}
          	}
          }

          void entrypoint_500_66() {
/*<329>*/ 	start()
/*<331>*/ 	printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00414043>Was dat het? Bah, daar was niks aan. We\nmogen de genie die deze machine heeft\ngebouwd wel bedanken!\n\nOké, <heroname>, laat die lelijkerd\nmaar zien wie er de baas is!")
          }

          void entrypoint_500_14() {
/*<440>*/ 	start()
/*<441>*/ 	printf(/* textboxtype: 0, unk: 2, line: 19 */ "<0x10012:0x0000000b>Meester, ik heb informatie voor u.\n\n\n\nIk kan informatie verschaffen over\nvoorwerpen en wezens waar u met (Z) op\n<color green<focust>coloroff>.<0x10011:0x07cd>\n\n<color red<Tijdens het focussen met>coloroff> (Z) kunt u op\n(v) drukken om mij om een analyse te\nvragen.<0x10011:0x07cd><0x10011:0x09cd>")
          }

          void entrypoint_500_32() {
/*< 25>*/ 	start()
/*<542>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<543>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000031>Aaaaaah!")
          	  case 1:
/*<149>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<150>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<151>*/ 				printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000030>Wat sta je daar nou? Ga die put in en\nrepareer dat zegel, zoals opoe het zegt!\n\n\nJe hoeft alleen maar op die spies te schieten\nmet een straal van je zwaard, toch?")
          			  case 1:
/*<153>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000031>Aaaaaah!")
          			}
          		  case 1:
/*<152>*/ 			printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00000015>Waaah! Waarom beeft de grond zo?\n\n\n\nAlles gaat op en neer! Ik dacht dat de\ngrond stevig was hierbeneden!")
          		}
          	}
          }

          void entrypoint_500_67() {
/*<332>*/ 	start()
/*<333>*/ 	printf(/* textboxtype: 0, unk: 0, line: 71 */ "<0x10009:0x00000026>Hé, <heroname>! Mijn machine is\nklaar om te knallen!\n\n\nGeef maar een seintje met <icon 30> als je wat\nexplosieve luchtsteun nodig hebt!<0x10011:0x10cd>")
          }

          void entrypoint_500_33() {
/*< 47>*/ 	start()
/*<313>*/ 	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          	  case 0:
/*<325>*/ 		switch (scene_flags[106 /* 0xC 04 */]) {
          		  case 0:
/*<314>*/ 			printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x00040202>Ik ga Zelda op mijn eigen manier helpen.<pause 30>\nWacht maar af, <heroname>.")
          		  case 1:
/*<326>*/ 			printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000002>Hé. Hoe gaat het, <heroname>? Weet\nje, ik heb de laatste tijd over het een en\nander nagedacht.\n\nOpoe blijft maar zeggen dat ik mijn eigen\nrol heb in dit hele gebeuren.\n\n\nIk kan dan wel geen monsters met een\nzwaard in mootjes hakken zoals jij, maar\nmisschien hoeft dat ook helemaal niet.\n\n<0x10009:0x00404200>Ik denk na over een andere manier om\nZelda te helpen. Ik doe het op de\nGanderd-manier.\n\nIk zal je verder niets verklappen, maar\nwacht maar af. Ik weet zeker dat je je\ngroene muts voor me afneemt als je het\nziet.")
/*<327>*/ 			scene_flags[10 'Sealed Grounds'][106 /* 0xC 04 */] = true;
          		}
          	  case 1:
/*<315>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*<316>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0000002d>Ik ben...<pause 30> niets anders dan een blok aan jullie\nbeen<pause 30>.<pause 30>.<pause 30>.")
          		  case 1:
/*< 46>*/ 			printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x0000003d><0x10008:0x01cd>O, kom op!\n\n\n\n<0x10009:0x00003a00><0x10008:0x01cd><0x10008:0x01cd>Ik kon niks beginnen!\n\n\n\n<0x10009:0x00004000><0x10008:0x01cd><0x10008:0x02cd>Ik ben een complete nul!")
/*<317>*/ 			scene_flags[10 'Sealed Grounds'][105 /* 0xC 02 */] = true;
          		}
          	}
          }

          void entrypoint_500_50() {
/*<172>*/ 	start()
/*<559>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<560>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10012:0x00000001>Meester, het is uw lot om dit beest te\nbedwingen. Daar kunt u niet aan ontlopen.")
          	  case 1:
/*<173>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<174>*/ 			printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10012:0x0000000b>Meester, u mag dit gebied niet verlaten\nvoor u het zegel hersteld heeft en het beest\nweer bedwongen is.")
          		  case 1:
/*<175>*/ 			printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10012:0x00000001>Meester, het is uw lot om dit beest te\nbedwingen. Daar kunt u niet aan ontlopen.")
          		}
          	}
          }

          void entrypoint_500_68() {
/*<378>*/ 	start()
/*<488>*/ 	wait_frames(30)
/*<489>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 407, 'param3': 47}
/*<407>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 400, 'param3': 32}
/*<400>*/ 	set_camera(55, 0)
/*<487>*/ 	{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 356, 'next': 396, 'param3': 15}
/*<396>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 260, 'next': 486, 'param3': 15}
/*<486>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 490, 'param3': 17}
/*<490>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 398, 'param3': 48}
/*<398>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1042, 'param2': 4352, 'next': 397, 'param3': 13}
/*<397>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 4, 'next': 399, 'param3': 14}
/*<399>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 523, 'param3': 16}
/*<523>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<387>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<388>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1086, 'param2': 16447, 'next': 386, 'param3': 13}
/*<386>*/ 	printf(/* textboxtype: 0, unk: 76, line: 95 */ "<0x30001:0x><heroname>, ik heb slecht nieuws!\nHet lijkt erop dat dat beest weer naar\nbuiten komt!")
/*<389>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 391, 'param3': 13}
/*<391>*/ 	printf(/* textboxtype: 1, unk: 0, line: 96 */ "Ik ga alvast mijn machine in stelling\nbrengen!")
/*<390>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 772, 'next': 421, 'param3': 14}
/*<421>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<414>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<417>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_34() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00000026>Dankzij mijn machine ben je met één\nzwieper direct in het woud!<0x10005:0x000a0000>")
/*< 99>*/ 	printf(/* textboxtype: 76, unk: 1, line: 94 */ "Veel succes!<0x10005:0x001e0000>")
          }

          void entrypoint_500_51() {
/*<176>*/ 	start()
/*<557>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<558>*/ 		printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0010180f><0x30001:0x><heroname>, je moet het zegel\nherstellen dat het monster gevangen houdt!\n\n\nHet is sterker geworden sinds de vorige\nkeer. Zorg dat je altijd op je hoede blijft!")
          	  case 1:
/*<177>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<179>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x0010180d>Dat beest is te gevaarlijk. Het heeft het\nzegel al drie keer verbroken.\n\n\nJe zult het wederom op moeten\nsluiten. Herstel het zegel! Ik\nweet dat je het in je hebt.")
          		  case 1:
/*<178>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0010180f><0x30001:0x><heroname>, je moet het zegel\nherstellen dat het monster gevangen houdt!\n\n\nHet is sterker geworden sinds de vorige\nkeer. Zorg dat je altijd op je hoede blijft!")
          		}
          	}
          }

          void entrypoint_500_69() {
/*<409>*/ 	start()
/*<410>*/ 	printf(/* textboxtype: 0, unk: 0, line: 74 */ "Oké dan! Tijd voor Ganderd om te\nknallen!")
/*<411>*/ 	printf(/* textboxtype: 1, unk: 0, line: 75 */ "Stel de positie van de katapult bij met (ControlStick)\nen richt op je doelwit.\n\n\nZodra je je doelwit in zicht hebt, druk je\nop <icon 41> om een bom te lanceren. Als hij het\nmonster raakt, verdoof je het!")
/*<412>*/ 	printf(/* textboxtype: 0, unk: 1, line: 76 */ "Druk op <icon 19> terwijl je de <color blue<kampioen-\nkatapult>coloroff> bestuurt om de besturing\nte bekijken!<0x10011:0x0bcd>")
          }

          void entrypoint_500_17() {
/*<473>*/ 	start()
/*< 19>*/ 	set_camera(16, 0)
/*<102>*/ 	{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3330, 'next': 17, 'param3': 13}
/*< 17>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "Dus als ik het goed heb...\n\n\n\n...weet dat oude vrouwtje in die <color red<tempel >coloroff>daar\nwaar <color blue<Zelda >coloroff>is?")
/*< 20>*/ 	set_camera(17, 0)
/*<104>*/ 	printf(/* textboxtype: 2, unk: 0, line: 21 */ "Aha... Goed, <heroname>, bedankt\nvoor de info. Jouw taak zit erop. Ga maar\nlekker naar huis.\n\n<0x10009:0x000d0b41>De grote <color blue<Ganderd>coloroff> zal zich wel bezighouden\nmet de zoektocht naar <color blue<Zelda>coloroff>.")
/*<103>*/ 	{'type': 'type3', 'subType': 4, 'param1': 24, 'param2': 5632, 'next': 18, 'param3': 13}
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 2, line: 22 */ "Ja, joh. Ik spoor haar op, red haar en neem\nhaar dan mee naar Skyloft...<pause 30>")
/*<106>*/ 	set_camera(18, 0)
/*<107>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x0000000c>En als we thuis zijn, zal ik zeggen dat ze\niedereen mag laten weten dat we een stel\nzijn. Dan kan ik lekker met haar op een\ndate en zo.")
/*<108>*/ 	set_camera(19, 0)
/*<112>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 512, 'next': 113, 'param3': 13}
/*<113>*/ 	printf(/* textboxtype: 2, unk: 0, line: 24 */ "<0x10009:0x0000000d>Jouw werk zit er hoe dan ook op! Ik heb je\nhulp niet nodig!")
/*<109>*/ 	wait_frames(30)
/*<105>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "Eerst maar eens een babbeltje maken met\ndat ouwe vrouwtje waar we het over\nhadden.")
/*< 21>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 1024, 'next': 22, 'param3': 14}
/*< 22>*/ 	printf(/* textboxtype: 2, unk: 0, line: 26 */ "Later, <heroname>!")
/*<110>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 256, 'next': 111, 'param3': 15}
/*<111>*/ 	set_camera(20, 0)
/*<114>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_35() {
/*< 54>*/ 	start()
/*<360>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 53, 'param3': 13}
/*< 53>*/ 	printf(/* textboxtype: 2, unk: 0, line: 69 */ "<0x10009:0x0e000054><0x10006:0x01cd>We zijn te laat!\n<color red<<0x10006:0x00cd>Alles...<pause 10><0x10006:0xfecd> Alles is verloren.>coloroff><0x10005:0x00280000>")
          }

          void entrypoint_500_52() {
/*<180>*/ 	start()
/*<555>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<556>*/ 		printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0010180f><0x30001:0x><heroname>, je moet het zegel\nherstellen dat het monster gevangen houdt!\n\n\nHet is sterker geworden sinds de vorige\nkeer. Zorg dat je altijd op je hoede blijft!")
          	  case 1:
/*<181>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<183>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x0010180d>Dat beest is te gevaarlijk. Het heeft het\nzegel al drie keer verbroken.\n\n\nJe zult het wederom op moeten\nsluiten. Herstel het zegel! Ik\nweet dat je het in je hebt.")
          		  case 1:
/*<182>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0010180f><0x30001:0x><heroname>, je moet het zegel\nherstellen dat het monster gevangen houdt!\n\n\nHet is sterker geworden sinds de vorige\nkeer. Zorg dat je altijd op je hoede blijft!")
          		}
          	}
          }

          void entrypoint_500_18() {
/*<519>*/ 	start()
/*< 66>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 116, 'param3': 40}
/*<116>*/ 	wait_frames(60)
/*< 44>*/ 	set_camera(21, 0)
/*<467>*/ 	{'type': 'type3', 'subType': 2, 'param1': 28, 'param2': 356, 'next': 30, 'param3': 15}
/*< 30>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 28, 'param3': 32}
/*< 28>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 260, 'next': 31, 'param3': 15}
/*< 31>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 29, 'param3': 32}
/*< 29>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 270, 'next': 120, 'param3': 15}
/*<120>*/ 	set_camera(25, 0)
/*< 33>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 34, 'param3': 17}
/*< 34>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1077, 'param2': 13824, 'next': 32, 'param3': 13}
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 470, 'param3': 17}
/*<470>*/ 	wait_frames(30)
/*<469>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<518>*/ 	set_camera(26, 0)
/*<129>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1082, 'param2': 15381, 'next': 472, 'param3': 13}
/*<472>*/ 	wait_frames(15)
/*<471>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3605, 'param2': 2319, 'next': 24, 'param3': 13}
/*< 24>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x04000030>Waaah! Waar komen die bevingen\nvandaan?")
/*<121>*/ 	wait_frames(30)
/*<130>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1079, 'param2': 14592, 'next': 468, 'param3': 13}
/*<468>*/ 	wait_frames(15)
/*<119>*/ 	set_camera(24, 0)
/*<118>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x04000031>Alles gaat op en neer! Ik dacht dat de\ngrond stevig was hierbeneden!")
/*< 45>*/ 	set_camera(27, 0)
/*< 71>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*< 68>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*< 67>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<115>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 125, 'param3': 13}
/*<125>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 128, 'param3': 17}
/*<128>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 23, 'param3': 13}
/*< 23>*/ 	printf(/* textboxtype: 0, unk: 2, line: 28 */ "<0x10009:0x0e000010>Wees snel, <heroname>! Controleer\nde <color red<zegelspies>coloroff> op de bodem van de put.")
/*<123>*/ 	{'type': 'type3', 'subType': 2, 'param1': 28, 'param2': 356, 'next': 122, 'param3': 15}
/*<122>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x0e001653>Deze bevingen zijn zeer ongebruikelijk.\nWaarschijnlijk kan het monster ieder\nmoment ontsnappen, dus wees voorzichtig\nals je de put benadert.")
/*<126>*/ 	wait_frames(15)
/*<124>*/ 	set_camera(28, 0)
/*<264>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 366, 'param3': 15}
/*<366>*/ 	scene_flags[10 'Sealed Grounds'][107 /* 0xC 08 */] = true;
/*<127>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00424300>Ha! Mijn machine kan gemeen uithalen,\nnietwaar? Ik was op slag verliefd toen ik\nvoor het eerst de hendel overhaalde!\n\n<0x10009:0x003e4000>Het duurt even voordat de volgende bom\nerin zit, dus zorg dat je die lelijkerd\nbezighoudt!")
          }

          void entrypoint_500_36() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 0, unk: 1, line: 10 */ "Zagen we zojuist niet een wezen dat werd\naangevallen? Wellicht kan het ons meer\nvertellen. Laten we het gaan helpen.")
          }

          void entrypoint_500_53() {
/*<184>*/ 	start()
/*<185>*/ 	printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x00000026>Hé, <heroname>, mijn machine is\ngeladen en klaar om dat beest een optater\nte geven!\n\nAls die gehaktbal de muur probeert te\nbeklimmen, kan ik hem met een bom\nneerhalen!\n\nGeef maar een seintje met <icon 30>, als je\nm'n hulp nodig hebt!<0x10011:0x10cd>")
          }

          void entrypoint_500_70() {
/*<431>*/ 	start()
/*<432>*/ 	printf(/* textboxtype: 0, unk: 2, line: 16 */ "<0x10012:0x00000001>Meester, denk om uw parachutedoek als u\nvan grote hoogte springt. Een val van\ngrote hoogte kan leiden tot verwondingen.\n\nIk heb de parachutedoek deze keer voor u\ngeactiveerd, maar u kunt hem zelf met <icon 41>\nactiveren voor de landing.<0x10011:0x0fcd>")
          }

