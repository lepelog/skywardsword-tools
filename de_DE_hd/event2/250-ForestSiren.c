          void entrypoint_250_03() {
/*< 89>*/ 	start()
          	flw_67:
/*< 67>*/ 	set_camera(6, 0)
/*< 65>*/ 	printf("Solltest du auch nur einen Schritt vom rechten\nWeg abkommen, werden dich die <r<Hüter>> verfolgen,\n\x0E\x01\x12\x04\x00\x02Gebieter.")
/*< 68>*/ 	set_camera(4, 0)
/*< 66>*/ 	printf("Ein einziger Treffer der <r<Hüter>> wird deine Seele\naus der Fassung bringen, und deine Prüfung wird\nzu Ende sein, \x0E\x01\x12\x04\x00\x02Gebieter.")
/*< 69>*/ 	set_camera(5, 0)
/*< 70>*/ 	printf("Sammle die <y<Tränen>> daher, ohne dich angreifen\nzu lassen, und fülle das <y<Seelengefäß>>.")
          	flw_74:
/*< 74>*/ 	set_camera(1, 0)
/*< 75>*/ 	printf("Hast du mich verstanden, \x0E\x01\x12\x04\x00\x02Gebieter?\nSoll ich es noch einmal erklären?\n[1]Ja[2-]Nein")
/*< 76>*/ 	switch (choice(2)) {
          	  case 0:
/*< 77>*/ 		printf("Welche Erklärung möchtest du hören?\n\n\n[1]Seelengefäß[2]Hüter[3]Sairen[4-]Keine")
/*< 92>*/ 		switch (choice(4)) {
          		  case 0:
/*< 84>*/ 			printf("\x0E\x01\x12\x04\x00\x05Gebieter.")
/*< 87>*/ 			zone_temp_flags[10 /* 0x0 04 */] = true;
/*< 90>*/ 			entrypoint_250_02();
          		  case 1:
/*< 85>*/ 			printf("\x0E\x01\x12\x04\x00\x05Gebieter.")
/*< 91>*/ 			entrypoint_250_03();
          		  case 2:
/*< 93>*/ 			printf("\x0E\x01\x12\x04\x00\x05Gebieter.")
/*< 95>*/ 			set_camera(12, 0)
/*< 94>*/ 			printf("Nur Auserwählten gewährt die Göttin Zutritt\nzur <b<Sairen>>, der <r<Welt der Seele>>.\n\n\nDu musst deinen Körper zurücklassen und dich der\nPrüfung nur mit deinem Geist stellen, \x0E\x01\x12\x04\x00\x01Gebieter.\n\n\nMeistere die <b<Sairen>> und beweise, dass deine Seele\nstark genug ist.")
/*< 97>*/ 			entrypoint_250_04();
          		  case 3:
          			flw_83:
/*< 83>*/ 			set_camera(10, 0)
/*< 78>*/ 			printf("\x0E\x01\x12\x04\x00\x05Gebieter.\n\n\n\nIch werde hier auf deine Rückkehr warten.\n\n\n\nAuf dass die Göttin dich beschützen möge, \x0E\x01\x12\x04\x00\x01Gebieter.")
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
/*< 16>*/ 		printf("Da sind wir, Link!\nAlso los, auf geht's!")
/*< 18>*/ 		set_camera(10, 0)
/*< 17>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 19, 'param3': 40}
/*< 19>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  2>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*< 26>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 38>*/ 				printf("\x0E\x01\x12\x04\x00\x04Gebieter, Link.\nIch stelle fest, dass die Sammlung\nder <y<Tränen >>nicht erfolgreich war.")
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
/*< 46>*/ 										printf("\x0E\x01\x12\x04\x00\x01Gebieter, neben den <r<Hütern>>, die dich\nangreifen, gibt es noch die <r<Wächter>>,\nund zwar die <r<des Landes und des Himmels>>.\n\nPass gut auf, denn beide verhalten sich\nunterschiedlich.")
/*< 50>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 51>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 52>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_39:
/*< 39>*/ 										printf("Sammle alle <y<Tränen>>. Ich warte hier auf\ndeine Rückkehr.")
          										flw_56:
/*< 56>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 37, 'param3': 40}
/*< 37>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 43>*/ 										printf("Die Orte, an denen du <y<Tränen>> gefunden\nhast, sind <r<auf der Karte markiert>>.\nMach dir dies und die Signallichter zunutze.\n\nDie Orte, an denen die 15 Tränen ruhen,\nverändern sich nicht. Wenn du dir ansiehst,\nwo die Tränen zu finden sind, kannst du\ndie Prüfung bestehen.")
/*< 49>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_39
          									}
          								  case 1:
/*< 45>*/ 									printf("Du solltest dir eine Taktik überlegen, etwa die <r<einfach\nzu findenden >><y<Tränen >>bis zum Schluss <r<aufzubewahren>>...")
/*< 48>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_39
          								}
          							  case 1:
/*< 44>*/ 								printf("\x0E\x01\x12\x04\x00\x01Gebieter, die Chance erhöht sich, dass du nicht\nder Auserwählte bist...\n\n\nDie vielen Versuche haben Unordnung in deine\nSeele gebracht. Ich empfehle dir, dich ein wenig\nauszuruhen, bevor du es erneut versuchst.")
/*< 47>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_39
          							}
          						  case 1:
/*< 33>*/ 							printf("<r<Zwei Arten von Wächtern >>beschützen\ndiesen Ort vor Eindringlingen.\n\n\nPass auf, nicht in den Lichtkegel der\n<r<Wächter des Himmels>> zu treten, dann\ngeschieht dir nichts...\n\nWenn du allerdings den <r<Wächtern des\nLandes >>zu nahe kommst, werden sie\ndich verfolgen, \x0E\x01\x12\x04\x00\x02Gebieter...\n<r<Achte >>daher gut auf deine Bewegungen.")
/*< 35>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_39
          						}
          					  case 1:
/*< 36>*/ 						printf("Die Orte, an denen du bereits <y<Tränen >>gefunden\nhast, sind <r<auf der Karte markiert>>.\n\n\nIch empfehle dir, die Orte aller 15 <y<Tränen>> auf\nder Karte zu markieren.")
/*< 32>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_39
          					}
          				  case 1:
/*< 28>*/ 					printf("\x0E\x01\x12\x04\x00\x02Gebieter, du kannst die Prüfung der Göttin so lange\nablegen, bis du dich ihrer würdig erwiesen hast.\n\n\nDu solltest dir eine Taktik überlegen, etwa die einfach\nzu findenden <y<Tränen >>für den Fall <r<aufzusparen>>,\ndass du entdeckt wirst.\n\nSammle 15 <y<Tränen>> und kehre in die äußere Welt\nzurück. Ich werde dort auf dich warten.")
/*< 30>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_56
          				}
          			  case 1:
/*< 53>*/ 				printf("\x0E\x01\x12\x04\x00\x04Gebieter, Link.")
/*< 54>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 25, 'param3': 40}
/*< 25>*/ 				printf("Wenn du das <y<Seelengefäß>> mit 15 <y<Tränen >>gefüllt\nhast, \x0E\x01\x12\x04\x00\x02Gebieter, wird deine Seele wachsen, und die\nGöttin wird dich stärken.\n\nIch werde in der äußeren Welt auf dich warten,\n\x0E\x01\x12\x04\x00\x02Gebieter.")
/*< 27>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_56
          			}
          		  case 1:
/*<  1>*/ 			printf("\x0E\x01\x12\x04\x00\x04Gebieter, Link.")
/*< 21>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 22, 'param3': 40}
/*< 22>*/ 			printf("\x0E\x01\x12\x04\x00\x02Gebieter, in diese Welt kann ich dir nicht folgen,\nda sie in deiner Seele selbst existiert, doch ich kann\nzu dir sprechen.\n\nNur Auserwählten gewährt die Göttin Zutritt zu\ndiesem Ort, der <b<Sairen>>.\n\n\nAn diesem Ort, <b<Farores Sairen>>, wird dein <r<Mut\n>>auf die Probe gestellt.\n\n\nLasse deinen Körper zurück und stelle dich der\nPrüfung nur mit deinem Geist.\n\n\nUm die heilige Flamme, deren Kraft das Schwert\nstärkt, zu erhalten, musst du diese Prüfung bestehen.\nNur so wird deine Seele wachsen, \x0E\x01\x12\x04\x00\x02Gebieter.")
/*< 10>*/ 			set_camera(9, 0)
/*< 20>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 24, 'param3': 40}
/*< 24>*/ 			give_item(17 0x11);
/*<  5>*/ 			set_camera(8, 0)
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 3, 'param3': 40}
/*<  3>*/ 			printf("Dies ist das <y<Seelengefäß>>.\n\n\n\nBringe es zurück, wenn es gefüllt ist, und deine\nPrüfung gilt als bestanden. Nur dann wird deine\nSeele wachsen, \x0E\x01\x12\x04\x00\x02Gebieter.\n\nAls Lohn wird dich die Göttin mit <r<neuer Kraft\n>>beschenken.")
          			flw_6:
/*<  6>*/ 			printf("Fülle das <y<Seelengefäß>>, indem du <y<Farores Tränen\n>>aufsammelst.")
/*<  7>*/ 			set_camera(2, 0)
/*<  8>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 11, 'param3': 40}
/*< 11>*/ 			printf("\x0E\x01\x12\x04\x00\x02Gebieter, was dort funkelt...")
/*< 12>*/ 			set_camera(3, 0)
/*< 13>*/ 			printf("Dies ist eine von <y<Farores Tränen>>.\nSammle <r<15>> von ihnen.")
/*<  9>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 14, 'param3': 40}
/*< 14>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 71, 'param3': 6}
/*< 71>*/ 			switch (zone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
          				goto flw_74
          			  case 1:
/*< 73>*/ 				set_camera(1, 0)
/*< 72>*/ 				printf("Aber es genügt nicht, sie nur zu sammeln.\nDu bist nicht alleine bei dieser <r<Prüfung>>.")
          				goto flw_67
          			}
          		}
          	}
          }

          void entrypoint_250_01() {
/*< 57>*/ 	start()
/*< 58>*/ 	printf("\x0E\x01\x12\x04\x00\x04Gebieter, Link.")
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 61, 'param3': 40}
/*< 61>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 62, 'param3': 6}
/*< 62>*/ 	set_camera(11, 0)
/*< 60>*/ 	printf("Diese glitzernden Flächen heißen <r<Alatraumata\n>>und haben eine besondere Bewandtnis...\n\n\nTrittst du auf sie, \x0E\x01\x12\x04\x00\x02Gebieter, so <r<werden dich die\nHüter sofort entdecken>>.\n\n\nSie sind über die ganze Gegend verstreut.\nPass also auf, wohin du deine Schritte setzt.")
/*< 64>*/ 	scene_flags[22 'Faron: Silent Realm'][80 /* 0xB 01 */] = true;
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_250_02() {
/*< 88>*/ 	start()
          	goto flw_6
          }

