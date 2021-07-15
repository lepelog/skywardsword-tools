          void entrypoint_150_00() {
          	start()
/*< 36>*/ 	set_camera(8, 0)
/*< 29>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 79>*/ 		scene_flags[25 'Skyloft: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 28>*/ 		printf("Da sind wir, Link!\nAlso los, auf geht's!")
/*< 31>*/ 		set_camera(10, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 32, 'param3': 40}
/*< 32>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*<  3>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x12\x04\x00\x04Gebieter, Link.\nIch stelle fest, dass die Sammlung\nder <y<Tränen >>nicht erfolgreich war.")
/*< 56>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 6, 'param3': 40}
/*<  6>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<  8>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 11>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 41>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 42>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 43>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 47>*/ 										printf("\x0E\x01\x12\x04\x00\x01Gebieter, neben den <r<Hütern>>, die dich angreifen,\ngibt es noch die <r<Wächter>>, und zwar die <r<des Landes\nund des Himmels>>.\n\nPass gut auf, denn beide verhalten sich\nunterschiedlich.")
/*< 51>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 52>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 53>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_40:
/*< 40>*/ 										printf("Sammle alle <y<Tränen>>. Ich warte hier auf\ndeine Rückkehr.")
          										flw_57:
/*< 57>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 38, 'param3': 40}
/*< 38>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 44>*/ 										printf("Die Orte, an denen du <y<Tränen>> gefunden hast,\nsind <r<auf der Karte markiert>>. Mach dir dies und\ndie Signallichter zunutze.\n\nDie Orte, an denen die 15 Tränen ruhen, verändern\nsich nicht. Wenn du dir ansiehst, wo die Tränen zu\nfinden sind, kannst du die Prüfung bestehen.")
/*< 50>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_40
          									}
          								  case 1:
/*< 46>*/ 									printf("Du solltest dir eine Taktik überlegen, etwa die <r<einfach\nzu findenden >><y<Tränen >>bis zum Schluss <r<aufzubewahren>>...")
/*< 49>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_40
          								}
          							  case 1:
/*< 45>*/ 								printf("\x0E\x01\x12\x04\x00\x01Gebieter, die Chance erhöht sich, dass du nicht\nder Auserwählte bist...\n\n\nDie vielen Versuche haben Unordnung in dein\nHerz gebracht. Ich empfehle dir, dich erst\neinmal ein wenig auszuruhen.")
/*< 48>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_40
          							}
          						  case 1:
/*< 10>*/ 							printf("<r<Zwei Arten von Wächtern >>beschützen diesen Ort\nvor Eindringlingen.\n\n\nPass auf, nicht in den Lichtkegel der <r<Wächter des\nHimmels>> zu treten, dann geschieht dir nichts...\n\n\nWenn du allerdings den <r<Wächtern des Landes >>zu\nnahe kommst, werden sie dich verfolgen, \x0E\x01\x12\x04\x00\x02Gebieter...\n<r<Achte>> daher gut auf deine Bewegungen.")
/*< 12>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_40
          						}
          					  case 1:
/*< 27>*/ 						printf("Die Orte, an denen du bereits <y<Tränen >>gefunden hast,\nsind <r<auf der Karte markiert>>.\n\n\nIch empfehle dir, die Orte aller 15 <y<Tränen >>auf der\nKarte zu markieren.")
/*<  9>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_40
          					}
          				  case 1:
/*<  5>*/ 					printf("\x0E\x01\x12\x04\x00\x02Gebieter, du kannst die Prüfung der Göttin so lange\nablegen, bis du dich ihrer würdig erwiesen hast.\n\n\nDu solltest dir eine Taktik überlegen, etwa die <r<einfach\nzu findenden >><y<Tränen >>bis zum Schluss <r<aufzubewahren>>...\n\n\nSammle 15 <y<Tränen>> und kehre in diese Welt zurück.\nIch warte hier auf dich.")
/*<  7>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_57
          				}
          			  case 1:
/*< 55>*/ 				printf("\x0E\x01\x12\x04\x00\x04Gebieter, Link.")
/*< 54>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 				printf("Wenn du das <y<Seelengefäß>> mit 15 <y<Tränen >>gefüllt hast,\n\x0E\x01\x12\x04\x00\x02Gebieter, wird deine Seele wachsen, und die Göttin\nwird dich stärken.\n\nIch werde in der äußeren Welt auf dich warten,\n\x0E\x01\x12\x04\x00\x02Gebieter.")
/*<  4>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_57
          			}
          		  case 1:
/*< 35>*/ 			printf("\x0E\x01\x12\x04\x00\x04Gebieter, Link.")
/*< 34>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 33, 'param3': 40}
/*< 33>*/ 			printf("Dies ist die Welt der letzten Prüfung,\ndie <b<Sairen der Göttin>>.")
/*< 37>*/ 			set_camera(9, 0)
/*< 25>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 13, 'param3': 40}
/*< 13>*/ 			give_item(17 0x11);
/*< 16>*/ 			set_camera(8, 0)
/*< 15>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 26, 'param3': 40}
/*< 26>*/ 			printf("Wenn du deinen Heldenmut unter Beweis gestellt und\ndas letzte <y<Seelengefäß >>gefüllt hast, \x0E\x01\x12\x04\x00\x02Gebieter...\n\n\nDann wird die Tür zum <y+<Triforce>> vor deinen Augen\nerscheinen. Du musst diese Prüfung bestehen.\n\n\nHast du noch eine Frage an mich?\n[1]Ja[2-]Nein")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 58>*/ 				printf("Welche Erklärung möchtest du hören?\n\n[1]Seelengefäß[2]Hüter[3]Alatrauma[4-]Keine")
          				flw_59:
/*< 59>*/ 				switch (choice(4)) {
          				  case 0:
/*< 17>*/ 					printf("\x0E\x01\x12\x04\x00\x05Gebieter, höre meine Antwort...\n\n\n\nFülle das <y<Seelengefäß>>, indem du die <y<heiligen Tränen\n>>aufsammelst.")
/*< 24>*/ 					set_camera(2, 0)
/*< 23>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 21, 'param3': 40}
/*< 21>*/ 					printf("\x0E\x01\x12\x04\x00\x02Gebieter, was dort funkelt...")
/*< 20>*/ 					set_camera(3, 0)
/*< 19>*/ 					printf("Dies ist eine <y<heilige Träne>>.\nSammle <r<15>> von ihnen.")
/*< 22>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 71, 'param3': 6}
          					flw_71:
/*< 71>*/ 					set_camera(1, 0)
/*< 60>*/ 					printf("Willst du sonst noch etwas wissen?\n\n\n[1]Seelengefäß[2]Hüter[3]Alatrauma[4-]Nein")
          					goto flw_59
          				  case 1:
/*< 61>*/ 					printf("\x0E\x01\x12\x04\x00\x05Gebieter, höre meine Antwort...")
/*< 65>*/ 					set_camera(6, 0)
/*< 67>*/ 					printf("Solltest du auch nur einen Schritt vom rechten Weg\nabkommen, werden dich die <r<Hüter>> verfolgen,\n\x0E\x01\x12\x04\x00\x02Gebieter.")
/*< 64>*/ 					set_camera(4, 0)
/*< 66>*/ 					printf("Ein einziger Treffer der <r<Hüter>> wird dein Herz aus\nder Fassung bringen, und deine Prüfung wird zu\nEnde sein, \x0E\x01\x12\x04\x00\x02Gebieter.")
/*< 63>*/ 					set_camera(5, 0)
/*< 62>*/ 					printf("Sammle die <y<Tränen>>, ohne dich angreifen zu lassen,\nund fülle das <y<Seelengefäß>>.")
          					goto flw_71
          				  case 2:
/*< 68>*/ 					printf("\x0E\x01\x12\x04\x00\x05Gebieter, höre meine Antwort...")
/*< 70>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf("Über die ganze Gegend sind glitzernde Flächen\nverteilt, die <r<Alatraumata >>genannt werden...\n\n\nTrittst du auf sie, so <r<werden dich die Hüter\nsofort entdecken>>.\n\n\nPass also auf, wohin du deine Schritte setzt.")
          					goto flw_71
          				  case 3:
          					flw_78:
/*< 78>*/ 					printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter.")
/*< 76>*/ 					set_camera(10, 0)
/*< 75>*/ 					printf("Ich werde hier in dieser Welt auf deine\nRückkehr warten, \x0E\x01\x12\x04\x00\x02Gebieter.")
/*< 77>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 74, 'param3': 40}
/*< 74>*/ 					scene_flags[25 'Skyloft: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 80>*/ 					scene_flags[25 'Skyloft: Silent Realm'][101 /* 0xD 20 */] = true;
/*< 73>*/ 					temp_flags[1 /* 0x1 02 */] = true;
/*< 72>*/ 					{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
          				goto flw_78
          			}
          		}
          	}
          }

