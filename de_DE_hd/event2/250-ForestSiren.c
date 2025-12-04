          void entrypoint_250_03() {
/*< 89>*/ 	start()
          	flw_67:
/*< 67>*/ 	set_camera(6, 0)
/*< 65>*/ 	printf(/* textboxtype: 2, unk: 2, line: 9 */ "Solltest du auch nur einen Schritt vom rechten\nWeg abkommen, werden dich die <color red<Hüter>coloroff> verfolgen,\n<0x10012:0x00000002>Gebieter.")
/*< 68>*/ 	set_camera(4, 0)
/*< 66>*/ 	printf(/* textboxtype: 4, unk: 2, line: 10 */ "Ein einziger Treffer der <color red<Hüter>coloroff> wird deine Seele\naus der Fassung bringen, und deine Prüfung wird\nzu Ende sein, <0x10012:0x00000002>Gebieter.")
/*< 69>*/ 	set_camera(5, 0)
/*< 70>*/ 	printf(/* textboxtype: 2, unk: 4, line: 11 */ "Sammle die <color yellow<Tränen>coloroff> daher, ohne dich angreifen\nzu lassen, und fülle das <color yellow<Seelengefäß>coloroff>.")
          	flw_74:
/*< 74>*/ 	set_camera(1, 0)
/*< 75>*/ 	printf(/* textboxtype: 4, unk: 2, line: 13 */ "Hast du mich verstanden, <0x10012:0x00000002>Gebieter?\nSoll ich es noch einmal erklären?\n[1-]Ja[2]Nein")
/*< 76>*/ 	switch (choice(2)) {
          	  case 0:
/*< 77>*/ 		printf(/* textboxtype: 2, unk: 4, line: 14 */ "Welche Erklärung möchtest du hören?\n\n\n[1-]Seelengefäß[2-]Hüter[3-]Sairen[4]Keine")
/*< 92>*/ 		switch (choice(4)) {
          		  case 0:
/*< 84>*/ 			printf(/* textboxtype: 2, unk: 2, line: 15 */ "<0x10012:0x00000005>Gebieter.")
/*< 87>*/ 			zone_temp_flags[10 /* 0x0 04 */] = true;
/*< 90>*/ 			entrypoint_250_02();
          		  case 1:
/*< 85>*/ 			printf(/* textboxtype: 2, unk: 2, line: 15 */ "<0x10012:0x00000005>Gebieter.")
/*< 91>*/ 			entrypoint_250_03();
          		  case 2:
/*< 93>*/ 			printf(/* textboxtype: 2, unk: 2, line: 15 */ "<0x10012:0x00000005>Gebieter.")
/*< 95>*/ 			set_camera(12, 0)
/*< 94>*/ 			printf(/* textboxtype: 4, unk: 2, line: 16 */ "Nur Auserwählten gewährt die Göttin Zutritt\nzur <color blue<Sairen>coloroff>, der <color red<Welt der Seele>coloroff>.\n\n\nDu musst deinen Körper zurücklassen und dich der\nPrüfung nur mit deinem Geist stellen, <0x10012:0x00000001>Gebieter.\n\n\nMeistere die <color blue<Sairen>coloroff> und beweise, dass deine Seele\nstark genug ist.")
/*< 97>*/ 			entrypoint_250_04();
          		  case 3:
          			flw_83:
/*< 83>*/ 			set_camera(10, 0)
/*< 78>*/ 			printf(/* textboxtype: 2, unk: 2, line: 12 */ "<0x10012:0x00000005>Gebieter.\n\n\n\nIch werde hier auf deine Rückkehr warten.\n\n\n\nAuf dass die Göttin dich beschützen möge, <0x10012:0x00000001>Gebieter.")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 86, 'param3': 40}
/*< 86>*/ 			zone_temp_flags[10 /* 0x0 04 */] = false;
/*< 80>*/ 			scene_flags[22 'Faron: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 81>*/ 			temp_flags[1 /* 0x1 02 */] = true;
/*< 82>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
          		goto flw_83
          	}
          }

          void entrypoint_250_04() {
/*< 96>*/ 	start()
          	goto flw_74
          }

          void entrypoint_250_00() {
          	start()
/*< 23>*/ 	set_camera(8, 0)
/*< 15>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 4, unk: 2, line: 28 */ "Da sind wir, <heroname>!\nAlso los, auf geht's!")
/*< 18>*/ 		set_camera(10, 0)
/*< 17>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 19, 'param3': 40}
/*< 19>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  2>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*< 26>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 38>*/ 				printf(/* textboxtype: 2, unk: 2, line: 18 */ "<0x10012:0x00000004>Gebieter, <heroname>.\nIch stelle fest, dass die Sammlung\nder <color yellow<Tränen >coloroff>nicht erfolgreich war.")
/*< 55>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 29, 'param3': 40}
/*< 29>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*< 31>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 34>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 40>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 41>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 42>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 46>*/ 										printf(/* textboxtype: 2, unk: 4, line: 26 */ "<0x10012:0x00000001>Gebieter, neben den <color red<Hütern>coloroff>, die dich\nangreifen, gibt es noch die <color red<Wächter>coloroff>,\nund zwar die <color red<des Landes und des Himmels>coloroff>.\n\nPass gut auf, denn beide verhalten sich\nunterschiedlich.")
/*< 50>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 51>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 52>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_39:
/*< 39>*/ 										printf(/* textboxtype: 4, unk: 2, line: 19 */ "Sammle alle <color yellow<Tränen>coloroff>. Ich warte hier auf\ndeine Rückkehr.")
          										flw_56:
/*< 56>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 37, 'param3': 40}
/*< 37>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 43>*/ 										printf(/* textboxtype: 4, unk: 2, line: 25 */ "Die Orte, an denen du <color yellow<Tränen>coloroff> gefunden\nhast, sind <color red<auf der Karte markiert>coloroff>.\nMach dir dies und die Signallichter zunutze.\n\nDie Orte, an denen die 15 Tränen ruhen,\nverändern sich nicht. Wenn du dir ansiehst,\nwo die Tränen zu finden sind, kannst du\ndie Prüfung bestehen.")
/*< 49>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_39
          									}
          								  case 1:
/*< 45>*/ 									printf(/* textboxtype: 2, unk: 2, line: 24 */ "Du solltest dir eine Taktik überlegen, etwa die <color red<einfach\nzu findenden >coloroff><color yellow<Tränen >coloroff>bis zum Schluss <color red<aufzubewahren>coloroff>...")
/*< 48>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_39
          								}
          							  case 1:
/*< 44>*/ 								printf(/* textboxtype: 2, unk: 4, line: 23 */ "<0x10012:0x00000001>Gebieter, die Chance erhöht sich, dass du nicht\nder Auserwählte bist...\n\n\nDie vielen Versuche haben Unordnung in deine\nSeele gebracht. Ich empfehle dir, dich ein wenig\nauszuruhen, bevor du es erneut versuchst.")
/*< 47>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_39
          							}
          						  case 1:
/*< 33>*/ 							printf(/* textboxtype: 4, unk: 2, line: 22 */ "<color red<Zwei Arten von Wächtern >coloroff>beschützen\ndiesen Ort vor Eindringlingen.\n\n\nPass auf, nicht in den Lichtkegel der\n<color red<Wächter des Himmels>coloroff> zu treten, dann\ngeschieht dir nichts...\n\nWenn du allerdings den <color red<Wächtern des\nLandes >coloroff>zu nahe kommst, werden sie\ndich verfolgen, <0x10012:0x00000002>Gebieter...\n<color red<Achte >coloroff>daher gut auf deine Bewegungen.")
/*< 35>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_39
          						}
          					  case 1:
/*< 36>*/ 						printf(/* textboxtype: 2, unk: 2, line: 21 */ "Die Orte, an denen du bereits <color yellow<Tränen >coloroff>gefunden\nhast, sind <color red<auf der Karte markiert>coloroff>.\n\n\nIch empfehle dir, die Orte aller 15 <color yellow<Tränen>coloroff> auf\nder Karte zu markieren.")
/*< 32>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_39
          					}
          				  case 1:
/*< 28>*/ 					printf(/* textboxtype: 2, unk: 4, line: 20 */ "<0x10012:0x00000002>Gebieter, du kannst die Prüfung der Göttin so lange\nablegen, bis du dich ihrer würdig erwiesen hast.\n\n\nDu solltest dir eine Taktik überlegen, etwa die einfach\nzu findenden <color yellow<Tränen >coloroff>für den Fall <color red<aufzusparen>coloroff>,\ndass du entdeckt wirst.\n\nSammle 15 <color yellow<Tränen>coloroff> und kehre in die äußere Welt\nzurück. Ich werde dort auf dich warten.")
/*< 30>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_56
          				}
          			  case 1:
/*< 53>*/ 				printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10012:0x00000004>Gebieter, <heroname>.")
/*< 54>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 25, 'param3': 40}
/*< 25>*/ 				printf(/* textboxtype: 2, unk: 4, line: 17 */ "Wenn du das <color yellow<Seelengefäß>coloroff> mit 15 <color yellow<Tränen >coloroff>gefüllt\nhast, <0x10012:0x00000002>Gebieter, wird deine Seele wachsen, und die\nGöttin wird dich stärken.\n\nIch werde in der äußeren Welt auf dich warten,\n<0x10012:0x00000002>Gebieter.")
/*< 27>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_56
          			}
          		  case 1:
/*<  1>*/ 			printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10012:0x00000004>Gebieter, <heroname>.")
/*< 21>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 22, 'param3': 40}
/*< 22>*/ 			printf(/* textboxtype: 2, unk: 4, line: 2 */ "<0x10012:0x00000002>Gebieter, in diese Welt kann ich dir nicht folgen,\nda sie in deiner Seele selbst existiert, doch ich kann\nzu dir sprechen.\n\nNur Auserwählten gewährt die Göttin Zutritt zu\ndiesem Ort, der <color blue<Sairen>coloroff>.\n\n\nAn diesem Ort, <color blue<Farores Sairen>coloroff>, wird dein <color red<Mut\n>coloroff>auf die Probe gestellt.\n\n\nLasse deinen Körper zurück und stelle dich der\nPrüfung nur mit deinem Geist.\n\n\nUm die heilige Flamme, deren Kraft das Schwert\nstärkt, zu erhalten, musst du diese Prüfung bestehen.\nNur so wird deine Seele wachsen, <0x10012:0x00000002>Gebieter.")
/*< 10>*/ 			set_camera(9, 0)
/*< 20>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 24, 'param3': 40}
/*< 24>*/ 			give_item(17 0x11);
/*<  5>*/ 			set_camera(8, 0)
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 3, 'param3': 40}
/*<  3>*/ 			printf(/* textboxtype: 4, unk: 2, line: 4 */ "Dies ist das <color yellow<Seelengefäß>coloroff>.\n\n\n\nBringe es zurück, wenn es gefüllt ist, und deine\nPrüfung gilt als bestanden. Nur dann wird deine\nSeele wachsen, <0x10012:0x00000002>Gebieter.\n\nAls Lohn wird dich die Göttin mit <color red<neuer Kraft\n>coloroff>beschenken.")
          			flw_6:
/*<  6>*/ 			printf(/* textboxtype: 2, unk: 4, line: 5 */ "Fülle das <color yellow<Seelengefäß>coloroff>, indem du <color yellow<Farores Tränen\n>coloroff>aufsammelst.")
/*<  7>*/ 			set_camera(2, 0)
/*<  8>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 11, 'param3': 40}
/*< 11>*/ 			printf(/* textboxtype: 2, unk: 2, line: 6 */ "<0x10012:0x00000002>Gebieter, was dort funkelt...")
/*< 12>*/ 			set_camera(3, 0)
/*< 13>*/ 			printf(/* textboxtype: 4, unk: 2, line: 7 */ "Dies ist eine von <color yellow<Farores Tränen>coloroff>.\nSammle <color red<15>coloroff> von ihnen.")
/*<  9>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 14, 'param3': 40}
/*< 14>*/ 			wait_frames(15)
/*< 71>*/ 			switch (zone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
          				goto flw_74
          			  case 1:
/*< 73>*/ 				set_camera(1, 0)
/*< 72>*/ 				printf(/* textboxtype: 2, unk: 4, line: 8 */ "Aber es genügt nicht, sie nur zu sammeln.\nDu bist nicht alleine bei dieser <color red<Prüfung>coloroff>.")
          				goto flw_67
          			}
          		}
          	}
          }

          void entrypoint_250_01() {
/*< 57>*/ 	start()
/*< 58>*/ 	printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10012:0x00000004>Gebieter, <heroname>.")
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 61, 'param3': 40}
/*< 61>*/ 	wait_frames(30)
/*< 62>*/ 	set_camera(11, 0)
/*< 60>*/ 	printf(/* textboxtype: 2, unk: 2, line: 27 */ "Diese glitzernden Flächen heißen <color red<Alatraumata\n>coloroff>und haben eine besondere Bewandtnis...\n\n\nTrittst du auf sie, <0x10012:0x00000002>Gebieter, so <color red<werden dich die\nHüter sofort entdecken>coloroff>.\n\n\nSie sind über die ganze Gegend verstreut.\nPass also auf, wohin du deine Schritte setzt.")
/*< 64>*/ 	scene_flags[22 'Faron: Silent Realm'][80 /* 0xB 01 */] = true;
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_250_02() {
/*< 88>*/ 	start()
          	goto flw_6
          }

